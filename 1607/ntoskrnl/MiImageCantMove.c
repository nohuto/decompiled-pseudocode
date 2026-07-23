/*
 * XREFs of MiImageCantMove @ 0x1401F6D34
 * Callers:
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiImageCantMove(__int64 a1)
{
  KIRQL v2; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 92) |= 0x10000000u;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v2);
}
