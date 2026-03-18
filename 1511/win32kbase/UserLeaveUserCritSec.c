/*
 * XREFs of UserLeaveUserCritSec @ 0x1C00763E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UserLeaveUserCritSec(__int64 a1, __int64 a2)
{
  return UserSessionSwitchLeaveCrit(a1, a2);
}
