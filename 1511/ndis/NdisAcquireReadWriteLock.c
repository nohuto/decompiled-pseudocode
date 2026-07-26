/*
 * XREFs of NdisAcquireReadWriteLock @ 0x1C000FB90
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z @ 0x1C000FD00 (-ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z.c)
 *     ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x1C000FD5C (-ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z.c)
 *     ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C0054D94 (-ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 *     ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C0054E38 (-ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __stdcall NdisAcquireReadWriteLock(PNDIS_RW_LOCK Lock, BOOLEAN fWrite, PLOCK_STATE LockState)
{
  KIRQL v5; // al
  bool v6; // cc
  unsigned int Number; // eax
  unsigned __int64 v8; // r8
  unsigned int *v9; // rdx
  unsigned __int16 v10; // ax
  unsigned int *p_RefCount; // rdx

  if ( !fWrite )
  {
    LockState->LockState = 0;
    LockState->OldIrql = KfRaiseIrql(2u);
    if ( ndisMaxNumberOfProcessors > 0x40 )
    {
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        LockState->LockState = ((unsigned int)ndisAcquireReadLockSharedRefCnt(&Lock->SpinLock) != 0) + 2;
        return;
      }
      p_RefCount = (unsigned int *)&Lock->16 + KeGetPcr()->Prcb.Number;
    }
    else
    {
      p_RefCount = &Lock->RefCount[KeGetPcr()->Prcb.Number].RefCount;
    }
    ndisAcquireReadLockPerCpuRefCnt(&Lock->SpinLock, p_RefCount);
    v10 = 3;
LABEL_17:
    LockState->LockState = v10;
    return;
  }
  LockState->LockState = 1;
  if ( Lock->Context == KeGetCurrentThread() )
  {
    LockState->LockState = 2;
    return;
  }
  if ( ndisMaxNumberOfProcessors > 0x100 )
  {
    LockState->OldIrql = KfRaiseIrql(2u);
    if ( (unsigned int)ndisAcquireWriteLockSharedRefCnt(Lock) )
    {
      LockState->LockState = 4;
      return;
    }
    v10 = 5;
    goto LABEL_17;
  }
  v5 = KeAcquireSpinLockRaiseToDpc(&Lock->SpinLock);
  v6 = ndisMaxNumberOfProcessors <= 0x40;
  LockState->OldIrql = v5;
  Number = KeGetPcr()->Prcb.Number;
  if ( v6 )
  {
    v8 = 16LL;
    v9 = &Lock->RefCount[Number].RefCount;
  }
  else
  {
    v8 = 4LL;
    v9 = (unsigned int *)&Lock->16 + Number;
  }
  ndisAcquireWriteLockPerCpuRefCnt(Lock, v9, v8);
  LockState->LockState = 4;
  Lock->Context = KeGetCurrentThread();
}
