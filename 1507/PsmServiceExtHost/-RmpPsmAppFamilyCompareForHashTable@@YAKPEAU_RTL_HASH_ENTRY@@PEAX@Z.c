/*
 * XREFs of ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x18000908C
 * Callers:
 *     RmpPsmAppFamilyTableFind @ 0x180008EC0 (RmpPsmAppFamilyTableFind.c)
 * Callees:
 *     memcmp_0 @ 0x180024EC6 (memcmp_0.c)
 */

__int64 __fastcall RmpPsmAppFamilyCompareForHashTable(const wchar_t *a1, const wchar_t *a2)
{
  char *v3; // rsi
  unsigned __int8 v4; // bl

  v3 = (char *)(a1 + 8);
  v4 = 0;
  if ( !_wcsicmp(a2, a1 + 8) )
    return memcmp_0(a2 + 232, v3 + 464, 0x48uLL) == 0;
  return v4;
}
