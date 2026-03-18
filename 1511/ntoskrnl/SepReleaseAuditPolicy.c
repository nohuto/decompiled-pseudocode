/*
 * XREFs of SepReleaseAuditPolicy @ 0x140651D9C
 * Callers:
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseAuditPolicy(void *a1, unsigned __int8 a2)
{
  if ( a1 )
  {
    if ( a2 <= 1u )
      ExFreePoolWithTag(a1, 0);
  }
}
