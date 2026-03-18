/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x140460434
 * Callers:
 *     NtPrivilegeCheck @ 0x14045F8E8 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x14045FAF4 (NtAdjustPrivilegesToken.c)
 *     NtAdjustGroupsToken @ 0x1404771C4 (NtAdjustGroupsToken.c)
 *     NtCreateTokenEx @ 0x140477BDC (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14047BBD8 (NtCreateLowBoxToken.c)
 *     NtFilterToken @ 0x14047CD98 (NtFilterToken.c)
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
