/*
 * XREFs of ndisAcquireReadWriteLockX @ 0x1C000FA00
 * Callers:
 *     NdisDprAcquireReadWriteLock @ 0x1C0055010 (NdisDprAcquireReadWriteLock.c)
 * Callees:
 *     ?ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z @ 0x1C000FD00 (-ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z.c)
 *     ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x1C000FD5C (-ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z.c)
 *     ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C0054D94 (-ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 *     ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C0054E38 (-ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

__int64 __fastcall ndisAcquireReadWriteLockX(struct _NDIS_RW_LOCK *a1, char a2, __int64 a3, char a4)
{
  __int64 result; // rax
  unsigned int Number; // eax
  unsigned __int64 v8; // r8
  unsigned int *v9; // rdx
  unsigned int *p_RefCount; // rdx

  if ( !a2 )
  {
    *(_WORD *)a3 = 0;
    if ( !a4 )
      *(_BYTE *)(a3 + 2) = KfRaiseIrql(2u);
    if ( ndisMaxNumberOfProcessors > 0x40 )
    {
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        result = (unsigned int)-ndisAcquireReadLockSharedRefCnt(&a1->SpinLock);
        *(_WORD *)a3 = ((_DWORD)result != 0) + 2;
        return result;
      }
      p_RefCount = (unsigned int *)&a1->16 + KeGetPcr()->Prcb.Number;
    }
    else
    {
      p_RefCount = &a1->RefCount[KeGetPcr()->Prcb.Number].RefCount;
    }
    ndisAcquireReadLockPerCpuRefCnt(&a1->SpinLock, p_RefCount);
    result = 3LL;
LABEL_24:
    *(_WORD *)a3 = result;
    return result;
  }
  *(_WORD *)a3 = 1;
  result = (__int64)KeGetCurrentThread();
  if ( a1->Context == (void *)result )
  {
    *(_WORD *)a3 = 2;
    return result;
  }
  if ( ndisMaxNumberOfProcessors > 0x100 )
  {
    if ( !a4 )
      *(_BYTE *)(a3 + 2) = KfRaiseIrql(2u);
    result = ndisAcquireWriteLockSharedRefCnt(a1);
    if ( (_DWORD)result )
    {
      *(_WORD *)a3 = 4;
      return result;
    }
    result = 5LL;
    goto LABEL_24;
  }
  if ( a4 )
    KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
  else
    *(_BYTE *)(a3 + 2) = KeAcquireSpinLockRaiseToDpc(&a1->SpinLock);
  Number = KeGetPcr()->Prcb.Number;
  if ( ndisMaxNumberOfProcessors > 0x40 )
  {
    v8 = 4LL;
    v9 = (unsigned int *)&a1->16 + Number;
  }
  else
  {
    v8 = 16LL;
    v9 = &a1->RefCount[Number].RefCount;
  }
  ndisAcquireWriteLockPerCpuRefCnt(a1, v9, v8);
  *(_WORD *)a3 = 4;
  result = (__int64)KeGetCurrentThread();
  a1->Context = (void *)result;
  return result;
}
