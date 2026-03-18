/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x14046E0D8
 * Callers:
 *     NtFilterToken @ 0x14040F530 (NtFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     NtPrivilegeCheck @ 0x14046AF58 (NtPrivilegeCheck.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     NtAdjustPrivilegesToken @ 0x14046D600 (NtAdjustPrivilegesToken.c)
 *     NtCreateTokenEx @ 0x14046EF1C (NtCreateTokenEx.c)
 *     NtAdjustGroupsToken @ 0x14053F940 (NtAdjustGroupsToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
