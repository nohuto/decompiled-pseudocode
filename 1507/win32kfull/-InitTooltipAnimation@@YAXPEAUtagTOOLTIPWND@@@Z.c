/*
 * XREFs of ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0155E7C
 * Callers:
 *     xxxTooltipWndProc @ 0x1C0128580 (xxxTooltipWndProc.c)
 * Callees:
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@@Z @ 0x1C0128C6C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@@Z.c)
 */

void __fastcall InitTooltipAnimation(struct tagTOOLTIPWND *a1)
{
  HDC TooltipDC; // rdi
  __int64 v3; // rdx
  __int64 CompatibleDC; // rax

  TooltipDC = GetTooltipDC(a1);
  CompatibleDC = GreCreateCompatibleDC(TooltipDC, v3);
  *((_QWORD *)a1 + 48) = CompatibleDC;
  if ( CompatibleDC )
  {
    _ReleaseDC(TooltipDC);
    GreSetDCOwnerEx(*((_QWORD *)a1 + 48), 0LL, 0LL, 1LL);
  }
}
