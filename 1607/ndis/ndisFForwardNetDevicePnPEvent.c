/*
 * XREFs of ndisFForwardNetDevicePnPEvent @ 0x1C00CE064
 * Callers:
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00AB154 (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00CDF90 (ndisFDevicePnPEventNotifyInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFForwardNetDevicePnPEvent(NDIS_HANDLE NdisFilterHandle, PNET_DEVICE_PNP_EVENT NetDevicePnPEvent)
{
  if ( *(_QWORD *)(*((_QWORD *)NdisFilterHandle + 2) + 272LL) )
    ndisFInvokeDevicePnPEventNotify(NdisFilterHandle, NetDevicePnPEvent);
  else
    NdisFDevicePnPEventNotify(NdisFilterHandle, NetDevicePnPEvent);
}
