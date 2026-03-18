/*
 * XREFs of GreSetTextAlign @ 0x1C00FA3AC
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
