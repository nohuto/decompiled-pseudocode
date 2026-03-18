/*
 * XREFs of ?Initialize@CVisualOcclusionInfo@@MEAAXXZ @ 0x180052040
 * Callers:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800591D0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Initialize@COcclusionInfo@@MEAAXXZ @ 0x1800BD270 (-Initialize@COcclusionInfo@@MEAAXXZ.c)
 */

void __fastcall CVisualOcclusionInfo::Initialize(CVisualOcclusionInfo *this)
{
  COcclusionInfo::Initialize(this);
  *((_DWORD *)this + 4) = 0x80000000;
  *((_DWORD *)this + 3) = 0x80000000;
}
