/*
 * XREFs of ?Initialize@CWindowOcclusionInfo@@MEAAXXZ @ 0x1800AE360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowOcclusionInfo::Initialize(CWindowOcclusionInfo *this)
{
  *((_BYTE *)this + 8) &= 0xF8u;
  *((_DWORD *)this + 4) = 0x80000000;
  *((_DWORD *)this + 3) = 0x80000000;
  *((_DWORD *)this + 6) = 0x80000000;
  *((_DWORD *)this + 7) = 0x80000000;
  *((_DWORD *)this + 8) = 0x80000000;
  *((_DWORD *)this + 9) = 0x80000000;
}
