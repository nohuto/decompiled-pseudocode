/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x140003E00
 * Callers:
 *     IsChangeWindowMessageFilterExPresent @ 0x140003688 (IsChangeWindowMessageFilterExPresent.c)
 *     IsWinStationQueryInformationWPresent @ 0x140003A20 (IsWinStationQueryInformationWPresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140003B54 (IsDWMGhostHandleGhostMsgPresent.c)
 *     IsImmDisableIMEPresent @ 0x140003CA4 (IsImmDisableIMEPresent.c)
 *     IsCreateAppChromePresent @ 0x140003DA0 (IsCreateAppChromePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
