/*
 * XREFs of ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x180109168
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007B490 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18007B820 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x18007C618 (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
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
