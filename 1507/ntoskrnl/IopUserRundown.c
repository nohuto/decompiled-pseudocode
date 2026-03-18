/*
 * XREFs of IopUserRundown @ 0x140554804
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
