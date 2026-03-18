/*
 * XREFs of ?Initialize@CWindowOcclusionInfo@@MEAAXXZ @ 0x1800ABC70
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@COcclusionInfo@@MEAAXXZ @ 0x1800BD270 (-Initialize@COcclusionInfo@@MEAAXXZ.c)
 */

void __fastcall CWindowOcclusionInfo::Initialize(CWindowOcclusionInfo *this)
{
  COcclusionInfo::Initialize(this);
  *((_DWORD *)this + 4) = 0x80000000;
  *((_DWORD *)this + 3) = 0x80000000;
  *((_DWORD *)this + 6) = 0x80000000;
  *((_DWORD *)this + 7) = 0x80000000;
  *((_DWORD *)this + 8) = 0x80000000;
  *((_DWORD *)this + 9) = 0x80000000;
}
