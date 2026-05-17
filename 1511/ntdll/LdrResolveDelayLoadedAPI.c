/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x180031DC0
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x180031C4C (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800C9950 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpHandleProtectedDelayload @ 0x180032120 (LdrpHandleProtectedDelayload.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180032760 (LdrpFindLoadedDllByHandle.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x180081FEC (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpIsValidSearchOptions @ 0x1800D1CB0 (LdrpIsValidSearchOptions.c)
 */

__int64 __fastcall LdrResolveDelayLoadedAPI(__int64 a1, _BYTE *a2, int a3, int a4, __int64 *a5, unsigned int a6)
{
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  char v14; // al
  __int64 v16; // [rsp+40h] [rbp-28h] BYREF

  v10 = 0LL;
  if ( (unsigned __int8)LdrpIsValidSearchOptions(a6) && (*a2 & 1) != 0 )
  {
    if ( (int)LdrpFindLoadedDllByHandle(a1, &v16, 0LL) < 0 )
    {
      v14 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1014,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          (__int64)"LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p. Status = 0x%x\n");
        v14 = LdrpDebugFlags;
      }
      if ( (v14 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v10 = *a5;
      v11 = *a5 - a1;
      v12 = v16;
      if ( v11 < *(unsigned int *)(v16 + 64) )
      {
        if ( (*(_DWORD *)(v16 + 104) & 0x8000) != 0 )
          v13 = LdrpHandleProtectedDelayload(v16, (_DWORD)a2, a3, a4, (__int64)a5, a6);
        else
          v13 = LdrpHandleUnprotectedDelayLoad(v16, (_DWORD)a2, a3, a4, (__int64)a5, a6);
        v10 = v13;
      }
      LdrpDereferenceModule(v12);
    }
  }
  return v10;
}
