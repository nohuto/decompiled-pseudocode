/*
 * XREFs of ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z @ 0x180011100
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x1800112A8 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     RmpRmSidInitialize @ 0x180004D44 (RmpRmSidInitialize.c)
 *     RmpGetHostIdFromProcessToken @ 0x180005404 (RmpGetHostIdFromProcessToken.c)
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetPSMInfo(
        ExecutionModel::ResourceManager *this,
        DWORD a2,
        unsigned __int16 *a3,
        unsigned int *a4,
        union _RM_SID *a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned __int64 *a8)
{
  void **Heap; // rsi
  HANDLE v11; // rax
  void *v12; // r14
  int KeyFromProcess; // ebx
  unsigned int v14; // ebx
  signed int v16; // eax
  signed int LastError; // eax
  DWORD TokenInformationLength; // [rsp+30h] [rbp-20h] BYREF
  int v19; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int TokenInformation; // [rsp+38h] [rbp-18h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-10h] BYREF

  TokenHandle = 0LL;
  Heap = 0LL;
  v11 = OpenProcess(0x400u, 0, a2);
  v12 = v11;
  if ( v11 )
  {
    KeyFromProcess = PsmGetKeyFromProcess(v11, a3, a4, 0LL);
    if ( KeyFromProcess < 0 )
      goto LABEL_3;
    if ( !OpenProcessToken(v12, 8u, &TokenHandle) )
      goto LABEL_20;
    GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
    Heap = (void **)RmpAllocateHeap(TokenInformationLength);
    if ( !Heap )
    {
      v14 = -2147024882;
      goto LABEL_4;
    }
    if ( !GetTokenInformation(TokenHandle, TokenUser, Heap, TokenInformationLength, &TokenInformationLength)
      || (RmpRmSidInitialize(a5, *Heap),
          !GetTokenInformation(TokenHandle, TokenSessionId, &TokenInformation, 4u, &TokenInformationLength)) )
    {
LABEL_20:
      LastError = GetLastError();
      v14 = LastError;
      if ( LastError > 0 )
        v14 = (unsigned __int16)LastError | 0x80070000;
      goto LABEL_4;
    }
    KeyFromProcess = PsmQueryBackgroundActivationType(TokenHandle, &v19);
    if ( KeyFromProcess < 0
      || (KeyFromProcess = RmpGetHostIdFromProcessToken((__int64)TokenHandle, a8), KeyFromProcess < 0) )
    {
LABEL_3:
      v14 = KeyFromProcess | 0x10000000;
    }
    else
    {
      v14 = 0;
      *a7 = 1 << v19;
      *a6 = TokenInformation;
    }
LABEL_4:
    CloseHandle(v12);
    goto LABEL_5;
  }
  v16 = GetLastError();
  v14 = v16;
  if ( v16 > 0 )
    v14 = (unsigned __int16)v16 | 0x80070000;
LABEL_5:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  if ( Heap )
    RmpFreeHeap(Heap);
  return v14;
}
