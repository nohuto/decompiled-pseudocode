/*
 * XREFs of GreExtTextOutWInternal @ 0x1C00EA458
 * Callers:
 *     DrawBox @ 0x1C0050D40 (DrawBox.c)
 *     DrawIt @ 0x1C005105C (DrawIt.c)
 *     NtGdiExtTextOutW @ 0x1C0098B40 (NtGdiExtTextOutW.c)
 *     FlipUserTextOutW @ 0x1C00F98C0 (FlipUserTextOutW.c)
 *     DrawGrip @ 0x1C00FAFCC (DrawGrip.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0122A90 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FEC24 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237948 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C023ECF4 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C0244864 (xxxPSMTextOut.c)
 *     UserTextOutWInternal @ 0x1C024B750 (UserTextOutWInternal.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0019204 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtTextOutWInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        int a7,
        struct _BRUSHOBJ *a8,
        void *a9,
        unsigned int a10)
{
  unsigned int v13; // ebx
  unsigned int v14; // eax
  _QWORD v16[6]; // [rsp+68h] [rbp-79h] BYREF
  _BYTE v17[32]; // [rsp+98h] [rbp-49h] BYREF
  _BYTE v18[80]; // [rsp+B8h] [rbp-29h] BYREF

  v13 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( v16[0] && (*(_DWORD *)(v16[0] + 36LL) & 0x10000) == 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v17, (struct XDCOBJ *)v16, 0) )
      v14 = GreExtTextOutWLocked(
              (struct XDCOBJ *)v16,
              a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              *(unsigned __int8 *)(*(_QWORD *)(v16[0] + 80LL) + 73LL),
              a9,
              a10);
    else
      v14 = XDCOBJ::bFullScreen((XDCOBJ *)v16);
    v13 = v14;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v17);
    DCOBJ::~DCOBJ((DCOBJ *)v18);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  return v13;
}
