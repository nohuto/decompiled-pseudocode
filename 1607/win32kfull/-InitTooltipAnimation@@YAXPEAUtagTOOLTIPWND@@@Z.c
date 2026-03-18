/*
 * XREFs of ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C011F5DC
 * Callers:
 *     xxxTooltipWndProc @ 0x1C011F2F0 (xxxTooltipWndProc.c)
 * Callees:
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C011F944 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 */

void __fastcall InitTooltipAnimation(struct tagTOOLTIPWND *a1)
{
  HDC TooltipDC; // rdi
  __int64 v3; // rdx
  __int64 CompatibleDC; // rax

  TooltipDC = GetTooltipDC(a1, 0LL);
  CompatibleDC = GreCreateCompatibleDC(TooltipDC, v3);
  *((_QWORD *)a1 + 46) = CompatibleDC;
  if ( CompatibleDC )
  {
    _ReleaseDC(TooltipDC);
    GreSetDCOwnerEx(*((_QWORD *)a1 + 46), 0LL, 0LL, 1LL);
  }
}
