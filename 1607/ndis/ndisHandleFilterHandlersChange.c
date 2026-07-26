/*
 * XREFs of ndisHandleFilterHandlersChange @ 0x1C001A090
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E6AE0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisSetupLwfMiniportHandlers @ 0x1C0018D40 (ndisSetupLwfMiniportHandlers.c)
 *     ndisQueryFilterInstanceHandlers @ 0x1C00A1BDC (ndisQueryFilterInstanceHandlers.c)
 */

void __fastcall ndisHandleFilterHandlersChange(__int64 a1)
{
  KIRQL v2; // al
  KIRQL v3; // bl

  ndisQueryFilterInstanceHandlers(*(_QWORD *)(a1 + 2048));
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v3 = v2;
  *(_DWORD *)(a1 + 1856) = 2102666;
  ndisSetupLwfMiniportHandlers(a1);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v3);
}
