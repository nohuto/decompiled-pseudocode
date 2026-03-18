/*
 * XREFs of ?AddRef@CHwBitmapCache@@WBI@EAAKXZ @ 0x1800C19A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwBitmapCache::AddRef(__int64 a1)
{
  return CManipulationFrame::AddRef((CManipulationFrame *)(a1 - 24));
}
