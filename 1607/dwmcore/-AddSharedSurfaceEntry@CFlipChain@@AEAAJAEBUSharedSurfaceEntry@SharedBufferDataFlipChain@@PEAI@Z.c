/*
 * XREFs of ?AddSharedSurfaceEntry@CFlipChain@@AEAAJAEBUSharedSurfaceEntry@SharedBufferDataFlipChain@@PEAI@Z @ 0x180141D78
 * Callers:
 *     ?CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x18010B9F4 (-CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::AddSharedSurfaceEntry(
        CFlipChain *this,
        const struct SharedBufferDataFlipChain::SharedSurfaceEntry *a2,
        unsigned int *a3)
{
  if ( a3 )
    *a3 = *((_DWORD *)this + 78);
  return DynArray<CWindowNode::PendingDxUpdate,0>::AddMultipleAndSet((__int64)this + 288, (__int64)a2);
}
