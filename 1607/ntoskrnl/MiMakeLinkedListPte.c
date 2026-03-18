/*
 * XREFs of MiMakeLinkedListPte @ 0x1401F2740
 * Callers:
 *     InsertTailListPte @ 0x140017ED0 (InsertTailListPte.c)
 *     RemoveListHeadPte @ 0x14001BEFC (RemoveListHeadPte.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MmFreeSpecialPool @ 0x1401EC0A4 (MmFreeSpecialPool.c)
 *     InitializeListHeadPte @ 0x1401FDFFC (InitializeListHeadPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeLinkedListPte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 28);
}
