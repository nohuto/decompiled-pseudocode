/*
 * XREFs of MiResidentPagesForSpan @ 0x1404BD834
 * Callers:
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x14041AF70 (MiRemoveVadCharges.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 */

__int64 __fastcall MiResidentPagesForSpan(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 PteAddress; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rbp

  v3 = 0LL;
  PteAddress = MiGetPteAddress(a1);
  v5 = MiGetPteAddress(a2);
  v6 = 3LL;
  do
  {
    v3 += (((PteAddress & 0xFFF) + 4095 + ((8 * (unsigned __int16)((__int64)(v5 - PteAddress) >> 3) + 8) & 0xFFF)) >> 12)
        + ((unsigned __int64)(8 * ((__int64)(v5 - PteAddress) >> 3) + 8) >> 12);
    PteAddress = MiGetPteAddress(PteAddress);
    v5 = MiGetPteAddress(v5);
    --v6;
  }
  while ( v6 );
  return v3;
}
