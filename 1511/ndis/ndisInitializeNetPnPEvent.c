/*
 * XREFs of ndisInitializeNetPnPEvent @ 0x1C00A581C
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003B198 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003B718 (ndisPnPPortDeactivation.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C0097EE8 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisFNetPnPEventInternal @ 0x1C00980A0 (ndisFNetPnPEventInternal.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C0098598 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0099000 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C00991E8 (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 *     ndisNotifyBindFailure @ 0x1C0099B5C (ndisNotifyBindFailure.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00A0290 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A21D8 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00C7570 (ndisIMCheckDeviceInstance.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00CD138 (ndisPnPCancelRemoveDevice.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00CD218 (ndisPnPQueryRemoveDevice.c)
 *     NdisIMNotifyPnPEvent @ 0x1C00CDD90 (NdisIMNotifyPnPEvent.c)
 *     NdisMNetPnPEvent @ 0x1C00CDE10 (NdisMNetPnPEvent.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisQueryPower @ 0x1C00DF930 (ndisQueryPower.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EBF10 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
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
