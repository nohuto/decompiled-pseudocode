/*
 * XREFs of RmpGetMemUtilFlagsFromHostMetricFlags @ 0x180019368
 * Callers:
 *     RmpActivityHostAggregateMemUtilMetricsByProcess @ 0x180018EEC (RmpActivityHostAggregateMemUtilMetricsByProcess.c)
 *     RmpSystemQueryMemUtilMetricsForHosts @ 0x18001938C (RmpSystemQueryMemUtilMetricsForHosts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpGetMemUtilFlagsFromHostMetricFlags(char a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (a1 & 4) != 0 )
    result = 8LL;
  if ( (a1 & 8) != 0 )
    result = (unsigned int)result | 1;
  if ( (a1 & 0x20) != 0 )
    return (unsigned int)result | 0x40;
  return result;
}
