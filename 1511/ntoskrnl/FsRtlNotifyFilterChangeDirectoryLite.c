/*
 * XREFs of FsRtlNotifyFilterChangeDirectoryLite @ 0x14048E028
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1400C99C8 (FsRtlNotifySetCancelRoutine.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     FsRtlNotifyInitializeSync @ 0x14048D7FC (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyCompleteIrp @ 0x14048DEC4 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlIsNotifyOnList @ 0x14048E34C (FsRtlIsNotifyOnList.c)
 *     FsRtlNotifyUninitializeSync @ 0x1404C412C (FsRtlNotifyUninitializeSync.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x1405F58A8 (FsRtlCheckNotifyForDeleteLite.c)
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
  unsigned int v24; // r8d
  PSECURITY_SUBJECT_CONTEXT v25; // rbx
  PNOTIFY_SYNC NotifySync; // [rsp+88h] [rbp+10h] BYREF
  int v27; // [rsp+98h] [rbp+20h]

  v27 = a4;
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
    v18 = v27;
    v14 = 1;
    if ( (v27 & 1) != 0 )
      *((_WORD *)PoolWithTag + 36) |= 1u;
    *((_DWORD *)PoolWithTag + 19) = a5;
    if ( (v18 & 2) == 0 )
      *((_DWORD *)PoolWithTag + 24) = CurrentStackLocation->Parameters.Read.Length;
    PoolWithTag[15] = v12->Tail.Overlay.Thread->Process;
    v19 = PoolWithTag + 4;
    v20 = (_QWORD *)a2[1];
    PoolWithTag[4] = a2;
    PoolWithTag[5] = v20;
    if ( (_QWORD *)*v20 != a2 )
      __fastfail(3u);
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
  v24 = *(_DWORD *)(IsNotifyOnList + 104);
  if ( !v24 || (v23 & 8) != 0 )
  {
LABEL_15:
    v12->IoStatus.Information = (ULONG_PTR)PoolWithTag;
    v12->Tail.Overlay.CurrentStackLocation->Control |= v14;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v12->Tail.Overlay.ListEntry;
    v22 = (struct _LIST_ENTRY *)PoolWithTag[7];
    v12->Tail.Overlay.ListEntry.Flink = (struct _LIST_ENTRY *)(PoolWithTag + 6);
    v12->Tail.Overlay.ListEntry.Blink = v22;
    if ( v22->Flink != (struct _LIST_ENTRY *)(PoolWithTag + 6) )
      __fastfail(3u);
    v22->Flink = &p_ListEntry->ListEntry;
    PoolWithTag[7] = p_ListEntry;
    _InterlockedAdd((volatile signed __int32 *)PoolWithTag + 28, v14);
    FsRtlNotifySetCancelRoutine((__int64)v12, 0LL);
    goto LABEL_31;
  }
  *(_DWORD *)(IsNotifyOnList + 104) = 0;
  *(_DWORD *)(IsNotifyOnList + 108) = 0;
  FsRtlNotifyCompleteIrp(v12, IsNotifyOnList, v24, 0, 0);
LABEL_31:
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
  v25 = SubjectContext;
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(v25, 0);
  }
}
