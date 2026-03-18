/*
 * XREFs of CmpFreeUnitOfWork @ 0x14060E2D0
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpFreeUnitOfWork(void *a1)
{
  ExFreePoolWithTag(a1, 0x77554D43u);
}
