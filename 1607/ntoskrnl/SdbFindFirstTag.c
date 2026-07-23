/*
 * XREFs of SdbFindFirstTag @ 0x1404E7954
 * Callers:
 *     SdbGetDatabaseID @ 0x140495EA8 (SdbGetDatabaseID.c)
 *     SdbpScanIndexes @ 0x1404E899C (SdbpScanIndexes.c)
 *     KsepDbGetDriverShims @ 0x140513AA4 (KsepDbGetDriverShims.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140513CD0 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x1405142C4 (SdbpSearchDB.c)
 *     KsepDbCacheReadDevice @ 0x14053551C (KsepDbCacheReadDevice.c)
 *     SdbpMatchCpu @ 0x140573628 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140573678 (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x1405736C8 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140573718 (SdbpMatchAcpi.c)
 *     SdbpCheckForMatch @ 0x140573768 (SdbpCheckForMatch.c)
 *     SdbpGetExeEntryFlags @ 0x140573860 (SdbpGetExeEntryFlags.c)
 *     SdbpMatchList @ 0x140573D28 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x140573E2C (SdbpMatchOsVersion.c)
 *     KsepDbReadKFlag @ 0x1405740B4 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1405741BC (SdbpFindMatchingName.c)
 *     SdbpGetMappedStringFromTable @ 0x1405742C8 (SdbpGetMappedStringFromTable.c)
 *     KsepDbGetShimInfo @ 0x1406527FC (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x140652BEC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1406C1B14 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x1406C1EF0 (SdbReadEntryInformation.c)
 *     SdbpCheckExe @ 0x1406C2074 (SdbpCheckExe.c)
 *     SdbpCheckMatchingDevice @ 0x1406C2224 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingFiles @ 0x1406C22E4 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1406C2FFC (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x1406C33E0 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C3424 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1406C3640 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1406C3B1C (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x1406C3EAC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1406C3F70 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x1406C4B68 (SdbpCheckAllAttributes.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1406C50E8 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x1404E7594 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1404E882C (SdbGetFirstChild.c)
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
