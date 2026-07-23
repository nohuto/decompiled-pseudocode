/*
 * XREFs of IopUserRundown @ 0x1404C6810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
