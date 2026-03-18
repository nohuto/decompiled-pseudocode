/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x1400E86F4
 * Callers:
 *     MiProbeLeafFrame @ 0x1400A7660 (MiProbeLeafFrame.c)
 *     MiProbeAndLockComplete @ 0x1400E86AC (MiProbeAndLockComplete.c)
 *     MmStoreProbeAndLockPages @ 0x140113844 (MmStoreProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x1401D2E94 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 */

void __fastcall MiUnlockProbePacketWorkingSet(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  volatile LONG *v4; // rcx

  if ( *(PVOID *)(a1 + 88) != MmBadPointer )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 80);
    v3 = *(_BYTE *)(a1 + 60) == 1;
    v4 = *(volatile LONG **)(a1 + 88);
    if ( v3 )
      MiUnlockWorkingSetExclusive((__int64)v4, a2, a3);
    else
      ExReleaseSpinLockShared(v4, a2);
  }
}
