/*
 * XREFs of RtlpValidateSidBuffer @ 0x18000B894
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180009500 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x18000BB10 (RtlLengthRequiredSid.c)
 *     RtlValidSid @ 0x180014F80 (RtlValidSid.c)
 */

char __fastcall RtlpValidateSidBuffer(__int64 a1, unsigned int a2)
{
  if ( a2 < (unsigned int)RtlLengthRequiredSid(0LL)
    || a2 < (unsigned int)RtlLengthRequiredSid(*(unsigned __int8 *)(a1 + 1)) )
  {
    return 0;
  }
  else
  {
    return RtlValidSid(a1);
  }
}
