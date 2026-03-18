/*
 * XREFs of ??1CTileBrush@@MEAA@XZ @ 0x180085E70
 * Callers:
 *     ??1CImageBrush@@MEAA@XZ @ 0x180085C00 (--1CImageBrush@@MEAA@XZ.c)
 *     ??_GCTileBrush@@MEAAPEAXI@Z @ 0x1800F96A0 (--_GCTileBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x18008128C (--1CMILBrushBitmap@@MEAA@XZ.c)
 */

void __fastcall CTileBrush::~CTileBrush(CTileBrush *this)
{
  *(_QWORD *)this = &CTileBrush::`vftable';
  CMILBrushBitmap::~CMILBrushBitmap((CTileBrush *)((char *)this + 96));
  CBrush::~CBrush(this);
}
