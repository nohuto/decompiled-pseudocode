/*
 * XREFs of ReferenceDwmApiPort @ 0x1C000ADB0
 * Callers:
 *     PowerOnMonitor @ 0x1C000A210 (PowerOnMonitor.c)
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z @ 0x1C000AB80 (-ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z.c)
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C000AC30 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 *     SetConnectCompletedState @ 0x1C0079180 (SetConnectCompletedState.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

PVOID ReferenceDwmApiPort()
{
  PVOID v0; // rbx
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  PVOID CurrentProcess; // rax
  __int64 v7; // rcx
  PVOID v8; // rcx
  __int64 v9; // rdi
  int v10; // ecx
  LARGE_INTEGER v11; // rbx
  int v12; // r8d

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 || ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    v0 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v4 = 0LL;
    while ( 1 )
    {
      v5 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceShared(gpresUser);
      if ( v5 )
        v4 = *v5;
      CurrentProcess = (PVOID)PsGetCurrentProcess();
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest )
        break;
      if ( gbRITBlockedOnDIT )
      {
        if ( v4 == gptiRit )
          break;
        _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v8 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v4 == gptiRit )
          break;
        _InterlockedIncrement(&gcDITHitTestWaiters);
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v8 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v8, UserRequest, 0, 0, 0LL);
    }
    v9 = PsGetCurrentThreadWin32Thread(v7);
    if ( v9 )
    {
      v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v10) = byte_1C00FEA58 - 1;
        Template_xqx(v10, (unsigned int)&AcquiredSharedUserCritEvent, v12, v11.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v11.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v12,
          0,
          1000 * v11.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v9 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    v0 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
    UserSessionSwitchLeaveCrit();
  }
  return v0;
}
