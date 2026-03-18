/*
 * XREFs of GreCreateFontIndirectW @ 0x1C0018888
 * Callers:
 *     DrawFrameControl @ 0x1C0018084 (DrawFrameControl.c)
 *     xxxSetNCFonts @ 0x1C00CD2F8 (xxxSetNCFonts.c)
 *     CreateFontFromWinIni @ 0x1C00CDA98 (CreateFontFromWinIni.c)
 *     UserSetAltScaleFont @ 0x1C00CDBB4 (UserSetAltScaleFont.c)
 *     FinishStockFontInit @ 0x1C0110A30 (FinishStockFontInit.c)
 *     ?CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z @ 0x1C01E9280 (-CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z.c)
 * Callees:
 *     hfontCreate @ 0x1C00189F0 (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C0018BC0 (vConvertLogFontW.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1)
{
  _BYTE Src[432]; // [rsp+20h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW(Src, a1);
  return hfontCreate(Src);
}
