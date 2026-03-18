/*
 * XREFs of GreCreateFontIndirectW @ 0x1C0060558
 * Callers:
 *     DrawFrameControl @ 0x1C005F534 (DrawFrameControl.c)
 *     xxxSetNCFonts @ 0x1C00B8670 (xxxSetNCFonts.c)
 *     CreateFontFromWinIni @ 0x1C00B8F88 (CreateFontFromWinIni.c)
 *     UserSetAltScaleFont @ 0x1C00B90A4 (UserSetAltScaleFont.c)
 *     FinishStockFontInit @ 0x1C00BC170 (FinishStockFontInit.c)
 *     CreateScaledFont @ 0x1C01DFEC4 (CreateScaledFont.c)
 * Callees:
 *     hfontCreate @ 0x1C00606C0 (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C0060890 (vConvertLogFontW.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1)
{
  _BYTE Src[432]; // [rsp+20h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW(Src, a1);
  return hfontCreate(Src);
}
