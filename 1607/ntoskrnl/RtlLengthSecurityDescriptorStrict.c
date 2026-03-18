/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x140210E84
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1403FCD98 (CmpSetSecurityDescriptorInfo.c)
 *     CmpFindMatchingDescriptorCell @ 0x1403FD488 (CmpFindMatchingDescriptorCell.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1406026C8 (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
