/*
 * XREFs of MiGetAvailablePagesForTrimPass @ 0x140113778
 * Callers:
 *     MiComputeAgingPercent @ 0x140113350 (MiComputeAgingPercent.c)
 *     MiComputeSystemTrimCriteria @ 0x14011341C (MiComputeSystemTrimCriteria.c)
 *     MiForcedTrim @ 0x14021A838 (MiForcedTrim.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesForTrimPass(_QWORD *a1, unsigned int a2)
{
  if ( a2 >= 4 )
    return a1[688];
  else
    return MiGetAvailablePagesBelowPriority(a1, 6u);
}
