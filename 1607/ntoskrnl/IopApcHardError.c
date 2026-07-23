/*
 * XREFs of IopApcHardError @ 0x140620ED0
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x14062212C (IopRaiseHardError.c)
 */

void __fastcall IopApcHardError(PIRP *a1)
{
  IopRaiseHardError(a1[4]);
  ExFreePoolWithTag(a1, 0);
}
