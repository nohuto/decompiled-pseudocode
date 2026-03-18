/*
 * XREFs of FsRtlPrivateLock @ 0x1400CD704
 * Callers:
 *     FsRtlProcessFileLock @ 0x1400CCCBC (FsRtlProcessFileLock.c)
 *     VerifierFsRtlPrivateLock @ 0x1406C0614 (VerifierFsRtlPrivateLock.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400BB7D4 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlPrivateInsertLock @ 0x1400CDA14 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1400CE170 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1400CE950 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1400CEC98 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlCompleteLockIrpReal @ 0x1400CED3C (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401ACB60 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlPrivateRemoveLock @ 0x1401ACC6C (FsRtlPrivateRemoveLock.c)
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
  PFILE_OBJECT v14; // r12
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
  char v27; // [rsp+68h] [rbp-88h]
  KIRQL NewIrql; // [rsp+69h] [rbp-87h]
  int v29; // [rsp+6Ch] [rbp-84h] BYREF
  bool v30; // [rsp+70h] [rbp-80h]
  KSPIN_LOCK *v31; // [rsp+78h] [rbp-78h]
  KSPIN_LOCK *v32; // [rsp+80h] [rbp-70h]
  _QWORD v33[2]; // [rsp+88h] [rbp-68h] BYREF
  BOOLEAN v34; // [rsp+98h] [rbp-58h]
  ULONG v35; // [rsp+9Ch] [rbp-54h]
  PFILE_OBJECT v36; // [rsp+A0h] [rbp-50h]
  PEPROCESS v37; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v38; // [rsp+B0h] [rbp-40h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+B8h] [rbp-38h]

  v13 = FileOffset;
  v14 = FileObject;
  v27 = 0;
  v31 = 0LL;
  v16 = 0LL;
  v32 = 0LL;
  NewIrql = -1;
  v30 = Irp == 0LL;
  LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
  v31 = LockInformation;
  if ( !LockInformation )
  {
    LOBYTE(FileObject) = Irp == 0LL;
    if ( !(unsigned __int8)FsRtlPrivateInitializeFileLock(FileLock, FileObject) )
      goto LABEL_14;
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
    v31 = LockInformation;
    v13 = FileOffset;
  }
  v33[0] = v13->QuadPart;
  QuadPart = Length->QuadPart;
  v33[1] = QuadPart;
  v38 = v33[0] + QuadPart - 1;
  v35 = Key;
  v36 = v14;
  v37 = ProcessId;
  v34 = ExclusiveLock;
  v16 = LockInformation + 3;
  v32 = LockInformation + 3;
  if ( v38 < v33[0] && QuadPart )
  {
    v21 = Iosb;
    Iosb->Status = -1073741407;
    goto LABEL_10;
  }
  v27 = 1;
  NewIrql = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v19 = (char *)(LockInformation + 3);
  if ( ExclusiveLock )
    v20 = FsRtlPrivateCheckForExclusiveLockAccess(v19, v33);
  else
    v20 = FsRtlPrivateCheckForSharedLockAccess(v19, v33);
  if ( v20 )
  {
    if ( (unsigned __int8)FsRtlPrivateInsertLock(LockInformation, v14, v33) )
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
      LockInformation = v31;
      v16 = v32;
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
    ObfReferenceObjectWithTag(v14, 0x746C6644u);
    FsRtlCompleteLockIrpReal(LockInformation[1], (_DWORD)Context, (_DWORD)Irp, v21->Status, (__int64)&v29, (__int64)v14);
    v26 = v29;
    if ( v29 < 0 && v21->Status >= 0 )
    {
      LOBYTE(v25) = 1;
      FsRtlPrivateRemoveLock(LockInformation, v33, v25);
    }
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
    v21->Status = v26;
  }
  return v22;
}
