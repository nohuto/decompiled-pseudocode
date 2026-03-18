/*
 * XREFs of PfpPrefetchSharedConflictNotify @ 0x140195DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPrefetchSharedConflictNotify(__int64 a1)
{
  ++dword_14035361C;
  *(_DWORD *)(a1 + 72) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  *(_DWORD *)(a1 + 60) = 0;
  return 0LL;
}
