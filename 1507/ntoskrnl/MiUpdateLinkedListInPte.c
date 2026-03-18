/*
 * XREFs of MiUpdateLinkedListInPte @ 0x1402260B8
 * Callers:
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 *     InsertTailListPte @ 0x14006BAEC (InsertTailListPte.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiCompleteSystemCacheViewFlush @ 0x140129E24 (MiCompleteSystemCacheViewFlush.c)
 *     MmFreeSpecialPool @ 0x14021FC4C (MmFreeSpecialPool.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateLinkedListInPte(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = MiReverseSwizzleInvalidPte(a1);
  return MiSwizzleInvalidPte((v2 << 28) | v1 & 0xFFFFFFF);
}
