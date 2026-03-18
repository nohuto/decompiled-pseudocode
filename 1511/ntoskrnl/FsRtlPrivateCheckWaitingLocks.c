/*
 * XREFs of FsRtlPrivateCheckWaitingLocks @ 0x1400CEB78
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1400CD16C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1400CDD14 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1400CDE70 (FsRtlFastUnlockSingleShared.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     IoGetRequestorProcess @ 0x1400CD110 (IoGetRequestorProcess.c)
 *     FsRtlPrivateInsertLock @ 0x1400CDA14 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1400CE170 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1400CE950 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlCompleteLockIrpReal @ 0x1400CED3C (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateRemoveLock @ 0x1401ACC6C (FsRtlPrivateRemoveLock.c)
 */

void __fastcall FsRtlPrivateCheckWaitingLocks(_QWORD *a1, KSPIN_LOCK *a2, KIRQL a3)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  char v8; // al
  char v9; // bl
  char inserted; // di
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  char v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+44h] [rbp-1Ch]
  PVOID Object; // [rsp+48h] [rbp-18h]
  PEPROCESS RequestorProcess; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+58h] [rbp-8h]
  int v18; // [rsp+A8h] [rbp+48h] BYREF
  KIRQL NewIrql; // [rsp+B0h] [rbp+50h]

  NewIrql = a3;
  v3 = (_QWORD *)a2[3];
  v4 = a2 + 3;
  while ( v3 )
  {
    v6 = v3[3];
    v7 = *(_QWORD *)(v6 + 184);
    *(_QWORD *)&v11 = *(_QWORD *)(v7 + 24);
    *((_QWORD *)&v11 + 1) = **(_QWORD **)(v7 + 8);
    v16 = *((_QWORD *)&v11 + 1) + v11 - 1;
    Object = *(PVOID *)(v7 + 48);
    RequestorProcess = IoGetRequestorProcess((PIRP)v6);
    v13 = *(_DWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v7 + 2) & 2) != 0 )
    {
      v12 = 1;
      v8 = FsRtlPrivateCheckForExclusiveLockAccess((__int64)a2, (unsigned __int64 *)&v11);
    }
    else
    {
      v12 = 0;
      v8 = FsRtlPrivateCheckForSharedLockAccess((__int64)a2, (__int64)&v11);
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
      FsRtlCompleteLockIrpReal(a1[1], v3[2], v6, inserted == 0 ? 0xC000009A : 0, (__int64)&v18, (__int64)Object);
      if ( inserted )
      {
        if ( v18 < 0 )
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
