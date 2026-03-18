/*
 * XREFs of RtlpValidateSidBuffer @ 0x140470CDC
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140470BC0 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140044DF4 (RtlSubAuthorityCountSid.c)
 *     RtlLengthRequiredSid @ 0x140470D24 (RtlLengthRequiredSid.c)
 *     RtlValidSid @ 0x1404CA0C0 (RtlValidSid.c)
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
