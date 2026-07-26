/*
 * XREFs of ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0011E40
 * Callers:
 *     ndisQueryGuidData @ 0x1C009F550 (ndisQueryGuidData.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A04A4 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisOpenNDKAdapter @ 0x1C00D0CE0 (NdisOpenNDKAdapter.c)
 *     ndisMHandleNDKPnPEvents @ 0x1C00D0DB4 (ndisMHandleNDKPnPEvents.c)
 *     ndisMSetNDKAttributes @ 0x1C00D0EFC (ndisMSetNDKAttributes.c)
 *     ndisNDKCleanup @ 0x1C00D1084 (ndisNDKCleanup.c)
 *     ndisNDKWmiGetAdapterCapabilities @ 0x1C00D12D4 (ndisNDKWmiGetAdapterCapabilities.c)
 * Callees:
 *     <none>
 */

struct _NDIS_NDK_BLOCK *__fastcall ndisGetNDKBlock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return (struct _NDIS_NDK_BLOCK *)a1->NDKBlock;
}
