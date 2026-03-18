/*
 * XREFs of ?IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008CA0
 * Callers:
 *     ?IsStereoContent@CCompositionSurfaceBitmap@@WBI@EBA_NXZ @ 0x18009A280 (-IsStereoContent@CCompositionSurfaceBitmap@@WBI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::IsStereoContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // r8
  char v2; // dl

  v1 = *((_QWORD *)this + 50);
  v2 = 0;
  if ( v1 && *(_DWORD *)(v1 + 296) == 2 )
    return *(_DWORD *)(v1 + 320) != 0;
  return v2;
}
