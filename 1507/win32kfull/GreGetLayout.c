/*
 * XREFs of GreGetLayout @ 0x1C008E4AC
 * Callers:
 *     DrawFrameControl @ 0x1C00564A4 (DrawFrameControl.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C008DAB0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     BitBltSysBmp @ 0x1C00F4978 (BitBltSysBmp.c)
 *     FlipUserTextOutW @ 0x1C00F98C0 (FlipUserTextOutW.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     StopFade @ 0x1C010E080 (StopFade.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0114054 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     CreateCompatiblePublicDC @ 0x1C0126D64 (CreateCompatiblePublicDC.c)
 *     xxxDrawCaptionTemp @ 0x1C0237948 (xxxDrawCaptionTemp.c)
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C023E3A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     DT_DrawStr @ 0x1C024AE98 (DT_DrawStr.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetLayout(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 80LL) + 312LL);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
