/*
 * XREFs of KeQueryEffectiveBasePriorityThread @ 0x140014CB8
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x140014BC8 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140014D90 (KiIsThreadRankNonZero.c)
 */

__int64 __fastcall KeQueryEffectiveBasePriorityThread(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = (unsigned __int8)KiIsThreadRankNonZero(a1, 0LL) == 0;
  result = 1LL;
  if ( v1 )
    return (unsigned int)*(char *)(v2 + 563);
  return result;
}
