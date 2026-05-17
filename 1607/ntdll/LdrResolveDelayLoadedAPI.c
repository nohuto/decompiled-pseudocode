/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x1800319E0
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x180031788 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800D0DD0 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180031C50 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpHandleProtectedDelayload @ 0x180033840 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x18007B434 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrResolveDelayLoadedAPI(const void *a1, _BYTE *a2, int a3, int a4, __int64 *a5, int a6)
{
  int v8; // r14d
  __int64 v10; // rbx
  int v11; // r10d
  char v12; // al
  int LoadedDllByHandle; // ecx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  char v18; // al
  __int64 v19; // [rsp+48h] [rbp-20h] BYREF

  v8 = (int)a2;
  v10 = 0LL;
  if ( (a6 & 0xFFFFDFFF) == 8 )
    goto LABEL_5;
  v11 = 32512;
  if ( (LdrpPolicyBits & 4) == 0 )
    v11 = 31488;
  v12 = 0;
  if ( (~v11 & a6) == 0 )
LABEL_5:
    v12 = 1;
  if ( v12 && (*a2 & 1) != 0 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v19, 0LL);
    if ( LoadedDllByHandle < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1071,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          (__int64)"LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p. Status = 0x%x\n",
          a1,
          LoadedDllByHandle);
        v18 = LdrpDebugFlags;
      }
      if ( (v18 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v10 = *a5;
      v14 = *a5 - (_QWORD)a1;
      v15 = v19;
      if ( v14 < *(unsigned int *)(v19 + 64) )
      {
        if ( (*(_DWORD *)(v19 + 104) & 0x8000) != 0 )
          v16 = LdrpHandleProtectedDelayload(v19, v8, a3, a4, (__int64)a5, a6);
        else
          v16 = LdrpHandleUnprotectedDelayLoad(v19, v8, a3, a4, (__int64)a5, a6);
        v10 = v16;
      }
      LdrpDereferenceModule(v15);
    }
  }
  return v10;
}
