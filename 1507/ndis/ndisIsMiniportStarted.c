/*
 * XREFs of ndisIsMiniportStarted @ 0x1C0019940
 * Callers:
 *     ndisSetDevicePower @ 0x1C000F10C (ndisSetDevicePower.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C009A8A0 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C009AA70 (ndisPnPRemoveDeviceEx.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009B34C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A5EE8 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00CDEB0 (NdisIMInitializeDeviceInstanceEx.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2CA0 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D4D9C (ndisPnPIrpStopDevice.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00DD908 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E5488 (ndisPnPIrpRemoveDevice.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5B90 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C00E5E24 (ndisQueryPower.c)
 *     ndisMPowerPolicy @ 0x1C00E6244 (ndisMPowerPolicy.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 */

bool __fastcall ndisIsMiniportStarted(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  unsigned int v4; // esi
  KIRQL v5; // r15
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rbp

  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(99LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
  {
    LOBYTE(v4) = i == a1;
    WPP_SF_qD(100LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, v4);
  }
  return i == a1;
}
