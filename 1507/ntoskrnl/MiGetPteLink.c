/*
 * XREFs of MiGetPteLink @ 0x140225B3C
 * Callers:
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 *     RemoveListHeadPte @ 0x14003E468 (RemoveListHeadPte.c)
 *     MiReleaseSystemCacheView @ 0x14006B8A0 (MiReleaseSystemCacheView.c)
 *     InsertTailListPte @ 0x14006BAEC (InsertTailListPte.c)
 *     RemoveListEntryPte @ 0x14006BBFC (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x1401396E8 (MiWaitForSystemCacheViewFlush.c)
 *     MiValidateReservedMapping @ 0x1401398E0 (MiValidateReservedMapping.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140214DA4 (MmMapLockedPagesWithReservedMapping.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiGetPteLink(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 28;
  else
    return 0LL;
}
