/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x14025A134
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VfUtilFreePoolDispatchLevel(_SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
