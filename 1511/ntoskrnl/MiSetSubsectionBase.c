/*
 * XREFs of MiSetSubsectionBase @ 0x1401E3AF0
 * Callers:
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A8CA0 (MiIncrementSubsectionViewCount.c)
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
