/*
 * XREFs of ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0010DE8
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A8C44 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisQueryGuidData @ 0x1C00A976C (ndisQueryGuidData.c)
 *     NdisOpenNDKAdapter @ 0x1C00D6D30 (NdisOpenNDKAdapter.c)
 *     ndisMHandleNDKPnPEvents @ 0x1C00D6E04 (ndisMHandleNDKPnPEvents.c)
 *     ndisMSetNDKAttributes @ 0x1C00D6F48 (ndisMSetNDKAttributes.c)
 *     ndisNDKCleanup @ 0x1C00D70B8 (ndisNDKCleanup.c)
 *     ndisNDKWmiGetAdapterCapabilities @ 0x1C00D72F8 (ndisNDKWmiGetAdapterCapabilities.c)
 * Callees:
 *     <none>
 */

struct _NDIS_NDK_BLOCK *__fastcall ndisGetNDKBlock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return (struct _NDIS_NDK_BLOCK *)a1->NDKBlock;
}
