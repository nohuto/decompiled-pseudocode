/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x14009A79C
 * Callers:
 *     MiProbeLeafFrame @ 0x14002FDC0 (MiProbeLeafFrame.c)
 *     MiProbeAndLockComplete @ 0x14009A754 (MiProbeAndLockComplete.c)
 *     MmStoreProbeAndLockPages @ 0x140122370 (MmStoreProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x1401E2F58 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 */

void __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  __int64 v1; // rdx
  PVOID v2; // rcx
  LONG *SharedVm; // rax
  __int64 v4; // rdx

  v1 = a1;
  v2 = *(PVOID *)(a1 + 88);
  if ( v2 != MmBadPointer )
  {
    if ( *(_BYTE *)(v1 + 62) == 1 )
    {
      LOBYTE(v1) = *(_BYTE *)(v1 + 80);
      MiUnlockWorkingSetExclusive((__int64)v2, v1);
    }
    else
    {
      SharedVm = MiGetSharedVm((__int64)v2);
      ExReleaseSpinLockShared(SharedVm, *(_BYTE *)(v4 + 80));
    }
  }
}
