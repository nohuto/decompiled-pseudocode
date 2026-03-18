/*
 * XREFs of KeUpdateThreadSchedulingProperties @ 0x14000B9FC
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x14000B26C (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14000B3A4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateProcessSharedReadyQueueAffinity @ 0x14000B7FC (KeUpdateProcessSharedReadyQueueAffinity.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14009C160 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 */

_BYTE *__fastcall KeUpdateThreadSchedulingProperties(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *result; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  char v6; // r11
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v11; // r8

  result = (_BYTE *)KiUpdateSharedReadyQueueAffinityThread(0LL, a1, a3, a1);
  if ( v6 == 2 && !*(_QWORD *)(v5 + 16) || v6 == 3 )
  {
    if ( (*(_BYTE *)(v4 + 2) & 4) != 0 )
    {
      if ( *(char *)(v4 + 195) >= 16
        || !*(_QWORD *)(v4 + 104)
        || (v8 = *(_QWORD *)(v4 + 104)) == 0
        || (v9 = *(unsigned int *)(v5 + 1624) + v8) == 0
        || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v4, v9, 0LL),
            v7 = v11 + 1,
            !ThreadEffectiveRankNonZero) )
      {
        v7 = *(_BYTE *)(v4 + 195);
      }
    }
    else
    {
      v7 = *(_BYTE *)(v4 + 195);
    }
    result = *(_BYTE **)(v5 + 56);
    *result = v7;
  }
  return result;
}
