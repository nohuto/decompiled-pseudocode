/*
 * XREFs of UserLeaveUserCritSec @ 0x1C007A490
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void UserLeaveUserCritSec()
{
  UserSessionSwitchLeaveCrit();
}
