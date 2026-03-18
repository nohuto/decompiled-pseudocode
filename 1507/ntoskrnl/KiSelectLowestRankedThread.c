/*
 * XREFs of KiSelectLowestRankedThread @ 0x1400D5364
 * Callers:
 *     KiSelectReadyThreadEx @ 0x1400A24B0 (KiSelectReadyThreadEx.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 * Callees:
 *     KiSelectThreadFromSchedulingGroup @ 0x1400D3570 (KiSelectThreadFromSchedulingGroup.c)
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
    v1 = *(_QWORD *)(v5 + 384);
  }
  return v3;
}
