/*
 * XREFs of NtUserGetPointerIdForPromotion @ 0x1402B44F0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14029D154 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 NtUserGetPointerIdForPromotion()
{
  unsigned __int16 v0; // bx
  __int64 v1; // rdx
  __int64 v2; // rcx

  v0 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
    v0 = *(_WORD *)(W32GetUserSessionState(v2, v1) + 16408);
  UserSessionSwitchLeaveCrit(v2);
  return v0;
}
