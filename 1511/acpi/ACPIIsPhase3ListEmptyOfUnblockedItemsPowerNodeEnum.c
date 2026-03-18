/*
 * XREFs of ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum @ 0x1C00397C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a1 + 16) & 8) != 0 )
  {
    *(_DWORD *)(a3 + 56) |= 0x1000000u;
  }
  else if ( (*(_DWORD *)(a3 + 56) & 0x10000000) == 0
         && (unsigned int)(_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 64),
                             *(_DWORD *)(a1 + 64),
                             *(_DWORD *)(a1 + 64))
                         - 3) <= 1 )
  {
    *(_DWORD *)(a3 + 56) |= 0x10000000u;
  }
  return 0LL;
}
