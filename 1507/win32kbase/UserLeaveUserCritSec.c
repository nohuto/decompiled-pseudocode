/*
 * XREFs of UserLeaveUserCritSec @ 0x1C0013090
 * Callers:
 *     Win32UserInitialize @ 0x1C0138B1C (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UserLeaveUserCritSec(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
}
