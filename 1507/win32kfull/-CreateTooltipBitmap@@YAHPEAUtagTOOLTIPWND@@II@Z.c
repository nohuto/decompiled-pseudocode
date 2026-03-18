/*
 * XREFs of ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C022779C
 * Callers:
 *     xxxTooltipWndProc @ 0x1C0128580 (xxxTooltipWndProc.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0128864 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@@Z @ 0x1C0128C6C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall CreateTooltipBitmap(struct tagTOOLTIPWND *a1, int a2, int a3)
{
  HDC TooltipDC; // rbx
  __int64 v8; // rcx

  if ( !*((_QWORD *)a1 + 48) )
    return 0LL;
  DestroyTooltipBitmap(a1);
  TooltipDC = GetTooltipDC(a1);
  *((_QWORD *)a1 + 49) = GreCreateCompatibleBitmapInternal(TooltipDC, a2, a3, 0, 0LL);
  _ReleaseDC(TooltipDC);
  v8 = *((_QWORD *)a1 + 49);
  if ( !v8 )
    return 0LL;
  GreSetBitmapOwner(v8, 0LL);
  GreSelectBitmap(*((_QWORD *)a1 + 48), *((_QWORD *)a1 + 49));
  return 1LL;
}
