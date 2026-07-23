/*
 * XREFs of MiUnlockPageTableRange @ 0x140125320
 * Callers:
 *     MiLockPageTableRange @ 0x140123A7C (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x140533000 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPageTableCharges @ 0x1400B8AD8 (MiUnlockPageTableCharges.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  _KPROCESS *Process; // rbp
  unsigned __int64 v4; // rsi
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // r14
  unsigned __int64 i; // rdi
  __int64 v10; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v8 = v6;
  for ( i = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL; i <= v4; i += 8LL )
  {
    v10 = MI_GET_PAGE_FRAME_FROM_PTE(i);
    MiUnlockPageTableCharges(48 * v10 - 0x58000000000LL, 2u, 1);
  }
  LOBYTE(v7) = v8;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v7);
}
