/*
 * XREFs of GreSetTextColor @ 0x1C00B112C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     DrawPushButton @ 0x1C00AE7EC (DrawPushButton.c)
 *     DrawMenuMark @ 0x1C00B04F8 (DrawMenuMark.c)
 *     DrawBox @ 0x1C00B0628 (DrawBox.c)
 *     DrawIt @ 0x1C00B0940 (DrawIt.c)
 *     BltIcon @ 0x1C00B0F38 (BltIcon.c)
 *     DrawGrip @ 0x1C00B12F4 (DrawGrip.c)
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 *     FinalUserInit @ 0x1C00BC3C8 (FinalUserInit.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0131828 (xxxDrawMenuBarUnderlines.c)
 *     RecolorDeskPattern @ 0x1C01355A0 (RecolorDeskPattern.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014E5CC (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C015116C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01F67B0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F77B4 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0208230 (SfnINLPKDRAWSWITCHWND.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 *     BltColor @ 0x1C0235644 (BltColor.c)
 *     xxxDrawState @ 0x1C0235770 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0235F40 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetTextColor(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // ebx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 80LL);
    v3 = *(_DWORD *)(v4 + 44);
    *(_DWORD *)(v4 + 44) = a2;
    v5 = a2 & 0x13FFFFFF;
    if ( v5 != v3 )
    {
      *(_DWORD *)(*(_QWORD *)(v7[0] + 80LL) + 40LL) = v5;
      *(_DWORD *)(*(_QWORD *)(v7[0] + 80LL) + 8LL) |= 7u;
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v3;
}
