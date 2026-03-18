/*
 * XREFs of ?AddRef@CHwBitmapCache@@WBI@EAAKXZ @ 0x18009AD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwBitmapCache::AddRef(__int64 a1)
{
  return CManipulationFrame::AddRef((CManipulationFrame *)(a1 - 24));
}
