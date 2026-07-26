/*
 * XREFs of ndisMReferenceIfBlock @ 0x1C0017410
 * Callers:
 *     ndisIndicateInitialStateToBinding @ 0x1C0014DC8 (ndisIndicateInitialStateToBinding.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z @ 0x1C001A38C (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C005ECA0 (NdisMReenumerateFailedAdapter.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2CA0 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMiniportFatalError @ 0x1C00D4838 (ndisMiniportFatalError.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5B90 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C00F5230 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
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
    ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v4 + 1448), a2);
    ++*(_DWORD *)(v4 + 1404);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v5);
  return v4;
}
