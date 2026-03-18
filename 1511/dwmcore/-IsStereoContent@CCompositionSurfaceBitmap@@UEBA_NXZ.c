/*
 * XREFs of ?IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C3C0
 * Callers:
 *     ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000BEE0 (-NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 * Callees:
 *     ?IsStereoContent@CBitmapRealization@@UEBA_NXZ @ 0x18000DBF0 (-IsStereoContent@CBitmapRealization@@UEBA_NXZ.c)
 */

bool __fastcall CCompositionSurfaceBitmap::IsStereoContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  bool result; // al

  v1 = *((_QWORD *)this + 51);
  result = 0;
  if ( v1 )
    return CBitmapRealization::IsStereoContent((CBitmapRealization *)(v1 + 112));
  return result;
}
