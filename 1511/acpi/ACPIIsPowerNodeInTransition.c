/*
 * XREFs of ACPIIsPowerNodeInTransition @ 0x1C0039800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIIsPowerNodeInTransition(__int64 a1, int a2, __int64 a3)
{
  if ( (*(_DWORD *)(a3 + 104) == a2 || *(_DWORD *)(*(_QWORD *)(a3 + 40) + 328LL) == a2)
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), *(_DWORD *)(a1 + 64), *(_DWORD *)(a1 + 64)) == 4 )
  {
    *(_DWORD *)(a3 + 56) |= 0x8000000u;
  }
  return 0LL;
}
