/*
 * XREFs of MiGetPteLink @ 0x1401F2680
 * Callers:
 *     InsertTailListPte @ 0x140017ED0 (InsertTailListPte.c)
 *     MiReleaseSystemCacheView @ 0x140018374 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x140018A20 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x140019B70 (MiObtainSystemCacheView.c)
 *     RemoveListHeadPte @ 0x14001BEFC (RemoveListHeadPte.c)
 *     RemoveListEntryPte @ 0x1400AC07C (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x1400AEF6C (MiWaitForSystemCacheViewFlush.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401F2934 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiGetPteLink(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 28;
  else
    return 0LL;
}
