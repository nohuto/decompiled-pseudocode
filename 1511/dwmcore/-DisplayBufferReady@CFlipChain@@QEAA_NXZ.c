/*
 * XREFs of ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x1800AE0F4
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800617E0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x180062E54 (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFlipChain::DisplayBufferReady(CFlipChain *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 38) )
    return *(_DWORD *)(*((_QWORD *)this + 16) + 8LL) == 2;
  return result;
}
