/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0044C44
 * Callers:
 *     UserDeleteW32Process @ 0x1C0010590 (UserDeleteW32Process.c)
 *     UserGetDesktopDC @ 0x1C0044A2C (UserGetDesktopDC.c)
 *     UserDeleteW32Thread @ 0x1C0050C30 (UserDeleteW32Thread.c)
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID v9; // rcx
  __int64 v10; // rsi
  int v11; // ecx
  LARGE_INTEGER v12; // rdi
  int v13; // r8d

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)this = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v5 = 0LL;
    while ( 1 )
    {
      v6 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v6 )
        v5 = *v6;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v8, v7) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v5 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v9 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v5 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v9 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v9, UserRequest, 0, 0, 0LL);
    }
    v10 = PsGetCurrentThreadWin32Thread(v8);
    if ( v10 )
    {
      v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v11) = byte_1C00FEA58 - 1;
        Template_xqx(v11, (unsigned int)&AcquiredExclusiveUserCritEvent, v13, v12.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v12.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v13,
          0,
          1000 * v12.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v5;
    gbValidateHandleForIL = 1;
  }
  return this;
}
