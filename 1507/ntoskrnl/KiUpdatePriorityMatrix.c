/*
 * XREFs of KiUpdatePriorityMatrix @ 0x14017E4D4
 * Callers:
 *     KiCompleteKernelInit @ 0x1403F98E4 (KiCompleteKernelInit.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 */

_BYTE *__fastcall KiUpdatePriorityMatrix(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  char v4; // dl
  __int64 v5; // rdx
  __int64 v6; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v8; // r8
  _BYTE *result; // rax

  v2 = a2;
  v3 = a1;
  if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
  {
    if ( *(char *)(a2 + 195) >= 16
      || !*(_QWORD *)(a2 + 104)
      || (v5 = *(_QWORD *)(a2 + 104)) == 0
      || (v6 = *(unsigned int *)(a1 + 1624) + v5) == 0
      || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v2, v6, 0),
          v4 = v8 + 1,
          !ThreadEffectiveRankNonZero) )
    {
      v4 = *(_BYTE *)(v2 + 195);
    }
  }
  else
  {
    v4 = *(_BYTE *)(a2 + 195);
  }
  result = *(_BYTE **)(v3 + 56);
  *result = v4;
  return result;
}
