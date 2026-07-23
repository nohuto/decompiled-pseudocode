/*
 * XREFs of KeInterlockedClearProcessorAffinityEx @ 0x1400AFCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedClearProcessorAffinityEx(__int64 a1, int a2)
{
  unsigned int v2; // edx
  unsigned __int64 v3; // r8

  v2 = KiProcessorIndexToNumberMappingTable[a2];
  v3 = (unsigned __int64)v2 >> 6;
  _m_prefetchw((const void *)(a1 + 8 * v3 + 8));
  return ((1LL << (v2 & 0x3F)) & _InterlockedAnd64((volatile signed __int64 *)(a1 + 8 * v3 + 8), ~(1LL << (v2 & 0x3F)))) != 0;
}
