/*
 * XREFs of MiStrongCodeImage @ 0x1401F6FC0
 * Callers:
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiStrongCodeImage(__int64 a1, unsigned int a2)
{
  KIRQL v4; // al

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( ((*(_DWORD *)(a1 + 92) >> 26) & 3u) < a2 )
    *(_DWORD *)(a1 + 92) ^= (*(_DWORD *)(a1 + 92) ^ (a2 << 26)) & 0xC000000;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
}
