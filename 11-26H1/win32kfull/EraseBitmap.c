/*
 * XREFs of EraseBitmap @ 0x1402416F4
 * Callers:
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 */

__int64 __fastcall EraseBitmap(Gre::Base *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _OWORD v13[2]; // [rsp+30h] [rbp-28h] BYREF

  memset(v13, 0, sizeof(v13));
  GreExtGetObjectW(a1, 32, v13);
  UserSessionState = W32GetUserSessionState(v3, v2);
  v5 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43248), a1);
  v8 = W32GetUserSessionState(v7, v6);
  GrePatBlt(*(Gre::Base **)(v8 + 43248), 0, 0, SDWORD1(v13[0]), SDWORD2(v13[0]), 66);
  v11 = W32GetUserSessionState(v10, v9);
  return GreSelectBitmap(*(_QWORD *)(v11 + 43248), v5);
}
