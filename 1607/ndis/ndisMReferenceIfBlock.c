/*
 * XREFs of ndisMReferenceIfBlock @ 0x1C0017DB0
 * Callers:
 *     ndisIndicateInitialStateToBinding @ 0x1C0016864 (ndisIndicateInitialStateToBinding.c)
 *     ndisIfSetInterfaceState @ 0x1C0017AB8 (ndisIfSetInterfaceState.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C001AB88 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0062600 (NdisMReenumerateFailedAdapter.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2120 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMiniportFatalError @ 0x1C00D3F88 (ndisMiniportFatalError.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 */

__int64 __fastcall ndisMReferenceIfBlock(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rbx
  KIRQL v5; // si

  v4 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(a1 + 4088) )
  {
    v4 = *(_QWORD *)(a1 + 4096);
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v4 + 1448), a2);
    ++*(_DWORD *)(v4 + 1404);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v5);
  return v4;
}
