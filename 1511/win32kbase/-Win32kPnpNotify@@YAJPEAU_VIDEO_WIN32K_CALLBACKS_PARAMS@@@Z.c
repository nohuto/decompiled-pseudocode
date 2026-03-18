/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A9568
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 * Callees:
 *     IsPowerOnGdiSupported_0 @ 0x1C0002110 (IsPowerOnGdiSupported_0.c)
 *     PowerOnGdi_0 @ 0x1C0002118 (PowerOnGdi_0.c)
 *     IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C0002248 (IsxxxSetCsrssThreadDesktopSupported_0.c)
 *     xxxSetCsrssThreadDesktop_0 @ 0x1C0002250 (xxxSetCsrssThreadDesktop_0.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported_0 @ 0x1C0002258 (IsxxxRestoreCsrssThreadDesktopSupported_0.c)
 *     xxxRestoreCsrssThreadDesktop_0 @ 0x1C0002260 (xxxRestoreCsrssThreadDesktop_0.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001E650 (DrvUpdateGraphicsDeviceList.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     DrvLogDiagDisplayChange @ 0x1C0053620 (DrvLogDiagDisplayChange.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     PostWinlogonMessage @ 0x1C0080870 (PostWinlogonMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00857D4 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAX@Z @ 0x1C00A9454 (-PnpNotifyForRemoteSession@@YAJPEAX@Z.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00BC7B0 (DrvCleanupGraphicsDevices.c)
 */

__int64 __fastcall Win32kPnpNotify(struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1, __int64 a2)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS *v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rbp
  LARGE_INTEGER v9; // rdi
  int v10; // r8d
  PVOID PhysDisp; // rdi
  struct tagGRAPHICS_DEVICE *i; // rax
  int v13; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *WaitMode; // [rsp+20h] [rbp-88h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *WaitModea; // [rsp+20h] [rbp-88h]
  PVOID Object[6]; // [rsp+50h] [rbp-58h] BYREF

  v2 = a1;
  v3 = 0;
  gbInVideoPnpCallout = 1;
  while ( 1 )
  {
    while ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) || gfMonitorPowerInProgress )
    {
      Object[0] = gpevtVideoportCallout;
      Object[1] = gpevtMonitorPowerWaiter;
      UserSessionSwitchLeaveCrit((__int64)a1, a2);
      KeWaitForMultipleObjects(2u, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v8 = PsGetCurrentThreadWin32Thread(v7);
      if ( v8 )
      {
        v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
        {
          LOBYTE(a1) = byte_1C01020C8 - 1;
          if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
            && (qword_1C01020B0 & 0x200000010000000LL) != 0
            && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
            && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            Template_xqx(
              (_DWORD)a1,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v10,
              v9.LowPart,
              0,
              gullUserCritAcquireToken);
          }
        }
        if ( v9.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v10,
            0,
            1000 * v9.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v6;
      gbValidateHandleForIL = 1;
    }
    if ( gbGDIOn )
      break;
    if ( (int)IsPowerOnGdiSupported_0() >= 0 )
      PowerOnGdi_0();
  }
  if ( !gPowerTransitionsState )
    DrvSetWddmDeviceMonitorPowerState((__int64)v2->PhysDisp, 1, 1);
  if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0 || grpdeskRitInput )
  {
    DrvLogDiagDisplayChange((__int64)v2, 6);
    if ( v2->Param )
    {
      if ( !gProtocolType )
      {
        Object[4] = 0LL;
        LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 0;
        DrvUpdateGraphicsDeviceList(1, 1);
        if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0 || (v3 = xxxSetCsrssThreadDesktop_0(), v3 >= 0) )
        {
          LODWORD(WaitMode) = 2191;
          v3 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, WaitMode, 6u, 0, grpdeskRitInput, 0, 0LL);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0 )
            xxxRestoreCsrssThreadDesktop_0();
        }
      }
      v13 = PnpNotifyForRemoteSession(0LL);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        v3 = v13;
    }
    else
    {
      PhysDisp = v2->PhysDisp;
      for ( i = gpLocalGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
      {
        if ( *((PVOID *)i + 18) == PhysDisp )
          *((_DWORD *)i + 41) |= 1u;
      }
      if ( !gProtocolType )
      {
        Object[2] = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0 || (v3 = xxxSetCsrssThreadDesktop_0(), v3 >= 0) )
        {
          LODWORD(WaitMode) = 2191;
          v3 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, WaitMode, 6u, 0, grpdeskRitInput, 0, 0LL);
          if ( v3 < 0 )
          {
            LODWORD(WaitModea) = 128;
            v3 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, WaitModea, 1u, 0, grpdeskRitInput, 0, 0LL);
          }
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0 )
            xxxRestoreCsrssThreadDesktop_0();
        }
      }
      PnpNotifyForRemoteSession(PhysDisp);
      if ( v3 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        DrvUpdateGraphicsDeviceList(1, 0);
      if ( v2->LockUserSession )
        PostWinlogonMessage(1027LL, 0);
    }
    if ( !gPowerTransitionsState )
      DrvSetWddmDeviceMonitorPowerState(0LL, 4, 1);
  }
  else
  {
    v3 = -1073741823;
  }
  gbInVideoPnpCallout = 0;
  return (unsigned int)v3;
}
