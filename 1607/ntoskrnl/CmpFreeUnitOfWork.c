/*
 * XREFs of CmpFreeUnitOfWork @ 0x14060E384
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpFreeUnitOfWork(void *a1)
{
  ExFreePoolWithTag(a1, 0x77554D43u);
}
