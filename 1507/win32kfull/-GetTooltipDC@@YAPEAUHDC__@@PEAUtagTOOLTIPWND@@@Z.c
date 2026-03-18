/*
 * XREFs of ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@@Z @ 0x1C0128C6C
 * Callers:
 *     ?xxxTooltipGetSize@@YAXPEAUtagTOOLTIPWND@@PEAUtagSIZE@@@Z @ 0x1C0120F88 (-xxxTooltipGetSize@@YAXPEAUtagTOOLTIPWND@@PEAUtagSIZE@@@Z.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0155E7C (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C022779C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0227840 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

HDC __fastcall GetTooltipDC(struct tagTOOLTIPWND *a1)
{
  HDC result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  HDC v5; // rbx

  result = (HDC)_GetDCEx(a1, 0LL, 65539LL);
  v5 = result;
  if ( result )
  {
    GetDPIMetrics(v3, v2, v4);
    GreSelectFontInternal(v5);
    return v5;
  }
  return result;
}
