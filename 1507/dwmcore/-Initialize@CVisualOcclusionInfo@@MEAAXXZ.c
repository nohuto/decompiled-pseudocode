/*
 * XREFs of ?Initialize@CVisualOcclusionInfo@@MEAAXXZ @ 0x1800313C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@COcclusionInfo@@MEAAXXZ @ 0x18009A620 (-Initialize@COcclusionInfo@@MEAAXXZ.c)
 */

void __fastcall CVisualOcclusionInfo::Initialize(CVisualOcclusionInfo *this)
{
  COcclusionInfo::Initialize(this);
  *((_DWORD *)this + 4) = 0x80000000;
  *((_DWORD *)this + 3) = 0x80000000;
}
