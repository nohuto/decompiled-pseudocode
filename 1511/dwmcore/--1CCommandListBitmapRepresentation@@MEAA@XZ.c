/*
 * XREFs of ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x18002C4B8
 * Callers:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x18000F674 (--1CHwndBitmap@@MEAA@XZ.c)
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x18002E054 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ??_GCCommandListBitmapRepresentation@@MEAAPEAXI@Z @ 0x180113260 (--_GCCommandListBitmapRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x18002C430 (-ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ.c)
 */

void __fastcall CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation(
        CCommandListBitmapRepresentation *this)
{
  *(_QWORD *)this = &CCommandListBitmapRepresentation::`vftable';
  CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 304);
}
