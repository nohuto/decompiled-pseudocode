/*
 * XREFs of KiSelectLowestRankedThread @ 0x1400C856C
 * Callers:
 *     KiSelectReadyThreadEx @ 0x14005DAB0 (KiSelectReadyThreadEx.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 * Callees:
 *     KiSelectThreadFromSchedulingGroup @ 0x140098B9C (KiSelectThreadFromSchedulingGroup.c)
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
    v3 = KiSelectThreadFromSchedulingGroup(a1, v1 - 88, 0);
    if ( v3 )
      break;
    v1 = *(_QWORD *)(v5 + 400);
  }
  return v3;
}
