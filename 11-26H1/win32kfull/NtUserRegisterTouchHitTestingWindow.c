/*
 * XREFs of NtUserRegisterTouchHitTestingWindow @ 0x14020FAD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _SetTargetingWindowValue @ 0x14020FB58 (_SetTargetingWindowValue.c)
 */

__int64 __fastcall NtUserRegisterTouchHitTestingWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    if ( PtiCurrent(v5) == *(struct tagTHREADINFO **)(v4 + 16) )
      v6 = SetTargetingWindowValue(v7, a2);
    else
      UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
