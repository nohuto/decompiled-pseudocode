/*
 * XREFs of ?Release@CVisualTree@@UEAAKXZ @ 0x180003C90
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800438D4 (--1CDrawingContext@@MEAA@XZ.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x180084F44 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CVisualTree::Release(CVisualTree *this)
{
  return CMILRefCountBase::Release(this);
}
