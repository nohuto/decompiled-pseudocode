/*
 * XREFs of ?Initialize@COcclusionInfo@@MEAAXXZ @ 0x1800C0340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall COcclusionInfo::Initialize(COcclusionInfo *this)
{
  *((_BYTE *)this + 8) &= 0xF8u;
}
