/*
 * XREFs of GreSetTextAlign @ 0x1C00B9838
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

__int64 __fastcall GreSetTextAlign(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 80LL);
    v3 = *(_DWORD *)(v4 + 156);
    *(_DWORD *)(v4 + 156) = a2;
    v5 = *(_QWORD *)(v7[0] + 80LL);
    if ( (*(_DWORD *)(v5 + 312) & 1) != 0 && (a2 & 6) != 6 )
      LOBYTE(a2) = a2 ^ 2;
    *(_DWORD *)(v5 + 152) = a2 & 0x1F;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v3;
}
