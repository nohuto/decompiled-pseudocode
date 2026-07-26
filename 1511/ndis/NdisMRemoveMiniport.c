/*
 * XREFs of NdisMRemoveMiniport @ 0x1C005B6C0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMRemoveMiniportInternal @ 0x1C005B6D8 (NdisMRemoveMiniportInternal.c)
 */

NDIS_STATUS __stdcall NdisMRemoveMiniport(NDIS_HANDLE MiniportHandle)
{
  NdisMRemoveMiniportInternal(MiniportHandle, 71LL);
  return 0;
}
