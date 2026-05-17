/*
 * XREFs of RtlpValidateSidBuffer @ 0x180062D7C
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180062B90 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlValidSid @ 0x180019A30 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x180062ED0 (RtlLengthRequiredSid.c)
 */

bool __fastcall RtlpValidateSidBuffer(_BYTE *a1, unsigned int a2)
{
  return a2 >= (unsigned int)RtlLengthRequiredSid(0LL)
      && a2 >= (unsigned int)RtlLengthRequiredSid((unsigned __int8)a1[1])
      && RtlValidSid(a1);
}
