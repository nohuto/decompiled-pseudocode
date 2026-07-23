/*
 * XREFs of SeReleaseAcl @ 0x140478688
 * Callers:
 *     NtCreateTokenEx @ 0x140476AAC (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
