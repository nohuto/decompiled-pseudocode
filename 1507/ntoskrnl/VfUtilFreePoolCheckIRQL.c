/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x14025A124
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VfUtilFreePoolCheckIRQL(_SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, KeGetCurrentIrql() != 2);
}
