/*
 * XREFs of NdisMRemoveMiniport @ 0x1C005B950
 * Callers:
 *     <none>
 * Callees:
 *     NdisMRemoveMiniportInternal @ 0x1C005B968 (NdisMRemoveMiniportInternal.c)
 */

NDIS_STATUS __stdcall NdisMRemoveMiniport(NDIS_HANDLE MiniportHandle)
{
  NdisMRemoveMiniportInternal(MiniportHandle, 71LL);
  return 0;
}
