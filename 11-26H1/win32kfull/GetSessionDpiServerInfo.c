/*
 * XREFs of GetSessionDpiServerInfo @ 0x140302648
 * Callers:
 *     FinalUserInit @ 0x1400CBC1C (FinalUserInit.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1400CC0D4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1400CCE14 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxSetWindowNCMetrics @ 0x1400CDEC0 (xxxSetWindowNCMetrics.c)
 *     UserSetFont @ 0x1401249BC (UserSetFont.c)
 *     xxxSetNCFonts @ 0x1401250CC (xxxSetNCFonts.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x14023CE68 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSessionDpiServerInfo(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 5096LL;
}
