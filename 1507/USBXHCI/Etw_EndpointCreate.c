/*
 * XREFs of Etw_EndpointCreate @ 0x1C0032C00
 * Callers:
 *     Endpoint_Create @ 0x1C004FC0C (Endpoint_Create.c)
 * Callees:
 *     Template_pppnnn @ 0x1C0033200 (Template_pppnnn.c)
 */

__int64 __fastcall Etw_EndpointCreate(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 2) != 0 )
    return Template_pppnnn(
             (int)a2 + 103,
             (unsigned int)&USBXHCI_ETW_EVENT_ENDPOINT_CREATE,
             0,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
