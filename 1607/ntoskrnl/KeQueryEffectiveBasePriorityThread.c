/*
 * XREFs of KeQueryEffectiveBasePriorityThread @ 0x1400BCFC8
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1400BCED8 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1400CE030 (KiIsThreadRankNonZero.c)
 */

__int64 __fastcall KeQueryEffectiveBasePriorityThread(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax

  v2 = (unsigned __int8)KiIsThreadRankNonZero(a1, 0LL) == 0;
  result = 1LL;
  if ( v2 )
    return (unsigned int)*(char *)(a1 + 563);
  return result;
}
