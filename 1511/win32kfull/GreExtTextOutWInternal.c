/*
 * XREFs of GreExtTextOutWInternal @ 0x1C0040128
 * Callers:
 *     FlipUserTextOutW @ 0x1C0010200 (FlipUserTextOutW.c)
 *     DrawBox @ 0x1C0014AB0 (DrawBox.c)
 *     DrawIt @ 0x1C0014DCC (DrawIt.c)
 *     NtGdiExtTextOutW @ 0x1C003E280 (NtGdiExtTextOutW.c)
 *     DrawGrip @ 0x1C01042BC (DrawGrip.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C014C01C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FF024 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C023EEA4 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C02449F4 (xxxPSMTextOut.c)
 *     UserTextOutWInternal @ 0x1C024B6E0 (UserTextOutWInternal.c)
 * Callees:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
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
  unsigned int v10; // ebx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v17; // [rsp+68h] [rbp-39h] BYREF
  int v18; // [rsp+70h] [rbp-31h]
  int v19; // [rsp+74h] [rbp-2Dh]
  __int128 v20; // [rsp+78h] [rbp-29h] BYREF
  __int64 v21; // [rsp+88h] [rbp-19h]
  int v22; // [rsp+90h] [rbp-11h]
  __int64 v23; // [rsp+98h] [rbp-9h]
  int v24; // [rsp+A0h] [rbp-1h]
  int v25; // [rsp+A4h] [rbp+3h]
  __int64 v26; // [rsp+A8h] [rbp+7h]
  __int64 v27; // [rsp+B0h] [rbp+Fh]
  __int64 v28; // [rsp+B8h] [rbp+17h]

  v10 = 0;
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v17, a1);
  v14 = v17;
  if ( v17 )
  {
    if ( (*(_DWORD *)(v17 + 36) & 0x10000) == 0 )
    {
      v24 = 0;
      v25 = 0;
      v21 = 0LL;
      v22 = 0;
      v23 = 0LL;
      v28 = 0LL;
      v27 = 0LL;
      v26 = 0LL;
      v20 = 0LL;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v20, (struct XDCOBJ *)&v17, 0) )
        v15 = GreExtTextOutWLocked(
                (struct XDCOBJ *)&v17,
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                *(unsigned __int8 *)(*(_QWORD *)(v17 + 80) + 73LL),
                a9,
                a10);
      else
        v15 = XDCOBJ::bFullScreen((XDCOBJ *)&v17);
      v10 = v15;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
      v14 = v17;
    }
    if ( v14 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v17);
      _InterlockedDecrement((volatile signed __int32 *)(v17 + 12));
    }
  }
  return v10;
}
