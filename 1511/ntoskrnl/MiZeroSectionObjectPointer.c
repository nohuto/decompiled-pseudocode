/*
 * XREFs of MiZeroSectionObjectPointer @ 0x1400F3B10
 * Callers:
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1402FE280);
  *v3 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE280);
  *(_DWORD *)(a2 + 56) |= 0xC0000u;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72), v7);
  return v6;
}
