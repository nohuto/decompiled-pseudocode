/*
 * XREFs of ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AD14
 * Callers:
 *     ndisReferenceOpenByHandle @ 0x1C001AC44 (ndisReferenceOpenByHandle.c)
 *     ndisMRestoreFilterSettings @ 0x1C0042990 (ndisMRestoreFilterSettings.c)
 *     ndisMapOpenByName @ 0x1C004AA14 (ndisMapOpenByName.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C004C4B0 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C004CB40 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMSendPackets @ 0x1C0051390 (ndisMSendPackets.c)
 *     ndisSendPacketsWithPause @ 0x1C00522C0 (ndisSendPacketsWithPause.c)
 *     NdisUnbindAdapter @ 0x1C0056110 (NdisUnbindAdapter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisMReset @ 0x1C005A620 (ndisMReset.c)
 *     ndisMDoProtocolRequest @ 0x1C00C9B1C (ndisMDoProtocolRequest.c)
 *     ndisMOpenAdapter @ 0x1C00E340C (ndisMOpenAdapter.c)
 *     NdisOpenAdapterEx @ 0x1C00E3930 (NdisOpenAdapterEx.c)
 *     NdisClOpenAddressFamily @ 0x1C00EC750 (NdisClOpenAddressFamily.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00ECC90 (NdisCmRegisterAddressFamily.c)
 *     ndisCreateNotifyQueue @ 0x1C00ED190 (ndisCreateNotifyQueue.c)
 *     NdisCoOidRequest @ 0x1C00F2260 (NdisCoOidRequest.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F37F0 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
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
