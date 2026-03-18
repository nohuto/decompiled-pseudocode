/*
 * XREFs of ChangeAcquireResourceType @ 0x1C001D7A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 ChangeAcquireResourceType()
{
  __int64 v0; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  DWORD LowPart; // eax
  int v3; // r8d
  __int64 v4; // rcx
  LARGE_INTEGER *v5; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID v10; // rcx
  __int64 result; // rax
  __int64 v12; // rsi
  int v13; // ecx
  LARGE_INTEGER v14; // rdi
  int v15; // r8d

  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread()) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x200000010000000LL) != 0
    && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v0);
    if ( CurrentThreadWin32Thread )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          *(_QWORD *)(CurrentThreadWin32Thread + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v3,
          LowPart - *(_DWORD *)(CurrentThreadWin32Thread + 8),
          0,
          *(_QWORD *)(CurrentThreadWin32Thread + 16));
    }
  }
  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
  v5 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( v5 )
    v5[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( gbRITBlockedOnDIT )
    {
      if ( v6 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v10 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v6 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v10 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v10, UserRequest, 0, 0, 0LL);
  }
  result = PsGetCurrentThreadWin32Thread(v9);
  v12 = result;
  if ( result )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(result + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v13) = byte_1C00FEA58 - 1;
      Template_xqx(v13, (unsigned int)&AcquiredExclusiveUserCritEvent, v15, v14.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v14.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v15,
        0,
        1000 * v14.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    result = _InterlockedIncrement64(&gullUserCritAcquireToken);
    *(_QWORD *)(v12 + 16) = result;
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  return result;
}
