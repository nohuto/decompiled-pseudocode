/*
 * XREFs of ndisIsMiniportStarted @ 0x1C001BE98
 * Callers:
 *     ndisSetDevicePower @ 0x1C001227C (ndisSetDevicePower.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00984BC (ndisPnPIrpSurpriseRemoval.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C009865C (ndisPnPRemoveDeviceEx.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0099000 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A04A4 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00C72C0 (NdisIMInitializeDeviceInstanceEx.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00CC430 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00CE52C (ndisPnPIrpStopDevice.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00D7258 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisQueryPower @ 0x1C00DF930 (ndisQueryPower.c)
 *     ndisMPowerPolicy @ 0x1C00DFB64 (ndisMPowerPolicy.c)
 *     ndisDevicePowerDown @ 0x1C00DFD10 (ndisDevicePowerDown.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E0108 (ndisPnPIrpRemoveDevice.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 */

bool __fastcall ndisIsMiniportStarted(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  unsigned int v4; // esi
  KIRQL v5; // r15
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rbp

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(102LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
  {
    LOBYTE(v4) = i == a1;
    WPP_SF_qD(103LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, v4);
  }
  return i == a1;
}
