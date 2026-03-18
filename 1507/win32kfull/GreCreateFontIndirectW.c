/*
 * XREFs of GreCreateFontIndirectW @ 0x1C005684C
 * Callers:
 *     DrawFrameControl @ 0x1C00564A4 (DrawFrameControl.c)
 *     xxxSetNCFonts @ 0x1C0137618 (xxxSetNCFonts.c)
 *     UserSetAltScaleFont @ 0x1C0137ED0 (UserSetAltScaleFont.c)
 *     CreateFontFromWinIni @ 0x1C0137FF8 (CreateFontFromWinIni.c)
 *     FinishStockFontInit @ 0x1C013D0D0 (FinishStockFontInit.c)
 *     ?CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z @ 0x1C01E8C50 (-CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z.c)
 * Callees:
 *     hfontCreate @ 0x1C00569C0 (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C0056B70 (vConvertLogFontW.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1)
{
  _BYTE Src[432]; // [rsp+20h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW(Src, a1);
  return hfontCreate(Src);
}
