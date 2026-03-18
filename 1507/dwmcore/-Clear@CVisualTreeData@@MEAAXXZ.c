/*
 * XREFs of ?Clear@CVisualTreeData@@MEAAXXZ @ 0x180059EC0
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180039240 (--1CVisual@@MEAA@XZ.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180040328 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 * Callees:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180059780 (-Clear@CTreeData@@MEAAXXZ.c)
 */

void __fastcall CVisualTreeData::Clear(CVisualTreeData *this)
{
  CTreeData::Clear(this);
  *((_QWORD *)this + 37) = 0LL;
}
