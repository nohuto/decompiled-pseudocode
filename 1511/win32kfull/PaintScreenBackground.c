/*
 * XREFs of PaintScreenBackground @ 0x1C01132D0
 * Callers:
 *     <none>
 * Callees:
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 */

__int64 PaintScreenBackground()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx

  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v1, v0);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  FillRect(*(HDC *)(gpDispInfo + 24LL), (LPCRECT)(gpDispInfo + 104LL), *(HBRUSH *)(gpsi + 3704LL));
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v3, v2);
  return EnterCrit(0LL, 1LL);
}
