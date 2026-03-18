/*
 * XREFs of ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0227754
 * Callers:
 *     xxxTooltipWndProc @ 0x1C011F2F0 (xxxTooltipWndProc.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C011F944 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C011F9B4 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall CreateTooltipBitmap(struct tagTOOLTIPWND *a1, int a2, int a3)
{
  HDC TooltipDC; // rbx
  __int64 v8; // rcx

  if ( !*((_QWORD *)a1 + 46) )
    return 0LL;
  DestroyTooltipBitmap(a1);
  TooltipDC = GetTooltipDC(a1, 0LL);
  *((_QWORD *)a1 + 47) = GreCreateCompatibleBitmapInternal(TooltipDC, a2, a3, 0, 0LL);
  _ReleaseDC(TooltipDC);
  v8 = *((_QWORD *)a1 + 47);
  if ( !v8 )
    return 0LL;
  GreSetBitmapOwner(v8, 0LL);
  GreSelectBitmap(*((_QWORD *)a1 + 46), *((_QWORD *)a1 + 47));
  return 1LL;
}
