/*
 * XREFs of IopApcHardError @ 0x140620E1C
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x140622078 (IopRaiseHardError.c)
 */

void __fastcall IopApcHardError(PIRP *a1)
{
  IopRaiseHardError(a1[4]);
  ExFreePoolWithTag(a1, 0);
}
