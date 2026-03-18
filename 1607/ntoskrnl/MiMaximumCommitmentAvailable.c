/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x14007E4D0
 * Callers:
 *     MmResourcesAvailable @ 0x14007E280 (MmResourcesAvailable.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140414000 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiMaximumCommitmentAvailable()
{
  if ( qword_140325168 > (unsigned __int64)qword_140324B48 )
    return 0LL;
  else
    return qword_140324B48 - qword_140325168;
}
