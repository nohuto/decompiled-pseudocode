/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180007AE0
 * Callers:
 *     IsWaitForInputIdlePresent @ 0x180006DE4 (IsWaitForInputIdlePresent.c)
 *     IsEnumDisplayDevicesWPresent @ 0x180006EE0 (IsEnumDisplayDevicesWPresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x180007080 (IsDwmLockScreenUpdatesPresent.c)
 *     IsCreateAppChromePresent @ 0x1800070D4 (IsCreateAppChromePresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180007284 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
