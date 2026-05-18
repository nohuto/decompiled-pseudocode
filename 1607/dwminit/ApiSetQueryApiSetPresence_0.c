/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1800080F0
 * Callers:
 *     IsWaitForInputIdlePresent @ 0x180007414 (IsWaitForInputIdlePresent.c)
 *     IsEnumDisplayDevicesWPresent @ 0x180007510 (IsEnumDisplayDevicesWPresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x180007610 (IsDwmLockScreenUpdatesPresent.c)
 *     IsCreateAppChromePresent @ 0x180007710 (IsCreateAppChromePresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x1800078B0 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
