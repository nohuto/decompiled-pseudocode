/*
 * XREFs of ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C012D4DC
 * Callers:
 *     ProcessMouseInputViaRim @ 0x1C012D104 (ProcessMouseInputViaRim.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00@Z @ 0x1C01D8FD8 (-xxxMouseEventDirect@@YAHKKKK_K00@Z.c)
 *     ProcessMouseInput @ 0x1C01D9FE0 (ProcessMouseInput.c)
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C007F108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

void ResetAccessibilityCountersOnMouseInput(void)
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF
  int v3; // [rsp+40h] [rbp+8h] BYREF

  gStickyKeysLeftShiftCount = 0;
  gStickyKeysRightShiftCount = 0;
  _InterlockedOr(v2, 0);
  if ( gtmridFKActivation )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v3);
    v1 = gtmridFKActivation;
    if ( gtmridFKActivation )
    {
      FindTimer(0LL, gtmridFKActivation, 4u, 1, 0LL);
      gtmridFKActivation = 0LL;
      gFilterKeysState = 8;
    }
    if ( !v3 )
      UserSessionSwitchLeaveCrit(v0, v1);
  }
}
