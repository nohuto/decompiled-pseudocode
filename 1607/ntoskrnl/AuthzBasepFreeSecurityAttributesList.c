/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x140088740
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000E3E0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14007C264 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepFreeResourceInfo @ 0x14008D8AC (SepFreeResourceInfo.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140091F30 (SepCleanupMarkedForDeletionEntries.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14009FBFC (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AC934 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219E60 (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x140479608 (SepCreateClaimAttributes.c)
 *     SepTokenDeleteMethod @ 0x1404A25E0 (SepTokenDeleteMethod.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14056F854 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x140691420 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140691D50 (SepExamineSaclEx.c)
 *     SepDeleteClaimAttributes @ 0x140695A00 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140695A80 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1400887C0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributesList(_DWORD *a1)
{
  _DWORD *v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx
  void **v5; // rax

  v2 = a1 + 2;
  while ( *(_DWORD **)v2 != v2 )
  {
    v3 = *(_QWORD **)v2;
    if ( (*(_DWORD *)(*(_QWORD *)v2 + 56LL) & 1) != 0 )
    {
      v4 = (_QWORD *)*v3;
      v5 = (void **)v3[1];
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || *v5 != v3 )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      *((_DWORD *)v3 + 14) &= ~1u;
      --*a1;
    }
    AuthzBasepFreeSecurityAttributeValues(v3, 0LL);
    ExFreePoolWithTag(v3, 0);
  }
}
