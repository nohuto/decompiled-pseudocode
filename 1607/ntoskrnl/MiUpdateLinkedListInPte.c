/*
 * XREFs of MiUpdateLinkedListInPte @ 0x1401F2A14
 * Callers:
 *     InsertTailListPte @ 0x140017ED0 (InsertTailListPte.c)
 *     MiObtainSystemCacheView @ 0x140019B70 (MiObtainSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MmFreeSpecialPool @ 0x1401EC0A4 (MmFreeSpecialPool.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401F2934 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateLinkedListInPte(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = MiReverseSwizzleInvalidPte(a1);
  return MiSwizzleInvalidPte((v2 << 28) | v1 & 0xFFFFFFF);
}
