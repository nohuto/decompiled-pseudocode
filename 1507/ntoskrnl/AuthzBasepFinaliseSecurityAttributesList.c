/*
 * XREFs of AuthzBasepFinaliseSecurityAttributesList @ 0x140015A10
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400156C0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14002BA68 (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x140015A70 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140269D98 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFinaliseSecurityAttributesList(__int64 a1, char a2)
{
  _QWORD *v4; // rbx
  void *v5; // rdi
  char v6; // al

  v4 = (_QWORD *)(a1 + 32);
  while ( (_QWORD *)*v4 != v4 )
  {
    v5 = (void *)(*v4 - 16LL);
    if ( a2 )
      v6 = AuthzBasepCommitSecurityAttributeChanges(a1, v5);
    else
      v6 = AuthzBasepRollbackSecurityAttributeChanges(a1, v5);
    if ( v6 )
      ExFreePoolWithTag(v5, 0);
  }
}
