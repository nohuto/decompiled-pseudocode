/*
 * XREFs of MiSetControlAreaSystemVa @ 0x1400B2A64
 * Callers:
 *     MiSelectImageBase @ 0x14046D450 (MiSelectImageBase.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiSetControlAreaSystemVa(__int64 a1, int a2)
{
  KIRQL v4; // al

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 56) |= 0x10000000u;
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 92) |= 0x2000000u;
  else
    *(_DWORD *)(a1 + 92) &= ~0x2000000u;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
}
