/*
 * XREFs of RtlpQueryDiskSpeedPolicy @ 0x18005596C
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18002A5F0 (RtlQueryResourcePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpQueryDiskSpeedPolicy(_DWORD *a1)
{
  if ( BYTE1(RtlpUserPolicies) )
  {
    *a1 = BYTE1(RtlpUserPolicies);
  }
  else if ( (MEMORY[0x7FFE02D0] & 0x10000) != 0 )
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
