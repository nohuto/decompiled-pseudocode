/*
 * XREFs of ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C0001048
 * Callers:
 *     VidSchiProcessDpcSystemRequest @ 0x1C000DA44 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSetPriorityContext @ 0x1C0010F74 (VidSchiSetPriorityContext.c)
 * Callees:
 *     ?VidSchiStartExecutionTimeAtThisPriorityBand@@YAXPEAU_VIDSCH_NODE@@W4VIDSCH_YIELD_PRIORITY_BAND@@_K@Z @ 0x1C0001070 (-VidSchiStartExecutionTimeAtThisPriorityBand@@YAXPEAU_VIDSCH_NODE@@W4VIDSCH_YIELD_PRIORITY_BAND@.c)
 */

void __fastcall VidSchiStartExecutionTimeAtThisPriority(struct _VIDSCH_NODE *a1, int a2)
{
  int v2; // edx

  if ( gulPriorityToYieldPriorityBand[a2] )
  {
    do
      VidSchiStartExecutionTimeAtThisPriorityBand(a1);
    while ( v2 != 1 );
  }
}
