/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x14045F304
 * Callers:
 *     NtPrivilegeCheck @ 0x14045E7B8 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x14045E9C4 (NtAdjustPrivilegesToken.c)
 *     NtAdjustGroupsToken @ 0x140476094 (NtAdjustGroupsToken.c)
 *     NtCreateTokenEx @ 0x140476AAC (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 *     NtFilterToken @ 0x14047BC68 (NtFilterToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
