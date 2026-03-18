/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00AB0A0
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C0068E54 (W32kEtwEnableCallback.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00AB43C (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00AB468 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     Template_qqqqq @ 0x1C00AE778 (Template_qqqqq.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

void __fastcall EtwCaptureStateCallback(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // r8d
  LARGE_INTEGER v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 i; // rbx
  _QWORD *j; // rsi
  unsigned int ThreadId; // r12d
  char ThreadInfoFlags; // r13
  int v15; // r8d
  char v16; // r11
  unsigned int v17; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+10h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v2 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v5 = PsGetCurrentThreadWin32Thread(v3);
  if ( v5 )
  {
    v7 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v5 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v4) = byte_1C01020C8 - 1;
      if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v4, (unsigned int)&AcquiredExclusiveUserCritEvent, v6, v7.LowPart, 0, gullUserCritAcquireToken);
      }
    }
    if ( v7.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v6,
        0,
        1000 * v7.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v5 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v2;
  gbValidateHandleForIL = 1;
  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
    && (qword_1C01020B0 & 0x8000000000040000uLL) != 0
    && (qword_1C01020B8 & 0x8000000000040000uLL) == qword_1C01020B8 )
  {
    if ( W32kEtwWaitCursorActiveType )
    {
      v4 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - W32kEtwWaitCursorStartMs;
      if ( (unsigned int)v4 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
        Template_qqqqq(
          v4,
          (unsigned int)&WaitCursorEvent,
          v6,
          W32kEtwWaitCursorThreadId,
          W32kEtwWaitCursorProcessId,
          gSessionId,
          W32kEtwWaitCursorActiveType,
          ((unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24) - W32kEtwWaitCursorStartMs);
    }
  }
  v8 = 0x8000000000080000uLL;
  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
    && (qword_1C01020B0 & 0x8000000000080000uLL) != 0
    && (qword_1C01020B8 & 0x8000000000080000uLL) == qword_1C01020B8 )
  {
    v9 = grpWinStaList;
    v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v9 )
    {
      for ( i = *(_QWORD *)(v9 + 16); i; i = *(_QWORD *)(i + 16) )
      {
        for ( j = *(_QWORD **)(i + 160); j != (_QWORD *)(i + 160); j = (_QWORD *)*j )
        {
          ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*(j - 82));
          ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 82));
          EtwpGetLastInputProcessTime((struct tagQ *const)*(j - 34), v10, &v18, &v17);
          v4 = (unsigned int)Microsoft_Windows_Win32kEnableBits;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x80u) != 0LL )
            Template_qqqqq(
              Microsoft_Windows_Win32kEnableBits,
              (unsigned int)&ThreadInfoRundownEvent,
              v15,
              ThreadId,
              ThreadInfoFlags,
              v16,
              v18,
              v17);
        }
      }
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v8);
}
