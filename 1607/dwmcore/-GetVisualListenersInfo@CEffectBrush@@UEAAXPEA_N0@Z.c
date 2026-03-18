/*
 * XREFs of ?GetVisualListenersInfo@CEffectBrush@@UEAAXPEA_N0@Z @ 0x18013C030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEffectBrush::GetVisualListenersInfo(CEffectBrush *this, bool *a2, bool *a3)
{
  GetVisualListenersInfoImpl(CBitmapColorKey::GetSourceState, (char *)this - 96, a2, a3);
}
