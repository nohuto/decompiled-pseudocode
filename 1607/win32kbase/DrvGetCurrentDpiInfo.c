/*
 * XREFs of DrvGetCurrentDpiInfo @ 0x1C0057D1C
 * Callers:
 *     NtGdiGetCurrentDpiInfo @ 0x1C0057CB0 (NtGdiGetCurrentDpiInfo.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0057E4C (DrvGetCurrentDpiInfoFromHDev.c)
 *     UserGetHDevFromMonitor @ 0x1C0057EA8 (UserGetHDevFromMonitor.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall DrvGetCurrentDpiInfo(__int64 a1, __int64 a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // ecx
  LARGE_INTEGER v12; // rbx
  int v13; // r8d
  __int64 HDevFromMonitor; // rax
  unsigned int CurrentDpiInfoFromHDev; // ebx
  PRKSEMAPHORE v17; // rcx

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v5 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v17 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v5 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v17 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v17, UserRequest, 0, 0, 0LL);
  }
  v10 = PsGetCurrentThreadWin32Thread(v9);
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
  HDevFromMonitor = UserGetHDevFromMonitor(a1);
  if ( HDevFromMonitor )
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(HDevFromMonitor, a2);
  else
    CurrentDpiInfoFromHDev = -1073741811;
  UserSessionSwitchLeaveCrit();
  return CurrentDpiInfoFromHDev;
}
