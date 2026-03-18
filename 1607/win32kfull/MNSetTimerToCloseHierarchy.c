/*
 * XREFs of MNSetTimerToCloseHierarchy @ 0x1C020F0B0
 * Callers:
 *     xxxMNSelectItem @ 0x1C013EEDC (xxxMNSelectItem.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     InternalSetTimer @ 0x1C005E280 (InternalSetTimer.c)
 */

__int64 __fastcall MNSetTimerToCloseHierarchy(__int64 a1)
{
  __int64 v3; // rax
  _DWORD *v4; // rdi

  if ( (*(_DWORD *)a1 & 0x20) == 0 )
    return 0LL;
  if ( (*(_DWORD *)a1 & 0x4000) == 0 )
  {
    v3 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(a1 + 24));
    if ( !v3 )
      return 0LL;
    v4 = *(_DWORD **)(v3 + 360);
    if ( !v4 )
      return 0LL;
    if ( !InternalSetTimer(*(_QWORD *)(a1 + 16), 0xFFFFLL, (unsigned int)gdtMNDropDown, 0LL, 0, 16) )
      return 0xFFFFFFFFLL;
    *(_DWORD *)a1 |= 0x4000u;
    *v4 |= 0x1000u;
  }
  return 1LL;
}
