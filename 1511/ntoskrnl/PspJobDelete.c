/*
 * XREFs of PspJobDelete @ 0x1400C49F4
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpTimerResume @ 0x1400EEB44 (ExpTimerResume.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x140151F80 (ZwDeleteWnfStateName.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IoDeleteFlow @ 0x1401BD6FC (IoDeleteFlow.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x1403EC4B0 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1403EC4CC (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x1403ECDA8 (PspLockRootJobExclusive.c)
 *     PspEmptyPropertySet @ 0x1403F1EBC (PspEmptyPropertySet.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     PsReturnSharedPoolQuota @ 0x14046C2DC (PsReturnSharedPoolQuota.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x140486B2C (PspGetJobLockHierarchyForDeletion.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140486FF4 (PspUnlockJobsAndProcessExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x140487158 (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobListExclusive @ 0x140487758 (PspUnlockJobListExclusive.c)
 *     PspLockJobListExclusive @ 0x140487794 (PspLockJobListExclusive.c)
 *     PspRemoveCpuRateControl @ 0x1404877D8 (PspRemoveCpuRateControl.c)
 *     IoFreeMiniCompletionPacket @ 0x140487948 (IoFreeMiniCompletionPacket.c)
 *     PspDeleteSilo @ 0x140640348 (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x140642198 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x1406423B4 (PspRemoveRateControl.c)
 */

void __fastcall PspJobDelete(char *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rsi
  void *v4; // rcx
  __int64 v5; // rcx
  char **v6; // rdx
  PVOID *v7; // rcx
  void *v8; // rcx
  KIRQL v9; // r13
  __int64 **v10; // rsi
  char *v11; // rax
  __int64 v12; // r8
  char **v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 *v18; // r14
  __int64 v19; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-41h]
  char *v21; // [rsp+48h] [rbp-39h] BYREF
  int v22; // [rsp+50h] [rbp-31h]
  __int64 v23; // [rsp+58h] [rbp-29h]
  _QWORD v24[5]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v25[40]; // [rsp+88h] [rbp+7h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( *((_QWORD *)Object + 125) || *((_QWORD *)Object + 160) || *((_QWORD *)Object + 161) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v19);
    PspLockJobConditionally(Object, &v19);
    if ( *((_QWORD *)Object + 125) )
      PspRemoveCpuRateControl(Object);
    v3 = *((_QWORD *)Object + 160);
    if ( v3 )
    {
      memset(v24, 0, sizeof(v24));
      LODWORD(v24[4]) |= 4u;
      v24[0] = *(_QWORD *)(v3 + 56);
      PspNetRateControlDispatch(v24);
      PspRemoveRateControl(Object, 0LL);
    }
    if ( *((_QWORD *)Object + 161) )
    {
      IoDeleteFlow(Object + 1232);
      PspRemoveRateControl(Object, 0LL);
    }
    PspUnlockJobConditionally(Object, &v19);
    PspUnlockJob(v19, CurrentThread);
  }
  v20 = *((_DWORD *)Object + 120);
  if ( v20 <= 0xFFFFFFFD )
  {
    v21 = Object;
    v22 = 2;
    v23 = 0LL;
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
    PsInvokeWin32Callout(6LL, &v21, 1LL);
    PspUnlockJob(Object, CurrentThread);
  }
  v4 = (void *)*((_QWORD *)Object + 57);
  *((_DWORD *)Object + 64) = 0;
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
    *((_QWORD *)Object + 57) = 0LL;
  }
  v5 = *((_QWORD *)Object + 54);
  if ( v5 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v5 + 8));
    ExFreePoolWithTag(*((PVOID *)Object + 54), 0x614A7350u);
    PsReturnSharedPoolQuota(*((PVOID *)Object + 55));
  }
  PspLockJobListExclusive(CurrentThread);
  v6 = (char **)*((_QWORD *)Object + 3);
  v7 = (PVOID *)*((_QWORD *)Object + 4);
  if ( v6[1] != Object + 24 || *v7 != Object + 24 )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (char *)v7;
  PspUnlockJobListExclusive(CurrentThread);
  PspEmptyPropertySet(Object + 1256);
  v8 = (void *)*((_QWORD *)Object + 122);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x624A7350u);
    v15 = (void *)*((_QWORD *)Object + 123);
    *((_QWORD *)Object + 122) = 0LL;
    PsReturnSharedPoolQuota(v15);
  }
  if ( *((_QWORD *)Object + 124) )
    IoFreeMiniCompletionPacket();
  if ( (*((_DWORD *)Object + 324) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)Object + 111);
  if ( (*((_DWORD *)Object + 324) & 0x40000) != 0 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 151);
    v10 = (__int64 **)(Object + 1216);
    v19 = MEMORY[0xFFFFF78000000008];
    while ( *v10 != (__int64 *)v10 )
    {
      v16 = *v10;
      v17 = **v10;
      if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v17 + 8) != v16 )
        __fastfail(3u);
      v18 = v16 - 35;
      *v10 = (__int64 *)v17;
      *(_QWORD *)(v17 + 8) = v10;
      KxAcquireSpinLock((PKSPIN_LOCK)v16 - 27);
      v18[34] = 0LL;
      if ( (*((_BYTE *)v18 + 244) & 2) != 0 )
        ExpTimerResume((PKTIMER)v18);
      KxReleaseSpinLock((PKSPIN_LOCK)v18 + 8);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)Object + 151, v9);
  }
  PspGetJobLockHierarchyForDeletion(Object, v25);
  PspLockJobsAndProcessExclusive(v25, 0LL, CurrentThread);
  v11 = Object + 1032;
  if ( *(char **)v11 != v11 )
  {
    v12 = *(_QWORD *)v11;
    v13 = (char **)*((_QWORD *)Object + 130);
    if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 || *v13 != v11 )
      __fastfail(3u);
    *v13 = (char *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    *((_QWORD *)Object + 130) = Object + 1032;
    *(_QWORD *)v11 = v11;
    ObDereferenceObjectDeferDeleteWithTag(*((PVOID *)Object + 133), 0x746C6644u);
    *((_QWORD *)Object + 133) = 0LL;
  }
  PspUnlockJobsAndProcessExclusive(v25, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(Object + 56));
  if ( *((_QWORD *)Object + 137) )
  {
    v14 = (void *)*((_QWORD *)Object + 138);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0x624A7350u);
      *((_QWORD *)Object + 138) = 0LL;
    }
  }
  if ( *((_QWORD *)Object + 156) )
    PspDeleteSilo(Object);
}
