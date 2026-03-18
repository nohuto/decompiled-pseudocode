/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x140014408
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1403CB0D0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiMaximumCommitmentAvailable()
{
  if ( qword_140301488 > (unsigned __int64)qword_1403010C8 )
    return 0LL;
  else
    return qword_1403010C8 - qword_140301488;
}
