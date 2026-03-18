/*
 * XREFs of FsRtlLookupPerFileObjectContext @ 0x1400C7FB0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlLookupPerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  _QWORD *FileObjectExtension; // rax
  unsigned __int64 v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v9; // rbx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v10; // r12
  struct _KTHREAD *v11; // rbp
  unsigned int AbEntrySummary; // edx
  __int64 v13; // rcx
  char *v14; // r15
  int SessionId; // eax
  __int16 v16; // ax
  unsigned __int64 v17; // rax
  signed __int64 v18; // rax
  unsigned __int64 v19; // rtt
  struct _KTHREAD *v20; // rdx
  __int16 v21; // ax
  $E81C3296F15336D9BF9B2D43BB137B25 *v22; // rcx
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
  if ( !KiAbEnabled )
  {
    v14 = 0LL;
    goto LABEL_16;
  }
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
    goto LABEL_13;
  }
  if ( v7 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(v11->ApcState.Process);
  else
    SessionId = -1;
  *((_DWORD *)v14 + 10) = SessionId;
  FileObject = (PFILE_OBJECT)0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v14 + 4) = v7 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_13:
  v16 = v11->SpecialApcDisable + 1;
  v11->SpecialApcDisable = v16;
  if ( !v16 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery((__int64)FileObject);
LABEL_16:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v7, (__int64)v14, v7);
  if ( v14 )
    v14[26] |= 1u;
  if ( InstanceId )
  {
    v17 = *(_QWORD *)(v7 + 8);
    if ( v17 == v7 + 8 )
      goto LABEL_25;
    while ( *(PVOID *)(v17 + 16) != OwnerId || *(PVOID *)(v17 + 24) != InstanceId )
    {
      v17 = *(_QWORD *)v17;
      if ( v17 == v7 + 8 )
        goto LABEL_25;
    }
    goto LABEL_24;
  }
  if ( !OwnerId )
  {
    v24 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 8);
    if ( *v24 != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v24 )
      v10 = *v24;
    goto LABEL_25;
  }
  v17 = *(_QWORD *)(v7 + 8);
  if ( v17 != v7 + 8 )
  {
    while ( *(PVOID *)(v17 + 16) != OwnerId )
    {
      v17 = *(_QWORD *)v17;
      if ( v17 == v7 + 8 )
        goto LABEL_25;
    }
LABEL_24:
    v10 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v17;
  }
LABEL_25:
  _m_prefetchw((const void *)v7);
  v18 = *(_QWORD *)v7;
  if ( (*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v9 = v18 - 16;
  if ( (v18 & 2) != 0
    || (v19 = *(_QWORD *)v7, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v9, v18)) )
  {
    ExfReleasePushLock((_QWORD *)v7);
  }
  KeAbPostRelease(v7);
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21 )
  {
    v22 = &v20->152;
    if ( ($E81C3296F15336D9BF9B2D43BB137B25 *)v22->ApcState.ApcListHead[0].Flink != v22 && !v20->SpecialApcDisable )
      KiCheckForKernelApcDelivery((__int64)v22);
  }
  return v10;
}
