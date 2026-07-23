/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x14014BBB8
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x14057F1E4 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  _KPROCESS *Process; // rsi
  LONG *SharedVm; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // r9

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  MEMORY[0xFFFFF6FB7DBEDF68] = ~qword_1403A9350 & (MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL) | 0x8000000000000000uLL);
  if ( (unsigned int)MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL, MEMORY[0xFFFFF6FB7DBEDF68]) )
    MiWritePteShadow(v3, v2);
  LOBYTE(v2) = v4;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v2);
  return KeFlushTb(1u, 0);
}
