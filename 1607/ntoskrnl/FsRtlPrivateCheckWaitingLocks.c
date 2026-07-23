/*
 * XREFs of FsRtlPrivateCheckWaitingLocks @ 0x1400A9A4C
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1400A9728 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1400C3054 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1400C31AC (FsRtlFastUnlockSingleShared.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     IoGetRequestorProcess @ 0x1400C1700 (IoGetRequestorProcess.c)
 *     FsRtlPrivateInsertLock @ 0x1400C2D54 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1400C34B8 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1400C3C94 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlCompleteLockIrpReal @ 0x1401332E0 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateRemoveLock @ 0x1401B8DE8 (FsRtlPrivateRemoveLock.c)
 */

void __fastcall FsRtlPrivateCheckWaitingLocks(__int64 a1, KSPIN_LOCK *a2, KIRQL a3)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  char v8; // al
  char v9; // bl
  char inserted; // di
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h]
  char v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+44h] [rbp-1Ch]
  PVOID Object; // [rsp+48h] [rbp-18h]
  PEPROCESS RequestorProcess; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+58h] [rbp-8h]
  int v19; // [rsp+A8h] [rbp+48h] BYREF
  KIRQL NewIrql; // [rsp+B0h] [rbp+50h]

  NewIrql = a3;
  v3 = (_QWORD *)a2[3];
  v4 = a2 + 3;
  while ( v3 )
  {
    v6 = v3[3];
    v7 = *(_QWORD *)(v6 + 184);
    v11 = *(_QWORD *)(v7 + 24);
    v12 = **(_QWORD **)(v7 + 8);
    v17 = v12 + v11 - 1;
    Object = *(PVOID *)(v7 + 48);
    RequestorProcess = IoGetRequestorProcess((PIRP)v6);
    v14 = *(_DWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v7 + 2) & 2) != 0 )
    {
      v13 = 1;
      v8 = FsRtlPrivateCheckForExclusiveLockAccess(a2, &v11);
    }
    else
    {
      v13 = 0;
      v8 = FsRtlPrivateCheckForSharedLockAccess(a2, &v11);
    }
    v9 = v8;
    if ( !v8 )
      goto LABEL_16;
    IoAcquireCancelSpinLock((PKIRQL)(v6 + 69));
    _InterlockedExchange64((volatile __int64 *)(v6 + 104), 0LL);
    if ( *(_BYTE *)(v6 + 68) )
      v9 = 0;
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v6 + 69));
    if ( v9 )
    {
      inserted = FsRtlPrivateInsertLock(a1, *(_QWORD *)(v7 + 48), &v11);
      *v4 = *v3;
      if ( v3 == (_QWORD *)a2[4] )
        a2[4] = (KSPIN_LOCK)v4;
      KeReleaseSpinLock(a2, NewIrql);
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      FsRtlCompleteLockIrpReal(
        *(_QWORD *)(a1 + 8),
        v3[2],
        v6,
        inserted == 0 ? 0xC000009A : 0,
        (__int64)&v19,
        (__int64)Object);
      if ( inserted )
      {
        if ( v19 < 0 )
          FsRtlPrivateRemoveLock(a1, &v11, 0LL);
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      NewIrql = KeAcquireSpinLockRaiseToDpc(a2);
      v4 = a2 + 3;
      ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v3);
    }
    else
    {
LABEL_16:
      v4 = v3;
    }
    v3 = (_QWORD *)*v4;
  }
}
