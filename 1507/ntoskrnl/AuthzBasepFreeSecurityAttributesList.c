/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x140109210
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14002BA68 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140044E10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14011C690 (AuthzBasepEvaluateAceCondition.c)
 *     SepCleanSingletonEntry @ 0x1401277C4 (SepCleanSingletonEntry.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14012A2E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     sub_1401BF710 @ 0x1401BF710 (sub_1401BF710.c)
 *     SepCreateClaimAttributes @ 0x14046E408 (SepCreateClaimAttributes.c)
 *     SepTokenDeleteMethod @ 0x1404883A0 (SepTokenDeleteMethod.c)
 *     SepExamineSaclEx @ 0x140584948 (SepExamineSaclEx.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140592908 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x1406D47F0 (SeExamineSacl.c)
 *     SepDeleteClaimAttributes @ 0x1406D81A8 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1406D8228 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x140109290 (AuthzBasepFreeSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
