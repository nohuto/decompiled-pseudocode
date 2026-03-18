/*
 * XREFs of ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x1800AA424
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180028480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x180029194 (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFlipChain::DisplayBufferReady(CFlipChain *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 56) )
    return *(_DWORD *)(*((_QWORD *)this + 25) + 8LL) == 2;
  return result;
}
