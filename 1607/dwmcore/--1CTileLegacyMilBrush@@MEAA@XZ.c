/*
 * XREFs of ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x180024714
 * Callers:
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x180032A40 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 *     ??_GCTileLegacyMilBrush@@MEAAPEAXI@Z @ 0x18012B9D0 (--_GCTileLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x180084528 (--1CMILBrushBitmap@@MEAA@XZ.c)
 */

void __fastcall CTileLegacyMilBrush::~CTileLegacyMilBrush(CTileLegacyMilBrush *this)
{
  *(_QWORD *)this = &CTileLegacyMilBrush::`vftable';
  CMILBrushBitmap::~CMILBrushBitmap((CTileLegacyMilBrush *)((char *)this + 168));
  CLegacyMilBrush::~CLegacyMilBrush(this);
}
