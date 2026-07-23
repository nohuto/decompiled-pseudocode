/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x140002128
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(_SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
