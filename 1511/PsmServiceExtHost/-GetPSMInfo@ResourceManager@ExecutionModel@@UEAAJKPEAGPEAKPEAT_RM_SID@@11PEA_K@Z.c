/*
 * XREFs of ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z @ 0x18000F340
 * Callers:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002114 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000F4CC (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180007C10 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     RmpRmSidInitialize @ 0x18002015C (RmpRmSidInitialize.c)
 *     RmpGetHostIdFromProcessToken @ 0x180020308 (RmpGetHostIdFromProcessToken.c)
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
      goto LABEL_16;
    if ( !OpenProcessToken(v12, 8u, &TokenHandle) )
      goto LABEL_20;
    GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
    Heap = (void **)RmpAllocateHeap(TokenInformationLength);
    if ( !Heap )
    {
      v14 = -2147024882;
      goto LABEL_10;
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
      goto LABEL_10;
    }
    KeyFromProcess = PsmQueryBackgroundActivationType(TokenHandle, &v19);
    if ( KeyFromProcess < 0 || (KeyFromProcess = RmpGetHostIdFromProcessToken(TokenHandle, a8), KeyFromProcess < 0) )
    {
LABEL_16:
      v14 = KeyFromProcess | 0x10000000;
    }
    else
    {
      v14 = 0;
      *a7 = 1 << v19;
      *a6 = TokenInformation;
    }
LABEL_10:
    CloseHandle(v12);
    goto LABEL_11;
  }
  v16 = GetLastError();
  v14 = v16;
  if ( v16 > 0 )
    v14 = (unsigned __int16)v16 | 0x80070000;
LABEL_11:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  if ( Heap )
    RmpFreeHeap(Heap);
  return v14;
}
