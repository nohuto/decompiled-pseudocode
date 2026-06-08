/*
 * XREFs of PepDifferentialPerfRead @ 0x1C0004ED0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 */

__int64 __fastcall PepDifferentialPerfRead(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v6 = *a1;
  v7 = a1[1];
  LODWORD(v9) = *(_DWORD *)(v6 + 36);
  PoFxProcessorNotification(v7, 10LL, &v9);
  *a3 = v10;
  result = v11;
  *a4 = v11;
  return result;
}
