/*
 * XREFs of ?IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000FDE0
 * Callers:
 *     ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000FBB0 (-NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::IsStereoContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 52);
  result = 0;
  if ( v1 )
    return *(_DWORD *)(v1 + 248) == 3;
  return result;
}
