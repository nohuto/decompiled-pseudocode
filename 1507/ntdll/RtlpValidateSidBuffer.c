/*
 * XREFs of RtlpValidateSidBuffer @ 0x1800528D8
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180052C28 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlValidSid @ 0x180020320 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x18004F340 (RtlLengthRequiredSid.c)
 */

bool __fastcall RtlpValidateSidBuffer(_BYTE *a1, unsigned int a2)
{
  return a2 >= (unsigned int)RtlLengthRequiredSid(0)
      && a2 >= (unsigned int)RtlLengthRequiredSid((unsigned __int8)a1[1])
      && RtlValidSid(a1);
}
