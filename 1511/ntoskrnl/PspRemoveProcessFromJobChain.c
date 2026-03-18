/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x1403E96D0
 * Callers:
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1403EB244 (PspEnforceLimitsJobPostCallback.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 *     PspTerminateProcessesJobCallback @ 0x1404BD074 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     PspSendJobNotification @ 0x140117780 (PspSendJobNotification.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspLockRootJobFromProcess @ 0x1403E95DC (PspLockRootJobFromProcess.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
 *     PsQueryStatisticsProcess @ 0x1403EC180 (PsQueryStatisticsProcess.c)
 *     PspUnlockJobConditionally @ 0x1403EC4B0 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1403EC4CC (PspLockJobConditionally.c)
 *     PspChangeProcessExecutionState @ 0x1403EC57C (PspChangeProcessExecutionState.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1403EC880 (PspFoldProcessAccountingIntoJob.c)
 *     PspUnlinkJobProcess @ 0x1403EC9B8 (PspUnlinkJobProcess.c)
 *     PsTerminateProcess @ 0x140452368 (PsTerminateProcess.c)
 *     PspSubtractAccountingValues @ 0x140642FE8 (PspSubtractAccountingValues.c)
 *     EtwTraceJobRemoveProcess @ 0x140660B5C (EtwTraceJobRemoveProcess.c)
 */

__int64 __fastcall PspRemoveProcessFromJobChain(PEPROCESS Process, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  bool v8; // r12
  char v9; // r14
  int v10; // r13d
  __int64 v11; // rbx
  _QWORD *v13; // rax
  signed __int32 DirectoryTableBase; // eax
  signed __int32 v15; // edx
  char v16; // [rsp+28h] [rbp-49h]
  __int64 v17; // [rsp+30h] [rbp-41h] BYREF
  __int64 v18; // [rsp+38h] [rbp-39h] BYREF
  struct _KTHREAD *v19; // [rsp+40h] [rbp-31h]
  _BYTE v20[128]; // [rsp+48h] [rbp-29h] BYREF
  char v22; // [rsp+E8h] [rbp+77h]

  v22 = a3;
  v4 = a3;
  memset(v20, 0, 0x50uLL);
  CurrentThread = KeGetCurrentThread();
  v19 = CurrentThread;
  v8 = !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0);
  v9 = 0;
  v16 = 0;
  if ( (v4 & 2) != 0
    && (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0
    && (HIDWORD(Process[2].SwapListEntry.Next) & 0x100) == 0 )
  {
    PsTerminateProcess(Process, a4);
    v16 = 1;
  }
  v10 = 1;
  PspLockRootJobFromProcess((__int64)Process, (__int64)CurrentThread, &v18, &v17);
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobRemoveProcess(Process, v4, a4);
  if ( (v4 & 4) != 0 && !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 1u) )
  {
    _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFFFFFFDF);
    PsQueryStatisticsProcess(Process, v20);
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
        if ( (HIDWORD(Process[2].SwapListEntry.Next) & 0x80u) != 0 )
          --*(_DWORD *)(v11 + 1196);
      }
      if ( (v4 & 8) != 0 && v8 )
        ++*(_DWORD *)(v11 + 220);
      if ( a2 && (!*a2 || *a2 == v11) && *(_QWORD *)(v11 + 456) && ((1 << a2[1]) & *(_DWORD *)(v11 + 884)) != 0 )
        PspSendJobNotification(v11, a2[1], a2[2], 0);
      if ( v9 )
      {
        PspFoldProcessAccountingIntoJob(v11, Process, v20);
        if ( v11 == Process[1].Affinity.Bitmap[16] && *(_DWORD *)(v11 + 1200) != PspEnforcementSequenceNumber )
          v10 = 0;
        if ( v10 == 1 )
        {
          v13 = (_QWORD *)(v11 + 1112);
          if ( v11 + 1112 < (unsigned __int64)(v11 + 1192) )
          {
            while ( !*v13 )
            {
              if ( (unsigned __int64)++v13 >= v11 + 1192 )
                goto LABEL_12;
            }
            PspSubtractAccountingValues(v11 + 1112, v20);
            v10 = 2;
          }
        }
      }
LABEL_12:
      PspUnlockJobConditionally(v11, &v17);
      v11 = *(_QWORD *)(v11 + 1064);
    }
    while ( v11 );
    v11 = v18;
    CurrentThread = v19;
    LOBYTE(v4) = v22;
  }
  if ( (v4 & 1) != 0 )
  {
    PspLockJobConditionally(v11, &v17);
    PspUnlinkJobProcess(v11);
    PspUnlockJobConditionally(v11, &v17);
  }
  PspLockJobConditionally(v11, &v17);
  if ( v8 && (Process[1].DirectoryTableBase & 4) != 0 && !v16 )
  {
    DirectoryTableBase = Process[1].DirectoryTableBase;
    do
    {
      v15 = DirectoryTableBase;
      DirectoryTableBase = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                             DirectoryTableBase & 0xCFFFFFFF,
                             DirectoryTableBase);
    }
    while ( DirectoryTableBase != v15 );
    v11 = v18;
  }
  PspUnlockJobConditionally(v11, &v17);
  PspUnlockJob(v17, CurrentThread);
  --CurrentThread->KernelApcDisable;
  PspChangeProcessExecutionState(Process);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
