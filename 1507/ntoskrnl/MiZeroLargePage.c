/*
 * XREFs of MiZeroLargePage @ 0x1400FC2EC
 * Callers:
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiZeroLargePageThread @ 0x140165A28 (MiZeroLargePageThread.c)
 * Callees:
 *     MiGetZeroingVa @ 0x1400FC4D0 (MiGetZeroingVa.c)
 *     KeZeroPages @ 0x140186BF0 (KeZeroPages.c)
 *     RtlCompareMemoryUlong @ 0x14018BB20 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiZeroLargePage(__int64 a1, __int64 a2)
{
  char *ZeroingVa; // rdi
  SIZE_T v4; // rax

  ZeroingVa = (char *)MiGetZeroingVa(a2, (a1 + 0x58000000000LL) / 48);
  v4 = RtlCompareMemoryUlong(ZeroingVa, 0x200000uLL, 0);
  if ( v4 != 0x200000 )
    KeZeroPages(&ZeroingVa[4096 * (v4 >> 12)], (512 - (v4 >> 12)) << 12);
  return MiReleaseZeroingVa(a2);
}
