/*
 * XREFs of _MonitorFromWindow @ 0x1C0077FC0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     CalcWindowFullScreen @ 0x1C0055DBC (CalcWindowFullScreen.c)
 *     xxxCheckFullScreen @ 0x1C006899C (xxxCheckFullScreen.c)
 *     GetNewMonitor @ 0x1C006DEC0 (GetNewMonitor.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00716CC (xxxInitSendValidateMinMaxInfoEx.c)
 *     SelectWindowRgn @ 0x1C007AAB8 (SelectWindowRgn.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0091A7C (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     SkipWindowOnMonitor @ 0x1C00C7964 (SkipWindowOnMonitor.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     IsSmallerThanScreen @ 0x1C01476B0 (IsSmallerThanScreen.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01C4CD4 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215A84 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 *     NtUserSetWindowShowState @ 0x1C0220D90 (NtUserSetWindowShowState.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     GetMonitorFlagsFromWindow @ 0x1C007BE54 (GetMonitorFlagsFromWindow.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromWindow(__int64 a1, unsigned int a2)
{
  __int64 DispInfo; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  char v8; // r10
  __int128 v9; // xmm0
  __int64 v10; // rcx
  unsigned int MonitorFlags; // eax
  __int64 v12; // rdx
  __int128 *v13; // rcx
  __int128 *Prop; // rax
  unsigned int MonitorFlagsFromWindow; // eax
  __int128 *v16; // r8
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF

  DispInfo = GetDispInfo();
  v6 = 1LL;
  if ( *(_DWORD *)(DispInfo + 80) == 1 && (a2 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo() + 88);
  if ( a1 )
  {
    v8 = 32;
    if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (__int128 *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
    v6 = (__int64)Prop;
    if ( Prop )
    {
      if ( ((unsigned __int8)a2 & (unsigned __int8)v8) != 0 )
      {
        v9 = *Prop;
        goto LABEL_8;
      }
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1, v5, Prop);
      v13 = v16;
LABEL_14:
      v12 = a2 | MonitorFlagsFromWindow;
      return MonitorFromRect(v13, v12);
    }
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 88) + 66LL) & 0x3FFF) != 0x29D )
    {
LABEL_6:
      if ( ((unsigned __int8)a2 & (unsigned __int8)v8) != 0 )
      {
        v9 = *(_OWORD *)(a1 + 112);
LABEL_8:
        v10 = *(_QWORD *)(a1 + 16);
        v17 = v9;
        MonitorFlags = GetMonitorFlags(*(_QWORD *)(v10 + 376));
        ((void (__fastcall *)(__int128 *, __int128 *, _QWORD, _QWORD))LogicalToPhysicalDPIRect)(
          &v17,
          &v17,
          MonitorFlags,
          0LL);
        v12 = a2;
        v13 = &v17;
        return MonitorFromRect(v13, v12);
      }
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1, v5, v6);
      v13 = (__int128 *)(a1 + 112);
      goto LABEL_14;
    }
    return *(_QWORD *)(GetDispInfo() + 88);
  }
  if ( (a2 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo() + 88);
  return 0LL;
}
