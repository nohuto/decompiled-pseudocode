/*
 * XREFs of ndisQueuedResetMiniport @ 0x1C005ED90
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisMResetMiniportInternal @ 0x1C0023880 (ndisMResetMiniportInternal.c)
 */

void __fastcall ndisQueuedResetMiniport(void *a1, KSPIN_LOCK *a2)
{
  ndisMResetMiniportInternal(a2, 3u);
  ndisDereferenceMiniport((__int64)a2);
  ExFreePoolWithTag(a1, 0);
}
