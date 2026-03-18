/*
 * XREFs of FsRtlPrivateLock @ 0x14010499C
 * Callers:
 *     FsRtlProcessFileLock @ 0x140103F60 (FsRtlProcessFileLock.c)
 *     VerifierFsRtlPrivateLock @ 0x140741E08 (VerifierFsRtlPrivateLock.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     FsRtlPrivateInsertLock @ 0x140104D44 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140104E24 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140105F7C (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140106180 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlCompleteLockIrpReal @ 0x140106380 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401E2A7C (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlPrivateRemoveLock @ 0x1401E2C3C (FsRtlPrivateRemoveLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
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
  volatile signed __int32 *v16; // rbx
  LONGLONG QuadPart; // rcx
  KIRQL CurrentIrql; // di
  signed __int8 v19; // cf
  char v20; // al
  PIO_STATUS_BLOCK v21; // rsi
  BOOLEAN v22; // di
  _QWORD *v23; // rax
  __int64 v25; // r8
  NTSTATUS v26; // ebx
  char v27; // [rsp+68h] [rbp-88h]
  char v28; // [rsp+69h] [rbp-87h]
  unsigned __int8 v29; // [rsp+6Ah] [rbp-86h]
  char *LockInformation; // [rsp+70h] [rbp-80h]
  int v31; // [rsp+78h] [rbp-78h] BYREF
  volatile signed __int32 *v32; // [rsp+80h] [rbp-70h]
  _QWORD v33[2]; // [rsp+88h] [rbp-68h] BYREF
  BOOLEAN v34; // [rsp+98h] [rbp-58h]
  ULONG v35; // [rsp+9Ch] [rbp-54h]
  PFILE_OBJECT v36; // [rsp+A0h] [rbp-50h]
  PEPROCESS v37; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v38; // [rsp+B0h] [rbp-40h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+B8h] [rbp-38h]
  void *retaddr; // [rsp+F0h] [rbp+0h]

  v27 = 0;
  v16 = 0LL;
  v32 = 0LL;
  v29 = -1;
  LockInformation = (char *)FileLock->LockInformation;
  if ( !LockInformation )
  {
    if ( !(unsigned __int8)FsRtlPrivateInitializeFileLock() )
      goto LABEL_17;
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (char *)FileLock->LockInformation;
  }
  v33[0] = FileOffset->QuadPart;
  QuadPart = Length->QuadPart;
  v33[1] = QuadPart;
  v38 = QuadPart + v33[0] - 1LL;
  v35 = Key;
  v36 = FileObject;
  v37 = ProcessId;
  v34 = ExclusiveLock;
  v16 = (volatile signed __int32 *)(LockInformation + 24);
  v32 = (volatile signed __int32 *)(LockInformation + 24);
  if ( v38 < v33[0] && QuadPart )
  {
    v21 = Iosb;
    Iosb->Status = -1073741407;
    goto LABEL_11;
  }
  v27 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(LockInformation + 24);
  }
  else
  {
    v19 = _interlockedbittestandset64(v16, 0LL);
    v16 = v32;
    if ( v19 )
      KxWaitForSpinLockAndAcquire(v32);
  }
  v29 = CurrentIrql;
  if ( ExclusiveLock )
    v20 = FsRtlPrivateCheckForExclusiveLockAccess(v16, v33);
  else
    v20 = FsRtlPrivateCheckForSharedLockAccess(v16, v33);
  if ( v20 )
  {
    if ( (unsigned __int8)FsRtlPrivateInsertLock(LockInformation, FileObject, v33) )
    {
      v21 = Iosb;
      Iosb->Status = 0;
LABEL_11:
      v22 = 1;
      v28 = 1;
      goto LABEL_39;
    }
    if ( Irp )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v16, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
      __writecr8(CurrentIrql);
      RtlRaiseStatus(-1073741670);
    }
  }
  else
  {
    if ( FailImmediately )
    {
      v21 = Iosb;
      Iosb->Status = -1073741739;
      goto LABEL_11;
    }
    if ( Irp )
    {
      v23 = ExAllocateFromNPagedLookasideList(&FsRtlWaitingLockLookasideList);
      if ( !v23 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v16, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
        __writecr8(CurrentIrql);
        RtlRaiseStatus(-1073741670);
      }
      v23[3] = Irp;
      v23[2] = Context;
      v23[1] = *((_QWORD *)LockInformation + 1);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation->Control |= 1u;
      *v23 = 0LL;
      if ( *((_QWORD *)v16 + 3) )
        **((_QWORD **)v16 + 4) = v23;
      else
        *((_QWORD *)v16 + 3) = v23;
      *((_QWORD *)v16 + 4) = v23;
      Irp->IoStatus.Information = (ULONG_PTR)LockInformation;
      _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)FsRtlPrivateCancelFileLockIrp);
      if ( Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
      {
        Irp->CancelIrql = CurrentIrql;
        FsRtlPrivateCancelFileLockIrp(0LL, Irp);
        v27 = 0;
      }
      v21 = Iosb;
      Iosb->Status = 259;
      v16 = v32;
      goto LABEL_11;
    }
  }
LABEL_17:
  v22 = 0;
  v28 = 0;
  v21 = Iosb;
LABEL_39:
  if ( v27 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v16, retaddr);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
      v22 = v28;
    }
    __writecr8(v29);
  }
  if ( Irp && v21->Status != 259 )
  {
    ObfReferenceObjectWithTag(FileObject, 0x746C6644u);
    FsRtlCompleteLockIrpReal(
      *((_QWORD *)LockInformation + 1),
      (_DWORD)Context,
      (_DWORD)Irp,
      v21->Status,
      (__int64)&v31,
      (__int64)FileObject);
    v26 = v31;
    if ( v31 < 0 && v21->Status >= 0 )
    {
      LOBYTE(v25) = 1;
      FsRtlPrivateRemoveLock(LockInformation, v33, v25);
    }
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    v21->Status = v26;
  }
  return v22;
}
