/*
 * XREFs of UserProcessFreezeCallout @ 0x1C0004F40
 * Callers:
 *     W32CalloutDispatch @ 0x1C00045B0 (W32CalloutDispatch.c)
 * Callees:
 *     IsSuspendThreadQueueSupported_0 @ 0x1C0001FD8 (IsSuspendThreadQueueSupported_0.c)
 *     SuspendThreadQueue_0 @ 0x1C0001FE0 (SuspendThreadQueue_0.c)
 *     IsFreezeThawTimersSupported_0 @ 0x1C0001FE8 (IsFreezeThawTimersSupported_0.c)
 *     FreezeThawTimers_0 @ 0x1C0001FF0 (FreezeThawTimers_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall UserProcessFreezeCallout(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rcx
  PVOID v6; // rcx
  __int64 v7; // rsi
  int v8; // ecx
  LARGE_INTEGER v9; // rdi
  int v10; // r8d
  __int64 ProcessWin32Process; // rax
  __int64 v12; // rdi
  __int64 i; // rbx

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v4 )
      v3 = *v4;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( gbRITBlockedOnDIT )
    {
      if ( v3 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v6 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v3 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v6 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v6, UserRequest, 0, 0, 0LL);
  }
  v7 = PsGetCurrentThreadWin32Thread(v5);
  if ( v7 )
  {
    v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v7 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v8) = byte_1C00FEA58 - 1;
      Template_xqx(v8, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v9.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v9.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
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
    *(_QWORD *)(v7 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  v12 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    for ( i = *(_QWORD *)(ProcessWin32Process + 296); i; i = *(_QWORD *)(i + 592) )
    {
      if ( (int)IsSuspendThreadQueueSupported_0() >= 0 )
        SuspendThreadQueue_0();
    }
    *(_DWORD *)(v12 + 776) |= 0x400u;
    if ( (int)IsFreezeThawTimersSupported_0() >= 0 )
      FreezeThawTimers_0();
  }
  UserSessionSwitchLeaveCrit();
  return 0LL;
}
