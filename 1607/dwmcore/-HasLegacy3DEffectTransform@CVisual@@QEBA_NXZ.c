/*
 * XREFs of ?HasLegacy3DEffectTransform@CVisual@@QEBA_NXZ @ 0x18000BFE8
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AB10 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180051324 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 */

bool __fastcall CVisual::HasLegacy3DEffectTransform(CVisual *this)
{
  char v1; // bl

  v1 = 0;
  if ( !*((_DWORD *)this + 40) )
    return CVisual::GetTransform3DEffectNoRef(this) != 0LL;
  return v1;
}
