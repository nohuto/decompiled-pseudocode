/*
 * XREFs of NdrStubForwardingFunction @ 0x180026940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall NdrStubForwardingFunction(
        IRpcStubBuffer *This,
        IRpcChannelBuffer *pChannel,
        PRPC_MESSAGE pmsg,
        DWORD *pdwStubPhase)
{
  __imp_NdrStubForwardingFunction(This, pChannel, pmsg, pdwStubPhase);
}
