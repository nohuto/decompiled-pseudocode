/*
 * XREFs of ApiSetReleaseSchema @ 0x140231E58
 * Callers:
 *     PspSiloLoadApiSets @ 0x14067EE40 (PspSiloLoadApiSets.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}
