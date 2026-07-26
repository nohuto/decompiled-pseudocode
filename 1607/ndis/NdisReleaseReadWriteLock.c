/*
 * XREFs of NdisReleaseReadWriteLock @ 0x1C000F950
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x1C00596BC (-ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __stdcall NdisReleaseReadWriteLock(PNDIS_RW_LOCK Lock, PLOCK_STATE LockState)
{
  unsigned int Number; // eax
  _NDIS_RW_LOCK_REFCOUNT *v4; // rcx
  KIRQL OldIrql; // cl

  switch ( LockState->LockState )
  {
    case 3u:
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        ndisReleaseReadLockSharedRefCnt(&Lock->SpinLock);
      }
      else
      {
        Number = KeGetPcr()->Prcb.Number;
        if ( ndisMaxNumberOfProcessors > 0x40 )
          v4 = (_NDIS_RW_LOCK_REFCOUNT *)((char *)Lock->RefCount + 4 * Number);
        else
          v4 = &Lock->RefCount[Number];
        --v4->RefCount;
      }
      OldIrql = LockState->OldIrql;
      LockState->LockState = 255;
      if ( OldIrql < 2u )
        KeLowerIrql(OldIrql);
      break;
    case 4u:
      LockState->LockState = 255;
      Lock->Context = 0LL;
      KeReleaseSpinLock(&Lock->SpinLock, LockState->OldIrql);
      break;
    case 5u:
      Lock->Context = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&Lock->16);
      LockState->LockState = 255;
      break;
  }
}
