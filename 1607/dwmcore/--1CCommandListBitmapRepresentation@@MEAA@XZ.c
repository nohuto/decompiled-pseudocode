/*
 * XREFs of ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x1800B0E54
 * Callers:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x18000A650 (--1CHwndBitmap@@MEAA@XZ.c)
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800935E0 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ??_GCCommandListBitmapRepresentation@@MEAAPEAXI@Z @ 0x18012B720 (--_GCCommandListBitmapRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x1800B0DC0 (-ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x1800B0E2C (-ReleasePrimitiveCaches@CCommandListBitmapRepresentation@@IEAAXXZ.c)
 */

void __fastcall CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation(
        CCommandListBitmapRepresentation *this)
{
  *(_QWORD *)this = &CCommandListBitmapRepresentation::`vftable';
  CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations(this);
  CCommandListBitmapRepresentation::ReleasePrimitiveCaches(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 312);
}
