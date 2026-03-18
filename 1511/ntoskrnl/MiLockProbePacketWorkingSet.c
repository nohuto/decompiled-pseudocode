/*
 * XREFs of MiLockProbePacketWorkingSet @ 0x1400E87A0
 * Callers:
 *     MiProbeLeafFrame @ 0x1400A7660 (MiProbeLeafFrame.c)
 *     MiSplitReducedCommitClonePage @ 0x1401D2E94 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 */

void __fastcall MiLockProbePacketWorkingSet(__int64 a1)
{
  volatile LONG *v2; // rcx
  KIRQL v3; // al

  v2 = *(volatile LONG **)(a1 + 88);
  if ( v2 == MmBadPointer )
  {
    *(_BYTE *)(a1 + 80) = 17;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 60) == 1 )
      v3 = ExAcquireSpinLockExclusive(v2);
    else
      v3 = ExAcquireSpinLockShared(v2);
    *(_BYTE *)(a1 + 80) = v3;
  }
}
