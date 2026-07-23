/*
 * XREFs of PspExitThread @ 0x1403F0588
 * Callers:
 *     PspTerminateThreadByPointer @ 0x1403F2F24 (PspTerminateThreadByPointer.c)
 *     NtTerminateProcess @ 0x140450420 (NtTerminateProcess.c)
 *     KiSchedulerApcTerminate @ 0x1404AC820 (KiSchedulerApcTerminate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KeTerminateThread @ 0x14002B7EC (KeTerminateThread.c)
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     KiRundownMutants @ 0x14002BB9C (KiRundownMutants.c)
 *     KeQuerySystemTimeUnsafe @ 0x14002D3F0 (KeQuerySystemTimeUnsafe.c)
 *     KeQuerySystemTimePrecise @ 0x14002D4D0 (KeQuerySystemTimePrecise.c)
 *     ExTimerRundown @ 0x14002D6A8 (ExTimerRundown.c)
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     PspLockProcessExclusive @ 0x14002DCFC (PspLockProcessExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeForceResumeProcess @ 0x1400946B4 (KeForceResumeProcess.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400A01F4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400F45B8 (ExfAcquireReleasePushLockExclusive.c)
 *     ZwFreeVirtualMemory @ 0x1401509E0 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeUnsecureThread @ 0x1401C3234 (KeUnsecureThread.c)
 *     PspIsServerSiloTerminating @ 0x1401F58EC (PspIsServerSiloTerminating.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1403E3928 (SeAuditingWithTokenForSubcategory.c)
 *     ExWnfExitProcess @ 0x1403E3D28 (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x1403E6C50 (LpcExitProcess.c)
 *     PspExitProcess @ 0x1403E6F28 (PspExitProcess.c)
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 *     KeRundownApcQueues @ 0x1403EFBC4 (KeRundownApcQueues.c)
 *     CmNotifyRunDown @ 0x1403F1B90 (CmNotifyRunDown.c)
 *     IoCancelThreadIo @ 0x1403F1DC4 (IoCancelThreadIo.c)
 *     PsCaptureExceptionPort @ 0x1403F1E5C (PsCaptureExceptionPort.c)
 *     PspEmptyPropertySet @ 0x1403F1EBC (PspEmptyPropertySet.c)
 *     PspClearProcessThreadCidRefs @ 0x1403F1ED8 (PspClearProcessThreadCidRefs.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 *     PspCallThreadNotifyRoutines @ 0x1403F6880 (PspCallThreadNotifyRoutines.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     PsGetProcessServerSilo @ 0x14041CF3C (PsGetProcessServerSilo.c)
 *     LpcRequestPort @ 0x1404521F4 (LpcRequestPort.c)
 *     PoDeletePowerRequest @ 0x140455180 (PoDeletePowerRequest.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404879CC (PspTerminateAllProcessesInJobHierarchy.c)
 *     MmDeleteTeb @ 0x1404A92F8 (MmDeleteTeb.c)
 *     EtwTraceThread @ 0x140502700 (EtwTraceThread.c)
 *     DbgkExitProcess @ 0x1405F0934 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1405F09DC (DbgkExitThread.c)
 *     PspUmsUnInitThread @ 0x140641318 (PspUmsUnInitThread.c)
 *     PspCatchCriticalBreak @ 0x1406417F4 (PspCatchCriticalBreak.c)
 *     SeAuditProcessExit @ 0x14064ED10 (SeAuditProcessExit.c)
 */

__int64 __fastcall PspExitThread(unsigned int a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v2; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR Process; // r14
  ULONG_PTR v5; // r8
  unsigned __int64 Object; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  _QWORD *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  char v12; // r15
  struct _KEVENT *ProcessServerSilo; // rbx
  void *StackLimit; // r15
  void *v15; // rbx
  int v16; // eax
  char v17; // r15
  char Reserved1; // al
  _QWORD *Teb; // rbx
  LIST_ENTRY *p_WaitListHead; // rbx
  void *v22; // rcx
  _QWORD *v23; // rbx
  PACCESS_TOKEN v24; // rbx
  void *v25; // rcx
  int v26; // eax
  void *v27; // rbx
  signed __int32 v28[8]; // [rsp+0h] [rbp-70h] BYREF
  char v29; // [rsp+70h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL;
  v2 = a1;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v1 + 56) = CurrentThread;
  Process = (ULONG_PTR)CurrentThread->Process;
  *(_QWORD *)(v1 + 24) = Process;
  PspClearProcessThreadCidRefs(CurrentThread, CurrentThread[1].KernelStack, CurrentThread);
  v5 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( Process != v5 )
    KeBugCheckEx(5u, Process, v5, CurrentThread->ApcStateIndex, (ULONG_PTR)CurrentThread);
  __writecr8(0LL);
  if ( ((__int64)CurrentThread[1].Queue & 1) != 0 )
    KeBugCheckEx(0xE9u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x20u, 0LL, CurrentThread->CombinedApcDisable, 0LL, 1uLL);
  if ( CurrentThread[1].SListFaultAddress )
  {
    KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL);
    ObfDereferenceObjectWithTag(CurrentThread[1].SListFaultAddress, 0x79517350u);
    CurrentThread[1].SListFaultAddress = 0LL;
  }
  PspEmptyPropertySet(&CurrentThread[1].WaitBlockFill11[88]);
  Object = (unsigned __int64)CurrentThread[1].WaitBlock[1].Object;
  if ( Object )
  {
    ObfDereferenceObjectWithTag((PVOID)(Object & 0xFFFFFFFFFFFFFFFEuLL), 0x746E6F43u);
    CurrentThread[1].WaitBlock[1].Object = 0LL;
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CurrentThread[1].WaitStatus);
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PoDeletePowerRequest(Blink);
    CurrentThread[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  *(_BYTE *)v1 = 0;
  v8 = 0LL;
  LODWORD(CurrentThread[1].Timer.Header.WaitListHead.Flink) = v2;
  if ( (*(_DWORD *)(Process + 1724) & 1) == 0 && (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread(CurrentThread, 0LL, 0LL);
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(Process + 1724) & 1) == 0 )
    PspCallThreadNotifyRoutines(CurrentThread, 0LL, 0LL);
  v9 = KeAbPreAcquire(Process + 728, 0LL, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Process + 728), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Process + 728), v9, Process + 728);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( (*(_DWORD *)(Process + 1176))-- == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(Process + 772), 0x2000008u);
    KeForceResumeProcess(Process);
    v12 = 1;
    *(_BYTE *)v1 = 1;
    if ( *(_DWORD *)(Process + 1564) == 259 )
    {
      if ( v2 == -1073741749 )
        *(_DWORD *)(Process + 1564) = *(_DWORD *)(Process + 1188);
      else
        *(_DWORD *)(Process + 1564) = v2;
    }
    v23 = *(_QWORD **)(Process + 1160);
    if ( v23 != (_QWORD *)(Process + 1160) )
    {
      do
      {
        if ( v23 - 210 != (_QWORD *)CurrentThread
          && !(unsigned __int8)*((_DWORD *)v23 - 419)
          && ObReferenceObjectSafe((__int64)(v23 - 210)) )
        {
          PspUnlockProcessExclusive(Process, (__int64)CurrentThread);
          KeWaitForSingleObject(v23 - 210, Executive, 0, 0, 0LL);
          if ( v8 )
            ObfDereferenceObject(v8);
          v8 = v23 - 210;
          PspLockProcessExclusive(Process, (__int64)CurrentThread);
        }
        v23 = (_QWORD *)*v23;
      }
      while ( v23 != (_QWORD *)(Process + 1160) );
      v12 = *(_BYTE *)v1;
    }
    v2 = a1;
  }
  else
  {
    v12 = 0;
    if ( v2 != -1073741749 )
      *(_DWORD *)(Process + 1188) = v2;
  }
  PspUnlockProcessExclusive(Process, (__int64)CurrentThread);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( *(_QWORD *)(Process + 1056) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( v12 )
      DbgkExitProcess(*(unsigned int *)(Process + 1564));
    else
      DbgkExitThread(v2);
  }
  if ( *(_QWORD *)(Process + 720) && (int)KeUnsecureThread(v1 + 8) >= 0 )
  {
    MmUnlockPages(*(PMDL *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 8), 0x65537350u);
  }
  ProcessServerSilo = 0LL;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0
      && (CurrentThread->Process[1].DirectoryTableBase & 0x4000000800000000LL) == 0 )
    {
      ProcessServerSilo = (struct _KEVENT *)PsGetProcessServerSilo(Process);
      if ( !PspIsServerSiloTerminating((__int64)ProcessServerSilo) )
        PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", (ULONG_PTR)CurrentThread);
    }
  }
  if ( !v12 || (*(_DWORD *)(Process + 772) & 0x2000) == 0 )
    goto LABEL_28;
  if ( !ProcessServerSilo )
    ProcessServerSilo = (struct _KEVENT *)PsGetProcessServerSilo(Process);
  if ( !(_BYTE)KdDebuggerEnabled )
  {
    if ( !ProcessServerSilo )
      KeBugCheckEx(0xEFu, Process, 0LL, 0LL, 0LL);
    goto LABEL_107;
  }
  if ( !PspIsServerSiloTerminating((__int64)ProcessServerSilo) )
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", Process);
  if ( ProcessServerSilo )
  {
LABEL_107:
    if ( !PspIsServerSiloTerminating((__int64)ProcessServerSilo) )
      PspTerminateAllProcessesInJobHierarchy(ProcessServerSilo);
LABEL_28:
    if ( ProcessServerSilo )
      ObfDereferenceObject(ProcessServerSilo);
  }
  StackLimit = CurrentThread[1].StackLimit;
  if ( StackLimit )
  {
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 3145736;
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 6;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v26 = LpcRequestPort(*((_QWORD *)StackLimit + 1), v1 + 64);
        if ( v26 != -1073741801 && v26 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(*((PVOID *)StackLimit + 1));
      v27 = *(void **)StackLimit;
      ExFreePoolWithTag(StackLimit, 0x70547350u);
      StackLimit = v27;
    }
    while ( v27 );
  }
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
  {
    v15 = (void *)PsCaptureExceptionPort(Process);
    if ( v15 )
    {
      *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 3145736;
      *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 6;
      *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v16 = LpcRequestPort(v15, v1 + 64);
        if ( v16 != -1073741801 && v16 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v15);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = CurrentThread;
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 1;
    PsInvokeWin32Callout(1LL, v1 + 120, 0LL);
  }
  v17 = *(_BYTE *)v1;
  if ( *(_BYTE *)v1 && *(_QWORD *)(Process + 936) )
  {
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = Process;
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0;
    PsInvokeWin32Callout(0LL, v1 + 136, 0LL);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  IoCancelThreadIo();
  ExTimerRundown();
  CmNotifyRunDown(CurrentThread);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread());
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) != 0 || Reserved1 < 0 )
    PspUmsUnInitThread(CurrentThread);
  Teb = CurrentThread->Teb;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = Teb;
  if ( Teb )
  {
    CurrentThread->Teb = 0LL;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v28, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(Process + 772) & 0x40000008) == 0 )
    {
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
      {
        *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = Teb[655];
        *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v1 + 32), (PSIZE_T)(v1 + 48), 0x8000u);
        if ( *(_QWORD *)(Process + 1064) )
        {
          *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *((unsigned int *)Teb + 2947);
          *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v1 + 16), (PSIZE_T)(v1 + 112), 0x8000u);
        }
      }
      v22 = (void *)Teb[725];
      if ( v22 )
        ObCloseHandle(v22, 1);
      MmDeleteTeb(Process, Teb);
    }
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((LARGE_INTEGER *)&CurrentThread[1].Header.WaitListHead);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v17 )
  {
    *(_QWORD *)(Process + 1664) = p_WaitListHead->Flink;
    PspExitProcess(1, Process);
    v24 = PsReferencePrimaryToken((PEPROCESS)Process);
    if ( SeAuditingWithTokenForSubcategory(134, (__int64)v24) )
      SeAuditProcessExit((PEPROCESS)Process);
    ObFastDereferenceObject((signed __int64 *)(Process + 856), (unsigned __int64)v24);
    ExWnfExitProcess(Process, 0);
    PspRundownSingleProcess(Process, 1);
    LpcExitProcess((struct _KPROCESS *)Process);
    v25 = *(void **)(Process + 1672);
    if ( v25 )
    {
      ExFreePoolWithTag(v25, 0);
      *(_QWORD *)(Process + 1672) = 0LL;
    }
  }
  KeRundownApcQueues((__int64)CurrentThread);
  if ( CurrentThread->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    PspLegoNotifyRoutine(CurrentThread);
  return KeTerminateThread((ULONG_PTR)CurrentThread);
}
