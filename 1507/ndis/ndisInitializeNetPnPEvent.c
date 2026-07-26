/*
 * XREFs of ndisInitializeNetPnPEvent @ 0x1C00A6A98
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003A458 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003A9D8 (ndisPnPPortDeactivation.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C009A97C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C009B2D0 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009B34C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C009B450 (ndisFNetPnPEventInternal.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00A69C0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C00B0528 (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 *     ndisNotifyBindFailure @ 0x1C00B3554 (ndisNotifyBindFailure.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00CE160 (ndisIMCheckDeviceInstance.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00D39A8 (ndisPnPCancelRemoveDevice.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00D3A88 (ndisPnPQueryRemoveDevice.c)
 *     NdisIMNotifyPnPEvent @ 0x1C00D4600 (NdisIMNotifyPnPEvent.c)
 *     NdisMNetPnPEvent @ 0x1C00D4680 (NdisMNetPnPEvent.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 *     ndisQueryPower @ 0x1C00E5E24 (ndisQueryPower.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EB930 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 */

void __fastcall ndisInitializeNetPnPEvent(_QWORD *a1, struct _KEVENT *a2)
{
  memset(a1, 0, 0xB0uLL);
  *a1 = 11272832LL;
  *(_QWORD *)((char *)a1 + 164) = 0LL;
  *((_DWORD *)a1 + 40) = 0;
  *((_DWORD *)a1 + 2) = 22;
  a1[2] = 0LL;
  *((_DWORD *)a1 + 6) = 0;
  if ( a2 )
  {
    KeInitializeEvent(a2, NotificationEvent, 0);
    a1[4] = a2;
  }
}
