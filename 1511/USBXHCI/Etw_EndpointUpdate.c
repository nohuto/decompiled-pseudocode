/*
 * XREFs of Etw_EndpointUpdate @ 0x1C0033E88
 * Callers:
 *     Endpoint_EvaluateContextCompletion @ 0x1C00219F0 (Endpoint_EvaluateContextCompletion.c)
 * Callees:
 *     Template_pppnnn @ 0x1C00341D0 (Template_pppnnn.c)
 */

__int64 __fastcall Etw_EndpointUpdate(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 2) != 0 )
    return Template_pppnnn(
             (int)a2 + 103,
             (unsigned int)&USBXHCI_ETW_EVENT_ENDPOINT_UPDATE,
             0,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
