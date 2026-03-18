/*
 * XREFs of ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00C6410
 * Callers:
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00C63B8 (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C014A490 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0227AF8 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0227B9C (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0015CB8 (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 */

HDC __fastcall GetTooltipDC(struct tagTOOLTIPWND *a1, struct tagMONITOR *a2)
{
  HDC result; // rax
  HDC v5; // rdi
  unsigned __int16 v6; // ax
  char *DPIMETRICSForDpi; // rax

  result = (HDC)_GetDCEx(a1, 0LL, 65539LL);
  v5 = result;
  if ( result )
  {
    if ( a2 )
      v6 = *((_WORD *)a2 + 76);
    else
      v6 = *((_WORD *)a1 + 180);
    DPIMETRICSForDpi = GetDPIMETRICSForDpi(v6);
    GreSelectFont((__int64)v5, *((_QWORD *)DPIMETRICSForDpi + 3));
    return v5;
  }
  return result;
}
