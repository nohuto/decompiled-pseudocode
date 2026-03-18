/*
 * XREFs of PpmCheckReportComplete @ 0x1400E8474
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
