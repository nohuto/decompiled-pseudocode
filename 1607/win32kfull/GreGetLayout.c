/*
 * XREFs of GreGetLayout @ 0x1C005D99C
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C005CF20 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     DrawFrameControl @ 0x1C005F534 (DrawFrameControl.c)
 *     FlipUserTextOutW @ 0x1C00B1264 (FlipUserTextOutW.c)
 *     CreateCompatiblePublicDC @ 0x1C00B966C (CreateCompatiblePublicDC.c)
 *     BitBltSysBmp @ 0x1C011D69C (BitBltSysBmp.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     StopFade @ 0x1C013FC70 (StopFade.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0144604 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 *     xxxDrawState @ 0x1C0235770 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0235F40 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     DT_DrawStr @ 0x1C0247168 (DT_DrawStr.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetLayout(HDC a1)
{
  unsigned int v2; // edi
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  int v6; // [rsp+2Ch] [rbp-2Ch]
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v2 = -1;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v7);
  XDCOBJ::vLock((XDCOBJ *)&v4, a1);
  if ( v4 )
    v2 = *(_DWORD *)(*(_QWORD *)(v4 + 80) + 312LL);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v4);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v7);
  return v2;
}
