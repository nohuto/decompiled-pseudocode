/*
 * XREFs of SdbGetStringTagPtr @ 0x1405ABAB8
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140577324 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1405A9D10 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x1405AADAC (SdbpSearchDB.c)
 *     SdbpCheckMatchingFiles @ 0x1405AB79C (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x1405ABA24 (SdbpFindMatchingName.c)
 *     KsepDbReadKFlag @ 0x1405C6B20 (KsepDbReadKFlag.c)
 *     KsepDbGetSdbString @ 0x14069BFD4 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x14069C470 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140701FC4 (SdbQueryDataExTagID.c)
 *     SdbpCheckExe @ 0x140702524 (SdbpCheckExe.c)
 *     SdbpCheckMatchingDevice @ 0x1407026B4 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckPackageAttributes @ 0x1407031D8 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407035E8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140703804 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140703BA4 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x140703E7C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140703F40 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x140704904 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x140577948 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x140577EF8 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbpGetMappedStringFromTable @ 0x1405ABB30 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x1405ABBA4 (SdbpReadStringRef.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int16 v5; // ax
  unsigned int StringRef; // eax

  v2 = 0LL;
  v3 = a2;
  if ( a1 )
  {
    v5 = SdbGetTagFromTagID(a1, a2) & 0xF000;
    if ( v5 == (__int16)0x8000 )
      return SdbpGetMappedTagData(a1, v3);
    if ( v5 != 24576 )
      return v2;
    StringRef = SdbpReadStringRef(a1, v3);
    if ( StringRef )
      return SdbpGetMappedStringFromTable(a1, StringRef);
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
