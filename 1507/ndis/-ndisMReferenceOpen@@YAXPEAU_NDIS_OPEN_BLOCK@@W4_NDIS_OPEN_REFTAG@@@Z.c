/*
 * XREFs of ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0018F9C
 * Callers:
 *     ndisMRestoreFilterSettings @ 0x1C00413D4 (ndisMRestoreFilterSettings.c)
 *     ndisMapOpenByName @ 0x1C004A174 (ndisMapOpenByName.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C004BC70 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C004C300 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMSendPackets @ 0x1C0050DF0 (ndisMSendPackets.c)
 *     ndisSendPacketsWithPause @ 0x1C0051EF0 (ndisSendPacketsWithPause.c)
 *     NdisUnbindAdapter @ 0x1C0056280 (NdisUnbindAdapter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisMReset @ 0x1C005A680 (ndisMReset.c)
 *     ndisMDoProtocolRequest @ 0x1C00D070C (ndisMDoProtocolRequest.c)
 *     ndisMOpenAdapter @ 0x1C00E8200 (ndisMOpenAdapter.c)
 *     NdisOpenAdapterEx @ 0x1C00E9A60 (NdisOpenAdapterEx.c)
 *     NdisClOpenAddressFamily @ 0x1C00F2770 (NdisClOpenAddressFamily.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00F2CB0 (NdisCmRegisterAddressFamily.c)
 *     ndisCreateNotifyQueue @ 0x1C00F31B0 (ndisCreateNotifyQueue.c)
 *     NdisCoOidRequest @ 0x1C00F8260 (NdisCoOidRequest.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F97F0 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 */

void __fastcall ndisMReferenceOpen(__int64 a1, unsigned __int8 a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // bl

  v2 = (KSPIN_LOCK *)(a1 + 696);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 696));
  ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 688), a2);
  ++*(_DWORD *)(a1 + 228);
  KeReleaseSpinLock(v2, v5);
}
