/*
 * XREFs of PspJobDelete @ 0x1400888BC
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ExDeleteResourceLite @ 0x1400885B0 (ExDeleteResourceLite.c)
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     ExpTimerResume @ 0x1400AE190 (ExpTimerResume.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D3F30 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14015B620 (ZwDeleteWnfStateName.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     PsInvokeWin32Callout @ 0x140429010 (PsInvokeWin32Callout.c)
 *     PspUnlockJob @ 0x140468EB0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x140469924 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140469940 (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x14048AB04 (PspLockRootJobExclusive.c)
 *     PspEmptyPropertySet @ 0x1404A2008 (PspEmptyPropertySet.c)
 *     PspJobDeleteStorageArrays @ 0x1404A2024 (PspJobDeleteStorageArrays.c)
 *     PspJobIoRateControlDisable @ 0x1404A204C (PspJobIoRateControlDisable.c)
 *     PspUnlockJobListExclusive @ 0x1404A2554 (PspUnlockJobListExclusive.c)
 *     PspLockJobListExclusive @ 0x1404A2590 (PspLockJobListExclusive.c)
 *     ExDestroyHandle @ 0x1404A3C38 (ExDestroyHandle.c)
 *     PsReturnSharedPoolQuota @ 0x1404A5FD0 (PsReturnSharedPoolQuota.c)
 *     PspRemoveCpuRateControl @ 0x1404D1C98 (PspRemoveCpuRateControl.c)
 *     PspRemoveIoAttribution @ 0x1404F22AC (PspRemoveIoAttribution.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x1404F28A4 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobsAndProcessExclusive @ 0x1404F2A94 (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1404F2BF0 (PspUnlockJobsAndProcessExclusive.c)
 *     ExMapHandleToPointer @ 0x14050DF14 (ExMapHandleToPointer.c)
 *     IoFreeMiniCompletionPacket @ 0x14051BA5C (IoFreeMiniCompletionPacket.c)
 *     PspDeleteSilo @ 0x14067E8C0 (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x1406805D8 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x1406807A8 (PspRemoveRateControl.c)
 */

__int64 __fastcall PspJobDelete(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  void *v7; // rcx
  KIRQL v8; // r13
  __int64 **v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v18; // rsi
  __int64 *v19; // r8
  __int64 **v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 *v25; // r14
  __int64 v26; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-41h] BYREF
  __int64 v28; // [rsp+48h] [rbp-39h] BYREF
  int v29; // [rsp+50h] [rbp-31h]
  __int64 v30; // [rsp+58h] [rbp-29h]
  _QWORD v31[5]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v32[40]; // [rsp+88h] [rbp+7h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspEmptyPropertySet(a1 + 1264);
  PspJobDeleteStorageArrays(a1);
  if ( *(_QWORD *)(a1 + 992) || *(_QWORD *)(a1 + 1296) )
  {
    PspLockRootJobExclusive(a1, CurrentThread, &v26);
    PspLockJobConditionally(a1, &v26);
    if ( *(_QWORD *)(a1 + 992) )
      PspRemoveCpuRateControl(a1);
    v18 = *(_QWORD *)(a1 + 1296);
    if ( v18 )
    {
      memset(v31, 0, sizeof(v31));
      LODWORD(v31[4]) |= 4u;
      v31[0] = *(_QWORD *)(v18 + 56);
      PspNetRateControlDispatch(v31);
      PspRemoveRateControl(a1);
    }
    PspUnlockJobConditionally(a1, &v26);
    PspUnlockJob(v26, CurrentThread);
  }
  PspJobIoRateControlDisable(a1);
  if ( *(_QWORD *)(a1 + 1344) )
  {
    PspLockRootJobExclusive(a1, CurrentThread, &v26);
    PspLockJobConditionally(a1, &v26);
    if ( *(_QWORD *)(a1 + 1344) )
      PspRemoveIoAttribution(a1);
    PspUnlockJobConditionally(a1, &v26);
    PspUnlockJob(v26, CurrentThread);
  }
  v27 = *(_DWORD *)(a1 + 480);
  if ( v27 <= 0xFFFFFFFD )
  {
    v28 = a1;
    v29 = 2;
    v30 = 0LL;
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
    PsInvokeWin32Callout(6LL, &v28, 1LL, &v27);
    PspUnlockJob(a1, CurrentThread);
  }
  v3 = *(void **)(a1 + 456);
  *(_DWORD *)(a1 + 256) = 0;
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    *(_QWORD *)(a1 + 456) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 432);
  if ( v4 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v4 + 8));
    ExFreePoolWithTag(*(PVOID *)(a1 + 432), 0x614A7350u);
    PsReturnSharedPoolQuota(*(PVOID *)(a1 + 440));
  }
  PspLockJobListExclusive(CurrentThread);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD **)(a1 + 32);
  if ( *(_QWORD *)(v5 + 8) != a1 + 24 || *v6 != a1 + 24 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  PspUnlockJobListExclusive(CurrentThread);
  v7 = *(void **)(a1 + 968);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x624A7350u);
    v22 = *(void **)(a1 + 976);
    *(_QWORD *)(a1 + 968) = 0LL;
    PsReturnSharedPoolQuota(v22);
  }
  if ( *(_QWORD *)(a1 + 984) )
    IoFreeMiniCompletionPacket();
  if ( (*(_DWORD *)(a1 + 1304) & 0x800) != 0 )
    ZwDeleteWnfStateName(a1 + 880);
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000) != 0 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1112));
    v9 = (__int64 **)(a1 + 1120);
    v26 = MEMORY[0xFFFFF78000000008];
    while ( *v9 != (__int64 *)v9 )
    {
      v23 = *v9;
      v24 = **v9;
      if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v24 + 8) != v23 )
        __fastfail(3u);
      v25 = v23 - 35;
      *v9 = (__int64 *)v24;
      *(_QWORD *)(v24 + 8) = v9;
      KxAcquireSpinLock((PKSPIN_LOCK)v23 - 27);
      v25[34] = 0LL;
      if ( (*((_BYTE *)v25 + 244) & 2) != 0 )
        ExpTimerResume((PKTIMER)v25);
      KxReleaseSpinLock((PKSPIN_LOCK)v25 + 8);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1112), v8);
  }
  PspGetJobLockHierarchyForDeletion(a1, v32);
  PspLockJobsAndProcessExclusive(v32, 0LL, CurrentThread);
  v10 = (__int64 *)(a1 + 1024);
  if ( (__int64 *)*v10 != v10 )
  {
    v19 = (__int64 *)*v10;
    v20 = *(__int64 ***)(a1 + 1032);
    if ( *(__int64 **)(*v10 + 8) != v10 || *v20 != v10 )
      __fastfail(3u);
    *v20 = v19;
    v19[1] = (__int64)v20;
    *(_QWORD *)(a1 + 1032) = a1 + 1024;
    *v10 = (__int64)v10;
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(a1 + 1056), 0x746C6644u);
    *(_QWORD *)(a1 + 1056) = 0LL;
  }
  PspUnlockJobsAndProcessExclusive(v32, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(a1 + 56));
  if ( *(_QWORD *)(a1 + 1096) )
  {
    v21 = *(void **)(a1 + 1104);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0x624A7350u);
      *(_QWORD *)(a1 + 1104) = 0LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000000) != 0 )
    PspDeleteSilo(a1);
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  v15 = *(_DWORD *)(a1 + 1236);
  if ( v15 )
  {
    v16 = ExMapHandleToPointer(PspUniqueJobIdTable, v15);
    ExDestroyHandle(PspUniqueJobIdTable, *(unsigned int *)(a1 + 1236), v16);
  }
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
}
