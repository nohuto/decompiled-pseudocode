/*
 * XREFs of FsRtlNotifyFilterChangeDirectoryLite @ 0x1404AAB74
 * Callers:
 *     <none>
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
 *     FsRtlNotifyInitializeSync @ 0x1404AAF64 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyCompleteIrp @ 0x1404ABF64 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyUninitializeSync @ 0x14052E214 (FsRtlNotifyUninitializeSync.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x14061FD04 (FsRtlCheckNotifyForDeleteLite.c)
 */

void __fastcall FsRtlNotifyFilterChangeDirectoryLite(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        int a5,
        PIRP Irp,
        __int64 a7,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        __int64 a9)
{
  PIRP v12; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v14; // r9d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 IsNotifyOnList; // rax
  _QWORD *PoolWithTag; // rbx
  char v18; // cl
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v22; // rdx
  __int16 v23; // cx
  PSECURITY_SUBJECT_CONTEXT v24; // rbx
  PNOTIFY_SYNC NotifySync; // [rsp+88h] [rbp+10h] BYREF
  int v26; // [rsp+98h] [rbp+20h]

  v26 = a4;
  v12 = Irp;
  if ( (_QWORD *)*a2 == a2 && !Irp )
    return;
  if ( !*a1 )
  {
    FsRtlNotifyInitializeSync(&NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync, 0LL) )
      FsRtlNotifyUninitializeSync(&NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
  }
  LOBYTE(v14) = 1;
  ++*(_DWORD *)(*a1 + 64);
  if ( !v12 )
  {
    FsRtlCheckNotifyForDeleteLite(a2);
    goto LABEL_31;
  }
  CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
  v12->IoStatus.Status = 0;
  v12->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_27;
  IsNotifyOnList = FsRtlIsNotifyOnList(a2, a3);
  PoolWithTag = (_QWORD *)IsNotifyOnList;
  if ( !IsNotifyOnList )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v14 + 127, 0x4E725346u);
    memset(PoolWithTag, 0, 0x80uLL);
    *((_WORD *)PoolWithTag + 36) |= 0x40u;
    *PoolWithTag = *a1;
    PoolWithTag[1] = a3;
    PoolWithTag[2] = a7;
    PoolWithTag[3] = SubjectContext;
    SubjectContext = 0LL;
    PoolWithTag[8] = a9;
    PoolWithTag[7] = PoolWithTag + 6;
    PoolWithTag[6] = PoolWithTag + 6;
    v18 = v26;
    v14 = 1;
    if ( (v26 & 1) != 0 )
      *((_WORD *)PoolWithTag + 36) |= 1u;
    *((_DWORD *)PoolWithTag + 19) = a5;
    if ( (v18 & 2) == 0 )
      *((_DWORD *)PoolWithTag + 24) = CurrentStackLocation->Parameters.Read.Length;
    PoolWithTag[15] = v12->Tail.Overlay.Thread->Process;
    v19 = PoolWithTag + 4;
    v20 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v20 != a2 )
      __fastfail(3u);
    *v19 = a2;
    PoolWithTag[5] = v20;
    *v20 = v19;
    a2[1] = v19;
    *((_DWORD *)PoolWithTag + 28) = 1;
    goto LABEL_15;
  }
  v23 = *(_WORD *)(IsNotifyOnList + 72);
  if ( (v23 & 4) != 0 )
  {
LABEL_27:
    CurrentStackLocation->Control |= v14;
    v12->IoStatus.Status = 267;
    goto LABEL_23;
  }
  if ( (v23 & 0x20) != 0 )
  {
    CurrentStackLocation->Control |= v14;
    v12->IoStatus.Status = -1073741738;
    goto LABEL_23;
  }
  if ( (v23 & 0xA) == 2 )
  {
    *(_WORD *)(IsNotifyOnList + 72) = v23 & 0xFFFD;
    v12->Tail.Overlay.CurrentStackLocation->Control |= v14;
    v12->IoStatus.Status = 268;
LABEL_23:
    IofCompleteRequest(v12, v14);
    goto LABEL_31;
  }
  if ( !*(_DWORD *)(IsNotifyOnList + 104) || (v23 & 8) != 0 )
  {
LABEL_15:
    v12->IoStatus.Information = (ULONG_PTR)PoolWithTag;
    v12->Tail.Overlay.CurrentStackLocation->Control |= v14;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v12->Tail.Overlay.ListEntry;
    v22 = (struct _LIST_ENTRY *)PoolWithTag[7];
    if ( v22->Flink != (struct _LIST_ENTRY *)(PoolWithTag + 6) )
      __fastfail(3u);
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(PoolWithTag + 6);
    v12->Tail.Overlay.ListEntry.Blink = v22;
    v22->Flink = &p_ListEntry->ListEntry;
    PoolWithTag[7] = p_ListEntry;
    _InterlockedAdd((volatile signed __int32 *)PoolWithTag + 28, v14);
    FsRtlNotifySetCancelRoutine((__int64)v12, 0LL);
    goto LABEL_31;
  }
  *(_DWORD *)(IsNotifyOnList + 104) = 0;
  *(_DWORD *)(IsNotifyOnList + 108) = 0;
  FsRtlNotifyCompleteIrp(v12, 0);
LABEL_31:
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
  v24 = SubjectContext;
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(v24, 0);
  }
}
