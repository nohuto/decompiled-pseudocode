/*
 * XREFs of SeDeassignSecurity @ 0x1404BBEA8
 * Callers:
 *     SepDeleteAccessState @ 0x14000F260 (SepDeleteAccessState.c)
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     ObpAssignSecurity @ 0x14041E8D0 (ObpAssignSecurity.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeDeassignSecurity(PSECURITY_DESCRIPTOR *SecurityDescriptor)
{
  PSECURITY_DESCRIPTOR v2; // rcx

  v2 = *SecurityDescriptor;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *SecurityDescriptor = 0LL;
  return 0;
}
