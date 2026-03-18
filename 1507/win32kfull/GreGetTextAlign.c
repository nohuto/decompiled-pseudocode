/*
 * XREFs of GreGetTextAlign @ 0x1C00FAEBC
 * Callers:
 *     xxxMenuDraw @ 0x1C0050108 (xxxMenuDraw.c)
 *     DrawFrameControl @ 0x1C00564A4 (DrawFrameControl.c)
 *     _ServerFixupMenuDC @ 0x1C00E7618 (_ServerFixupMenuDC.c)
 *     FlipUserTextOutW @ 0x1C00F98C0 (FlipUserTextOutW.c)
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 *     CreateCompatiblePublicDC @ 0x1C0126D64 (CreateCompatiblePublicDC.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C02279A0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237948 (xxxDrawCaptionTemp.c)
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 *     DrawTextExWorker @ 0x1C024B358 (DrawTextExWorker.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
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
