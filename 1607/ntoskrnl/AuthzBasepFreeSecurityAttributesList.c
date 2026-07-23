/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x14010C930
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000DF60 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14007C2E4 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepFreeResourceInfo @ 0x14008D00C (SepFreeResourceInfo.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140091690 (SepCleanupMarkedForDeletionEntries.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AAE9C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219C8C (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x1404784D8 (SepCreateClaimAttributes.c)
 *     SepTokenDeleteMethod @ 0x14051A9E0 (SepTokenDeleteMethod.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14056FD94 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x140691504 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140691E34 (SepExamineSaclEx.c)
 *     SepDeleteClaimAttributes @ 0x140695AE4 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140695B64 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14010C9B0 (AuthzBasepFreeSecurityAttributeValues.c)
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
