/*
 * XREFs of InitSystemThread @ 0x1C0080020
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 * Callees:
 *     ClearAppStarting @ 0x1C0011F50 (ClearAppStarting.c)
 *     InitClientInfo @ 0x1C0015480 (InitClientInfo.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rbp
  int v8; // ecx
  LARGE_INTEGER v9; // rdi
  int v10; // r8d
  __int64 ThreadWin32Thread; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx

  PsGetThreadProcess(KeGetCurrentThread());
  v3 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v7 = PsGetCurrentThreadWin32Thread(v6);
  if ( v7 )
  {
    v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v7 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v8) = byte_1C0118B28 - 1;
      Template_xqx(v8, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v9.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v9.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
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
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = Win32AllocPoolWithQuota();
  *(_QWORD *)(ThreadWin32Thread + 432) = v12;
  if ( v12 )
  {
    *(_DWORD *)(ThreadWin32Thread + 440) = *(_DWORD *)(ThreadWin32Thread + 440) & 0xFFFFFFF3 | 4;
    if ( (unsigned int)InitClientInfo(ThreadWin32Thread) )
    {
      if ( a1 )
      {
        if ( *(_QWORD *)(ThreadWin32Thread + 448) )
          Win32FreePool();
        v13 = Win32AllocPoolWithQuota();
        *(_QWORD *)(ThreadWin32Thread + 448) = v13;
        if ( v13 )
        {
          *(_QWORD *)(v13 + 8) = v13 + 16;
          memmove(*(void **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL), a1[1], *(unsigned __int16 *)a1);
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL)
                   + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
          *(_WORD *)(*(_QWORD *)(ThreadWin32Thread + 448) + 2LL) = *(_WORD *)a1 + 2;
          **(_WORD **)(ThreadWin32Thread + 448) = *(_WORD *)a1;
        }
      }
      v14 = *(_QWORD *)(ThreadWin32Thread + 376);
      if ( v14 && (*(_DWORD *)(v14 + 12) & 0x40) != 0 )
        ClearAppStarting(v14);
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
