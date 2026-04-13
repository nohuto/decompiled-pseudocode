/*
 * XREFs of CStdStubBuffer_Invoke @ 0x180026AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CStdStubBuffer_Invoke(
        IRpcStubBuffer *This,
        RPCOLEMESSAGE *pRpcMsg,
        IRpcChannelBuffer *pRpcChannelBuffer)
{
  return __imp_CStdStubBuffer_Invoke(This, pRpcMsg, pRpcChannelBuffer);
}
