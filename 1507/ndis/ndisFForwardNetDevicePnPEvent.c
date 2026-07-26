/*
 * XREFs of ndisFForwardNetDevicePnPEvent @ 0x1C009C1E0
 * Callers:
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C009C150 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00AB9A8 (ndisDevicePnPEventNotifyMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFForwardNetDevicePnPEvent(_QWORD *a1, struct _NET_DEVICE_PNP_EVENT *a2)
{
  if ( *(_QWORD *)(a1[2] + 272LL) )
    ndisFInvokeDevicePnPEventNotify();
  else
    NdisFDevicePnPEventNotify(a1, a2);
}
