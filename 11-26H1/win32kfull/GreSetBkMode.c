/*
 * XREFs of GreSetBkMode @ 0x140126104
 * Callers:
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 *     FinalUserInit @ 0x1400CBC1C (FinalUserInit.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     DrawFrameControl @ 0x140125D60 (DrawFrameControl.c)
 *     xxxDrawState @ 0x1401F9348 (xxxDrawState.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402D1ADC (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBkMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[15]; // [rsp+20h] [rbp-78h] BYREF

  v3 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v4 = *(_QWORD *)(v6[0] + 976LL);
    v3 = *(_DWORD *)(v4 + 224);
    *(_DWORD *)(v4 + 224) = a2;
    if ( (unsigned int)(a2 - 1) > 1 )
      LOBYTE(a2) = 1;
    *(_BYTE *)(*(_QWORD *)(v6[0] + 976LL) + 213LL) = a2;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
  return v3;
}
