/*
 * XREFs of ApiSetReleaseSchema @ 0x140231C84
 * Callers:
 *     PspSiloLoadApiSets @ 0x14067EF24 (PspSiloLoadApiSets.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}
