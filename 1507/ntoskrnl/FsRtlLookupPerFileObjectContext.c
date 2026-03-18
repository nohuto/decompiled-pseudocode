/*
 * XREFs of FsRtlLookupPerFileObjectContext @ 0x140101DA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlLookupPerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  __int64 v3; // r9
  PVOID v5; // rdi
  _QWORD *FileObjectExtension; // rax
  unsigned __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v10; // rbx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v11; // r12
  struct _KTHREAD *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r15
  int SessionId; // eax
  __int16 v16; // ax
  unsigned __int64 v17; // rax
  signed __int64 v18; // rax
  unsigned __int64 v19; // rtt
  struct _KTHREAD *v20; // rdx
  __int16 v21; // ax
  __int64 AbOrphanedEntrySummary; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT **v23; // rax

  v5 = OwnerId;
  if ( !FileObject )
    return 0LL;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension )
    return 0LL;
  if ( FileObjectExtension == IopRevocationExtension )
    return 0LL;
  v8 = FileObjectExtension[4];
  if ( !v8 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  v11 = 0LL;
  --CurrentThread->KernelApcDisable;
  if ( !KiAbEnabled )
  {
    v14 = 0LL;
    goto LABEL_16;
  }
  v12 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v12, v8, KeGetCurrentIrql(), 0LL);
  --v12->SpecialApcDisable;
  if ( !v12->AbEntrySummary )
  {
    if ( !v12->AbOrphanedEntrySummary )
    {
      v14 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v12, v8);
      goto LABEL_42;
    }
    AbOrphanedEntrySummary = v12->AbOrphanedEntrySummary;
    v12->AbOrphanedEntrySummary = 0;
    v12->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  OwnerId = (PVOID)v12->AbEntrySummary;
  _BitScanForward((unsigned int *)&v13, (unsigned int)OwnerId);
  v12->AbEntrySummary = (unsigned __int8)OwnerId & ~(1 << v13);
  v14 = (__int64)&v12->LockEntries[v13];
  if ( !v14 )
  {
LABEL_42:
    _interlockedbittestandset((volatile signed __int32 *)&v12->116 + 1, 0xFu);
    goto LABEL_13;
  }
  if ( v8 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(v12->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v14 + 40) = SessionId;
  *(_QWORD *)(v14 + 32) = v8 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_13:
  v16 = v12->SpecialApcDisable + 1;
  v12->SpecialApcDisable = v16;
  if ( !v16 && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
    KiCheckForKernelApcDelivery();
LABEL_16:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v8, v14, v8, v3);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  if ( InstanceId )
  {
    v17 = *(_QWORD *)(v8 + 8);
    if ( v17 == v8 + 8 )
      goto LABEL_25;
    while ( *(PVOID *)(v17 + 16) != v5 || *(PVOID *)(v17 + 24) != InstanceId )
    {
      v17 = *(_QWORD *)v17;
      if ( v17 == v8 + 8 )
        goto LABEL_25;
    }
    goto LABEL_24;
  }
  if ( !v5 )
  {
    v23 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v8 + 8);
    if ( *v23 != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v23 )
      v11 = *v23;
    goto LABEL_25;
  }
  v17 = *(_QWORD *)(v8 + 8);
  if ( v17 != v8 + 8 )
  {
    while ( *(PVOID *)(v17 + 16) != v5 )
    {
      v17 = *(_QWORD *)v17;
      if ( v17 == v8 + 8 )
        goto LABEL_25;
    }
LABEL_24:
    v11 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v17;
  }
LABEL_25:
  _m_prefetchw((const void *)v8);
  v18 = *(_QWORD *)v8;
  if ( (*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v10 = v18 - 16;
  if ( (v18 & 2) != 0
    || (v19 = *(_QWORD *)v8, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v10, v18)) )
  {
    ExfReleasePushLock((_QWORD *)v8, (__int64)OwnerId);
  }
  KeAbPostRelease(v8);
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
    && !v20->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v11;
}
