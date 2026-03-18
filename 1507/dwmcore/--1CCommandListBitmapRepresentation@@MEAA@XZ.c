/*
 * XREFs of ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x180087D9C
 * Callers:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x18001211C (--1CHwndBitmap@@MEAA@XZ.c)
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800873C8 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ??_GCCommandListBitmapRepresentation@@MEAAPEAXI@Z @ 0x1800F9150 (--_GCCommandListBitmapRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x180087D14 (-ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ.c)
 */

void __fastcall CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation(void **this)
{
  *this = &CCommandListBitmapRepresentation::`vftable';
  CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations((CCommandListBitmapRepresentation *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 38);
}
