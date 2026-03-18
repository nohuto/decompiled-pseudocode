/*
 * XREFs of ?Link@CDesktopTreeData@@MEAAXXZ @ 0x1800597B0
 * Callers:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800591D0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopTreeData::Link(CDesktopTreeData *this)
{
  *((_BYTE *)this + 16) |= 1u;
}
