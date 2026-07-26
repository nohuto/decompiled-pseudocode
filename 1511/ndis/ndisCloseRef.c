/*
 * XREFs of ndisCloseRef @ 0x1C00187A0
 * Callers:
 *     NdisFDeregisterFilterDriver @ 0x1C0052FA0 (NdisFDeregisterFilterDriver.c)
 *     NdisMDeregisterMiniportDriver @ 0x1C0098D10 (NdisMDeregisterMiniportDriver.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMUnload @ 0x1C00EC5A0 (ndisMUnload.c)
 *     NdisDeregisterProtocol @ 0x1C00ED550 (NdisDeregisterProtocol.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00EFB2C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisCloseRef(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // al
  bool v3; // zf
  bool v4; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v3 = *((_BYTE *)SpinLock + 10) == 0;
  *((_BYTE *)SpinLock + 10) = 1;
  v4 = v3;
  KeReleaseSpinLock(SpinLock, v2);
  return v4;
}
