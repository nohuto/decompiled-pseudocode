/*
 * XREFs of FxFreeToNPagedLookasideListNoTracking @ 0x1C0038660
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007E60 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00091F0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryClose @ 0x1C000F230 (imp_WdfRegistryClose.c)
 * Callees:
 *     <none>
 */

void __fastcall FxFreeToNPagedLookasideListNoTracking(_NPAGED_LOOKASIDE_LIST *Lookaside, _SLIST_ENTRY *Entry)
{
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) >= Lookaside->L.Depth )
    ((void (__fastcall *)(_SLIST_ENTRY *))Lookaside->L.FreeEx)(Entry);
  else
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, Entry);
}
