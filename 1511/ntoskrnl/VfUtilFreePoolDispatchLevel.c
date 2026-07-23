/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x14020ABC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VfUtilFreePoolDispatchLevel(_SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
