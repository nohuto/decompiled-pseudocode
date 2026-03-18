/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x1403C334C
 * Callers:
 *     NtCreateLowBoxToken @ 0x1403C0A6C (NtCreateLowBoxToken.c)
 *     NtAdjustPrivilegesToken @ 0x1403C28D4 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x1403C312C (NtPrivilegeCheck.c)
 *     NtCreateTokenEx @ 0x1403C35AC (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     NtAdjustGroupsToken @ 0x1404AD974 (NtAdjustGroupsToken.c)
 *     NtFilterToken @ 0x1404BD130 (NtFilterToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
