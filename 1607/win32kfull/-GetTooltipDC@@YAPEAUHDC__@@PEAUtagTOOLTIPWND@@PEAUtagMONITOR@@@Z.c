/*
 * XREFs of ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C011F944
 * Callers:
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C011F5DC (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C014FB78 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0227754 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C02277F8 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C00B5C08 (GetDPIMETRICSForDpi.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

HDC __fastcall GetTooltipDC(struct tagTOOLTIPWND *a1, struct tagMONITOR *a2)
{
  HDC result; // rax
  HDC v3; // rsi

  result = (HDC)_GetDCEx(a1, 0LL, 65539LL);
  v3 = result;
  if ( result )
  {
    GetDPIMETRICSForDpi();
    GreSelectFontInternal(v3);
    return v3;
  }
  return result;
}
