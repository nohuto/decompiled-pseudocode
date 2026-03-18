/*
 * XREFs of IopApcHardError @ 0x1405F7114
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x1405F81F0 (IopRaiseHardError.c)
 */

void __fastcall IopApcHardError(PIRP *a1)
{
  IopRaiseHardError(a1[4]);
  ExFreePoolWithTag(a1, 0);
}
