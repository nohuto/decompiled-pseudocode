/*
 * XREFs of KiSelectLowestRankedThread @ 0x14002AA38
 * Callers:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 *     KiSelectReadyThreadEx @ 0x14007CE70 (KiSelectReadyThreadEx.c)
 * Callees:
 *     KiSelectThreadFromSchedulingGroup @ 0x1400C375C (KiSelectThreadFromSchedulingGroup.c)
 */

__int64 __fastcall KiSelectLowestRankedThread(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v5; // rdi

  v1 = *(_QWORD *)(a1 + 22776);
  v3 = 0LL;
  while ( v1 )
  {
    v5 = v1 - 88;
    v3 = KiSelectThreadFromSchedulingGroup(a1, v1 - 88, 0LL);
    if ( v3 )
      break;
    v1 = *(_QWORD *)(v5 + 384);
  }
  return v3;
}
