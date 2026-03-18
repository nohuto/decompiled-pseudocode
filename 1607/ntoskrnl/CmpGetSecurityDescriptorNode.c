/*
 * XREFs of CmpGetSecurityDescriptorNode @ 0x1403FD450
 * Callers:
 *     CmpAssignSecurityDescriptor @ 0x1403FCD7C (CmpAssignSecurityDescriptor.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmpCopyKeyPartial @ 0x1404EBDEC (CmpCopyKeyPartial.c)
 *     CmpCopySaclToVirtualKey @ 0x1406021A4 (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x140609858 (CmpSyncKeyValues.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14060F624 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x1406026C8 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNode(ULONG_PTR a1, __int64 a2, __int64 a3, void *Src, char a5, __int64 a6)
{
  return CmpGetSecurityDescriptorNodeEx(a1, Src, a5, a6);
}
