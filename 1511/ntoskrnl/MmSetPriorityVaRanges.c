/*
 * XREFs of MmSetPriorityVaRanges @ 0x140623DA0
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1400E7988 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MmSetPriorityVaRanges(__int64 a1, __int64 *a2, unsigned int a3)
{
  MiSetPriorityVaRanges(1uLL, a2, a3);
}
