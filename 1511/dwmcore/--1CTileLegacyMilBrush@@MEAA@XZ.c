/*
 * XREFs of ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x18005CE6C
 * Callers:
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x18005A540 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 *     ??_GCTileLegacyMilBrush@@MEAAPEAXI@Z @ 0x180113520 (--_GCTileLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x180089B08 (--1CMILBrushBitmap@@MEAA@XZ.c)
 */

void __fastcall CTileLegacyMilBrush::~CTileLegacyMilBrush(CTileLegacyMilBrush *this)
{
  *(_QWORD *)this = &CTileLegacyMilBrush::`vftable';
  CMILBrushBitmap::~CMILBrushBitmap((CTileLegacyMilBrush *)((char *)this + 96));
  CLegacyMilBrush::~CLegacyMilBrush(this);
}
