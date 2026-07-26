/*
 * XREFs of ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C0054CB4
 * Callers:
 *     NdisAcquireReadWriteLock @ 0x1C000CD30 (NdisAcquireReadWriteLock.c)
 *     ndisAcquireReadWriteLockX @ 0x1C00557AC (ndisAcquireReadWriteLockX.c)
 * Callees:
 *     ?IsReadLockAlreadyHeldByCurrentThread@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C0054C74 (-IsReadLockAlreadyHeldByCurrentThread@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

__int64 __fastcall ndisAcquireReadLockSharedRefCnt(struct _NDIS_RW_LOCK *SpinLock)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 v5; // rcx

  if ( SpinLock->Context == KeGetCurrentThread() )
    return 0LL;
  v2 = (char *)ndisRWLocksOwnedByThread + 520 * KeGetPcr()->Prcb.Number;
  if ( (unsigned int)IsReadLockAlreadyHeldByCurrentThread(SpinLock) )
    return 0LL;
  while ( *(_BYTE *)(v3 + 28) )
    _mm_pause();
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 16));
  if ( ++SpinLock->RefCountEx[2] == 1 )
    KeAcquireSpinLockAtDpcLevel(&SpinLock->SpinLock);
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&SpinLock->16);
  v5 = *((unsigned int *)v2 + 128);
  if ( (unsigned int)v5 < 0x40 )
  {
    *(_QWORD *)&v2[8 * v5] = SpinLock;
    ++*((_DWORD *)v2 + 128);
  }
  return 1LL;
}
