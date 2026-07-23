/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x14007E550
 * Callers:
 *     MmResourcesAvailable @ 0x14007E300 (MmResourcesAvailable.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140412EC0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiMaximumCommitmentAvailable()
{
  if ( qword_1403251A8 > (unsigned __int64)qword_140324B88 )
    return 0LL;
  else
    return qword_140324B88 - qword_1403251A8;
}
