/*
 * XREFs of CitModerncoreShutdown @ 0x1C00E4B30
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00710D4 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( qword_1C0101FE0 )
    CitpLogoff(qword_1C0101FE0);
}
