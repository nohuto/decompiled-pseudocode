/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C0059F90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0059800 (xxxUserChangeDisplaySettings.c)
 *     DrvLogDiagDisplayChange @ 0x1C005A240 (DrvLogDiagDisplayChange.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(struct _UNICODE_STRING *a1, struct _devicemodeW *a2, int a3, void *a4)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  int v17; // ecx
  int v18; // r8d
  LONGLONG v19; // rdi
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (__int64 *)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v10 )
      v9 = *v10;
    if ( (unsigned int)IsCurrentProcessDwm() || (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v9 != gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( (struct tagTHREADINFO *)v9 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v13 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || (struct tagTHREADINFO *)v9 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v13 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v13, UserRequest, 0, 0, 0LL);
  }
  v15 = PsGetCurrentThreadWin32Thread(v12);
  if ( v15 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = 0x200000010000000LL;
    v19 = PerformanceCounter.QuadPart - *(_QWORD *)(v15 + 8);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v17) = byte_1C00FEA58 - 1;
      Template_xqx(v17, (unsigned int)&AcquiredExclusiveUserCritEvent, v18, v19, 0, gullUserCritAcquireToken);
    }
    if ( v19 >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v18,
        0,
        1000 * v19 / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v15 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = (struct tagTHREADINFO *)v9;
  gbValidateHandleForIL = 1;
  if ( (*(_DWORD *)(v9 + 448) & 0x20000000) != 0 )
    v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 384) + 728LL) + 24LL) & 0x10;
  else
    v20 = 0;
  if ( (v20 || gbEnforceUIPI && (unsigned int)*(_QWORD *)(*(_QWORD *)(v9 + 384) + 832LL) <= 0x1FFF) && a3 != 34 )
  {
    v21 = 5LL;
  }
  else
  {
    if ( (a3 & 0x8000000) == 0 )
    {
      DrvLogDiagDisplayChange(0LL, 8LL);
      v22 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, a4, UserMode, 0);
      goto LABEL_39;
    }
    v21 = 87LL;
  }
  v22 = -1;
  UserSetLastError(v21, v14);
LABEL_39:
  UserSessionSwitchLeaveCrit();
  return v22;
}
