/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x140003EB0
 * Callers:
 *     IsChangeWindowMessageFilterExPresent @ 0x140003738 (IsChangeWindowMessageFilterExPresent.c)
 *     IsWinStationQueryInformationWPresent @ 0x140003AD0 (IsWinStationQueryInformationWPresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140003C04 (IsDWMGhostHandleGhostMsgPresent.c)
 *     IsImmDisableIMEPresent @ 0x140003D54 (IsImmDisableIMEPresent.c)
 *     IsCreateAppChromePresent @ 0x140003E50 (IsCreateAppChromePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
