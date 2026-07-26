/*
 * XREFs of ndisReferenceMiniportNoCheck @ 0x1C0024BB8
 * Callers:
 *     ndisQueueRequestWorkItem @ 0x1C000A40C (ndisQueueRequestWorkItem.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C0012E30 (ndisSetDevicePowerOnComplete.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0025A0C (ndisMOidRequestCompleteInternal.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C0046DDC (ndisUpdateAndIndicatePMCapabilities.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C004C4B0 (NdisClOpenAddressFamilyEx.c)
 *     NdisMPromoteMiniport @ 0x1C00583E0 (NdisMPromoteMiniport.c)
 *     NdisMFreeSharedMemory @ 0x1C005B5C0 (NdisMFreeSharedMemory.c)
 *     ndis5InterruptDpc @ 0x1C005C100 (ndis5InterruptDpc.c)
 *     ndisQueuePowerIrp @ 0x1C005F484 (ndisQueuePowerIrp.c)
 *     ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00618FC (-ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisSriovInterfaceReference @ 0x1C0065B60 (ndisSriovInterfaceReference.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00984BC (ndisPnPIrpSurpriseRemoval.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C0098740 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E0108 (ndisPnPIrpRemoveDevice.c)
 *     ndisMFinishClose @ 0x1C00E1498 (ndisMFinishClose.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 *     NdisClOpenAddressFamily @ 0x1C00EC750 (NdisClOpenAddressFamily.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

void __fastcall ndisReferenceMiniportNoCheck(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  KIRQL v5; // al
  struct _NDIS_REFCOUNT_BLOCK *v6; // rcx
  KIRQL v7; // si

  v2 = a1 + 4496;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
  v6 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4952);
  v7 = v5;
  if ( v6 )
    ndisReferenceWithTag(v6, a2);
  ++*(_DWORD *)(v2 + 8);
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qD(13LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a1, *(unsigned int *)(a1 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
}
