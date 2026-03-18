/*
 * XREFs of NtUserUnregisterSessionPort @ 0x1C00AE000
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0070294 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserUnregisterSessionPort(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rdi
  unsigned int v3; // ebx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v14; // r8
  LONGLONG v15; // rsi
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v19; // [rsp+20h] [rbp-18h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v2 = 0LL;
  v3 = 1;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v4 )
      v2 = *v4;
    if ( IsCurrentProcessDwm(v6, v5)
      || (PVOID)PsGetCurrentProcess(v8, v7) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( gbRITBlockedOnDIT )
    {
      if ( v2 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v9 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v2 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v9 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v9, UserRequest, 0, 0, 0LL);
  }
  v12 = PsGetCurrentThreadWin32Thread(v8);
  if ( v12 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v10 = 0x200000010000000LL;
    v15 = PerformanceCounter.QuadPart - *(_QWORD *)(v12 + 8);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v11) = byte_1C00FEA58 - 1;
      if ( (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LODWORD(v19) = 0;
        Template_xqx(v11, &AcquiredExclusiveUserCritEvent, v14.QuadPart, v15, v19, gullUserCritAcquireToken);
      }
    }
    if ( v15 >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v19) = 1000 * v15 / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v14.QuadPart,
        0LL,
        v19,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v2;
  gbValidateHandleForIL = 1;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
  if ( CurrentProcess && CurrentProcess == g_pepDwm )
  {
    xxxDwmProcessShutdown(0);
  }
  else
  {
    v3 = 0;
    UserSetLastError(5LL, v17);
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
