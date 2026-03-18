/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C00557F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     xxxEnumDisplayMonitors @ 0x1C0052BD0 (xxxEnumDisplayMonitors.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(
        HDC a1,
        __int128 *a2,
        __int64 (__fastcall *a3)(__int64, HDC, tagRECT *, __int64),
        __int64 a4)
{
  __int128 *v6; // rsi
  __int128 *v8; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  int v11; // r14d
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID v15; // rcx
  __int64 v16; // r14
  int v17; // ecx
  LARGE_INTEGER v18; // rdi
  int v19; // r8d
  bool v20; // al
  unsigned int v21; // ebx
  __int128 v24; // [rsp+50h] [rbp-58h] BYREF

  v6 = a2;
  v8 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v10 = 0LL;
  do
  {
    v11 = 0;
    v12 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v10 = *v12;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v10 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v15 = gpsemDITHitTestWaiters;
      goto LABEL_15;
    }
    if ( v10 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v15 = gpsemRITBlockedOnDITWaiters;
LABEL_15:
      KeWaitForSingleObject(v15, UserRequest, 0, 0, 0LL);
      v11 = 1;
    }
  }
  while ( v11 == 1 );
  v16 = PsGetCurrentThreadWin32Thread(v14);
  if ( v16 )
  {
    v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      v20 = (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
         && (qword_1C00FEA40 & 0x200000010000000LL) != 0
         && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48;
      if ( v20 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v17) = byte_1C00FEA58 - 1;
        Template_xqx(v17, (unsigned int)&AcquiredExclusiveUserCritEvent, v19, v18.LowPart, 0, gullUserCritAcquireToken);
      }
    }
    if ( v18.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v19,
        0,
        1000 * v18.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v8 = a2;
  }
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  if ( v6 )
  {
    if ( v6 >= W32UserProbeAddress )
      v6 = (__int128 *)W32UserProbeAddress;
    v24 = *v6;
    v8 = &v24;
  }
  v21 = xxxEnumDisplayMonitors(a1, (__int64)v8, a3, a4, 0);
  UserSessionSwitchLeaveCrit();
  return v21;
}
