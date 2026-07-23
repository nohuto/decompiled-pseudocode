/*
 * XREFs of MiSetSubsectionBase @ 0x1400B29F0
 * Callers:
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x14002CAA0 (MiIncrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiSetSubsectionBase(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  KIRQL v5; // r14

  v2 = *(_QWORD *)a1;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)a1 + 72LL));
  if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
    MiIncrementSubsectionViewCount(a1, 0LL);
  *(_WORD *)(a1 + 32) |= 1u;
  *(_QWORD *)(a1 + 8) = a2;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72), v5);
}
