/*
 * XREFs of NtUserCheckProcessSession @ 0x1C00157C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDwmCheckProcessSession @ 0x1C0015A00 (xxxDwmCheckProcessSession.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserCheckProcessSession(__int64 a1)
{
  unsigned int v1; // r14d
  unsigned int v2; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v4; // rdi
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rcx
  PVOID v7; // rcx
  __int64 v8; // rbp
  int v9; // ecx
  LARGE_INTEGER v10; // rsi
  int v11; // r8d
  PVOID CurrentProcess; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx

  v1 = a1;
  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( gbRITBlockedOnDIT )
    {
      if ( v4 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v7 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v4 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v7 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v7, UserRequest, 0, 0, 0LL);
  }
  v8 = PsGetCurrentThreadWin32Thread(v6);
  if ( v8 )
  {
    v10 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v9) = byte_1C00FEA58 - 1;
      Template_xqx(v9, (unsigned int)&AcquiredExclusiveUserCritEvent, v11, v10.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v10.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v11,
        0,
        1000 * v10.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  CurrentProcess = (PVOID)PsGetCurrentProcess();
  if ( !CurrentProcess || CurrentProcess != g_pepDwm )
  {
    v18 = 5LL;
    goto LABEL_33;
  }
  v13 = xxxDwmCheckProcessSession(v1);
  if ( v13 < 0 )
  {
    v18 = RtlNtStatusToDosError(v13);
LABEL_33:
    UserSetLastError(v18);
    goto LABEL_34;
  }
  v2 = 1;
LABEL_34:
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v2;
}
