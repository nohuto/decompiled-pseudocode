/*
 * XREFs of PopNetArmDsEvaluationTimer @ 0x1406736FC
 * Callers:
 *     PdcPoNetworkResiliency @ 0x14066FB44 (PdcPoNetworkResiliency.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopNetArmDsEvaluationTimer()
{
  __int64 v0; // rdx
  __int64 v1; // r9

  v0 = 0LL;
  v1 = 10000000LL * (unsigned int)PopStandbyConnectivityGracePeriod;
  if ( MEMORY[0xFFFFF78000000008] < (unsigned __int64)(v1 + qword_140328888) )
    v0 = qword_140328888 + v1 - MEMORY[0xFFFFF78000000008];
  return KeSetTimer2((__int64)&PopNetEvaluationTimer, -v0, 0LL, 0LL);
}
