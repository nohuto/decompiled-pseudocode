/*
 * XREFs of CmpGetSecurityDescriptorNode @ 0x1406597E0
 * Callers:
 *     CmpAssignSecurityDescriptorWrapper @ 0x140449A94 (CmpAssignSecurityDescriptorWrapper.c)
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x140585640 (CmpSyncKeyValues.c)
 *     CmpCommitSetSecurityUoW @ 0x14058E3F0 (CmpCommitSetSecurityUoW.c)
 *     CmpCreateEmptyKey @ 0x140658120 (CmpCreateEmptyKey.c)
 *     CmpCopySaclToVirtualKey @ 0x140659314 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140659810 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNode(ULONG_PTR a1, __int64 a2, __int64 a3, void *Src, char a5, __int64 a6)
{
  return CmpGetSecurityDescriptorNodeEx(a1, Src, a5, a6);
}
