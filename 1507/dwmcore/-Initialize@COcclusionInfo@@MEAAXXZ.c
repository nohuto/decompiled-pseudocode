/*
 * XREFs of ?Initialize@COcclusionInfo@@MEAAXXZ @ 0x18009A620
 * Callers:
 *     ?Initialize@CVisualOcclusionInfo@@MEAAXXZ @ 0x1800313C0 (-Initialize@CVisualOcclusionInfo@@MEAAXXZ.c)
 *     ?Initialize@CWindowOcclusionInfo@@MEAAXXZ @ 0x18005AB80 (-Initialize@CWindowOcclusionInfo@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall COcclusionInfo::Initialize(COcclusionInfo *this)
{
  *((_BYTE *)this + 8) &= 0xF8u;
}
