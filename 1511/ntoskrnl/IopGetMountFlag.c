/*
 * XREFs of IopGetMountFlag @ 0x14008E7A0
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x1404383A0 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopGetMountFlag(__int64 a1)
{
  unsigned __int8 v2; // bl
  unsigned __int8 CurrentIrql; // si
  volatile __int64 **v4; // rcx
  __int64 v5; // rax

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4);
  }
  else if ( _InterlockedExchange64(v4[1], (__int64)v4) )
  {
    KxWaitForLockOwnerShip(v4);
  }
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 && (*(_BYTE *)(v5 + 4) & 1) != 0 )
    v2 = 1;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 18);
  __writecr8(CurrentIrql);
  return v2;
}
