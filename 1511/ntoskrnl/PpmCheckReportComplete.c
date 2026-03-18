/*
 * XREFs of PpmCheckReportComplete @ 0x140074E24
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
