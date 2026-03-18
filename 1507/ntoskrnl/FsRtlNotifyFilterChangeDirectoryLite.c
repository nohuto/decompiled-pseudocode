/*
 * XREFs of FsRtlNotifyFilterChangeDirectoryLite @ 0x1404A6118
 * Callers:
 *     <none>
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
 *     FsRtlNotifyInitializeSync @ 0x1404A7068 (FsRtlNotifyInitializeSync.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     FsRtlNotifyUninitializeSync @ 0x14055B258 (FsRtlNotifyUninitializeSync.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x14066E944 (FsRtlCheckNotifyForDeleteLite.c)
 */

void __fastcall FsRtlNotifyFilterChangeDirectoryLite(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        PIRP Irp,
        __int64 a7,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        __int64 a9)
{
  PIRP v11; // rdi
  ULONG_PTR v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 IsNotifyOnList; // rax
  _QWORD *PoolWithTag; // rbx
  char v18; // cl
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v22; // rdx
  __int16 v23; // cx
  ULONG_PTR v24; // rbx
  signed __int32 v25; // eax
  PSECURITY_SUBJECT_CONTEXT v26; // rbx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-88h]
  struct _KTHREAD *v28; // [rsp+38h] [rbp-80h]
  PNOTIFY_SYNC NotifySync; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v30; // [rsp+D0h] [rbp+18h]
  int v31; // [rsp+D8h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v11 = Irp;
  if ( (_QWORD *)*a2 == a2 && !Irp )
    return;
  if ( !*a1 )
  {
    FsRtlNotifyInitializeSync(&NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync, 0LL) )
      FsRtlNotifyUninitializeSync(&NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  v12 = *a1;
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    v28 = KeGetCurrentThread();
    v13 = KeAbPreAcquire(v12, 0LL, 0LL, a4);
    v14 = v13;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v12, 0) )
      ExpAcquireFastMutexContended(v12, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    *(_QWORD *)(v12 + 8) = v28;
    *(_QWORD *)(*a1 + 56) = CurrentThread;
  }
  ++*(_DWORD *)(*a1 + 64);
  if ( !v11 )
  {
    FsRtlCheckNotifyForDeleteLite(a2);
    goto LABEL_35;
  }
  CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
  v11->IoStatus.Status = 0;
  v11->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_31;
  IsNotifyOnList = FsRtlIsNotifyOnList(a2, v30);
  PoolWithTag = (_QWORD *)IsNotifyOnList;
  if ( !IsNotifyOnList )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x80uLL, 0x4E725346u);
    memset(PoolWithTag, 0, 0x80uLL);
    *((_WORD *)PoolWithTag + 36) |= 0x40u;
    *PoolWithTag = *a1;
    PoolWithTag[1] = v30;
    PoolWithTag[2] = a7;
    PoolWithTag[3] = SubjectContext;
    SubjectContext = 0LL;
    PoolWithTag[8] = a9;
    PoolWithTag[7] = PoolWithTag + 6;
    PoolWithTag[6] = PoolWithTag + 6;
    v18 = v31;
    if ( (v31 & 1) != 0 )
      *((_WORD *)PoolWithTag + 36) |= 1u;
    *((_DWORD *)PoolWithTag + 19) = a5;
    if ( (v18 & 2) == 0 )
      *((_DWORD *)PoolWithTag + 24) = CurrentStackLocation->Parameters.Read.Length;
    PoolWithTag[15] = v11->Tail.Overlay.Thread->Process;
    v19 = PoolWithTag + 4;
    v20 = (_QWORD *)a2[1];
    PoolWithTag[4] = a2;
    PoolWithTag[5] = v20;
    if ( (_QWORD *)*v20 != a2 )
      __fastfail(3u);
    *v20 = v19;
    a2[1] = v19;
    *((_DWORD *)PoolWithTag + 28) = 1;
    goto LABEL_19;
  }
  v23 = *(_WORD *)(IsNotifyOnList + 72);
  if ( (v23 & 4) != 0 )
  {
LABEL_31:
    CurrentStackLocation->Control |= 1u;
    v11->IoStatus.Status = 267;
    goto LABEL_27;
  }
  if ( (v23 & 0x20) != 0 )
  {
    CurrentStackLocation->Control |= 1u;
    v11->IoStatus.Status = -1073741738;
    goto LABEL_27;
  }
  if ( (v23 & 0xA) == 2 )
  {
    *(_WORD *)(IsNotifyOnList + 72) = v23 & 0xFFFD;
    v11->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    v11->IoStatus.Status = 268;
LABEL_27:
    IofCompleteRequest(v11, 1);
    goto LABEL_35;
  }
  if ( !*(_DWORD *)(IsNotifyOnList + 104) || (v23 & 8) != 0 )
  {
LABEL_19:
    v11->IoStatus.Information = (ULONG_PTR)PoolWithTag;
    v11->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v11->Tail.Overlay.ListEntry;
    v22 = (struct _LIST_ENTRY *)PoolWithTag[7];
    v11->Tail.Overlay.ListEntry.Flink = (struct _LIST_ENTRY *)(PoolWithTag + 6);
    v11->Tail.Overlay.ListEntry.Blink = v22;
    if ( v22->Flink != (struct _LIST_ENTRY *)(PoolWithTag + 6) )
      __fastfail(3u);
    v22->Flink = &p_ListEntry->ListEntry;
    PoolWithTag[7] = p_ListEntry;
    _InterlockedAdd((volatile signed __int32 *)PoolWithTag + 28, 1u);
    FsRtlNotifySetCancelRoutine((__int64)v11, 0LL);
    goto LABEL_35;
  }
  *(_DWORD *)(IsNotifyOnList + 104) = 0;
  *(_DWORD *)(IsNotifyOnList + 108) = 0;
  FsRtlNotifyCompleteIrp(v11, 0);
LABEL_35:
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    v24 = *a1;
    *(_QWORD *)(v24 + 8) = 0LL;
    v25 = _InterlockedCompareExchange((volatile signed __int32 *)v24, 1, 0);
    if ( v25 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v24, v25);
    KeAbPostRelease(v24);
  }
  v26 = SubjectContext;
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(v26, 0);
  }
}
