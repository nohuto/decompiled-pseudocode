/*
 * XREFs of MiZeroLargePage @ 0x1400E4A68
 * Callers:
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiZeroLargePages @ 0x140131E1C (MiZeroLargePages.c)
 * Callees:
 *     MiGetZeroingVa @ 0x1400E4BF0 (MiGetZeroingVa.c)
 *     KeZeroPages @ 0x140157480 (KeZeroPages.c)
 */

__int64 __fastcall MiZeroLargePage(__int64 a1, __int64 a2)
{
  __int64 ZeroingVa; // rax

  ZeroingVa = MiGetZeroingVa(a2, (a1 + 0x58000000000LL) / 48);
  KeZeroPages(ZeroingVa, 0x200000LL);
  return MiReleaseZeroingVa(a2);
}
