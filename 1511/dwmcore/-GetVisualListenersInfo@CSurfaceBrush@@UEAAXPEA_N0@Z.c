/*
 * XREFs of ?GetVisualListenersInfo@CSurfaceBrush@@UEAAXPEA_N0@Z @ 0x180122230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSurfaceBrush::GetVisualListenersInfo(CSurfaceBrush *this, bool *a2, bool *a3)
{
  GetVisualListenersInfoImpl(
    (CRenderTarget *)lambda_25e745fa92acc9ce70c56b73038541f1_::_helper_func_cdecl_,
    (__int64 *)this - 4,
    (char *)a2,
    (char *)a3);
}
