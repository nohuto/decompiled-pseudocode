/*
 * XREFs of RmpGetMemUtilFlagsFromHostMetricFlags @ 0x18001D810
 * Callers:
 *     RmpSystemQueryMemUtilMetricsForHosts @ 0x18001C8E8 (RmpSystemQueryMemUtilMetricsForHosts.c)
 *     RmpActivityHostAggregateMemUtilMetricsByProcess @ 0x18001D1AC (RmpActivityHostAggregateMemUtilMetricsByProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpGetMemUtilFlagsFromHostMetricFlags(char a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (a1 & 2) != 0 )
    v1 = 8;
  if ( (a1 & 4) != 0 )
    v1 |= 1u;
  if ( (a1 & 0x10) != 0 )
    v1 |= 0x40u;
  return v1;
}
