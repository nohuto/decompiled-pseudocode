/*
 * XREFs of NtUserRegisterTouchHitTestingWindow @ 0x1C00FEFC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _SetTargetingWindowValue @ 0x1C00FF024 (_SetTargetingWindowValue.c)
 */

__int64 __fastcall NtUserRegisterTouchHitTestingWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  if ( v4 )
  {
    if ( gptiCurrent == *(_QWORD *)(v4 + 16) )
      v7 = SetTargetingWindowValue(v4, a2);
    else
      UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
