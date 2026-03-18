/*
 * XREFs of FsRtlNotifyFilterChangeDirectory @ 0x1404A70C4
 * Callers:
 *     FsRtlNotifyChangeDirectory @ 0x14066E988 (FsRtlNotifyChangeDirectory.c)
 *     FsRtlNotifyFullChangeDirectory @ 0x14066EB24 (FsRtlNotifyFullChangeDirectory.c)
 *     VerifierFsRtlNotifyFilterChangeDirectory @ 0x140741D3C (VerifierFsRtlNotifyFilterChangeDirectory.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     FsRtlNotifySetCancelRoutine @ 0x140073DB8 (FsRtlNotifySetCancelRoutine.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FsRtlIsNotifyOnList @ 0x1404A64CC (FsRtlIsNotifyOnList.c)
 *     FsRtlNotifyCompleteIrp @ 0x1404A65B4 (FsRtlNotifyCompleteIrp.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     FsRtlCheckNotifyForDelete @ 0x14066E8E8 (FsRtlCheckNotifyForDelete.c)
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
  struct _KTHREAD *CurrentThread; // r13
  __int64 v14; // rax
  __int64 v15; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _QWORD *v17; // rax
  _QWORD *PoolWithTag; // rbx
  __int16 v19; // cx
  unsigned int v20; // r8d
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v22; // rdx
  struct _LIST_ENTRY *v23; // rax
  struct _LIST_ENTRY *Blink; // rcx
  signed __int32 v26; // eax
  struct _KTHREAD *v27; // [rsp+B8h] [rbp+10h]
  PVOID v28; // [rsp+C0h] [rbp+18h]

  v28 = FsContext;
  if ( NotifyList->Flink == NotifyList && !NotifyIrp )
    return;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    v27 = KeGetCurrentThread();
    v14 = KeAbPreAcquire((ULONG_PTR)NotifySync, 0LL, 0LL, (__int64)FullDirectoryName);
    v15 = v14;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)NotifySync, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)NotifySync, v14);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    *((_QWORD *)NotifySync + 1) = v27;
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    FsContext = v28;
  }
  ++*((_DWORD *)NotifySync + 16);
  if ( !NotifyIrp )
  {
    FsRtlCheckNotifyForDelete(NotifyList, FsContext);
    goto LABEL_40;
  }
  CurrentStackLocation = NotifyIrp->Tail.Overlay.CurrentStackLocation;
  NotifyIrp->IoStatus.Status = 0;
  NotifyIrp->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_28;
  v17 = FsRtlIsNotifyOnList(NotifyList, (__int64)FsContext);
  PoolWithTag = v17;
  if ( !v17 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x98uLL, 0x4E725346u);
    memset(PoolWithTag, 0, 0x98uLL);
    *PoolWithTag = NotifySync;
    PoolWithTag[1] = v28;
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
    v23 = (struct _LIST_ENTRY *)(PoolWithTag + 4);
    Blink = NotifyList->Blink;
    PoolWithTag[4] = NotifyList;
    PoolWithTag[5] = Blink;
    if ( Blink->Flink != NotifyList )
      __fastfail(3u);
    Blink->Flink = v23;
    NotifyList->Blink = v23;
    *((_DWORD *)PoolWithTag + 28) = 1;
    goto LABEL_15;
  }
  v19 = *((_WORD *)v17 + 36);
  if ( (v19 & 4) != 0 )
  {
LABEL_28:
    CurrentStackLocation->Control |= 1u;
    NotifyIrp->IoStatus.Status = 267;
LABEL_30:
    IofCompleteRequest(NotifyIrp, 1);
    goto LABEL_40;
  }
  if ( (v19 & 0x20) != 0 )
  {
    CurrentStackLocation->Control |= 1u;
    NotifyIrp->IoStatus.Status = -1073741738;
    goto LABEL_30;
  }
  if ( (v19 & 0xA) == 2 )
  {
    *((_WORD *)v17 + 36) = v19 & 0xFFFD;
    NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    NotifyIrp->IoStatus.Status = 268;
    goto LABEL_30;
  }
  v20 = *((_DWORD *)v17 + 26);
  if ( !v20 || (v19 & 8) != 0 )
  {
LABEL_15:
    NotifyIrp->IoStatus.Information = (ULONG_PTR)PoolWithTag;
    NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&NotifyIrp->Tail.Overlay.ListEntry;
    v22 = (struct _LIST_ENTRY *)PoolWithTag[7];
    NotifyIrp->Tail.Overlay.ListEntry.Flink = (struct _LIST_ENTRY *)(PoolWithTag + 6);
    NotifyIrp->Tail.Overlay.ListEntry.Blink = v22;
    if ( v22->Flink != (struct _LIST_ENTRY *)(PoolWithTag + 6) )
      __fastfail(3u);
    v22->Flink = &p_ListEntry->ListEntry;
    PoolWithTag[7] = p_ListEntry;
    _InterlockedAdd((volatile signed __int32 *)PoolWithTag + 28, 1u);
    FsRtlNotifySetCancelRoutine((__int64)NotifyIrp, 0LL);
    goto LABEL_40;
  }
  *((_DWORD *)v17 + 26) = 0;
  *((_DWORD *)v17 + 27) = 0;
  FsRtlNotifyCompleteIrp(NotifyIrp, (__int64)v17, v20, 0, 0);
LABEL_40:
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    *((_QWORD *)NotifySync + 1) = 0LL;
    v26 = _InterlockedCompareExchange((volatile signed __int32 *)NotifySync, 1, 0);
    if ( v26 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)NotifySync, v26);
    KeAbPostRelease((ULONG_PTR)NotifySync);
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
