/*
 * XREFs of IoAcquireCancelSpinLock @ 0x140078440
 * Callers:
 *     FsRtlNotifySetCancelRoutine @ 0x140076EFC (FsRtlNotifySetCancelRoutine.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140076FCC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400777A4 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x140077994 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400785F4 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x14007AA74 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakToII @ 0x14007B78C (FsRtlpOplockBreakToII.c)
 *     FsRtlUninitializeOplock @ 0x1400A101C (FsRtlUninitializeOplock.c)
 *     IoCancelIrp @ 0x1400A2054 (IoCancelIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400A26C4 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400AB1A8 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400AB4CC (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400ACA8C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IopStartNextPacket @ 0x1400AE550 (IopStartNextPacket.c)
 *     IoStartPacket @ 0x1400AE5CC (IoStartPacket.c)
 *     FsRtlUninitializeFileLock @ 0x1400B414C (FsRtlUninitializeFileLock.c)
 *     FsRtlpWaitOnIrp @ 0x1400B42DC (FsRtlpWaitOnIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x1400B563C (FsRtlpOplockBreakToNone.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1401343CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401B9498 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401B9880 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9B20 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     IopStartNextPacketByKey @ 0x1401C96BC (IopStartNextPacketByKey.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001BDA0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D39E0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall IoAcquireCancelSpinLock(PKIRQL Irql)
{
  KIRQL CurrentIrql; // di
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
    KiAcquireQueuedSpinLockInstrumented(v5, v4);
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64(v4, v5);
    if ( v6 )
      KxWaitForLockOwnerShip(v5, v6);
  }
  *Irql = CurrentIrql;
}
