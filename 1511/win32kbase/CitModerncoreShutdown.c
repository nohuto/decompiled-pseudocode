/*
 * XREFs of CitModerncoreShutdown @ 0x1C00E6530
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0064DF8 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( qword_1C0107180 )
    CitpLogoff(qword_1C0107180);
}
