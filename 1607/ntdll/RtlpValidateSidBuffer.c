/*
 * XREFs of RtlpValidateSidBuffer @ 0x18000B884
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1800094F0 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x18000BB00 (RtlLengthRequiredSid.c)
 *     RtlValidSid @ 0x180014F70 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(unsigned __int8 *Sid, ULONG a2)
{
  if ( a2 < RtlLengthRequiredSid(0) || a2 < RtlLengthRequiredSid(Sid[1]) )
    return 0;
  else
    return RtlValidSid(Sid);
}
