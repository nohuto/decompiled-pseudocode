/*
 * XREFs of RtlpValidateSidBuffer @ 0x1800528D8
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180052C28 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlValidSid @ 0x180020320 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x18004F340 (RtlLengthRequiredSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(unsigned __int8 *Sid, ULONG a2)
{
  if ( a2 < RtlLengthRequiredSid(0) || a2 < RtlLengthRequiredSid(Sid[1]) )
    return 0;
  else
    return RtlValidSid(Sid);
}
