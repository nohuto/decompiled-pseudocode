/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x140468524
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x140456F78 (PspTerminateProcessesJobCallback.c)
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140467790 (PspEnforceLimitsJobPostCallback.c)
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 * Callees:
 *     PspSendJobNotification @ 0x1400AA5A8 (PspSendJobNotification.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PsQueryStatisticsProcess @ 0x14044DA90 (PsQueryStatisticsProcess.c)
 *     PspLockRootJobFromProcess @ 0x140465E00 (PspLockRootJobFromProcess.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x1404687F4 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140468810 (PspLockJobConditionally.c)
 *     PspChangeProcessExecutionState @ 0x140468830 (PspChangeProcessExecutionState.c)
 *     PspFoldProcessAccountingIntoJob @ 0x140468F4C (PspFoldProcessAccountingIntoJob.c)
 *     PsTerminateProcess @ 0x1404CE4F8 (PsTerminateProcess.c)
 *     PspUnlinkJobProcess @ 0x1404D5364 (PspUnlinkJobProcess.c)
 *     PspWaitForUsermodeExit @ 0x14067FEE0 (PspWaitForUsermodeExit.c)
 *     PspSubtractAccountingValues @ 0x140680F98 (PspSubtractAccountingValues.c)
 *     EtwTraceJobRemoveProcess @ 0x1406A1A14 (EtwTraceJobRemoveProcess.c)
 */

__int64 __fastcall PspRemoveProcessFromJobChain(
        ULONG_PTR BugCheckParameter1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // r15
  bool v8; // r12
  char v9; // r14
  int v10; // r13d
  __int64 v11; // rbx
  _QWORD *v13; // rax
  signed __int32 v14; // eax
  signed __int32 v15; // edx
  char v16; // [rsp+28h] [rbp-59h]
  __int64 v17; // [rsp+30h] [rbp-51h] BYREF
  __int64 v18; // [rsp+38h] [rbp-49h] BYREF
  struct _KTHREAD *v19; // [rsp+40h] [rbp-41h]
  _QWORD v20[18]; // [rsp+48h] [rbp-39h] BYREF
  char v22; // [rsp+F8h] [rbp+77h]

  v22 = a3;
  v4 = a3;
  memset(v20, 0, 0x58uLL);
  CurrentThread = KeGetCurrentThread();
  v19 = CurrentThread;
  v8 = !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 768), 0);
  v9 = 0;
  v16 = 0;
  if ( (v4 & 2) != 0
    && (*(_DWORD *)(BugCheckParameter1 + 772) & 0x4000000) != 0
    && (*(_DWORD *)(BugCheckParameter1 + 1740) & 0x100) == 0 )
  {
    PsTerminateProcess(BugCheckParameter1, a4);
    if ( (v4 & 0x10) != 0 && (_KPROCESS *)BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process )
      PspWaitForUsermodeExit(BugCheckParameter1);
    v16 = 1;
  }
  v10 = 1;
  PspLockRootJobFromProcess(BugCheckParameter1, (__int64)CurrentThread, &v18, &v17);
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobRemoveProcess(BugCheckParameter1, v4, a4);
  if ( (v4 & 4) != 0 && !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 768), 1u) )
  {
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter1 + 768), 0xFFFFFFDF);
    PsQueryStatisticsProcess(BugCheckParameter1, v20);
    v9 = 1;
  }
  v11 = v18;
  if ( v18 )
  {
    do
    {
      PspLockJobConditionally(v11, &v17);
      if ( v8 )
      {
        --*(_DWORD *)(v11 + 216);
        if ( (*(_DWORD *)(BugCheckParameter1 + 1740) & 0x80u) != 0 )
          --*(_DWORD *)(v11 + 1228);
      }
      if ( (v4 & 8) != 0 && v8 )
        ++*(_DWORD *)(v11 + 220);
      if ( a2 && (!*a2 || *a2 == v11) && *(_QWORD *)(v11 + 456) && ((1 << a2[1]) & *(_DWORD *)(v11 + 876)) != 0 )
        PspSendJobNotification(v11, a2[1], a2[2], 0);
      if ( v9 )
      {
        PspFoldProcessAccountingIntoJob(v11, BugCheckParameter1, v20);
        if ( v11 == *(_QWORD *)(BugCheckParameter1 + 944) && *(_DWORD *)(v11 + 1232) != PspEnforcementSequenceNumber )
          v10 = 0;
        if ( v10 == 1 )
        {
          v13 = (_QWORD *)(v11 + 1136);
          if ( v11 + 1136 < (unsigned __int64)(v11 + 1224) )
          {
            while ( !*v13 )
            {
              if ( (unsigned __int64)++v13 >= v11 + 1224 )
                goto LABEL_12;
            }
            PspSubtractAccountingValues(v11 + 1136, v20);
            v10 = 2;
          }
        }
      }
LABEL_12:
      PspUnlockJobConditionally(v11, &v17);
      v11 = *(_QWORD *)(v11 + 1056);
    }
    while ( v11 );
    v11 = v18;
    LOBYTE(v4) = v22;
    CurrentThread = v19;
  }
  if ( (v4 & 1) != 0 )
  {
    PspLockJobConditionally(v11, &v17);
    PspUnlinkJobProcess(v11, BugCheckParameter1);
    PspUnlockJobConditionally(v11, &v17);
  }
  PspLockJobConditionally(v11, &v17);
  if ( v8 && (*(_DWORD *)(BugCheckParameter1 + 768) & 4) != 0 && !v16 )
  {
    v14 = *(_DWORD *)(BugCheckParameter1 + 768);
    do
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter1 + 768), v14 & 0xCFFFFFFF, v14);
    }
    while ( v14 != v15 );
    v11 = v18;
  }
  PspUnlockJobConditionally(v11, &v17);
  PspUnlockJob(v17, (__int64)CurrentThread);
  --CurrentThread->KernelApcDisable;
  PspChangeProcessExecutionState(BugCheckParameter1);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
