/*
 * XREFs of PspExitThread @ 0x140422830
 * Callers:
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     NtTerminateProcess @ 0x14041C6B4 (NtTerminateProcess.c)
 *     PsExitCurrentUserThread @ 0x1404204E4 (PsExitCurrentUserThread.c)
 *     PspTerminateThreadByPointer @ 0x1404205B0 (PspTerminateThreadByPointer.c)
 * Callees:
 *     KeForceResumeProcess @ 0x14000BA84 (KeForceResumeProcess.c)
 *     KiRundownMutants @ 0x14000DF1C (KiRundownMutants.c)
 *     ExTimerRundown @ 0x14000E370 (ExTimerRundown.c)
 *     KeTerminateThread @ 0x14000F218 (KeTerminateThread.c)
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x1400101E0 (ExGetCallBackBlockRoutine.c)
 *     KeQuerySystemTimePrecise @ 0x1400166E8 (KeQuerySystemTimePrecise.c)
 *     KeQuerySystemTimeUnsafe @ 0x140021258 (KeQuerySystemTimeUnsafe.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x14003237C (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloState @ 0x140117518 (PsGetServerSiloState.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     ZwFreeVirtualMemory @ 0x14017F3B0 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeUnsecureThread @ 0x1401FF1F0 (KeUnsecureThread.c)
 *     PsTerminateServerSilo @ 0x1402443F4 (PsTerminateServerSilo.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     LpcRequestPort @ 0x14041BF2C (LpcRequestPort.c)
 *     PspClearProcessThreadCidRefs @ 0x140420C64 (PspClearProcessThreadCidRefs.c)
 *     PspEmptyPropertySet @ 0x140420D18 (PspEmptyPropertySet.c)
 *     PsCaptureExceptionPort @ 0x140420D34 (PsCaptureExceptionPort.c)
 *     IoCancelThreadIo @ 0x140420E38 (IoCancelThreadIo.c)
 *     CmNotifyRunDown @ 0x140420ED0 (CmNotifyRunDown.c)
 *     KeRundownApcQueues @ 0x140421134 (KeRundownApcQueues.c)
 *     PspExitProcess @ 0x14042257C (PspExitProcess.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14046E1A4 (SeAuditingWithTokenForSubcategory.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PoDeletePowerRequest @ 0x1404E6058 (PoDeletePowerRequest.c)
 *     ExWnfExitProcess @ 0x140504364 (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x140504574 (LpcExitProcess.c)
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 *     PsGetProcessServerSilo @ 0x14050C11C (PsGetProcessServerSilo.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     EtwTraceThread @ 0x14053C038 (EtwTraceThread.c)
 *     MmDeleteTeb @ 0x14053E174 (MmDeleteTeb.c)
 *     DbgkExitProcess @ 0x14066957C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x140669624 (DbgkExitThread.c)
 *     PspRemoveProcessFromSilo @ 0x1406C2778 (PspRemoveProcessFromSilo.c)
 *     PspUmsUnInitThread @ 0x1406C3888 (PspUmsUnInitThread.c)
 *     PspCatchCriticalBreak @ 0x1406C3D14 (PspCatchCriticalBreak.c)
 *     SeAuditProcessExit @ 0x1406D1F2C (SeAuditProcessExit.c)
 */

__int64 __fastcall PspExitThread(unsigned int a1)
{
  unsigned int v1; // esi
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v3; // r13
  ULONG_PTR v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  struct _LIST_ENTRY *Blink; // rcx
  signed __int64 *v9; // rbx
  __int64 v10; // rdi
  struct _EX_RUNDOWN_REF *v11; // rax
  struct _EX_RUNDOWN_REF *v12; // rsi
  volatile signed __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v20; // rdx
  __int64 DirectoryTableBase_high; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int16 v24; // ax
  void *ProcessServerSilo; // rbx
  _QWORD *StackLimit; // rdi
  void *v27; // rbx
  int v28; // eax
  char v29; // di
  __int64 v30; // r9
  char Reserved1; // al
  unsigned int *Teb; // rbx
  __int16 v33; // ax
  LIST_ENTRY *p_WaitListHead; // rbx
  void (__fastcall *v36)(struct _LIST_ENTRY *, void *, _QWORD); // rax
  void *v37; // rcx
  _QWORD *v38; // rbx
  _QWORD *v39; // r13
  PACCESS_TOKEN v40; // rbx
  __int64 v41; // rcx
  void *v42; // rcx
  __int16 v43; // ax
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // r9
  __int64 v47; // rsi
  int v48; // eax
  _QWORD *v49; // rbx
  __int64 v50; // rsi
  __int64 v51; // r9
  signed __int32 v52[8]; // [rsp+0h] [rbp-F8h] BYREF
  PVOID v53[2]; // [rsp+30h] [rbp-C8h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-B8h] BYREF
  ULONG_PTR v55; // [rsp+48h] [rbp-B0h]
  ULONG_PTR v56; // [rsp+50h] [rbp-A8h] BYREF
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-A0h] BYREF
  int v58; // [rsp+60h] [rbp-98h] BYREF
  int v59; // [rsp+64h] [rbp-94h]
  __int64 v60; // [rsp+88h] [rbp-70h]
  PVOID BaseAddress; // [rsp+90h] [rbp-68h] BYREF
  struct _KTHREAD *v62; // [rsp+98h] [rbp-60h] BYREF
  int v63; // [rsp+A0h] [rbp-58h]
  ULONG_PTR v64; // [rsp+A8h] [rbp-50h] BYREF
  int v65; // [rsp+B0h] [rbp-48h]
  char v67; // [rsp+108h] [rbp+10h]
  PVOID Object; // [rsp+110h] [rbp+18h]
  __int64 Process; // [rsp+118h] [rbp+20h]

  v1 = a1;
  CurrentThread = KeGetCurrentThread();
  v53[1] = CurrentThread;
  Process = (__int64)CurrentThread->Process;
  v55 = Process;
  v3 = Process;
  PspClearProcessThreadCidRefs((__int64)CurrentThread, (__int64)CurrentThread[1].KernelStack, (ULONG_PTR)CurrentThread);
  v4 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( Process != v4 )
    KeBugCheckEx(5u, v55, v4, CurrentThread->ApcStateIndex, (ULONG_PTR)CurrentThread);
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
  PspEmptyPropertySet(&CurrentThread[1].WaitBlock[1].SparePtr);
  v6 = (unsigned __int64)CurrentThread[1].WaitBlock[1].Object;
  if ( v6 )
  {
    ObfDereferenceObjectWithTag((PVOID)(v6 & 0xFFFFFFFFFFFFFFFEuLL), 0x746E6F43u);
    CurrentThread[1].WaitBlock[1].Object = 0LL;
  }
  v7 = _InterlockedCompareExchange64(&CurrentThread[1].WaitStatus, 1LL, 0LL);
  if ( v7 >= 2 )
    ExfWaitForRundownProtectionRelease(&CurrentThread[1].WaitStatus, v7);
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PoDeletePowerRequest(Blink);
    CurrentThread[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  v67 = 0;
  Object = 0LL;
  LODWORD(CurrentThread[1].Timer.Header.WaitListHead.Flink) = v1;
  if ( (*(_DWORD *)(Process + 1716) & 1) == 0 && (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread(CurrentThread, 0LL, 0LL);
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(Process + 1716) & 1) == 0 && ((PspNotifyEnableMask & 0x10) != 0 || (PspNotifyEnableMask & 8) != 0) )
  {
    v9 = (signed __int64 *)&PspCreateThreadNotifyRoutine;
    v10 = 64LL;
    do
    {
      v11 = ExReferenceCallBackBlock(v9);
      v12 = v11;
      if ( v11 )
      {
        v36 = (void (__fastcall *)(struct _LIST_ENTRY *, void *, _QWORD))ExGetCallBackBlockRoutine((__int64)v11);
        v36(CurrentThread->Process[1].Header.WaitListHead.Blink, CurrentThread[1].KernelStack, 0LL);
        ExDereferenceCallBackBlock(v9, v12);
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    v1 = a1;
  }
  v13 = (volatile signed __int64 *)(Process + 728);
  v14 = KeAbPreAcquire(Process + 728, 0LL, 0LL, v5);
  v18 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Process + 728), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Process + 728), v14, Process + 728, v17);
  if ( v18 )
    *(_BYTE *)(v18 + 26) |= 1u;
  if ( (*(_DWORD *)(Process + 1168))-- == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(Process + 772), 0x2000008u);
    KeForceResumeProcess(Process, v15, v16);
    v67 = 1;
    if ( *(_DWORD *)(Process + 1556) == 259 )
    {
      if ( v1 == -1073741749 )
        *(_DWORD *)(Process + 1556) = *(_DWORD *)(Process + 1180);
      else
        *(_DWORD *)(Process + 1556) = v1;
    }
    v38 = *(_QWORD **)(Process + 1152);
    if ( v38 != (_QWORD *)(Process + 1152) )
    {
      v39 = 0LL;
      do
      {
        if ( v38 - 210 != (_QWORD *)CurrentThread
          && !(unsigned __int8)*((_DWORD *)v38 - 419)
          && ObReferenceObjectSafe((__int64)(v38 - 210)) )
        {
          if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v13);
          KeAbPostRelease((ULONG_PTR)v13);
          v43 = CurrentThread->KernelApcDisable + 1;
          CurrentThread->KernelApcDisable = v43;
          if ( !v43
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          KeWaitForSingleObject(v38 - 210, Executive, 0, 0, 0LL);
          if ( v39 )
            ObfDereferenceObject(v39);
          v39 = v38 - 210;
          --CurrentThread->KernelApcDisable;
          v45 = KeAbPreAcquire((ULONG_PTR)v13, 0LL, 0LL, v44);
          v47 = v45;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13, v45, (ULONG_PTR)v13, v46);
          if ( v47 )
            *(_BYTE *)(v47 + 26) |= 1u;
        }
        v38 = (_QWORD *)*v38;
      }
      while ( v38 != (_QWORD *)(Process + 1152) );
      Object = v39;
      v3 = Process;
    }
  }
  else if ( v1 != -1073741749 )
  {
    *(_DWORD *)(Process + 1180) = v1;
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  v24 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v24;
  if ( !v24
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( *(_QWORD *)(v3 + 1056) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( v67 )
      DbgkExitProcess(*(unsigned int *)(v3 + 1556));
    else
      DbgkExitThread(a1);
  }
  if ( *(_QWORD *)(v3 + 720) && (int)KeUnsecureThread((__int64)&MemoryDescriptorList) >= 0 )
  {
    MmUnlockPages(MemoryDescriptorList);
    ExFreePoolWithTag(MemoryDescriptorList, 0x65537350u);
  }
  ProcessServerSilo = 0LL;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
    {
      DirectoryTableBase_high = HIDWORD(CurrentThread->Process[1].DirectoryTableBase);
      if ( (DirectoryTableBase_high & 0x40000008) == 0 )
      {
        ProcessServerSilo = (void *)PsGetProcessServerSilo(v3);
        if ( (unsigned int)PsGetServerSiloState((__int64)ProcessServerSilo) != 2 )
          PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", (ULONG_PTR)CurrentThread);
      }
    }
  }
  if ( !v67 || (*(_DWORD *)(v3 + 772) & 0x2000) == 0 )
    goto LABEL_40;
  if ( !ProcessServerSilo )
    ProcessServerSilo = (void *)PsGetProcessServerSilo(v3);
  if ( !(_BYTE)KdDebuggerEnabled )
  {
    if ( !ProcessServerSilo )
      KeBugCheckEx(0xEFu, v3, 0LL, 0LL, 0LL);
    goto LABEL_136;
  }
  if ( (unsigned int)PsGetServerSiloState((__int64)ProcessServerSilo) != 2 )
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", v3);
  if ( ProcessServerSilo )
  {
LABEL_136:
    if ( (unsigned int)PsGetServerSiloState((__int64)ProcessServerSilo) != 2 )
      PsTerminateServerSilo(DirectoryTableBase_high);
LABEL_40:
    if ( ProcessServerSilo )
      PspDereferenceSiloObject(ProcessServerSilo);
  }
  StackLimit = CurrentThread[1].StackLimit;
  if ( StackLimit )
  {
    v58 = 3145736;
    v59 = 6;
    v60 = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v48 = LpcRequestPort(StackLimit[1], (__int64)&v58);
        if ( v48 != -1073741801 && v48 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject((PVOID)StackLimit[1]);
      v49 = (_QWORD *)*StackLimit;
      ExFreePoolWithTag(StackLimit, 0x70547350u);
      StackLimit = v49;
    }
    while ( v49 );
  }
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
  {
    v27 = PsCaptureExceptionPort(v3, v20, v22, v23);
    if ( v27 )
    {
      v58 = 3145736;
      v59 = 6;
      v60 = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v28 = LpcRequestPort((__int64)v27, (__int64)&v58);
        if ( v28 != -1073741801 && v28 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v27);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    v62 = CurrentThread;
    v63 = 1;
    PsInvokeWin32Callout((_KPROCESS *)1, (__int64)&v62, 0, 0);
  }
  v29 = v67;
  if ( v67 && *(_QWORD *)(v3 + 936) )
  {
    v64 = v3;
    v65 = 0;
    PsInvokeWin32Callout(0LL, (__int64)&v64, 0, 0);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  IoCancelThreadIo((LARGE_INTEGER)DirectoryTableBase_high);
  ExTimerRundown();
  CmNotifyRunDown((__int64)CurrentThread);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread());
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) != 0 || Reserved1 < 0 )
    PspUmsUnInitThread(CurrentThread);
  Teb = (unsigned int *)CurrentThread->Teb;
  if ( Teb )
  {
    CurrentThread->Teb = 0LL;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v52, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
    {
      v50 = KeAbPreAcquire((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v30);
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&CurrentThread[1].WaitBlockList,
        v50,
        (ULONG_PTR)&CurrentThread[1].WaitBlockList,
        v51);
      if ( v50 )
        *(_BYTE *)(v50 + 26) |= 1u;
      ExfReleasePushLockExclusive((volatile signed __int64 *)&CurrentThread[1].WaitBlockList);
      if ( v50 )
        KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
    }
    v33 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v33;
    if ( !v33
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 772) & 0x40000008) == 0 )
    {
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
      {
        BaseAddress = (PVOID)*((_QWORD *)Teb + 655);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        if ( *(_QWORD *)(v3 + 1064) )
        {
          v53[0] = (PVOID)Teb[2947];
          v56 = 0LL;
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v53, &v56, 0x8000u);
        }
      }
      v37 = (void *)*((_QWORD *)Teb + 725);
      if ( v37 )
        ObCloseHandle(v37, 1);
      MmDeleteTeb(v3, Teb);
    }
    v29 = v67;
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((LARGE_INTEGER *)&CurrentThread[1].Header.WaitListHead);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v29 )
  {
    *(_QWORD *)(v3 + 1656) = p_WaitListHead->Flink;
    PspExitProcess(1, v3);
    v40 = PsReferencePrimaryToken((PEPROCESS)v3);
    if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(134LL, v40) )
      SeAuditProcessExit((PEPROCESS)v3);
    ObFastDereferenceObject((signed __int64 *)(v3 + 856), (unsigned __int64)v40);
    ExWnfExitProcess(v3, 0LL);
    PspRundownSingleProcess(v3);
    v41 = *(_QWORD *)(v3 + 1832);
    if ( v41 )
      PspRemoveProcessFromSilo(v41, v3);
    LpcExitProcess(v3);
    v42 = *(void **)(v3 + 1664);
    if ( v42 )
    {
      ExFreePoolWithTag(v42, 0);
      *(_QWORD *)(v3 + 1664) = 0LL;
    }
  }
  KeRundownApcQueues((__int64)CurrentThread);
  if ( CurrentThread->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    PspLegoNotifyRoutine(CurrentThread);
  return KeTerminateThread((ULONG_PTR)CurrentThread);
}
