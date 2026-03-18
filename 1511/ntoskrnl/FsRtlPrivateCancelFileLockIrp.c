/*
 * XREFs of FsRtlPrivateCancelFileLockIrp @ 0x1401ACB60
 * Callers:
 *     FsRtlPrivateLock @ 0x1400CD704 (FsRtlPrivateLock.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlCompleteLockIrpReal @ 0x1400CED3C (FsRtlCompleteLockIrpReal.c)
 */

void __fastcall FsRtlPrivateCancelFileLockIrp(__int64 a1, __int64 a2)
{
  char v2; // bp
  KSPIN_LOCK *v3; // rdi
  KIRQL v5; // r14
  __int64 *v6; // rcx
  __int64 *i; // rbx
  KSPIN_LOCK *v8; // rcx
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (KSPIN_LOCK *)(*(_QWORD *)(a2 + 56) + 24LL);
  if ( a1 )
  {
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
    v5 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
    v6 = &FsRtlFileLockCancelCollideList;
    v2 = 1;
  }
  else
  {
    v5 = *(_BYTE *)(a2 + 69);
LABEL_4:
    v6 = (__int64 *)(v3 + 3);
  }
  for ( i = (__int64 *)*v6; i; i = (__int64 *)*i )
  {
    if ( i[3] == a2 )
    {
      *v6 = *i;
      if ( !v2 && i == (__int64 *)v3[4] )
        v3[4] = (KSPIN_LOCK)v6;
      *(_QWORD *)(a2 + 56) = 0LL;
      v8 = &FsRtlFileLockCancelCollideLock;
      if ( !v2 )
        v8 = v3;
      KeReleaseSpinLock(v8, v5);
      FsRtlCompleteLockIrpReal((__int64 (__fastcall *)(__int64, __int64))i[1], i[2], a2, -1073741536, &v9, 0LL);
      ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, i);
      return;
    }
    v6 = i;
  }
  if ( v2 )
  {
    v2 = 0;
    KxAcquireSpinLock(v3);
    KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
    goto LABEL_4;
  }
  KeReleaseSpinLock(v3, v5);
}
