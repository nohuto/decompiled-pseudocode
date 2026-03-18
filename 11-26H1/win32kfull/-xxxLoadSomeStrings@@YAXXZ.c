/*
 * XREFs of ?xxxLoadSomeStrings@@YAXXZ @ 0x1400CC9A8
 * Callers:
 *     xxxInitWindowStation @ 0x1400CC898 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     xxxClientLoadStringW @ 0x1400CCAE8 (xxxClientLoadStringW.c)
 */

void __fastcall xxxLoadSomeStrings(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rbx

  v2 = 0;
  v3 = 0LL;
  do
  {
    v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904);
    *(_DWORD *)(v4 + v3 + 968) = v2 + 800;
    v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19904);
    *(_DWORD *)(v6 + v3 + 964) = v2 + 1;
    UserSessionState = W32GetUserSessionState(v7, v6);
    xxxClientLoadStringW(
      (unsigned int)(v2 + 800),
      *(_QWORD *)(UserSessionState + 19904) + 932LL + 40LL * (unsigned int)v2,
      15LL);
    v3 += 40LL;
    ++v2;
  }
  while ( v2 < 11 );
  v9 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 7088LL;
  xxxClientLoadStringW(900LL, v9, 15LL);
  xxxClientLoadStringW(901LL, v9 + 30, 15LL);
  xxxClientLoadStringW(902LL, v9 + 60, 20LL);
  xxxClientLoadStringW(903LL, v9 + 100, 20LL);
  xxxClientLoadStringW(905LL, v9 + 180, 15LL);
  xxxClientLoadStringW(904LL, v9 + 140, 20LL);
}
