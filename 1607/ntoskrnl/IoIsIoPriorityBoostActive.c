/*
 * XREFs of IoIsIoPriorityBoostActive @ 0x1400A3E5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IoIsIoPriorityBoostActive(__int64 a1)
{
  return *(_DWORD *)(a1 + 1788) != 0;
}
