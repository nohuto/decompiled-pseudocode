/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x140141B8C
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x140549A5C (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  _KPROCESS *Process; // rdi
  KIRQL v1; // si
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  v2 = ~qword_140381310 & (MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL) | 0x8000000000000000uLL);
  MEMORY[0xFFFFF6FB7DBEDF68] = v2;
  if ( (unsigned int)MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL) )
    MiWritePteShadow(0xFFFFF6FB7DBEDF68uLL, v2);
  LOBYTE(v3) = v1;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v3, v4);
  return KeFlushTb(1u, 0);
}
