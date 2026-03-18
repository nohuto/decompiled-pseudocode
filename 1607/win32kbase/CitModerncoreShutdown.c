/*
 * XREFs of CitModerncoreShutdown @ 0x1C00F8310
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004EE38 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( qword_1C011E5D0 )
    CitpLogoff(qword_1C011E5D0);
}
