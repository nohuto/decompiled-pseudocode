/*
 * XREFs of LdrpGetDelayloadExportDll @ 0x1800104CC
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180032120 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x180081FEC (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     RtlInitAnsiString @ 0x180010490 (RtlInitAnsiString.c)
 *     LdrpLoadForwardedDll @ 0x180010DF8 (LdrpLoadForwardedDll.c)
 *     LdrpInitializeDllPath @ 0x1800110C8 (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800112AC (LdrpReleaseDllPath.c)
 *     LdrpFindLoadedDllByHandle @ 0x180032760 (LdrpFindLoadedDllByHandle.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetDelayloadExportDll(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v6; // r14
  const CHAR *v7; // rsi
  int v8; // esi
  _STRING DestinationString; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v11[128]; // [rsp+40h] [rbp-A8h] BYREF

  *(_QWORD *)a3 = 0LL;
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 8));
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
    v8 = LdrpLoadForwardedDll(&DestinationString, v11, a1, a1, 3, a3);
    if ( v8 >= 0 && (*(_DWORD *)(a1 + 104) & 0x8000) == 0 )
      *v6 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
    LdrpReleaseDllPath(v11);
  }
  return (unsigned int)v8;
}
