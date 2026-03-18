/*
 * XREFs of InitSystemThread @ 0x1C00818B0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     InitClientInfo @ 0x1C0050180 (InitClientInfo.c)
 *     ClearAppStarting @ 0x1C00525A0 (ClearAppStarting.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v5; // rdi
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID v9; // rcx
  __int64 v10; // rbp
  int v11; // ecx
  LARGE_INTEGER v12; // rsi
  int v13; // r8d
  __int64 ThreadWin32Thread; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx

  PsGetThreadProcess(KeGetCurrentThread());
  v3 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
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
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v15 = Win32AllocPoolWithQuota();
  *(_QWORD *)(ThreadWin32Thread + 440) = v15;
  if ( v15 )
  {
    *(_DWORD *)(ThreadWin32Thread + 448) = *(_DWORD *)(ThreadWin32Thread + 448) & 0xFFFFFFF3 | 4;
    if ( (unsigned int)InitClientInfo(ThreadWin32Thread) )
    {
      if ( a1 )
      {
        if ( *(_QWORD *)(ThreadWin32Thread + 456) )
          Win32FreePool();
        v16 = Win32AllocPoolWithQuota();
        *(_QWORD *)(ThreadWin32Thread + 456) = v16;
        if ( v16 )
        {
          *(_QWORD *)(v16 + 8) = v16 + 16;
          memmove(*(void **)(*(_QWORD *)(ThreadWin32Thread + 456) + 8LL), a1[1], *(unsigned __int16 *)a1);
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 456) + 8LL)
                   + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
          *(_WORD *)(*(_QWORD *)(ThreadWin32Thread + 456) + 2LL) = *(_WORD *)a1 + 2;
          **(_WORD **)(ThreadWin32Thread + 456) = *(_WORD *)a1;
        }
      }
      v17 = *(_QWORD *)(ThreadWin32Thread + 384);
      if ( v17 && (*(_DWORD *)(v17 + 12) & 0x40) != 0 )
        ClearAppStarting(v17);
    }
    else
    {
      v3 = -1073741823;
    }
  }
  else
  {
    v3 = -1073741801;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
