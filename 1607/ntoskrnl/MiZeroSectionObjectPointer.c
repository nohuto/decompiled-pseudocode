/*
 * XREFs of MiZeroSectionObjectPointer @ 0x1400B5188
 * Callers:
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 */

__int64 __fastcall MiZeroSectionObjectPointer(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r14
  KIRQL v5; // al
  __int64 v6; // rdi
  KIRQL v7; // bl

  v3 = *(_QWORD **)(a1 + 40);
  if ( (a3 & 0x1000000) != 0 )
    v3 += 2;
  KeAbPostRelease((ULONG_PTR)v3);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  v6 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = 0LL;
  v7 = v5;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140326540);
  *v3 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326540);
  *(_DWORD *)(a2 + 56) |= 0xC0000u;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72), v7);
  return v6;
}
