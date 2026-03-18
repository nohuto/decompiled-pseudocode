/*
 * XREFs of PspExitThread @ 0x14051611C
 * Callers:
 *     NtTerminateProcess @ 0x140507D84 (NtTerminateProcess.c)
 *     KiSchedulerApcTerminate @ 0x140509A00 (KiSchedulerApcTerminate.c)
 *     PspTerminateThreadByPointer @ 0x140509A30 (PspTerminateThreadByPointer.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F690 (ObFastDereferenceObject.c)
 *     PsGetProcessServerSilo @ 0x1400136A0 (PsGetProcessServerSilo.c)
 *     MmSessionGetWin32Callouts @ 0x140013F00 (MmSessionGetWin32Callouts.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074D34 (ExWaitForRundownProtectionRelease.c)
 *     PspLockProcessExclusive @ 0x140088FB8 (PspLockProcessExclusive.c)
 *     ObReferenceObjectSafe @ 0x14008C540 (ObReferenceObjectSafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400AA9EC (ExfAcquireReleasePushLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     KeForceResumeProcess @ 0x1400C8E70 (KeForceResumeProcess.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400D2A60 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PspRevertContainerImpersonation @ 0x1400D3D20 (PspRevertContainerImpersonation.c)
 *     ExTimerRundown @ 0x1400F0A4C (ExTimerRundown.c)
 *     KeQuerySystemTimeUnsafe @ 0x1400F2020 (KeQuerySystemTimeUnsafe.c)
 *     KeQuerySystemTimePrecise @ 0x1400F2100 (KeQuerySystemTimePrecise.c)
 *     PspUnlockProcessExclusive @ 0x1400F22D8 (PspUnlockProcessExclusive.c)
 *     KiRundownMutants @ 0x1400F2320 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400F2454 (KeTerminateThread.c)
 *     ZwFreeVirtualMemory @ 0x14015A040 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     KeUnsecureThread @ 0x1401D305C (KeUnsecureThread.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     ExCallCallBack @ 0x140428DC0 (ExCallCallBack.c)
 *     PspCallThreadNotifyRoutines @ 0x140429110 (PspCallThreadNotifyRoutines.c)
 *     EtwTraceThread @ 0x14045A914 (EtwTraceThread.c)
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
 *     PspClearProcessThreadCidRefs @ 0x14045ED5C (PspClearProcessThreadCidRefs.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140460524 (SeAuditingWithTokenForSubcategory.c)
 *     PspExitProcess @ 0x140460564 (PspExitProcess.c)
 *     ExWnfExitProcess @ 0x140460ECC (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x140460F24 (LpcExitProcess.c)
 *     PspEmptyPropertySet @ 0x1404A2008 (PspEmptyPropertySet.c)
 *     LpcRequestPort @ 0x1404C105C (LpcRequestPort.c)
 *     IoCancelThreadIo @ 0x1404CC524 (IoCancelThreadIo.c)
 *     MmDeleteTeb @ 0x1404CD424 (MmDeleteTeb.c)
 *     PsCaptureExceptionPort @ 0x140509690 (PsCaptureExceptionPort.c)
 *     KeRundownApcQueues @ 0x14050BA4C (KeRundownApcQueues.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 *     CmNotifyRunDown @ 0x1405152B8 (CmNotifyRunDown.c)
 *     PoDeletePowerRequest @ 0x14051E37C (PoDeletePowerRequest.c)
 *     DbgkExitProcess @ 0x14061AB60 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x14061AC08 (DbgkExitThread.c)
 *     PspUmsUnInitThread @ 0x14067F6FC (PspUmsUnInitThread.c)
 *     PspCatchCriticalBreak @ 0x14067FBF8 (PspCatchCriticalBreak.c)
 *     SeAuditProcessExit @ 0x14068E394 (SeAuditProcessExit.c)
 */

__int64 __fastcall PspExitThread(unsigned int a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v2; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR Process; // r14
  ULONG_PTR v5; // r8
  struct _LIST_ENTRY *Blink; // rcx
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  char v10; // r15
  LARGE_INTEGER v11; // rcx
  _QWORD *StackLimit; // r15
  void *v13; // rbx
  int v14; // eax
  char v15; // r15
  char Reserved1; // al
  __int64 Teb; // rbx
  LIST_ENTRY *p_WaitListHead; // rbx
  PVOID Object; // rcx
  void *v21; // rcx
  union _RTL_RUN_ONCE *Win32Callouts; // rax
  _QWORD *v23; // rbx
  _QWORD *v24; // r12
  union _RTL_RUN_ONCE *v25; // rax
  PACCESS_TOKEN v26; // rbx
  void *v27; // rcx
  int v28; // eax
  _QWORD *v29; // rbx
  signed __int32 v30[8]; // [rsp+0h] [rbp-70h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-50h]
  char v32; // [rsp+70h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL;
  v2 = a1;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v1 + 56) = CurrentThread;
  Process = (ULONG_PTR)CurrentThread->Process;
  *(_QWORD *)(v1 + 64) = Process;
  PspClearProcessThreadCidRefs((__int64)CurrentThread, (__int64)CurrentThread[1].KernelStack, (ULONG_PTR)CurrentThread);
  v5 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( Process != v5 )
    KeBugCheckEx(5u, Process, v5, CurrentThread->ApcStateIndex, (ULONG_PTR)CurrentThread);
  __writecr8(0LL);
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
    KeBugCheckEx(0xE9u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x20u, 0LL, CurrentThread->CombinedApcDisable, 0LL, 1uLL);
  if ( CurrentThread[1].SListFaultAddress )
  {
    KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL);
    ObfDereferenceObjectWithTag(CurrentThread[1].SListFaultAddress, 0x79517350u);
    CurrentThread[1].SListFaultAddress = 0LL;
  }
  PspEmptyPropertySet(&CurrentThread[1].WaitBlock[1].SparePtr);
  PspRevertContainerImpersonation((__int64)CurrentThread);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CurrentThread[1].WaitStatus);
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PoDeletePowerRequest(Blink);
    CurrentThread[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  *(_BYTE *)v1 = 0;
  *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  LODWORD(CurrentThread[1].Timer.Header.WaitListHead.Blink) = v2;
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread((__int64)CurrentThread, 0LL, 0LL);
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(Process + 1740) & 1) == 0 )
    PspCallThreadNotifyRoutines((__int64)CurrentThread, 0, 0);
  v7 = (_BYTE *)KeAbPreAcquire(Process + 728, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Process + 728), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Process + 728), v7, Process + 728);
  if ( v8 )
    v8[26] |= 1u;
  if ( (*(_DWORD *)(Process + 1176))-- == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(Process + 772), 0x2000008u);
    KeForceResumeProcess(Process);
    v10 = 1;
    *(_BYTE *)v1 = 1;
    if ( *(_DWORD *)(Process + 1580) == 259 )
    {
      if ( v2 == -1073741749 )
        *(_DWORD *)(Process + 1580) = *(_DWORD *)(Process + 1188);
      else
        *(_DWORD *)(Process + 1580) = v2;
    }
    v23 = *(_QWORD **)(Process + 1160);
    if ( v23 != (_QWORD *)(Process + 1160) )
    {
      v24 = 0LL;
      do
      {
        if ( v23 - 211 != (_QWORD *)CurrentThread
          && !(unsigned __int8)*((_DWORD *)v23 - 421)
          && ObReferenceObjectSafe((__int64)(v23 - 211)) )
        {
          PspUnlockProcessExclusive(Process, (__int64)CurrentThread);
          KeWaitForSingleObject(v23 - 211, Executive, 0, 0, 0LL);
          if ( v24 )
            ObfDereferenceObject(v24);
          v24 = v23 - 211;
          PspLockProcessExclusive(Process, (__int64)CurrentThread);
        }
        v23 = (_QWORD *)*v23;
      }
      while ( v23 != (_QWORD *)(Process + 1160) );
      *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v24;
      v2 = a1;
      v10 = *(_BYTE *)v1;
    }
  }
  else
  {
    v10 = 0;
    if ( v2 != -1073741749 )
      *(_DWORD *)(Process + 1188) = v2;
  }
  PspUnlockProcessExclusive(Process, (__int64)CurrentThread);
  if ( *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
    ObfDereferenceObject(*(PVOID *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  if ( *(_QWORD *)(Process + 1056) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( v10 )
      DbgkExitProcess(*(unsigned int *)(Process + 1580));
    else
      DbgkExitThread(v2);
  }
  if ( *(_QWORD *)(Process + 720) && (int)KeUnsecureThread(v1 + 16) >= 0 )
  {
    MmUnlockPages(*(PMDL *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
    ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), 0x65537350u);
  }
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x20) != 0 )
    {
      v11.QuadPart = HIDWORD(CurrentThread->Process[1].DirectoryTableBase);
      if ( (v11.LowPart & 0x40000008) == 0 )
      {
        PsGetProcessServerSilo(Process);
        LODWORD(Timeout) = v2;
        PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", CurrentThread, (const char *)(Process + 1104));
      }
    }
  }
  if ( v10 && (*(_DWORD *)(Process + 772) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(Process);
    LODWORD(Timeout) = v2;
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", (const void *)Process, (const char *)(Process + 1104));
  }
  StackLimit = CurrentThread[1].StackLimit;
  if ( StackLimit )
  {
    *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 3145736;
    *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) = 6;
    *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v28 = LpcRequestPort(StackLimit[1], (__m256i *)(v1 + 72));
        if ( v28 != -1073741801 && v28 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject((PVOID)StackLimit[1]);
      v29 = (_QWORD *)*StackLimit;
      ExFreePoolWithTag(StackLimit, 0x70547350u);
      StackLimit = v29;
    }
    while ( v29 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v13 = PsCaptureExceptionPort(Process);
    if ( v13 )
    {
      *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 3145736;
      *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) = 6;
      *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v14 = LpcRequestPort((__int64)v13, (__m256i *)(v1 + 72));
        if ( v14 != -1073741801 && v14 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v13);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = CurrentThread;
    *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 1;
    Win32Callouts = MmSessionGetWin32Callouts();
    ExCallCallBack((signed __int64 *)Win32Callouts, 1LL, v1 + 120);
  }
  v15 = *(_BYTE *)v1;
  if ( *(_BYTE *)v1 && *(_QWORD *)(Process + 936) )
  {
    *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = Process;
    *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0;
    v25 = MmSessionGetWin32Callouts();
    ExCallCallBack((signed __int64 *)v25, 0LL, v1 + 136);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  IoCancelThreadIo(v11);
  ExTimerRundown();
  CmNotifyRunDown((__int64)CurrentThread);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread());
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) != 0 || Reserved1 < 0 )
    PspUmsUnInitThread(CurrentThread);
  Teb = (__int64)CurrentThread->Teb;
  *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = Teb;
  if ( Teb )
  {
    CurrentThread->Teb = 0LL;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v30, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((ULONG_PTR)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(Process + 772) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
      {
        *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(Teb + 5240);
        *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v1 + 32), (PSIZE_T)(v1 + 24), 0x8000u);
        if ( *(_QWORD *)(Process + 1064) )
        {
          *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(unsigned int *)(Teb + 11788);
          *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v1 + 48), (PSIZE_T)(v1 + 40), 0x8000u);
        }
      }
      v21 = *(void **)(Teb + 5800);
      if ( v21 )
        ObCloseHandle(v21, 1);
      MmDeleteTeb((_KPROCESS *)Process, Teb);
    }
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((__int64 *)&CurrentThread[1].Header.WaitListHead);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v15 )
  {
    *(_QWORD *)(Process + 1680) = p_WaitListHead->Flink;
    PspExitProcess(1, Process);
    v26 = PsReferencePrimaryToken((PEPROCESS)Process);
    if ( SeAuditingWithTokenForSubcategory(135, (__int64)v26) )
      SeAuditProcessExit((PEPROCESS)Process);
    ObFastDereferenceObject((signed __int64 *)(Process + 856), (unsigned __int64)v26);
    ExWnfExitProcess(Process, 0);
    PspRundownSingleProcess(Process, 1);
    LpcExitProcess(Process);
    v27 = *(void **)(Process + 1688);
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0);
      *(_QWORD *)(Process + 1688) = 0LL;
    }
  }
  KeRundownApcQueues((__int64)CurrentThread);
  if ( CurrentThread->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    PspLegoNotifyRoutine(CurrentThread);
  Object = CurrentThread[1].WaitBlock[3].Object;
  if ( Object )
  {
    ExFreePoolWithTag(Object, 0x63537350u);
    CurrentThread[1].WaitBlock[3].Object = 0LL;
  }
  return KeTerminateThread((ULONG_PTR)CurrentThread);
}
