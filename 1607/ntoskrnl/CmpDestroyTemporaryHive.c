/*
 * XREFs of CmpDestroyTemporaryHive @ 0x14060D2A0
 * Callers:
 *     CmpReorganizeHive @ 0x14047FA2C (CmpReorganizeHive.c)
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 *     CmSaveKey @ 0x14060CC1C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CE74 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14060D2DC (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x1401B47B0 (CmpUnJoinClassOfTrust.c)
 *     CmpDereferenceHive @ 0x1403FCA50 (CmpDereferenceHive.c)
 *     CmpDestroySecurityCache @ 0x14049FDD4 (CmpDestroySecurityCache.c)
 *     HvFreeHive @ 0x1405142C4 (HvFreeHive.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140601C64 (CmpVERemoveHiveFromSIDMappingTable.c)
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
