/*
 * XREFs of RtlpValidateSidBuffer @ 0x1404792A8
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140479094 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14002D248 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x1404217D0 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x1404792F0 (RtlLengthRequiredSid.c)
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
