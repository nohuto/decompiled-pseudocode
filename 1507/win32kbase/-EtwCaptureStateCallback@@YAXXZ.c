/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00A6A80
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C007BF14 (W32kEtwEnableCallback.c)
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00A6ECC (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00A6EF8 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     Template_qqqqq @ 0x1C00AA258 (Template_qqqqq.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

void __fastcall EtwCaptureStateCallback(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rbx
  struct tagTHREADINFO **v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID v8; // rcx
  __int64 v9; // rsi
  int v10; // r8d
  int v11; // ecx
  LARGE_INTEGER v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // rdi
  unsigned __int64 v15; // rbp
  __int64 i; // rbx
  _QWORD *j; // rsi
  unsigned int ThreadId; // r12d
  char ThreadInfoFlags; // r13
  int v20; // r8d
  char v21; // r11
  unsigned int v22; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+10h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v2 = 0LL;
  while ( 1 )
  {
    v3 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v3 )
      v2 = *v3;
    if ( IsCurrentProcessDwm(v5, v4)
      || (PVOID)PsGetCurrentProcess(v7, v6) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( gbRITBlockedOnDIT )
    {
      if ( v2 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v8 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v2 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v8 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v8, UserRequest, 0, 0, 0LL);
  }
  v9 = PsGetCurrentThreadWin32Thread(v7);
  if ( v9 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v11) = byte_1C00FEA58 - 1;
      Template_xqx(v11, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v12.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v12.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v10,
        0,
        1000 * v12.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v9 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v2;
  gbValidateHandleForIL = 1;
  if ( ((unsigned __int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x8000000000040000uLL) != 0
    && (qword_1C00FEA48 & 0x8000000000040000uLL) == qword_1C00FEA48 )
  {
    if ( W32kEtwWaitCursorActiveType )
    {
      v13 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - W32kEtwWaitCursorStartMs;
      if ( v13 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
        Template_qqqqq(
          v13,
          (unsigned int)&WaitCursorEvent,
          v10,
          W32kEtwWaitCursorThreadId,
          W32kEtwWaitCursorProcessId,
          gSessionId,
          W32kEtwWaitCursorActiveType,
          ((unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24) - W32kEtwWaitCursorStartMs);
    }
  }
  if ( ((unsigned __int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x8000000000080000uLL) != 0
    && (qword_1C00FEA48 & 0x8000000000080000uLL) == qword_1C00FEA48 )
  {
    v14 = grpWinStaList;
    v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v14 )
    {
      for ( i = *(_QWORD *)(v14 + 16); i; i = *(_QWORD *)(i + 16) )
      {
        for ( j = *(_QWORD **)(i + 160); j != (_QWORD *)(i + 160); j = (_QWORD *)*j )
        {
          ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*(j - 83));
          ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 83));
          EtwpGetLastInputProcessTime((struct tagQ *const)*(j - 34), v15, &v23, &v22);
          if ( (Microsoft_Windows_Win32kEnableBits & 0x80u) != 0LL )
            Template_qqqqq(
              Microsoft_Windows_Win32kEnableBits,
              (unsigned int)&ThreadInfoRundownEvent,
              v20,
              ThreadId,
              ThreadInfoFlags,
              v21,
              v23,
              v22);
        }
      }
      v14 = *(_QWORD *)(v14 + 8);
    }
  }
  UserSessionSwitchLeaveCrit();
}
