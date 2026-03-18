/*
 * XREFs of ?GetVisualListenersInfo@CEffectBrush@@UEAAXPEA_N0@Z @ 0x180122F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEffectBrush::GetVisualListenersInfo(CEffectBrush *this, bool *a2, bool *a3)
{
  GetVisualListenersInfoImpl(
    (CRenderTarget *)CBitmapColorKey::GetSourceState,
    (__int64 *)this - 4,
    (char *)a2,
    (char *)a3);
}
