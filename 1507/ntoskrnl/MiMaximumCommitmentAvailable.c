/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x1400140D0
 * Callers:
 *     MmResourcesAvailable @ 0x140013FD0 (MmResourcesAvailable.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14042E030 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiMaximumCommitmentAvailable()
{
  if ( qword_1403552C8 > (unsigned __int64)qword_140354F88 )
    return 0LL;
  else
    return qword_140354F88 - qword_1403552C8;
}
