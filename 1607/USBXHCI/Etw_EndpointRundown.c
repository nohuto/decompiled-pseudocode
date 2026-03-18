/*
 * XREFs of Etw_EndpointRundown @ 0x1C0034354
 * Callers:
 *     Etw_EndpointListRundown @ 0x1C00341A0 (Etw_EndpointListRundown.c)
 * Callees:
 *     Template_pppnnn @ 0x1C00346F0 (Template_pppnnn.c)
 */

__int64 __fastcall Etw_EndpointRundown(int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    return Template_pppnnn(
             a1,
             (unsigned int)&USBXHCI_ETW_EVENT_RUNDOWN_ENDPOINT_INFORMATION,
             a1,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
