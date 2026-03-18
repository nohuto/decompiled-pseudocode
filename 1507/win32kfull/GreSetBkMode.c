/*
 * XREFs of GreSetBkMode @ 0x1C00567EC
 * Callers:
 *     xxxMenuDraw @ 0x1C0050108 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C0051CE0 (xxxDrawMenuItem.c)
 *     DrawFrameControl @ 0x1C00564A4 (DrawFrameControl.c)
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0122A90 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     FinalUserInit @ 0x1C0138628 (FinalUserInit.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FEC24 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237948 (xxxDrawCaptionTemp.c)
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBkMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v4 = *(_QWORD *)(v6[0] + 80LL);
    v3 = *(_DWORD *)(v4 + 92);
    *(_DWORD *)(v4 + 92) = a2;
    if ( (unsigned int)(a2 - 1) > 1 )
      LOBYTE(a2) = 1;
    *(_BYTE *)(*(_QWORD *)(v6[0] + 80LL) + 73LL) = a2;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v6);
  return v3;
}
