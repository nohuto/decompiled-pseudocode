/*
 * XREFs of ?VidSchiStartExecutionTimeAtThisPriorityBand@@YAXPEAU_VIDSCH_NODE@@W4VIDSCH_YIELD_PRIORITY_BAND@@_K@Z @ 0x1C0001070
 * Callers:
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C0001048 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiStartExecutionTimeAtThisPriorityBand(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = a2;
  if ( *(_QWORD *)(a1 + 8LL * a2 + 1824) )
    *(_QWORD *)(a1 + 8LL * a2 + 1856) = a3;
  return result;
}
