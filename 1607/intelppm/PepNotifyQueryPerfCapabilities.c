/*
 * XREFs of PepNotifyQueryPerfCapabilities @ 0x1C0023804
 * Callers:
 *     InitPepPerfStates @ 0x1C0023504 (InitPepPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 */

__int64 __fastcall PepNotifyQueryPerfCapabilities(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 1064);
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  result = PoFxProcessorNotification(v7, 11LL, &v12);
  if ( (int)result >= 0 )
  {
    *a2 = v12;
    *a3 = HIDWORD(v12);
    *a4 = v13;
    *a5 = HIDWORD(v13);
    *a6 = v14;
    *a7 = HIDWORD(v14);
  }
  return result;
}
