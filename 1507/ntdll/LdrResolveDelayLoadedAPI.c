/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x180016DF0
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x180017030 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800BCC30 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180015F14 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpHandleProtectedDelayload @ 0x180016B20 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x180079C94 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpIsValidSearchOptions @ 0x1800C91D0 (LdrpIsValidSearchOptions.c)
 */

__int64 __fastcall LdrResolveDelayLoadedAPI(
        const void *a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned int a6)
{
  __int64 v10; // rbx
  int LoadedDllByHandle; // ecx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  char v15; // al
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF

  v10 = 0LL;
  if ( (unsigned __int8)LdrpIsValidSearchOptions(a6) && (*a2 & 1) != 0 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle((__int64)a1, &v17, 0LL);
    if ( LoadedDllByHandle < 0 )
    {
      v15 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1014,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p. Status = 0x%x\n",
          a1,
          LoadedDllByHandle);
        v15 = LdrpDebugFlags;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v10 = *a5;
      v12 = *a5 - (_QWORD)a1;
      v13 = v17;
      if ( v12 < *(unsigned int *)(v17 + 64) )
      {
        if ( (*(_DWORD *)(v17 + 104) & 0x8000) != 0 )
          v14 = LdrpHandleProtectedDelayload(v17, (__int64)a2, a3, a4, (__int64)a5, a6);
        else
          v14 = LdrpHandleUnprotectedDelayLoad(v17, (_DWORD)a2, a3, a4, (__int64)a5, a6);
        v10 = v14;
      }
      LdrpDereferenceModule(v13);
    }
  }
  return v10;
}
