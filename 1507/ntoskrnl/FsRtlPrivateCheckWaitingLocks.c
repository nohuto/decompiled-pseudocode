/*
 * XREFs of FsRtlPrivateCheckWaitingLocks @ 0x140106130
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x140104598 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1401050D8 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1401052C0 (FsRtlFastUnlockSingleShared.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x140019FC0 (IoGetRequestorProcess.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     FsRtlPrivateInsertLock @ 0x140104D44 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140104E24 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140105F7C (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlCompleteLockIrpReal @ 0x140106380 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateRemoveLock @ 0x1401E2C3C (FsRtlPrivateRemoveLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall FsRtlPrivateCheckWaitingLocks(_QWORD *a1, __int64 a2, char a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  char v8; // al
  char v9; // bl
  char inserted; // di
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  char v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+44h] [rbp-1Ch]
  PVOID Object; // [rsp+48h] [rbp-18h]
  PEPROCESS RequestorProcess; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+58h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+38h]
  int v19; // [rsp+A8h] [rbp+48h] BYREF
  __int64 CurrentIrql; // [rsp+B8h] [rbp+58h]

  v3 = *(_QWORD **)(a2 + 24);
  v4 = (_QWORD *)(a2 + 24);
  LOBYTE(CurrentIrql) = a3;
  if ( v3 )
  {
    do
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
        v8 = FsRtlPrivateCheckForExclusiveLockAccess(a2, (unsigned __int64 *)&v11);
      }
      else
      {
        v12 = 0;
        v8 = FsRtlPrivateCheckForSharedLockAccess(a2, (__int64)&v11);
      }
      v9 = v8;
      if ( !v8 )
        goto LABEL_22;
      IoAcquireCancelSpinLock((PKIRQL)(v6 + 69));
      _InterlockedExchange64((volatile __int64 *)(v6 + 104), 0LL);
      if ( *(_BYTE *)(v6 + 68) )
        v9 = 0;
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v6 + 69));
      if ( v9 )
      {
        inserted = FsRtlPrivateInsertLock(a1, *(_QWORD *)(v7 + 48), &v11);
        *v4 = *v3;
        if ( v3 == *(_QWORD **)(a2 + 32) )
          *(_QWORD *)(a2 + 32) = v4;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(a2, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)a2, 0LL);
        __writecr8((unsigned __int8)CurrentIrql);
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        FsRtlCompleteLockIrpReal(a1[1], v3[2], v6, inserted == 0 ? 0xC000009A : 0, (__int64)&v19, (__int64)Object);
        if ( inserted && v19 < 0 )
          FsRtlPrivateRemoveLock(a1, &v11, 0LL);
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(a2);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)a2);
        }
        v4 = (_QWORD *)(a2 + 24);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v3);
      }
      else
      {
LABEL_22:
        v4 = v3;
      }
      v3 = (_QWORD *)*v4;
    }
    while ( *v4 );
  }
}
