/*
 * XREFs of InitSystemThread @ 0x1C007C320
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     InitClientInfo @ 0x1C003F27C (InitClientInfo.c)
 *     ClearAppStarting @ 0x1C0046D20 (ClearAppStarting.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  int v11; // ecx
  LONGLONG v12; // rdi
  __int64 ThreadWin32Thread; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax

  PsGetThreadProcess(KeGetCurrentThread());
  v3 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v6);
  if ( v8 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v7 = 0x200000010000000LL;
    v12 = PerformanceCounter.QuadPart - *(_QWORD *)(v8 + 8);
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v11) = byte_1C01020C8 - 1;
      Template_xqx(v11, (unsigned int)&AcquiredExclusiveUserCritEvent, v9, v12, 0, gullUserCritAcquireToken);
    }
    if ( v12 >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v9,
        0,
        1000 * v12 / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v9);
  v14 = Win32AllocPoolWithQuota();
  *(_QWORD *)(ThreadWin32Thread + 432) = v14;
  if ( v14 )
  {
    *(_DWORD *)(ThreadWin32Thread + 440) = *(_DWORD *)(ThreadWin32Thread + 440) & 0xFFFFFFF3 | 4;
    if ( (unsigned int)InitClientInfo(ThreadWin32Thread) )
    {
      if ( a1 )
      {
        if ( *(_QWORD *)(ThreadWin32Thread + 448) )
          Win32FreePool();
        v17 = Win32AllocPoolWithQuota();
        *(_QWORD *)(ThreadWin32Thread + 448) = v17;
        if ( v17 )
        {
          *(_QWORD *)(v17 + 8) = v17 + 16;
          memmove(*(void **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL), a1[1], *(unsigned __int16 *)a1);
          v15 = (unsigned __int64)*(unsigned __int16 *)a1 >> 1;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL) + 2 * v15) = 0;
          *(_WORD *)(*(_QWORD *)(ThreadWin32Thread + 448) + 2LL) = *(_WORD *)a1 + 2;
          **(_WORD **)(ThreadWin32Thread + 448) = *(_WORD *)a1;
        }
      }
      v16 = *(_QWORD *)(ThreadWin32Thread + 376);
      if ( v16 )
      {
        v15 = *(unsigned int *)(v16 + 12);
        if ( (v15 & 0x40) != 0 )
          ClearAppStarting(v16);
      }
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
  UserSessionSwitchLeaveCrit(v16, v15);
  return v3;
}
