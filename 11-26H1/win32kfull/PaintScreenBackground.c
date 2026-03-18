/*
 * XREFs of PaintScreenBackground @ 0x140251E90
 * Callers:
 *     <none>
 * Callees:
 *     FillRect @ 0x140126BCC (FillRect.c)
 */

__int64 __fastcall PaintScreenBackground(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  HBRUSH v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  RECT v19; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
  {
    v2 = 1;
    LeaveMitRitHazardCrit();
  }
  UserSessionSwitchLeaveCrit(v4);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 56968);
  v19 = *(RECT *)(*(_QWORD *)v7 + 24LL);
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v8) + 19904);
  v10 = *(HBRUSH *)(v9 + 4704);
  v12 = W32GetUserSessionState(v11, v9);
  FillRect(*(HDC *)(*(_QWORD *)(v12 + 56968) + 56LL), &v19, v10);
  LeaveRenderCrit(v14, v13);
  UserSessionSwitchLeaveCrit(v15);
  result = EnterCrit(1LL, 0LL);
  if ( v2 )
    return EnterMitRitHazardCrit(v18, v17);
  return result;
}
