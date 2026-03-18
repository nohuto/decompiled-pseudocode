/*
 * XREFs of ?TdrValidateDebugMode@@YAXXZ @ 0x1C001E3F0
 * Callers:
 *     TdrTimedOperationAllowToDebugTimeout @ 0x1C001E460 (TdrTimedOperationAllowToDebugTimeout.c)
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@@Z @ 0x1C013CCE0 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1C013E77C (TdrAllowToDebugTimeout.c)
 * Callees:
 *     <none>
 */

void TdrValidateDebugMode(void)
{
  if ( (unsigned int)g_TdrDebugMode >= 4 )
    g_TdrDebugMode = 0;
}
