/*
 * XREFs of IopGetMountFlag @ 0x1400EC860
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x1404F4F20 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopGetMountFlag(__int64 a1)
{
  unsigned __int8 v2; // bl
  unsigned __int8 CurrentIrql; // si
  char *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rax

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, *((_QWORD *)v4 + 1));
  }
  else
  {
    v5 = (_QWORD *)_InterlockedExchange64(*((volatile __int64 **)v4 + 1), (__int64)v4);
    if ( v5 )
      KxWaitForLockOwnerShip((__int64)v4, v5);
  }
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 && (*(_BYTE *)(v6 + 4) & 1) != 0 )
    v2 = 1;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 18);
  __writecr8(CurrentIrql);
  return v2;
}
