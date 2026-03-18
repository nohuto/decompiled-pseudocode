/*
 * XREFs of FillRect @ 0x140126BCC
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140041344 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1400833C0 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1401256F0 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140125A40 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     DrawPushButton @ 0x140126508 (DrawPushButton.c)
 *     DrawEdge @ 0x1401266B0 (DrawEdge.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x140126D24 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxPaintRect @ 0x140127520 (xxxPaintRect.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1401BFE18 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1401F0E20 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x14022E134 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x14023C7F8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     PaintScreenBackground @ 0x140251E90 (PaintScreenBackground.c)
 *     xxxDesktopPaintCallback @ 0x14025A350 (xxxDesktopPaintCallback.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1402A3FDC (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402D87C4 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 */

int __stdcall FillRect(HDC a1, LPCRECT a2, HBRUSH a3)
{
  HBRUSH v3; // r9
  LONG top; // ecx
  int v7; // eax
  int v8; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF
  HBRUSH v11; // [rsp+40h] [rbp-18h]

  v3 = a3;
  if ( (unsigned __int64)a3 - 1 <= 0x1E )
    v3 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 8LL * ((_QWORD)a3 - 1) + 4696);
  top = a2->top;
  v7 = a2->right - a2->left;
  v10[0] = a2->left;
  v10[2] = v7;
  v8 = a2->bottom - top;
  v10[1] = top;
  v11 = v3;
  v10[3] = v8;
  return GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v10, 1u);
}
