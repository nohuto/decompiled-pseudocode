/*
 * XREFs of SeDeassignSecurity @ 0x1404B4020
 * Callers:
 *     SepDeleteAccessState @ 0x1400432D0 (SepDeleteAccessState.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x14046E22C (ObpAssignSecurity.c)
 *     VerifierSeDeassignSecurity @ 0x1406C0CDC (VerifierSeDeassignSecurity.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
