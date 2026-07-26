/*
 * XREFs of ndisMDereferenceIfBlock @ 0x1C001DC98
 * Callers:
 *     ndisIfDetachMiniportBlock @ 0x1C0013364 (ndisIfDetachMiniportBlock.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C001C7F0 (ndisIndicateInitialStateToBinding.c)
 *     ndisIfSetInterfaceState @ 0x1C001DA38 (ndisIfSetInterfaceState.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C003C8D8 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C005E600 (NdisMReenumerateFailedAdapter.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00CC430 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMiniportFatalError @ 0x1C00CDFC8 (ndisMiniportFatalError.c)
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00CE6E0 (ndisQueuedReenumerateFailedAdapter.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00DFD10 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C00EF3B0 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001DCEC (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 */

void __fastcall ndisMDereferenceIfBlock(__int64 a1, enum _NDIS_MPIF_REFTAG a2)
{
  KIRQL v4; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  IFBLOCK_DEREFERENCE_MINIPORT_LINK(*(struct _NDIS_IF_BLOCK **)(a1 + 4096), a2);
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v4);
}
