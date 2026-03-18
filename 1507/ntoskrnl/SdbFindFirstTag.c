/*
 * XREFs of SdbFindFirstTag @ 0x140577C74
 * Callers:
 *     KsepDbGetDriverShims @ 0x140577014 (KsepDbGetDriverShims.c)
 *     SdbGetDatabaseID @ 0x14057727C (SdbGetDatabaseID.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140577324 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpScanIndexes @ 0x140577AE4 (SdbpScanIndexes.c)
 *     KsepDbCacheReadDevice @ 0x140578E70 (KsepDbCacheReadDevice.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1405A9D10 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x1405AADAC (SdbpSearchDB.c)
 *     SdbpCheckForMatch @ 0x1405AB464 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x1405AB558 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x1405AB6C4 (SdbpMatchOsVersion.c)
 *     SdbpCheckMatchingFiles @ 0x1405AB79C (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x1405ABA24 (SdbpFindMatchingName.c)
 *     SdbpGetMappedStringFromTable @ 0x1405ABB30 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetExeEntryFlags @ 0x1405C4FAC (SdbpGetExeEntryFlags.c)
 *     KsepDbReadKFlag @ 0x1405C6B20 (KsepDbReadKFlag.c)
 *     SdbpMatchAcpi @ 0x1405C70E0 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1405C7130 (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1405C7180 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1405C71D0 (SdbpMatchCpu.c)
 *     KsepDbGetShimInfo @ 0x14069C004 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x14069C470 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140701FC4 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x1407023A0 (SdbReadEntryInformation.c)
 *     SdbpCheckExe @ 0x140702524 (SdbpCheckExe.c)
 *     SdbpCheckMatchingDevice @ 0x1407026B4 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckPackageAttributes @ 0x1407031D8 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x1407035A4 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407035E8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140703804 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140703BA4 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x140703E7C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140703F40 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x140704904 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbGetNextChild @ 0x140577CE4 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x140577EF8 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x140577FAC (SdbGetFirstChild.c)
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
