/*
 * XREFs of ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0016800
 * Callers:
 *     ndisMRestoreFilterSettings @ 0x1C0011FF0 (ndisMRestoreFilterSettings.c)
 *     ndisReferenceOpenByHandle @ 0x1C0018A98 (ndisReferenceOpenByHandle.c)
 *     ndisMapOpenByName @ 0x1C004F430 (ndisMapOpenByName.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0050F10 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C00515A0 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMSendPackets @ 0x1C0055F60 (ndisMSendPackets.c)
 *     ndisSendPacketsWithPause @ 0x1C0056E90 (ndisSendPacketsWithPause.c)
 *     NdisUnbindAdapter @ 0x1C005A910 (NdisUnbindAdapter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisMReset @ 0x1C005EA30 (ndisMReset.c)
 *     ndisMDoProtocolRequest @ 0x1C00CF53C (ndisMDoProtocolRequest.c)
 *     NdisOpenAdapterEx @ 0x1C00E75A0 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C00E7CD0 (ndisMOpenAdapter.c)
 *     NdisClOpenAddressFamily @ 0x1C00F3440 (NdisClOpenAddressFamily.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00F3980 (NdisCmRegisterAddressFamily.c)
 *     ndisCreateNotifyQueue @ 0x1C00F3E80 (ndisCreateNotifyQueue.c)
 *     NdisCoOidRequest @ 0x1C00F8260 (NdisCoOidRequest.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F97E0 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 */

void __fastcall ndisMReferenceOpen(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  KIRQL v3; // bl

  v1 = (KSPIN_LOCK *)(a1 + 696);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 696));
  NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 688));
  ++*(_DWORD *)(a1 + 228);
  KeReleaseSpinLock(v1, v3);
}
