/*
 * XREFs of MiGetPteLink @ 0x1401F24AC
 * Callers:
 *     InsertTailListPte @ 0x140017A50 (InsertTailListPte.c)
 *     MiReleaseSystemCacheView @ 0x140017EF4 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 *     RemoveListHeadPte @ 0x14001BA7C (RemoveListHeadPte.c)
 *     RemoveListEntryPte @ 0x1400AA5E4 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x1400AD4D4 (MiWaitForSystemCacheViewFlush.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401F2760 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiGetPteLink(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 28;
  else
    return 0LL;
}
