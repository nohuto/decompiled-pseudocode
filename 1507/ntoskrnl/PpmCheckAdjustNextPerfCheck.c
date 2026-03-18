/*
 * XREFs of PpmCheckAdjustNextPerfCheck @ 0x1400E9FD4
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
