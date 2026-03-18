/*
 * XREFs of SeDeassignSecurity @ 0x1405411DC
 * Callers:
 *     SepDeleteAccessState @ 0x14004E240 (SepDeleteAccessState.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     ObpAssignSecurity @ 0x140486910 (ObpAssignSecurity.c)
 *     VerifierSeDeassignSecurity @ 0x14074251C (VerifierSeDeassignSecurity.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
