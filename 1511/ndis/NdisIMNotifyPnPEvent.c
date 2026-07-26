/*
 * XREFs of NdisIMNotifyPnPEvent @ 0x1C00CDD90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A581C (ndisInitializeNetPnPEvent.c)
 *     NdisMNetPnPEvent @ 0x1C00CDE10 (NdisMNetPnPEvent.c)
 */

NDIS_STATUS __stdcall NdisIMNotifyPnPEvent(NDIS_HANDLE MiniportHandle, PNET_PNP_EVENT NetPnPEvent)
{
  struct _NET_PNP_EVENT_NOTIFICATION NetPnPEventNotification; // [rsp+20h] [rbp-C8h] BYREF

  ndisInitializeNetPnPEvent(&NetPnPEventNotification, 0LL);
  NetPnPEventNotification.NetPnPEvent.NetEvent = NetPnPEvent->NetEvent;
  NetPnPEventNotification.NetPnPEvent.Buffer = NetPnPEvent->Buffer;
  NetPnPEventNotification.NetPnPEvent.BufferLength = NetPnPEvent->BufferLength;
  return NdisMNetPnPEvent(MiniportHandle, &NetPnPEventNotification);
}
