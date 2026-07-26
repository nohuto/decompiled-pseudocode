/*
 * XREFs of ndisFilterXStateSetFlag @ 0x1C001FACC
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisFilterXStateSetFlag(__int64 a1)
{
  *(_BYTE *)(a1 + 376) |= 1u;
  return ndisUpdateFilterFakeStatus(a1);
}
