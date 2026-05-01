/*
 * XREFs of RtlpQueryDiskSpeedPolicy @ 0x1800396F4
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180020620 (RtlQueryResourcePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpQueryDiskSpeedPolicy(_DWORD *a1)
{
  if ( BYTE1(RtlpUserPolicies) )
  {
    *a1 = BYTE1(RtlpUserPolicies);
  }
  else if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    *a1 = 20;
  }
  else
  {
    RtlRunOnceExecuteOnce(&RtlpDiskSpeedInit, RtlpDiskSpeedInitialize, 0LL, 0LL);
    *a1 = RtlpDiskSpeedPolicy;
  }
  return 0LL;
}
