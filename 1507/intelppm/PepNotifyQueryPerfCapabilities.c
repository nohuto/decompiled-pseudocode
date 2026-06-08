/*
 * XREFs of PepNotifyQueryPerfCapabilities @ 0x1C002175C
 * Callers:
 *     InitPepPerfStates @ 0x1C0021480 (InitPepPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
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
  int v12; // [rsp+20h] [rbp-20h] BYREF
  int v13; // [rsp+24h] [rbp-1Ch]
  int v14; // [rsp+28h] [rbp-18h]
  int v15; // [rsp+2Ch] [rbp-14h]
  int v16; // [rsp+30h] [rbp-10h]
  int v17; // [rsp+34h] [rbp-Ch]

  v7 = *(_QWORD *)(a1 + 1056);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  result = PoFxProcessorNotification(v7, 11LL, &v12);
  if ( (int)result >= 0 )
  {
    *a2 = v12;
    *a3 = v13;
    *a4 = v14;
    *a5 = v15;
    *a6 = v16;
    *a7 = v17;
  }
  return result;
}
