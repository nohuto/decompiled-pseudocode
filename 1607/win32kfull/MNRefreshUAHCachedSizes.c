/*
 * XREFs of MNRefreshUAHCachedSizes @ 0x1C00B8470
 * Callers:
 *     MNClearCachedPopupSizes @ 0x1C00B83FC (MNClearCachedPopupSizes.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 * Callees:
 *     MNUpdateUAHMaxPopupWidths @ 0x1C00B84B0 (MNUpdateUAHMaxPopupWidths.c)
 */

__int64 __fastcall MNRefreshUAHCachedSizes(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r11d
  int v3; // r11d

  result = 0LL;
  v2 = 0;
  *(_QWORD *)(a1 + 132) = 0LL;
  for ( *(_QWORD *)(a1 + 140) = 0LL; v2 < *(_DWORD *)(a1 + 52); v2 = v3 + 1 )
    result = MNUpdateUAHMaxPopupWidths(a1, *(_QWORD *)(a1 + 80) + 152LL * v2);
  return result;
}
