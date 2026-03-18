/*
 * XREFs of MNSetTimerToCloseHierarchy @ 0x1C02166B0
 * Callers:
 *     xxxMNSelectItem @ 0x1C010D008 (xxxMNSelectItem.c)
 * Callees:
 *     InternalSetTimer @ 0x1C007A390 (InternalSetTimer.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
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
    v4 = *(_DWORD **)(v3 + 376);
    if ( !v4 )
      return 0LL;
    if ( !InternalSetTimer(*(_QWORD *)(a1 + 16), 0xFFFFLL, gdtMNDropDown, 0LL, 0, 16) )
      return 0xFFFFFFFFLL;
    *(_DWORD *)a1 |= 0x4000u;
    *v4 |= 0x1000u;
  }
  return 1LL;
}
