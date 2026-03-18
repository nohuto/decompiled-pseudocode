/*
 * XREFs of ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x18009B420
 * Callers:
 *     ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180041D10 (-Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z.c)
 *     ?AddRef@CHwBitmapCache@@WBI@EAAKXZ @ 0x18009AD40 (-AddRef@CHwBitmapCache@@WBI@EAAKXZ.c)
 *     ?AddRef@CD3DSurface@@WIA@EAAKXZ @ 0x18009B430 (-AddRef@CD3DSurface@@WIA@EAAKXZ.c)
 *     ?AddRef@CHwBitmapColorSource@@WGI@EAAKXZ @ 0x18009B480 (-AddRef@CHwBitmapColorSource@@WGI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationFrame::AddRef(CManipulationFrame *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
