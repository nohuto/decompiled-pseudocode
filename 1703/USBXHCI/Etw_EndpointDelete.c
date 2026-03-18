/*
 * XREFs of Etw_EndpointDelete @ 0x1C003100C
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C001E420 (Endpoint_EvtEndpointCleanupCallback.c)
 * Callees:
 *     Template_pppnnn @ 0x1C00315FC (Template_pppnnn.c)
 */

__int64 __fastcall Etw_EndpointDelete(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return Template_pppnnn(
             (int)a2 + 103,
             (unsigned int)&USBXHCI_ETW_EVENT_ENDPOINT_DELETE,
             0,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
