/*
 * XREFs of SepReleaseAuditPolicy @ 0x14069107C
 * Callers:
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseAuditPolicy(void *a1, unsigned __int8 a2)
{
  if ( a1 )
  {
    if ( a2 <= 1u )
      ExFreePoolWithTag(a1, 0);
  }
}
