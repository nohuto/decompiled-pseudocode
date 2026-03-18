/*
 * XREFs of FsRtlPrivateCancelFileLockIrp @ 0x1401E2A7C
 * Callers:
 *     FsRtlPrivateLock @ 0x14010499C (FsRtlPrivateLock.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     FsRtlCompleteLockIrpReal @ 0x140106380 (FsRtlCompleteLockIrpReal.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall FsRtlPrivateCancelFileLockIrp(__int64 a1, IRP *a2)
{
  char v2; // si
  __int64 v3; // rbx
  unsigned __int8 CancelIrql; // bp
  __int64 *i; // rcx
  __int64 *j; // rdi
  __int64 *v8; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  NTSTATUS v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a2->IoStatus.Information + 24;
  if ( !a1 )
  {
    CancelIrql = a2->CancelIrql;
    goto LABEL_8;
  }
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  CancelIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&FsRtlFileLockCancelCollideLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&FsRtlFileLockCancelCollideLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&FsRtlFileLockCancelCollideLock);
  }
  v2 = 1;
  for ( i = &FsRtlFileLockCancelCollideList; ; i = (__int64 *)(v3 + 24) )
  {
    for ( j = (__int64 *)*i; j; j = (__int64 *)*j )
    {
      if ( (IRP *)j[3] == a2 )
      {
        *i = *j;
        if ( !v2 && j == *(__int64 **)(v3 + 32) )
          *(_QWORD *)(v3 + 32) = i;
        a2->IoStatus.Information = 0LL;
        if ( v2 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            v8 = &FsRtlFileLockCancelCollideLock;
            goto LABEL_30;
          }
          _InterlockedAnd64(&FsRtlFileLockCancelCollideLock, 0LL);
        }
        else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          v8 = (__int64 *)v3;
LABEL_30:
          KiReleaseSpinLockInstrumented(v8, retaddr);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
        }
        __writecr8(CancelIrql);
        FsRtlCompleteLockIrpReal((__int64 (__fastcall *)(__int64, IRP *))j[1], j[2], a2, -1073741536, &v10, 0LL);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, j);
        return;
      }
      i = j;
    }
    if ( !v2 )
      break;
    v2 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v3);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v3);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&FsRtlFileLockCancelCollideLock, retaddr);
    else
      _InterlockedAnd64(&FsRtlFileLockCancelCollideLock, 0LL);
LABEL_8:
    ;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v3, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  __writecr8(CancelIrql);
}
