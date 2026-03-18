/*
 * XREFs of ?AddRef@CMILBrushSolid@@WDI@EAAKXZ @ 0x1800BF270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushSolid::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 56));
}
