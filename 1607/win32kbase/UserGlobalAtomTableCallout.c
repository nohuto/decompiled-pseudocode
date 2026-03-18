/*
 * XREFs of UserGlobalAtomTableCallout @ 0x1C001D2D8
 * Callers:
 *     W32CalloutDispatch @ 0x1C001CE70 (W32CalloutDispatch.c)
 * Callees:
 *     IsReferenceWindowStationSupported_0 @ 0x1C0002B20 (IsReferenceWindowStationSupported_0.c)
 *     ReferenceWindowStation_0 @ 0x1C0002B28 (ReferenceWindowStation_0.c)
 *     IsModerncoreAtomTableSupported_0 @ 0x1C0002B30 (IsModerncoreAtomTableSupported_0.c)
 *     ModerncoreAtomTable_0 @ 0x1C0002B38 (ModerncoreAtomTable_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 UserGlobalAtomTableCallout()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbp
  LARGE_INTEGER v9; // rsi
  int v10; // r8d
  int v11; // eax
  __int64 CurrentProcess; // rax
  __int64 ProcessJob; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *i; // rax
  __int64 v19; // [rsp+50h] [rbp+8h]

  v0 = 0LL;
  v1 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v1 = *ThreadWin32Thread;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
  v8 = PsGetCurrentThreadWin32Thread(v6);
  if ( v8 )
  {
    v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      Template_xqx(v7, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v9.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v9.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        1000 * v9.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v10,
        0,
        1000 * v9.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( v1
    && ((*(_DWORD *)(v1 + 440) & 0x20000000) != 0
      ? (v7 = *(_QWORD *)(*(_QWORD *)(v1 + 376) + 720LL), v11 = *(_DWORD *)(v7 + 24) & 0x20)
      : (v11 = 0),
        v11) )
  {
    v0 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 376) + 720LL) + 16LL);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v7);
    ProcessJob = PsGetProcessJob(CurrentProcess);
    v14 = ProcessJob;
    if ( !v1 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
    {
      for ( i = (_QWORD *)gpJobsList; i && i[1] != v14; i = (_QWORD *)*i )
        ;
      v0 = i[2];
    }
    else if ( (int)IsReferenceWindowStationSupported_0() < 0
           || (v16 = PsGetCurrentProcess(v15), PsGetProcessWin32WindowStation(v16), (int)ReferenceWindowStation_0() < 0) )
    {
      if ( (int)IsModerncoreAtomTableSupported_0() >= 0 )
        v0 = ModerncoreAtomTable_0();
    }
    else
    {
      v0 = *(_QWORD *)(v19 + 136);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v0;
}
