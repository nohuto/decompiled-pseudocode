/*
 * XREFs of FsRtlLookupPerFileObjectContext @ 0x14008B350
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlLookupPerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  _QWORD *FileObjectExtension; // rax
  ULONG_PTR v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v9; // rbx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v10; // r12
  struct _KTHREAD *v11; // rbp
  unsigned int AbEntrySummary; // edx
  __int64 v13; // rcx
  char *v14; // r15
  int SessionId; // eax
  __int16 v16; // ax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *Flink; // rax
  signed __int64 v18; // rax
  volatile signed __int64 v19; // rtt
  struct _KTHREAD *v20; // rdx
  __int16 v21; // ax
  $2B8565053CDC740D4E4887693DD8AC9E *v22; // rcx
  __int64 AbOrphanedEntrySummary; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT **v24; // rax

  if ( !FileObject )
    return 0LL;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension )
    return 0LL;
  if ( FileObjectExtension == IopRevocationExtension )
    return 0LL;
  v7 = FileObjectExtension[4];
  if ( !v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v10 = 0LL;
  --CurrentThread->KernelApcDisable;
  v11 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v11, v7, KeGetCurrentIrql(), 0LL);
  --v11->SpecialApcDisable;
  if ( !v11->AbEntrySummary )
  {
    if ( !v11->AbOrphanedEntrySummary )
    {
      v14 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v11, v7);
      goto LABEL_43;
    }
    AbOrphanedEntrySummary = v11->AbOrphanedEntrySummary;
    v11->AbOrphanedEntrySummary = 0;
    v11->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v11->AbEntrySummary;
  _BitScanForward((unsigned int *)&v13, AbEntrySummary);
  v11->AbEntrySummary = AbEntrySummary & ~(1 << v13);
  FileObject = (PFILE_OBJECT)(96 * v13);
  v14 = (char *)v11->LockEntries + (_QWORD)FileObject;
  if ( !v14 )
  {
LABEL_43:
    _interlockedbittestandset((volatile signed __int32 *)&v11->116 + 1, 0xFu);
    goto LABEL_12;
  }
  if ( v7 < qword_140326950 || v7 >= qword_140326950 + 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx(v11->ApcState.Process);
  *((_DWORD *)v14 + 10) = SessionId;
  FileObject = (PFILE_OBJECT)0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v14 + 4) = v7 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_12:
  v16 = v11->SpecialApcDisable + 1;
  v11->SpecialApcDisable = v16;
  if ( !v16 && ($2B8565053CDC740D4E4887693DD8AC9E *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery(FileObject);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v14, v7);
  if ( v14 )
    v14[26] |= 1u;
  if ( InstanceId )
  {
    Flink = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 8);
    if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v7 + 8) )
      goto LABEL_24;
    while ( Flink->OwnerId != OwnerId || Flink->InstanceId != InstanceId )
    {
      Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
      if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v7 + 8) )
        goto LABEL_24;
    }
    goto LABEL_23;
  }
  if ( !OwnerId )
  {
    v24 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 8);
    if ( *v24 != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v24 )
      v10 = *v24;
    goto LABEL_24;
  }
  Flink = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 8);
  if ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v7 + 8) )
  {
    while ( Flink->OwnerId != OwnerId )
    {
      Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
      if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v7 + 8) )
        goto LABEL_24;
    }
LABEL_23:
    v10 = Flink;
  }
LABEL_24:
  _m_prefetchw((const void *)v7);
  v18 = *(_QWORD *)v7;
  if ( (*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v9 = v18 - 16;
  if ( (v18 & 2) != 0
    || (v19 = *(_QWORD *)v7, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v9, v18)) )
  {
    ExfReleasePushLock(v7);
  }
  KeAbPostRelease(v7);
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21 )
  {
    v22 = &v20->152;
    if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v22->ApcState.ApcListHead[0].Flink != v22 && !v20->SpecialApcDisable )
      KiCheckForKernelApcDelivery(v22);
  }
  return v10;
}
