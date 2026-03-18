/*
 * XREFs of ?GetVisualListenersInfo@CNineGridBrush@@UEAAXPEA_N0@Z @ 0x18013FBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CNineGridBrush::GetVisualListenersInfo(CNineGridBrush *this, bool *a2, bool *a3)
{
  GetVisualListenersInfoImpl(CBitmapColorKey::GetSourceState, (char *)this - 96, a2, a3);
}
