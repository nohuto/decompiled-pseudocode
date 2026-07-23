/*
 * XREFs of FsRtlNotifyFilterChangeDirectory @ 0x1404AA788
 * Callers:
 *     FsRtlNotifyChangeDirectory @ 0x14061FD48 (FsRtlNotifyChangeDirectory.c)
 *     FsRtlNotifyFullChangeDirectory @ 0x14061FE58 (FsRtlNotifyFullChangeDirectory.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     FsRtlNotifySetCancelRoutine @ 0x140076F7C (FsRtlNotifySetCancelRoutine.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     FsRtlIsNotifyOnList @ 0x1404AAE98 (FsRtlIsNotifyOnList.c)
 *     FsRtlNotifyCompleteIrp @ 0x1404ABF64 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlCheckNotifyForDelete @ 0x14061FCA8 (FsRtlCheckNotifyForDelete.c)
 */

void __stdcall FsRtlNotifyFilterChangeDirectory(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PVOID FsContext,
        PSTRING FullDirectoryName,
        BOOLEAN WatchTree,
        BOOLEAN IgnoreBuffer,
        ULONG CompletionFilter,
        PIRP NotifyIrp,
        PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PFILTER_REPORT_CHANGE FilterCallback)
{
  PVOID v12; // r9
  struct _KTHREAD *CurrentThread; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 IsNotifyOnList; // rax
  _QWORD *PoolWithTag; // rbx
  __int16 v19; // cx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v21; // rdx
  struct _LIST_ENTRY *v22; // rax
  struct _LIST_ENTRY *Blink; // rcx

  v12 = FsContext;
  if ( NotifyList->Flink == NotifyList && !NotifyIrp )
    return;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v12 = FsContext;
  }
  ++*((_DWORD *)NotifySync + 16);
  if ( !NotifyIrp )
  {
    FsRtlCheckNotifyForDelete(NotifyList, v12);
    goto LABEL_36;
  }
  CurrentStackLocation = NotifyIrp->Tail.Overlay.CurrentStackLocation;
  NotifyIrp->IoStatus.Status = 0;
  NotifyIrp->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_24;
  IsNotifyOnList = FsRtlIsNotifyOnList(NotifyList, v12);
  PoolWithTag = (_QWORD *)IsNotifyOnList;
  if ( !IsNotifyOnList )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x98uLL, 0x4E725346u);
    memset(PoolWithTag, 0, 0x98uLL);
    *PoolWithTag = NotifySync;
    PoolWithTag[1] = FsContext;
    PoolWithTag[16] = CurrentStackLocation->FileObject->FsContext;
    PoolWithTag[2] = TraverseCallback;
    PoolWithTag[3] = SubjectContext;
    SubjectContext = 0LL;
    PoolWithTag[8] = FilterCallback;
    PoolWithTag[17] = FullDirectoryName;
    PoolWithTag[7] = PoolWithTag + 6;
    PoolWithTag[6] = PoolWithTag + 6;
    if ( WatchTree )
      *((_WORD *)PoolWithTag + 36) |= 1u;
    if ( FullDirectoryName )
    {
      if ( FullDirectoryName->Length < 2u || FullDirectoryName->Buffer[1] )
        *((_BYTE *)PoolWithTag + 144) = 1;
      else
        *((_BYTE *)PoolWithTag + 144) = 2;
      if ( FullDirectoryName->Length == *((unsigned __int8 *)PoolWithTag + 144) )
        *((_WORD *)PoolWithTag + 36) |= 0x10u;
    }
    else
    {
      *((_BYTE *)PoolWithTag + 144) = 1;
    }
    *((_DWORD *)PoolWithTag + 19) = CompletionFilter;
    if ( !IgnoreBuffer )
      *((_DWORD *)PoolWithTag + 24) = CurrentStackLocation->Parameters.Read.Length;
    PoolWithTag[15] = NotifyIrp->Tail.Overlay.Thread->Process;
    v22 = (struct _LIST_ENTRY *)(PoolWithTag + 4);
    Blink = NotifyList->Blink;
    if ( Blink->Flink != NotifyList )
      __fastfail(3u);
    v22->Flink = NotifyList;
    PoolWithTag[5] = Blink;
    Blink->Flink = v22;
    NotifyList->Blink = v22;
    *((_DWORD *)PoolWithTag + 28) = 1;
    goto LABEL_11;
  }
  v19 = *(_WORD *)(IsNotifyOnList + 72);
  if ( (v19 & 4) != 0 )
  {
LABEL_24:
    CurrentStackLocation->Control |= 1u;
    NotifyIrp->IoStatus.Status = 267;
LABEL_26:
    IofCompleteRequest(NotifyIrp, 1);
    goto LABEL_36;
  }
  if ( (v19 & 0x20) != 0 )
  {
    CurrentStackLocation->Control |= 1u;
    NotifyIrp->IoStatus.Status = -1073741738;
    goto LABEL_26;
  }
  if ( (v19 & 0xA) == 2 )
  {
    *(_WORD *)(IsNotifyOnList + 72) = v19 & 0xFFFD;
    NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    NotifyIrp->IoStatus.Status = 268;
    goto LABEL_26;
  }
  if ( !*(_DWORD *)(IsNotifyOnList + 104) || (v19 & 8) != 0 )
  {
LABEL_11:
    NotifyIrp->IoStatus.Information = (ULONG_PTR)PoolWithTag;
    NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&NotifyIrp->Tail.Overlay.ListEntry;
    v21 = (struct _LIST_ENTRY *)PoolWithTag[7];
    if ( v21->Flink != (struct _LIST_ENTRY *)(PoolWithTag + 6) )
      __fastfail(3u);
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(PoolWithTag + 6);
    NotifyIrp->Tail.Overlay.ListEntry.Blink = v21;
    v21->Flink = &p_ListEntry->ListEntry;
    PoolWithTag[7] = p_ListEntry;
    _InterlockedIncrement((volatile signed __int32 *)PoolWithTag + 28);
    FsRtlNotifySetCancelRoutine((__int64)NotifyIrp, 0LL);
    goto LABEL_36;
  }
  *(_DWORD *)(IsNotifyOnList + 104) = 0;
  *(_DWORD *)(IsNotifyOnList + 108) = 0;
  FsRtlNotifyCompleteIrp(NotifyIrp, 0);
LABEL_36:
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
  if ( SubjectContext )
  {
    if ( FullDirectoryName )
    {
      SeReleaseSubjectContext(SubjectContext);
      ExFreePoolWithTag(SubjectContext, 0);
    }
  }
}
