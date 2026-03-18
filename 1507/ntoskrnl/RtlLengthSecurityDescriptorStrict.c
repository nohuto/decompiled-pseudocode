/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x140245898
 * Callers:
 *     CmpFindMatchingDescriptorCell @ 0x140449B80 (CmpFindMatchingDescriptorCell.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140659810 (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
