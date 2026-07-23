/*
 * XREFs of PspJobDelete @ 0x140120A58
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExDeleteResourceLite @ 0x1400F29E0 (ExDeleteResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x140180930 (ZwDeleteWnfStateName.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IoDeleteFlow @ 0x1401F8F84 (IoDeleteFlow.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExRemoveVirtualizedTimer @ 0x1402648D4 (ExRemoveVirtualizedTimer.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PspLockJobsAndProcessExclusive @ 0x14041A978 (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14041AA08 (PspUnlockJobsAndProcessExclusive.c)
 *     PspEmptyPropertySet @ 0x140420D18 (PspEmptyPropertySet.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 *     IoFreeMiniCompletionPacket @ 0x1404A4E9C (IoFreeMiniCompletionPacket.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     PsReturnSharedPoolQuota @ 0x1404D0010 (PsReturnSharedPoolQuota.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14053CC68 (PspGetJobLockHierarchyForDeletion.c)
 *     PspRemoveCpuRateControl @ 0x14053CD70 (PspRemoveCpuRateControl.c)
 *     PspNetRateControlDispatch @ 0x1406C46E8 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x1406C4960 (PspRemoveRateControl.c)
 */

void __fastcall PspJobDelete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int16 v6; // ax
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rdi
  __int64 v13; // r8
  _QWORD *v14; // rdx
  __int16 v15; // ax
  void *v16; // rcx
  __int64 v17; // rcx
  volatile signed __int32 *v18; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 **v20; // rdi
  __int64 v21; // r15
  __int64 *v22; // rax
  void *v23; // rcx
  __int64 *v24; // rdx
  __int64 **v25; // rcx
  void *v26; // rcx
  __int64 i; // rax
  __int64 *v28; // rax
  int v29; // ecx
  __int64 v30; // rdi
  int v31; // ecx
  __int64 *v32; // rax
  __int16 v33; // ax
  int v34; // r8d
  int v35; // r8d
  void *v36; // rcx
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // [rsp+38h] [rbp-59h]
  __int64 v40; // [rsp+48h] [rbp-49h] BYREF
  __int64 v41; // [rsp+50h] [rbp-41h] BYREF
  int v42; // [rsp+58h] [rbp-39h]
  __int64 v43; // [rsp+60h] [rbp-31h]
  _QWORD v44[5]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v45[40]; // [rsp+90h] [rbp-1h] BYREF
  void *retaddr; // [rsp+F0h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 1000) || *(_QWORD *)(a1 + 1280) || *(_QWORD *)(a1 + 1288) )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    for ( i = *(_QWORD *)(a1 + 1072); ; i = *(_QWORD *)(a1 + 1072) )
    {
      v39 = i;
      ExAcquireResourceExclusiveLite((PERESOURCE)(i + 56), 1u);
      if ( v39 == *(_QWORD *)(a1 + 1072) )
        break;
      ExReleaseResourceLite((PERESOURCE)(v39 + 56));
    }
    v28 = &v40;
    v40 = v39;
    v29 = 0;
    while ( a1 != *v28 )
    {
      ++v29;
      ++v28;
      if ( v29 )
      {
        ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
        break;
      }
    }
    if ( *(_QWORD *)(a1 + 1000) )
      PspRemoveCpuRateControl(a1);
    v30 = *(_QWORD *)(a1 + 1280);
    if ( v30 )
    {
      memset(v44, 0, sizeof(v44));
      LODWORD(v44[4]) |= 4u;
      v44[0] = *(_QWORD *)(v30 + 56);
      PspNetRateControlDispatch(v44);
      PspRemoveRateControl(a1, 0, v34, 0, 0LL);
    }
    if ( *(_QWORD *)(a1 + 1288) )
    {
      IoDeleteFlow(a1 + 1232);
      PspRemoveRateControl(a1, 1, v35, 0, 0LL);
    }
    v31 = 0;
    v32 = &v40;
    while ( a1 != *v32 )
    {
      ++v31;
      ++v32;
      if ( v31 )
      {
        ExReleaseResourceLite((PERESOURCE)(a1 + 56));
        break;
      }
    }
    ExReleaseResourceLite((PERESOURCE)(v39 + 56));
    if ( CurrentThread )
    {
      v33 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v33;
      if ( !v33
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  if ( *(_DWORD *)(a1 + 480) <= 0xFFFFFFFD )
  {
    v41 = a1;
    v42 = 2;
    v43 = 0LL;
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
    PsInvokeWin32Callout(6LL, &v41, 1LL);
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    if ( CurrentThread )
    {
      v6 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v6;
      if ( !v6
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  v7 = *(void **)(a1 + 456);
  *(_DWORD *)(a1 + 256) = 0;
  if ( v7 )
  {
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    *(_QWORD *)(a1 + 456) = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 432);
  if ( v8 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v8 + 8));
    ExFreePoolWithTag(*(PVOID *)(a1 + 432), 0x614A7350u);
    PsReturnSharedPoolQuota(*(PVOID *)(a1 + 440));
  }
  --CurrentThread->SpecialApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&PspJobListLock, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&PspJobListLock, 0LL);
  v12 = v9;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&PspJobListLock, v9, (ULONG_PTR)&PspJobListLock, v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = *(_QWORD *)(a1 + 24);
  v14 = *(_QWORD **)(a1 + 32);
  if ( *(_QWORD *)(v13 + 8) != a1 + 24 || *v14 != a1 + 24 )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  v15 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v15;
  if ( !v15 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  PspEmptyPropertySet(a1 + 1256);
  v16 = *(void **)(a1 + 976);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0x624A7350u);
    v36 = *(void **)(a1 + 984);
    *(_QWORD *)(a1 + 976) = 0LL;
    PsReturnSharedPoolQuota(v36);
  }
  v17 = *(_QWORD *)(a1 + 992);
  if ( v17 )
    IoFreeMiniCompletionPacket(v17);
  if ( (*(_DWORD *)(a1 + 1296) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(a1 + 888));
  if ( (*(_DWORD *)(a1 + 1296) & 0x40000) != 0 )
  {
    v18 = (volatile signed __int32 *)(a1 + 1208);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(a1 + 1208);
    }
    else if ( _interlockedbittestandset64(v18, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 1208));
    }
    v20 = (__int64 **)(a1 + 1216);
    v21 = MEMORY[0xFFFFF78000000008];
    while ( *v20 != (__int64 *)v20 )
    {
      v37 = *v20;
      v38 = **v20;
      if ( (__int64 **)(*v20)[1] != v20 || *(__int64 **)(v38 + 8) != v37 )
        __fastfail(3u);
      *v20 = (__int64 *)v38;
      *(_QWORD *)(v38 + 8) = v20;
      ExRemoveVirtualizedTimer(v37, v21);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(a1 + 1208, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v18, 0LL);
    __writecr8(CurrentIrql);
  }
  PspGetJobLockHierarchyForDeletion(a1, v45);
  PspLockJobsAndProcessExclusive(v45, 0LL, CurrentThread);
  v22 = (__int64 *)(a1 + 1032);
  if ( (__int64 *)*v22 != v22 )
  {
    v24 = (__int64 *)*v22;
    v25 = *(__int64 ***)(a1 + 1040);
    if ( *(__int64 **)(*v22 + 8) != v22 || *v25 != v22 )
      __fastfail(3u);
    *v25 = v24;
    v24[1] = (__int64)v25;
    *(_QWORD *)(a1 + 1040) = a1 + 1032;
    *v22 = (__int64)v22;
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(a1 + 1064), 0x746C6644u);
    *(_QWORD *)(a1 + 1064) = 0LL;
  }
  PspUnlockJobsAndProcessExclusive(v45, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(a1 + 56));
  if ( *(_QWORD *)(a1 + 1096) )
  {
    v26 = *(void **)(a1 + 1104);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0x624A7350u);
      *(_QWORD *)(a1 + 1104) = 0LL;
    }
  }
  v23 = *(void **)(a1 + 1248);
  if ( v23 )
  {
    ObDereferenceObjectDeferDeleteWithTag(v23, 0x746C6644u);
    *(_QWORD *)(a1 + 1248) = 0LL;
  }
}
