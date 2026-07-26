/*
 * XREFs of ndisIsMiniportStarted @ 0x1C00180A4
 * Callers:
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C009E0B4 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009E1CC (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C009E398 (ndisPnPRemoveDeviceEx.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A8C44 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00CCBA0 (NdisIMInitializeDeviceInstanceEx.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2120 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D44EC (ndisPnPIrpStopDevice.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00DD208 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisQueryPower @ 0x1C00E5B80 (ndisQueryPower.c)
 *     ndisMPowerPolicy @ 0x1C00E5DB4 (ndisMPowerPolicy.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E6DF8 (ndisPnPIrpRemoveDevice.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 */

bool __fastcall ndisIsMiniportStarted(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  unsigned int v4; // esi
  KIRQL v5; // r15
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rbp

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(102LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
  ndisReferencePackage(&ndisPkgs);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  i = ndisMiniportList;
  v4 = 0;
  v5 = v2;
  if ( ndisMiniportList )
  {
    do
    {
      if ( i == a1 )
        break;
      i = i->NextGlobalMiniport;
    }
    while ( i );
    if ( i )
    {
      DriverHandle = a1->DriverHandle;
      i = 0LL;
      if ( DriverHandle )
      {
        KeAcquireSpinLockAtDpcLevel(&DriverHandle->Ref.SpinLock);
        for ( i = DriverHandle->MiniportQueue; i && i != a1; i = i->NextMiniport )
          ;
        KeReleaseSpinLockFromDpcLevel(&DriverHandle->Ref.SpinLock);
      }
    }
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v5);
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
  {
    LOBYTE(v4) = i == a1;
    WPP_SF_qD(103LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, v4);
  }
  return i == a1;
}
