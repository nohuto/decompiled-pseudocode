/*
 * XREFs of LdrpGetDelayloadExportDll @ 0x18007A108
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180016B20 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x180079C94 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180015F14 (LdrpFindLoadedDllByHandle.c)
 *     LdrpInitializeDllPath @ 0x1800169DC (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800186F4 (LdrpReleaseDllPath.c)
 *     RtlInitAnsiString @ 0x18006A7B0 (RtlInitAnsiString.c)
 *     LdrpLoadForwardedDll @ 0x18007A1FC (LdrpLoadForwardedDll.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetDelayloadExportDll(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 *v6; // r14
  const CHAR *v7; // rsi
  int ForwardedDll; // esi
  _STRING DestinationString; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v11[16]; // [rsp+40h] [rbp-A8h] BYREF

  *a3 = 0LL;
  v6 = (__int64 *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 8));
  if ( *v6 )
  {
    return (unsigned int)LdrpFindLoadedDllByHandle(*v6, a3, 0LL);
  }
  else
  {
    v7 = (const CHAR *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
    if ( !a4 )
      a4 = *(_DWORD *)(a1 + 272);
    LdrpInitializeDllPath(*(_QWORD *)(a1 + 80), a4 | 1LL, v11);
    RtlInitAnsiString(&DestinationString, v7);
    ForwardedDll = LdrpLoadForwardedDll((unsigned int)&DestinationString, (unsigned int)v11, a1, a1, 3, (__int64)a3);
    if ( ForwardedDll >= 0 && (*(_DWORD *)(a1 + 104) & 0x8000) == 0 )
      *v6 = *(_QWORD *)(*a3 + 48);
    LdrpReleaseDllPath((__int64)v11);
  }
  return (unsigned int)ForwardedDll;
}
