/*
 * XREFs of RtlpValidateSidBuffer @ 0x180062D7C
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180062B90 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlValidSid @ 0x180019A30 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x180062ED0 (RtlLengthRequiredSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(unsigned __int8 *Sid, ULONG a2)
{
  if ( a2 < RtlLengthRequiredSid(0) || a2 < RtlLengthRequiredSid(Sid[1]) )
    return 0;
  else
    return RtlValidSid(Sid);
}
