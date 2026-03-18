/*
 * XREFs of ReferenceDwmApiPort @ 0x1C001D7D0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005C4B0 (xxxResetDisplayDevice.c)
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 *     SetConnectCompletedState @ 0x1C0070A30 (SetConnectCompletedState.c)
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z @ 0x1C0073A50 (-ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z.c)
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C0073B00 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B290C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C00C3BB0 (DxgkEngNotifyDisplayChange.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     UserIsUserCritSecIn @ 0x1C001D810 (UserIsUserCritSecIn.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

PVOID ReferenceDwmApiPort()
{
  __int64 v0; // rcx
  PVOID v1; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rcx
  PRKSEMAPHORE v9; // rcx
  __int64 v10; // rdi
  int v11; // ecx
  LARGE_INTEGER v12; // rbx
  int v13; // r8d

  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v1 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v0);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v4 = 0LL;
    while ( 1 )
    {
      v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v5 )
        v4 = *v5;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v6);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v8) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest )
        break;
      if ( gbRITBlockedOnDIT )
      {
        if ( v4 == gptiRit )
          break;
        _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        v9 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v4 == gptiRit )
          break;
        _InterlockedIncrement(&gcDITHitTestWaiters);
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        v9 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v9, UserRequest, 0, 0, 0LL);
    }
    v10 = PsGetCurrentThreadWin32Thread(v8);
    if ( v10 )
    {
      v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v11) = byte_1C0118B28 - 1;
        Template_xqx(v11, (unsigned int)&AcquiredSharedUserCritEvent, v13, v12.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v12.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v13,
          0,
          1000 * v12.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    v1 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
    UserSessionSwitchLeaveCrit();
  }
  return v1;
}
