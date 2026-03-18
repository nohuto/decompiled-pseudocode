/*
 * XREFs of MiUnlockPageTableRange @ 0x14011573C
 * Callers:
 *     MiLockPageTableRange @ 0x140114F64 (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x1404F3F5C (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPageTableCharges @ 0x140021978 (MiUnlockPageTableCharges.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  _KPROCESS *Process; // rsi
  __int64 v5; // rdx
  KIRQL v6; // bp
  __int64 v7; // r8
  unsigned __int64 i; // rbx
  __int64 v9; // rax

  v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  for ( i = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL; i <= v3; i += 8LL )
  {
    v9 = MI_GET_PAGE_FRAME_FROM_PTE(i);
    MiUnlockPageTableCharges(48 * v9 - 0x58000000000LL, 2u, 1);
  }
  LOBYTE(v5) = v6;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v5, v7);
}
