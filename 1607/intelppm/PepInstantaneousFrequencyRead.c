/*
 * XREFs of PepInstantaneousFrequencyRead @ 0x1C00074D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall PepInstantaneousFrequencyRead(_QWORD *a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v4 = *a1;
  v5 = a1[1];
  LODWORD(v7) = *(_DWORD *)(v4 + 40);
  PoFxProcessorNotification(v5, 10LL, &v7);
  result = 100 * v8 / (unsigned __int64)*(unsigned int *)(*a1 + 24LL);
  *a2 = result;
  return result;
}
