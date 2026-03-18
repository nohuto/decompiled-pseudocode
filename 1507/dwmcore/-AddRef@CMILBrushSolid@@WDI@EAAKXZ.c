/*
 * XREFs of ?AddRef@CMILBrushSolid@@WDI@EAAKXZ @ 0x18009BE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CMILBrushSolid::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 56));
}
