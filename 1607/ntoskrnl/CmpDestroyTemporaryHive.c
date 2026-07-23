/*
 * XREFs of CmpDestroyTemporaryHive @ 0x14060D354
 * Callers:
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14060CCD0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CF28 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14060D390 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x1401B4694 (CmpUnJoinClassOfTrust.c)
 *     CmpDereferenceHive @ 0x1403FB910 (CmpDereferenceHive.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     CmpDestroySecurityCache @ 0x1405181E0 (CmpDestroySecurityCache.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140601D18 (CmpVERemoveHiveFromSIDMappingTable.c)
 */

__int64 __fastcall CmpDestroyTemporaryHive(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    CmpDestroySecurityCache(a1);
    CmpUnJoinClassOfTrust(a1);
    CmpVERemoveHiveFromSIDMappingTable(a1);
    HvFreeHive(a1, 1);
    return CmpDereferenceHive(a1);
  }
  return result;
}
