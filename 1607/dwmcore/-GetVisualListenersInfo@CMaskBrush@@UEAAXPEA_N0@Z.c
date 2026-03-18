/*
 * XREFs of ?GetVisualListenersInfo@CMaskBrush@@UEAAXPEA_N0@Z @ 0x18013EBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMaskBrush::GetVisualListenersInfo(CMaskBrush *this, bool *a2, bool *a3)
{
  GetVisualListenersInfoImpl(CBitmapColorKey::GetSourceState, (char *)this - 96, a2, a3);
}
