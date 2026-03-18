/*
 * XREFs of AuthzBasepFinaliseSecurityAttributesList @ 0x14000694C
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400059B0 (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x14009E680 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x14021A0B8 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFinaliseSecurityAttributesList(__int64 a1, char a2)
{
  _QWORD *v3; // rdi
  void *v5; // rbx
  char v6; // al

  v3 = (_QWORD *)(a1 + 32);
  while ( (_QWORD *)*v3 != v3 )
  {
    v5 = (void *)(*v3 - 16LL);
    if ( a2 )
      v6 = AuthzBasepCommitSecurityAttributeChanges(a1, v5);
    else
      v6 = AuthzBasepRollbackSecurityAttributeChanges(a1, v5);
    if ( v6 )
      ExFreePoolWithTag(v5, 0);
  }
}
