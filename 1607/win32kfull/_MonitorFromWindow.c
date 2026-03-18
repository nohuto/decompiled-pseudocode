/*
 * XREFs of _MonitorFromWindow @ 0x1C00AFFA0
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0056A5C (xxxCheckFullScreen.c)
 *     SelectWindowRgn @ 0x1C0061AA0 (SelectWindowRgn.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C006DDDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     CalcWindowFullScreen @ 0x1C00723E0 (CalcWindowFullScreen.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00AEEB4 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     SkipWindowOnMonitor @ 0x1C00B2640 (SkipWindowOnMonitor.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     IsSmallerThanScreen @ 0x1C014BD94 (IsSmallerThanScreen.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01C3F44 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020E760 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 *     NtUserSetWindowShowState @ 0x1C021ACF0 (NtUserSetWindowShowState.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  char v6; // r10
  __int64 v7; // rcx
  __int128 v8; // xmm0
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int128 *v11; // rcx
  __int128 *Prop; // rax
  unsigned int MonitorFlagsFromWindow; // eax
  __int128 *v14; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(GetDispInfo(a1) + 80) == 1 && (a2 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo(v4) + 88);
  if ( a1 )
  {
    v6 = 32;
    if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (__int128 *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
    if ( Prop )
    {
      v7 = a1;
      if ( ((unsigned __int8)a2 & (unsigned __int8)v6) != 0 )
      {
        v8 = *Prop;
        goto LABEL_8;
      }
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
      v11 = v14;
LABEL_14:
      v10 = a2 | MonitorFlagsFromWindow;
      return MonitorFromRect(v11, v10);
    }
    v4 = *(_WORD *)(*(_QWORD *)(a1 + 88) + 66LL) & 0x3FFF;
    if ( (_DWORD)v4 != 669 )
    {
LABEL_6:
      v7 = a1;
      if ( ((unsigned __int8)a2 & (unsigned __int8)v6) != 0 )
      {
        v8 = *(_OWORD *)(a1 + 112);
LABEL_8:
        v15 = v8;
        v9 = GetMonitorFlagsFromWindow(v7);
        LogicalToPhysicalDPIRect(&v15, &v15, v9, 0LL);
        v10 = a2;
        v11 = &v15;
        return MonitorFromRect(v11, v10);
      }
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
      v11 = (__int128 *)(a1 + 112);
      goto LABEL_14;
    }
    return *(_QWORD *)(GetDispInfo(v4) + 88);
  }
  if ( (a2 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo(v4) + 88);
  return 0LL;
}
