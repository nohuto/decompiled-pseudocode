/*
 * XREFs of LdrpGetDelayloadExportDll @ 0x18001135C
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180033830 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x18007B424 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     LdrpLogDelayLoadTrigger @ 0x1800112B0 (LdrpLogDelayLoadTrigger.c)
 *     RtlInitAnsiString @ 0x180011320 (RtlInitAnsiString.c)
 *     LdrpReleaseDllPath @ 0x18001215C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121A8 (LdrpInitializeDllPath.c)
 *     LdrpLoadForwardedDll @ 0x1800132F0 (LdrpLoadForwardedDll.c)
 *     LdrpFindLoadedDllByHandle @ 0x180031C40 (LdrpFindLoadedDllByHandle.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetDelayloadExportDll(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, __int64 a5)
{
  _QWORD *v7; // r14
  const CHAR *v9; // rsi
  int v10; // esi
  _STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v13[128]; // [rsp+40h] [rbp-C8h] BYREF

  *a3 = 0LL;
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 8));
  if ( *v7 )
  {
    return (unsigned int)LdrpFindLoadedDllByHandle(*v7, a3, 0LL);
  }
  else
  {
    v9 = (const CHAR *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
    if ( !a4 )
      a4 = *(_DWORD *)(a1 + 272);
    LdrpInitializeDllPath(*(_QWORD *)(a1 + 80), a4 | 1LL, v13);
    RtlInitAnsiString(&DestinationString, v9);
    v10 = LdrpLoadForwardedDll(&DestinationString, v13, a1, a1, 3, a3);
    if ( v10 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 104) & 0x8000) == 0 )
        *v7 = *(_QWORD *)(*a3 + 48);
      LdrpLogDelayLoadTrigger(a1, a2, *a3, a5);
    }
    LdrpReleaseDllPath(v13);
  }
  return (unsigned int)v10;
}
