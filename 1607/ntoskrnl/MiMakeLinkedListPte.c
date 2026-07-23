/*
 * XREFs of MiMakeLinkedListPte @ 0x1401F256C
 * Callers:
 *     InsertTailListPte @ 0x140017A50 (InsertTailListPte.c)
 *     RemoveListHeadPte @ 0x14001BA7C (RemoveListHeadPte.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MmFreeSpecialPool @ 0x1401EBED0 (MmFreeSpecialPool.c)
 *     InitializeListHeadPte @ 0x1401FDE28 (InitializeListHeadPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeLinkedListPte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 28);
}
