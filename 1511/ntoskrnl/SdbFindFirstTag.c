/*
 * XREFs of SdbFindFirstTag @ 0x1403B6498
 * Callers:
 *     SdbGetDatabaseID @ 0x1403B61F8 (SdbGetDatabaseID.c)
 *     SdbpScanIndexes @ 0x1403B6308 (SdbpScanIndexes.c)
 *     KsepDbGetDriverShims @ 0x1403B70C8 (KsepDbGetDriverShims.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1403B72DC (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x1403B7744 (SdbpSearchDB.c)
 *     KsepDbCacheReadDevice @ 0x1404FA314 (KsepDbCacheReadDevice.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140534F48 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckForMatch @ 0x140535248 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x14053533C (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x1405354A8 (SdbpMatchOsVersion.c)
 *     SdbpCheckMatchingFiles @ 0x140535580 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x140535F08 (SdbpFindMatchingName.c)
 *     SdbpGetMappedStringFromTable @ 0x140536014 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetExeEntryFlags @ 0x14054D86C (SdbpGetExeEntryFlags.c)
 *     KsepDbReadKFlag @ 0x14054ECF8 (KsepDbReadKFlag.c)
 *     SdbpMatchAcpi @ 0x14054F358 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x14054F3A8 (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x14054F3F8 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x14054F448 (SdbpMatchCpu.c)
 *     KsepDbGetShimInfo @ 0x14061D424 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x14061D890 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x14067D158 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x14067D534 (SdbReadEntryInformation.c)
 *     SdbpCheckExe @ 0x14067D6B8 (SdbpCheckExe.c)
 *     SdbpCheckMatchingDevice @ 0x14067D848 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckPackageAttributes @ 0x14067E384 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x14067E750 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x14067E794 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14067E9B0 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x14067ED50 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x14067F028 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14067F0EC (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x14067FAB0 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbGetFirstChild @ 0x1403B6508 (SdbGetFirstChild.c)
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x140441C58 (SdbGetNextChild.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebp
  unsigned int i; // eax
  unsigned int v8; // ebx

  v3 = 0;
  v5 = a2;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, v5, v8) )
  {
    v8 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
      return v8;
  }
  return v3;
}
