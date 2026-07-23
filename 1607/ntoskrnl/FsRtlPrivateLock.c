/*
 * XREFs of FsRtlPrivateLock @ 0x1400C2A48
 * Callers:
 *     FsRtlProcessFileLock @ 0x1401331B8 (FsRtlProcessFileLock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1400B0500 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlPrivateInsertLock @ 0x1400C2D54 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1400C34B8 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1400C3C94 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     FsRtlCompleteLockIrpReal @ 0x1401332E0 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401B8CDC (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlPrivateRemoveLock @ 0x1401B8DE8 (FsRtlPrivateRemoveLock.c)
 */

BOOLEAN __stdcall FsRtlPrivateLock(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        PLARGE_INTEGER Length,
        PEPROCESS ProcessId,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock,
        PIO_STATUS_BLOCK Iosb,
        PIRP Irp,
        PVOID Context,
        BOOLEAN AlreadySynchronized)
{
  PLARGE_INTEGER v13; // rax
  KSPIN_LOCK *v16; // rdi
  KSPIN_LOCK *LockInformation; // r15
  LONGLONG QuadPart; // rcx
  char *v19; // rcx
  char v20; // al
  PIO_STATUS_BLOCK v21; // rbx
  BOOLEAN v22; // r14
  _QWORD *v23; // rax
  __int64 v25; // r8
  NTSTATUS v26; // edi
  char v27; // [rsp+68h] [rbp-78h]
  KIRQL NewIrql; // [rsp+69h] [rbp-77h]
  int v29; // [rsp+6Ch] [rbp-74h] BYREF
  KSPIN_LOCK *v30; // [rsp+70h] [rbp-70h]
  KSPIN_LOCK *v31; // [rsp+78h] [rbp-68h]
  _QWORD v32[2]; // [rsp+80h] [rbp-60h] BYREF
  BOOLEAN v33; // [rsp+90h] [rbp-50h]
  ULONG v34; // [rsp+94h] [rbp-4Ch]
  PFILE_OBJECT v35; // [rsp+98h] [rbp-48h]
  PEPROCESS v36; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-38h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+B0h] [rbp-30h]

  v13 = FileOffset;
  v27 = 0;
  v30 = 0LL;
  v16 = 0LL;
  v31 = 0LL;
  NewIrql = -1;
  LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
  v30 = LockInformation;
  if ( !LockInformation )
  {
    if ( !FsRtlPrivateInitializeFileLock(FileLock, Irp == 0LL) )
      goto LABEL_14;
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
    v30 = LockInformation;
    v13 = FileOffset;
  }
  v32[0] = v13->QuadPart;
  QuadPart = Length->QuadPart;
  v32[1] = QuadPart;
  v37 = v32[0] + QuadPart - 1;
  v34 = Key;
  v35 = FileObject;
  v36 = ProcessId;
  v33 = ExclusiveLock;
  v16 = LockInformation + 3;
  v31 = LockInformation + 3;
  if ( v37 < v32[0] && QuadPart )
  {
    v21 = Iosb;
    Iosb->Status = -1073741407;
    goto LABEL_10;
  }
  v27 = 1;
  NewIrql = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v19 = (char *)(LockInformation + 3);
  if ( ExclusiveLock )
    v20 = FsRtlPrivateCheckForExclusiveLockAccess(v19, v32);
  else
    v20 = FsRtlPrivateCheckForSharedLockAccess(v19, v32);
  if ( v20 )
  {
    if ( (unsigned __int8)FsRtlPrivateInsertLock(LockInformation, FileObject, v32) )
    {
      v21 = Iosb;
      Iosb->Status = 0;
LABEL_10:
      v22 = 1;
      goto LABEL_29;
    }
    if ( Irp )
    {
      KeReleaseSpinLock(LockInformation + 3, NewIrql);
      RtlRaiseStatus(-1073741670);
    }
  }
  else
  {
    if ( FailImmediately )
    {
      v21 = Iosb;
      Iosb->Status = -1073741739;
      goto LABEL_10;
    }
    if ( Irp )
    {
      v23 = ExAllocateFromNPagedLookasideList(&FsRtlWaitingLockLookasideList);
      if ( !v23 )
      {
        KeReleaseSpinLock(LockInformation + 3, NewIrql);
        RtlRaiseStatus(-1073741670);
      }
      v23[3] = Irp;
      v23[2] = Context;
      v23[1] = LockInformation[1];
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation->Control |= 1u;
      *v23 = 0LL;
      if ( LockInformation[6] )
        *(_QWORD *)LockInformation[7] = v23;
      else
        LockInformation[6] = (KSPIN_LOCK)v23;
      LockInformation[7] = (KSPIN_LOCK)v23;
      Irp->IoStatus.Information = (ULONG_PTR)LockInformation;
      _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)FsRtlPrivateCancelFileLockIrp);
      if ( Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
      {
        Irp->CancelIrql = NewIrql;
        FsRtlPrivateCancelFileLockIrp(0LL, Irp);
        v27 = 0;
      }
      v21 = Iosb;
      Iosb->Status = 259;
      LockInformation = v30;
      v16 = v31;
      goto LABEL_10;
    }
  }
LABEL_14:
  v22 = 0;
  v21 = Iosb;
LABEL_29:
  if ( v27 )
    KeReleaseSpinLock(v16, NewIrql);
  if ( Irp && v21->Status != 259 )
  {
    ObfReferenceObjectWithTag(FileObject, 0x746C6644u);
    FsRtlCompleteLockIrpReal(
      LockInformation[1],
      (_DWORD)Context,
      (_DWORD)Irp,
      v21->Status,
      (__int64)&v29,
      (__int64)FileObject);
    v26 = v29;
    if ( v29 < 0 && v21->Status >= 0 )
    {
      LOBYTE(v25) = 1;
      FsRtlPrivateRemoveLock(LockInformation, v32, v25);
    }
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    v21->Status = v26;
  }
  return v22;
}
