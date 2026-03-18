/*
 * XREFs of GetSessionDpiMetrics @ 0x140302624
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1400CDEC0 (xxxSetWindowNCMetrics.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1400CE68C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x1401250CC (xxxSetNCFonts.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x1401D0AE8 (GetDPIMETRICSForDpiUnsafe.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1402ACD48 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSessionDpiMetrics(__int64 a1, __int64 a2)
{
  return W32GetUserSessionState(a1, a2) + 66168;
}
