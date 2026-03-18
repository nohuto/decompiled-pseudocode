/*
 * XREFs of ?Clear@CVisualTreeData@@MEAAXXZ @ 0x18005C800
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004C96C (--1CVisual@@MEAA@XZ.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180075D50 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 * Callees:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800594A0 (-Clear@CTreeData@@MEAAXXZ.c)
 */

void __fastcall CVisualTreeData::Clear(void **this)
{
  CTreeData::Clear(this);
  this[37] = 0LL;
}
