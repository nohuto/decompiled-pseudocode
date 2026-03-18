/*
 * XREFs of _MonitorFromWindow @ 0x1C0082D50
 * Callers:
 *     SelectWindowRgn @ 0x1C000E814 (SelectWindowRgn.c)
 *     SkipWindowOnMonitor @ 0x1C00427F0 (SkipWindowOnMonitor.c)
 *     GetNewMonitor @ 0x1C005C238 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     CalcWindowFullScreen @ 0x1C006601C (CalcWindowFullScreen.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0081088 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     xxxCheckFullScreen @ 0x1C008B384 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00948A8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     IsSmallerThanScreen @ 0x1C0108218 (IsSmallerThanScreen.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01C3114 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     xxxResizeImmersiveBackground @ 0x1C01EFD20 (xxxResizeImmersiveBackground.c)
 *     xxxEndSetWindowArrangement @ 0x1C020BEC4 (xxxEndSetWindowArrangement.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215C20 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0057520 (GetMonitorFlagsFromWindow.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromWindow(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 DispInfo; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char v10; // r10
  __int128 v11; // xmm0
  __int64 v12; // rcx
  unsigned int MonitorFlags; // eax
  __int128 *v14; // r8
  __int64 v15; // rdx
  __int128 *v16; // rcx
  __int128 *Prop; // rax
  __int64 v18; // rcx
  unsigned int MonitorFlagsFromWindow; // eax
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  DispInfo = GetDispInfo(a1, a2, a3);
  v8 = 1LL;
  if ( *(_DWORD *)(DispInfo + 80) == 1 && (v3 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo(v7, v6, v8) + 88);
  if ( a1 )
  {
    v10 = 32;
    if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (__int128 *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
    v8 = (__int64)Prop;
    if ( Prop )
    {
      if ( ((unsigned __int8)v3 & (unsigned __int8)v10) != 0 )
      {
        v11 = *Prop;
        goto LABEL_8;
      }
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v18);
      v16 = v14;
LABEL_14:
      v15 = v3 | MonitorFlagsFromWindow;
      return MonitorFromRect(v16, v15, v14);
    }
    v7 = *(_WORD *)(*(_QWORD *)(a1 + 88) + 66LL) & 0x3FFF;
    if ( (_DWORD)v7 != 669 )
    {
LABEL_6:
      if ( ((unsigned __int8)v3 & (unsigned __int8)v10) != 0 )
      {
        v11 = *(_OWORD *)(a1 + 112);
LABEL_8:
        v12 = *(_QWORD *)(a1 + 16);
        v20 = v11;
        MonitorFlags = GetMonitorFlags(*(_QWORD *)(v12 + 384));
        LogicalToPhysicalDPIRect(&v20, &v20, MonitorFlags, 0LL);
        v15 = v3;
        v16 = &v20;
        return MonitorFromRect(v16, v15, v14);
      }
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
      v16 = (__int128 *)(a1 + 112);
      goto LABEL_14;
    }
    return *(_QWORD *)(GetDispInfo(v7, v6, v8) + 88);
  }
  if ( (v3 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo(v7, v6, v8) + 88);
  return 0LL;
}
