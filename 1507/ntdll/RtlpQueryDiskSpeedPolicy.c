/*
 * XREFs of RtlpQueryDiskSpeedPolicy @ 0x180003670
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180004FE0 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180034E70 (RtlRunOnceExecuteOnce.c)
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
