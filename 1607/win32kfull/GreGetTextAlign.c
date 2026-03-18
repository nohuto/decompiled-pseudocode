/*
 * XREFs of GreGetTextAlign @ 0x1C00B98B0
 * Callers:
 *     DrawFrameControl @ 0x1C005F534 (DrawFrameControl.c)
 *     FlipUserTextOutW @ 0x1C00B1264 (FlipUserTextOutW.c)
 *     xxxMenuDraw @ 0x1C00B6AD8 (xxxMenuDraw.c)
 *     CreateCompatiblePublicDC @ 0x1C00B966C (CreateCompatiblePublicDC.c)
 *     _ServerFixupMenuDC @ 0x1C01163C0 (_ServerFixupMenuDC.c)
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C022795C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 *     xxxDrawState @ 0x1C0235770 (xxxDrawState.c)
 *     DrawTextExWorker @ 0x1C0247624 (DrawTextExWorker.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextAlign(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 80LL) + 156LL);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
