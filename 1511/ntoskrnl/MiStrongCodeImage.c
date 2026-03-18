/*
 * XREFs of MiStrongCodeImage @ 0x1401E4D6C
 * Callers:
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiStrongCodeImage(__int64 a1, unsigned int a2)
{
  KIRQL v4; // al

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( ((*(_DWORD *)(a1 + 92) >> 26) & 3u) < a2 )
    *(_DWORD *)(a1 + 92) ^= (*(_DWORD *)(a1 + 92) ^ (a2 << 26)) & 0xC000000;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
}
