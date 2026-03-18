/*
 * XREFs of GreExtTextOutWInternal @ 0x1C00399F8
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C0039680 (NtGdiExtTextOutW.c)
 *     DrawBox @ 0x1C00B0628 (DrawBox.c)
 *     DrawIt @ 0x1C00B0940 (DrawIt.c)
 *     FlipUserTextOutW @ 0x1C00B1264 (FlipUserTextOutW.c)
 *     DrawGrip @ 0x1C00B12F4 (DrawGrip.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C015116C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01F67B0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0236810 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C023C4C4 (xxxPSMTextOut.c)
 *     UserTextOutWInternal @ 0x1C0247A10 (UserTextOutWInternal.c)
 * Callees:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreExtTextOutWInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        int a7,
        int *a8,
        ERECTL *a9,
        unsigned int a10)
{
  unsigned int v11; // edi
  unsigned int v15; // eax
  _QWORD v17[2]; // [rsp+68h] [rbp-89h] BYREF
  _BYTE v18[32]; // [rsp+78h] [rbp-79h] BYREF
  __int128 v19; // [rsp+98h] [rbp-59h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-49h]
  int v21; // [rsp+B0h] [rbp-41h]
  _QWORD v22[10]; // [rsp+B8h] [rbp-39h] BYREF

  v11 = 0;
  v17[0] = 0LL;
  v17[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v18);
  XDCOBJ::vLock((XDCOBJ *)v17, a1);
  if ( v17[0] && (*(_DWORD *)(v17[0] + 36LL) & 0x10000) == 0 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v22);
    v20 = 0LL;
    v19 = 0LL;
    v21 = 0;
    v22[0] = 0LL;
    memset(&v22[6], 0, 24);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v19, (struct XDCOBJ *)v17, 0) )
      v15 = GreExtTextOutWLocked(
              (struct XDCOBJ *)v17,
              a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              *(unsigned __int8 *)(*(_QWORD *)(v17[0] + 80LL) + 73LL),
              a9,
              a10);
    else
      v15 = XDCOBJ::bFullScreen((XDCOBJ *)v17);
    v11 = v15;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v19);
    DCOBJ::~DCOBJ((DCOBJ *)v22);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v18);
  return v11;
}
