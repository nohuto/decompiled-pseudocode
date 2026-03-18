/*
 * XREFs of PpmCheckAdjustNextPerfCheck @ 0x140076C4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmCheckAdjustNextPerfCheck()
{
  if ( PpmCheckCurrentPipelineId == 5 && PpmCheckLastExecutionTime )
    _InterlockedExchange64(&PpmCheckLastExecutionTime, MEMORY[0xFFFFF78000000008]);
  return 1;
}
