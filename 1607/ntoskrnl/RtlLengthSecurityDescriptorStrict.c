/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x140210CB0
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmpFindMatchingDescriptorCell @ 0x1403FC348 (CmpFindMatchingDescriptorCell.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14060277C (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
