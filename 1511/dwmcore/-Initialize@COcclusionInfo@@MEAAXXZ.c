/*
 * XREFs of ?Initialize@COcclusionInfo@@MEAAXXZ @ 0x1800BD270
 * Callers:
 *     ?Initialize@CVisualOcclusionInfo@@MEAAXXZ @ 0x180052040 (-Initialize@CVisualOcclusionInfo@@MEAAXXZ.c)
 *     ?Initialize@CWindowOcclusionInfo@@MEAAXXZ @ 0x1800ABC70 (-Initialize@CWindowOcclusionInfo@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall COcclusionInfo::Initialize(COcclusionInfo *this)
{
  *((_BYTE *)this + 8) &= 0xF8u;
}
