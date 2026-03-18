/*
 * XREFs of LeaveEditionCrit @ 0x1C01573F0
 * Callers:
 *     NtUserFindWindowEx @ 0x1C0076940 (NtUserFindWindowEx.c)
 *     NtUserSetTimer @ 0x1C007A190 (NtUserSetTimer.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0084040 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetCursorIconData @ 0x1C00923B0 (NtUserSetCursorIconData.c)
 *     NtUserGetRawInputBuffer @ 0x1C021BAA0 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LeaveEditionCrit(__int64 a1, __int64 a2)
{
  return UserSessionSwitchLeaveCrit(a1, a2);
}
