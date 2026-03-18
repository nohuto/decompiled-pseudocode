/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A4B70
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 * Callees:
 *     IsPowerOnGdiSupported_0 @ 0x1C00020E0 (IsPowerOnGdiSupported_0.c)
 *     PowerOnGdi_0 @ 0x1C00020E8 (PowerOnGdi_0.c)
 *     IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C00021E8 (IsxxxSetCsrssThreadDesktopSupported_0.c)
 *     xxxSetCsrssThreadDesktop_0 @ 0x1C00021F0 (xxxSetCsrssThreadDesktop_0.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported_0 @ 0x1C00021F8 (IsxxxRestoreCsrssThreadDesktopSupported_0.c)
 *     xxxRestoreCsrssThreadDesktop_0 @ 0x1C0002200 (xxxRestoreCsrssThreadDesktop_0.c)
 *     PostWinlogonMessage @ 0x1C0019A20 (PostWinlogonMessage.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0020D10 (DrvUpdateGraphicsDeviceList.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     DrvLogDiagDisplayChange @ 0x1C005A240 (DrvLogDiagDisplayChange.c)
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAX@Z @ 0x1C00A49C4 (-PnpNotifyForRemoteSession@@YAJPEAX@Z.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00BAF80 (DrvCleanupGraphicsDevices.c)
 *     DrvSetDeviceMonitorPowerState @ 0x1C00BC44C (DrvSetDeviceMonitorPowerState.c)
 */

__int64 __fastcall Win32kPnpNotify(struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1)
{
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v4; // rdi
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID v10; // rcx
  __int64 v11; // r14
  int v12; // ecx
  LARGE_INTEGER v13; // rsi
  int v14; // r8d
  int v15; // ebx
  PVOID PhysDisp; // rdi
  struct tagGRAPHICS_DEVICE *i; // rax
  int v18; // eax

  gbInVideoPnpCallout = 1;
  while ( 1 )
  {
    while ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
    {
      UserSessionSwitchLeaveCrit();
      KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v4 = 0LL;
      while ( 1 )
      {
        v5 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
        if ( v5 )
          v4 = *v5;
        if ( IsCurrentProcessDwm(v7, v6)
          || (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v4 == gptiRit )
            break;
          ++gcRITBlockedOnDITWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v10 = gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v4 == gptiRit )
            break;
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v10 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v10, UserRequest, 0, 0, 0LL);
      }
      v11 = PsGetCurrentThreadWin32Thread(v9);
      if ( v11 )
      {
        v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v12) = byte_1C00FEA58 - 1;
          Template_xqx(
            v12,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v14,
            v13.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v13.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v14,
            0,
            1000 * v13.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v11 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v4;
      gbValidateHandleForIL = 1;
    }
    if ( gbGDIOn )
      break;
    if ( (int)IsPowerOnGdiSupported_0() >= 0 )
      PowerOnGdi_0();
  }
  v15 = 0;
  if ( !gPowerTransitionsState )
    DrvSetDeviceMonitorPowerState(a1->PhysDisp, 1LL);
  if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0 || grpdeskRitInput )
  {
    DrvLogDiagDisplayChange((__int64)a1, 6);
    if ( a1->Param )
    {
      if ( !gProtocolType )
      {
        gcLocalNextGlobalDeviceNumber = 0;
        DrvUpdateGraphicsDeviceList(1LL, 1LL);
        if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0 || (v15 = xxxSetCsrssThreadDesktop_0(), v15 >= 0) )
        {
          v15 = xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, 0x88Fu, 6u, 0, grpdeskRitInput, 0, 0LL);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0 )
            xxxRestoreCsrssThreadDesktop_0();
        }
      }
      v18 = PnpNotifyForRemoteSession(0LL);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        v15 = v18;
    }
    else
    {
      PhysDisp = a1->PhysDisp;
      for ( i = gpLocalGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
      {
        if ( *((PVOID *)i + 18) == PhysDisp )
          *((_DWORD *)i + 41) |= 1u;
      }
      if ( !gProtocolType )
      {
        if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0 || (v15 = xxxSetCsrssThreadDesktop_0(), v15 >= 0) )
        {
          v15 = xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, 0x88Fu, 6u, 0, grpdeskRitInput, 0, 0LL);
          if ( v15 < 0 )
            v15 = xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, 0x80u, 1u, 0, grpdeskRitInput, 0, 0LL);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0 )
            xxxRestoreCsrssThreadDesktop_0();
        }
      }
      PnpNotifyForRemoteSession(PhysDisp);
      if ( v15 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        DrvUpdateGraphicsDeviceList(1LL, 0LL);
      if ( a1->LockUserSession )
        PostWinlogonMessage(1027LL, 0);
    }
    if ( !gPowerTransitionsState )
      DrvSetDeviceMonitorPowerState(0LL, 4LL);
  }
  else
  {
    v15 = -1073741823;
  }
  gbInVideoPnpCallout = 0;
  return (unsigned int)v15;
}
