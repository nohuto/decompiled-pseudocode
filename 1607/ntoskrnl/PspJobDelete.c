/*
 * XREFs of PspJobDelete @ 0x14010CAAC
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     ExpTimerResume @ 0x1400AC6F8 (ExpTimerResume.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExDeleteResourceLite @ 0x14010C7A0 (ExDeleteResourceLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14015BB90 (ZwDeleteWnfStateName.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x1404687F4 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140468810 (PspLockJobConditionally.c)
 *     PspRemoveCpuRateControl @ 0x1404B5738 (PspRemoveCpuRateControl.c)
 *     PspRemoveIoAttribution @ 0x1404D4A40 (PspRemoveIoAttribution.c)
 *     PspLockRootJobExclusive @ 0x1404D4E7C (PspLockRootJobExclusive.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x1404D5830 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobsAndProcessExclusive @ 0x1404D5A20 (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1404D5B7C (PspUnlockJobsAndProcessExclusive.c)
 *     ExMapHandleToPointer @ 0x1404F0EA4 (ExMapHandleToPointer.c)
 *     IoFreeMiniCompletionPacket @ 0x1404FEE4C (IoFreeMiniCompletionPacket.c)
 *     PspEmptyPropertySet @ 0x14051A414 (PspEmptyPropertySet.c)
 *     PspJobDeleteStorageArrays @ 0x14051A430 (PspJobDeleteStorageArrays.c)
 *     PspJobIoRateControlDisable @ 0x14051A458 (PspJobIoRateControlDisable.c)
 *     PspUnlockJobListExclusive @ 0x14051A960 (PspUnlockJobListExclusive.c)
 *     PspLockJobListExclusive @ 0x14051A99C (PspLockJobListExclusive.c)
 *     ExDestroyHandle @ 0x14051C038 (ExDestroyHandle.c)
 *     PsReturnSharedPoolQuota @ 0x14051E3D0 (PsReturnSharedPoolQuota.c)
 *     PspDeleteSilo @ 0x14067E9A4 (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x1406806BC (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x14068088C (PspRemoveRateControl.c)
 */

__int64 __fastcall PspJobDelete(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  KIRQL v9; // r13
  __int64 **v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KTHREAD *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v19; // rsi
  __int64 *v20; // r8
  __int64 **v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 *v26; // r14
  __int64 v27; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-41h] BYREF
  __int64 v29; // [rsp+48h] [rbp-39h] BYREF
  int v30; // [rsp+50h] [rbp-31h]
  __int64 v31; // [rsp+58h] [rbp-29h]
  _QWORD v32[5]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v33[40]; // [rsp+88h] [rbp+7h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspEmptyPropertySet(a1 + 1264);
  PspJobDeleteStorageArrays(a1);
  if ( *(_QWORD *)(a1 + 992) || *(_QWORD *)(a1 + 1296) )
  {
    PspLockRootJobExclusive(a1, CurrentThread, &v27);
    PspLockJobConditionally(a1, &v27);
    if ( *(_QWORD *)(a1 + 992) )
      PspRemoveCpuRateControl(a1);
    v19 = *(_QWORD *)(a1 + 1296);
    if ( v19 )
    {
      memset(v32, 0, sizeof(v32));
      LODWORD(v32[4]) |= 4u;
      v32[0] = *(_QWORD *)(v19 + 56);
      PspNetRateControlDispatch(v32);
      PspRemoveRateControl(a1);
    }
    PspUnlockJobConditionally(a1, &v27);
    PspUnlockJob(v27, CurrentThread);
  }
  PspJobIoRateControlDisable(a1);
  if ( *(_QWORD *)(a1 + 1344) )
  {
    PspLockRootJobExclusive(a1, CurrentThread, &v27);
    PspLockJobConditionally(a1, &v27);
    if ( *(_QWORD *)(a1 + 1344) )
      PspRemoveIoAttribution(a1);
    PspUnlockJobConditionally(a1, &v27);
    PspUnlockJob(v27, CurrentThread);
  }
  v28 = *(_DWORD *)(a1 + 480);
  if ( v28 <= 0xFFFFFFFD )
  {
    v29 = a1;
    v30 = 2;
    v31 = 0LL;
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
    PsInvokeWin32Callout(6LL, &v29, 1LL, &v28);
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
    v23 = *(void **)(a1 + 976);
    *(_QWORD *)(a1 + 968) = 0LL;
    PsReturnSharedPoolQuota(v23);
  }
  v8 = *(_QWORD *)(a1 + 984);
  if ( v8 )
    IoFreeMiniCompletionPacket(v8);
  if ( (*(_DWORD *)(a1 + 1304) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(a1 + 880));
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000) != 0 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1112));
    v10 = (__int64 **)(a1 + 1120);
    v27 = MEMORY[0xFFFFF78000000008];
    while ( *v10 != (__int64 *)v10 )
    {
      v24 = *v10;
      v25 = **v10;
      if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v25 + 8) != v24 )
        __fastfail(3u);
      v26 = v24 - 35;
      *v10 = (__int64 *)v25;
      *(_QWORD *)(v25 + 8) = v10;
      KxAcquireSpinLock((PKSPIN_LOCK)v24 - 27);
      v26[34] = 0LL;
      if ( (*((_BYTE *)v26 + 244) & 2) != 0 )
        ExpTimerResume((PKTIMER)v26, v27);
      KxReleaseSpinLock((PKSPIN_LOCK)v26 + 8);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1112), v9);
  }
  PspGetJobLockHierarchyForDeletion(a1, v33);
  PspLockJobsAndProcessExclusive(v33, 0LL, CurrentThread);
  v11 = (__int64 *)(a1 + 1024);
  if ( (__int64 *)*v11 != v11 )
  {
    v20 = (__int64 *)*v11;
    v21 = *(__int64 ***)(a1 + 1032);
    if ( *(__int64 **)(*v11 + 8) != v11 || *v21 != v11 )
      __fastfail(3u);
    *v21 = v20;
    v20[1] = (__int64)v21;
    *(_QWORD *)(a1 + 1032) = a1 + 1024;
    *v11 = (__int64)v11;
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(a1 + 1056), 0x746C6644u);
    *(_QWORD *)(a1 + 1056) = 0LL;
  }
  PspUnlockJobsAndProcessExclusive(v33, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(a1 + 56));
  if ( *(_QWORD *)(a1 + 1096) )
  {
    v22 = *(void **)(a1 + 1104);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0x624A7350u);
      *(_QWORD *)(a1 + 1104) = 0LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000000) != 0 )
    PspDeleteSilo(a1);
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  v16 = *(_DWORD *)(a1 + 1236);
  if ( v16 )
  {
    v17 = ExMapHandleToPointer(PspUniqueJobIdTable, v16);
    ExDestroyHandle(PspUniqueJobIdTable, *(unsigned int *)(a1 + 1236), v17);
  }
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
}
