/*
 * XREFs of SeReleaseAcl @ 0x14046BEE0
 * Callers:
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     NtCreateTokenEx @ 0x14046EF1C (NtCreateTokenEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
