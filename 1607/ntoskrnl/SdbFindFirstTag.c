/*
 * XREFs of SdbFindFirstTag @ 0x1405049C4
 * Callers:
 *     KsepDbGetDriverShims @ 0x14048471C (KsepDbGetDriverShims.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140484948 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x140484F3C (SdbpSearchDB.c)
 *     SdbGetDatabaseID @ 0x140495418 (SdbGetDatabaseID.c)
 *     SdbpScanIndexes @ 0x140505A0C (SdbpScanIndexes.c)
 *     KsepDbCacheReadDevice @ 0x140534FDC (KsepDbCacheReadDevice.c)
 *     SdbpMatchCpu @ 0x1405730E8 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140573138 (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x140573188 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x1405731D8 (SdbpMatchAcpi.c)
 *     SdbpCheckForMatch @ 0x140573228 (SdbpCheckForMatch.c)
 *     SdbpGetExeEntryFlags @ 0x140573320 (SdbpGetExeEntryFlags.c)
 *     SdbpMatchList @ 0x1405737E8 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x1405738EC (SdbpMatchOsVersion.c)
 *     KsepDbReadKFlag @ 0x140573B74 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x140573C7C (SdbpFindMatchingName.c)
 *     SdbpGetMappedStringFromTable @ 0x140573D88 (SdbpGetMappedStringFromTable.c)
 *     KsepDbGetShimInfo @ 0x140652718 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x140652B08 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1406C19DC (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x1406C1DB8 (SdbReadEntryInformation.c)
 *     SdbpCheckExe @ 0x1406C1F3C (SdbpCheckExe.c)
 *     SdbpCheckMatchingDevice @ 0x1406C20EC (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingFiles @ 0x1406C21AC (SdbpCheckMatchingFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1406C2EC4 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x1406C32A8 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C32EC (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1406C3508 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1406C39E4 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x1406C3D74 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1406C3E38 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x1406C4A30 (SdbpCheckAllAttributes.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1406C4FB0 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x140504604 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x14050589C (SdbGetFirstChild.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, unsigned int a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int i; // eax
  unsigned int v8; // ebx

  v3 = 0;
  for ( i = SdbGetFirstChild(); ; i = SdbGetNextChild(a1, a2, v8) )
  {
    v8 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
      return v8;
  }
  return v3;
}
