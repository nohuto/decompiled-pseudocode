/*
 * XREFs of ?TdrValidateDebugMode@@YAXXZ @ 0x1C001E4B0
 * Callers:
 *     TdrTimedOperationAllowToDebugTimeout @ 0x1C001E520 (TdrTimedOperationAllowToDebugTimeout.c)
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@@Z @ 0x1C0143110 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1C0144BCC (TdrAllowToDebugTimeout.c)
 * Callees:
 *     <none>
 */

void TdrValidateDebugMode(void)
{
  if ( (unsigned int)g_TdrDebugMode >= 4 )
    g_TdrDebugMode = 0;
}
