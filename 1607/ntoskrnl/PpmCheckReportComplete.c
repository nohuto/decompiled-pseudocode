/*
 * XREFs of PpmCheckReportComplete @ 0x1400D4710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmCheckReportComplete()
{
  if ( PpmCheckCompleteHandler )
    PpmCheckCompleteHandler(PpmPerfGlobalContext, PpmCheckTime);
  return 1;
}
