/*
 * XREFs of CmpGetSecurityDescriptorNode @ 0x1403FC310
 * Callers:
 *     CmpAssignSecurityDescriptor @ 0x1403FBC3C (CmpAssignSecurityDescriptor.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     CmpCopySaclToVirtualKey @ 0x140602258 (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x14060990C (CmpSyncKeyValues.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14060F6D8 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14060277C (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNode(ULONG_PTR a1, __int64 a2, __int64 a3, void *Src, char a5, __int64 a6)
{
  return CmpGetSecurityDescriptorNodeEx(a1, Src, a5, a6);
}
