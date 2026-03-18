/*
 * XREFs of MiMakeLinkedListPte @ 0x140225C20
 * Callers:
 *     RemoveListHeadPte @ 0x14003E468 (RemoveListHeadPte.c)
 *     InsertTailListPte @ 0x14006BAEC (InsertTailListPte.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     InitializeListHeadPte @ 0x140132184 (InitializeListHeadPte.c)
 *     MiValidateReservedMapping @ 0x1401398E0 (MiValidateReservedMapping.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140214DA4 (MmMapLockedPagesWithReservedMapping.c)
 *     MmFreeSpecialPool @ 0x14021FC4C (MmFreeSpecialPool.c)
 *     MmAllocateMappingAddress @ 0x1405622E0 (MmAllocateMappingAddress.c)
 *     MiInitializeSystemCache @ 0x1407C9B74 (MiInitializeSystemCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeLinkedListPte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 28);
}
