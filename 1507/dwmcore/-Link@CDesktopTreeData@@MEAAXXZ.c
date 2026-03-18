/*
 * XREFs of ?Link@CDesktopTreeData@@MEAAXXZ @ 0x180059D10
 * Callers:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180059590 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopTreeData::Link(CDesktopTreeData *this)
{
  *((_BYTE *)this + 16) |= 1u;
}
