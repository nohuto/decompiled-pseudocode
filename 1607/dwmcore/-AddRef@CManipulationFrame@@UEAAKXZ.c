/*
 * XREFs of ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800B7FD0
 * Callers:
 *     ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180057620 (-Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z.c)
 *     ?AddRef@CD3DSurface@@WIA@EAAKXZ @ 0x1800C1360 (-AddRef@CD3DSurface@@WIA@EAAKXZ.c)
 *     ?AddRef@CHwBitmapCache@@WBI@EAAKXZ @ 0x1800C19A0 (-AddRef@CHwBitmapCache@@WBI@EAAKXZ.c)
 *     ?AddRef@CHwBitmapColorSource@@WGI@EAAKXZ @ 0x1800C1A40 (-AddRef@CHwBitmapColorSource@@WGI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationFrame::AddRef(CManipulationFrame *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
