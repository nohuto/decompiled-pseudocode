/*
 * XREFs of ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C0084F90
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKKK_K0@Z @ 0x1C0084AE8 (-xxxMouseEventDirect@@YAHKKKKK_K0@Z.c)
 *     ProcessMouseInputViaRim @ 0x1C014F024 (ProcessMouseInputViaRim.c)
 *     ProcessMouseInput @ 0x1C01DA5F0 (ProcessMouseInput.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00CF948 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
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
      FindTimer(0, gtmridFKActivation, 4, 1, 0LL);
      gtmridFKActivation = 0LL;
      gFilterKeysState = 8;
    }
    if ( !v3 )
      UserSessionSwitchLeaveCrit(v0, v1);
  }
}
