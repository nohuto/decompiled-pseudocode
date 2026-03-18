/*
 * XREFs of FillRect @ 0x1C00AE8B8
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0060E84 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     DrawEdge @ 0x1C006E2BC (DrawEdge.c)
 *     DrawPushButton @ 0x1C00AE7EC (DrawPushButton.c)
 *     DrawMenuMark @ 0x1C00B04F8 (DrawMenuMark.c)
 *     DrawBox @ 0x1C00B0628 (DrawBox.c)
 *     xxxPaintRect @ 0x1C00B26A8 (xxxPaintRect.c)
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00D8568 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     xxxDesktopPaintCallback @ 0x1C012D500 (xxxDesktopPaintCallback.c)
 *     PaintScreenBackground @ 0x1C0134730 (PaintScreenBackground.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0139170 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C014F060 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C015116C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01DDF80 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F77B4 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F7C6C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F8078 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022E4F0 (-BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022E79C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C022F174 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 */

int __stdcall FillRect(HDC a1, LPCRECT a2, HBRUSH a3)
{
  HBRUSH v3; // r10
  LONG top; // r9d
  int v5; // eax
  int v6; // eax
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF
  HBRUSH v9; // [rsp+40h] [rbp-18h]

  v3 = a3;
  if ( (unsigned __int64)a3 - 1 <= 0x1E )
    v3 = *(HBRUSH *)(gpsi + 8LL * ((_QWORD)a3 - 1) + 5088);
  top = a2->top;
  v5 = a2->right - a2->left;
  v8[0] = a2->left;
  v8[2] = v5;
  v6 = a2->bottom - top;
  v8[1] = top;
  v8[3] = v6;
  v9 = v3;
  return GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v8, 1u);
}
