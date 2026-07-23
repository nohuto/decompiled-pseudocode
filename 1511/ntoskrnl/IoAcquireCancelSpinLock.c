/*
 * XREFs of IoAcquireCancelSpinLock @ 0x1400CAFE0
 * Callers:
 *     FsRtlpOplockCleanup @ 0x140035F48 (FsRtlpOplockCleanup.c)
 *     IoCancelIrp @ 0x1400C97FC (IoCancelIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400C98A4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1400C99C8 (FsRtlNotifySetCancelRoutine.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400C9A68 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400C9C44 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1400CA474 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400CB16C (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400CC94C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1400CC9E8 (FsRtlpWaitOnIrp.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400CD16C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400CEB78 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlUninitializeOplock @ 0x1400E3B68 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x1400EAD5C (FsRtlpOplockBreakToII.c)
 *     FsRtlUninitializeFileLock @ 0x1400F2924 (FsRtlUninitializeFileLock.c)
 *     FsRtlpOplockBreakToNone @ 0x1400F4010 (FsRtlpOplockBreakToNone.c)
 *     IopStartNextPacket @ 0x14011B24C (IopStartNextPacket.c)
 *     IoStartPacket @ 0x14011B2C8 (IoStartPacket.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14012DDB4 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401ACF44 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401AD32C (FsRtlpGrantAnyOplockFromExclusive.c)
 *     IopStartNextPacketByKey @ 0x1401BB850 (IopStartNextPacketByKey.c)
 *     VerifierIoAcquireCancelSpinLock @ 0x1406C06B4 (VerifierIoAcquireCancelSpinLock.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall IoAcquireCancelSpinLock(PKIRQL Irql)
{
  UCHAR CurrentIrql; // di
  void *ArbitraryUserPointer; // rcx
  volatile __int64 *v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v4 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 15);
  v5 = (__int64)ArbitraryUserPointer + 112;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5);
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64(v4, v5);
    if ( v6 )
      KxWaitForLockOwnerShip(v5, v6, (__int64)v4);
  }
  *Irql = CurrentIrql;
}
