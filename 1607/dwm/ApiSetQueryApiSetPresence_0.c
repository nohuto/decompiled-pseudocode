/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x140003DC0
 * Callers:
 *     IsChangeWindowMessageFilterExPresent @ 0x1400036E8 (IsChangeWindowMessageFilterExPresent.c)
 *     IsWinStationQueryInformationWPresent @ 0x1400039E0 (IsWinStationQueryInformationWPresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140003B14 (IsDWMGhostHandleGhostMsgPresent.c)
 *     IsImmDisableIMEPresent @ 0x140003C64 (IsImmDisableIMEPresent.c)
 *     IsCreateAppChromePresent @ 0x140003D60 (IsCreateAppChromePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
