/*
 * XREFs of RtlpValidateSidBuffer @ 0x14046C368
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14046B23C (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14003D378 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x14046C1EC (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x14046C3B0 (RtlLengthRequiredSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, ULONG a2)
{
  PUCHAR v4; // rax

  if ( a2 < RtlLengthRequiredSid(0) )
    return 0;
  v4 = RtlSubAuthorityCountSid(Sid);
  if ( a2 < RtlLengthRequiredSid(*v4) )
    return 0;
  else
    return RtlValidSid(Sid);
}
