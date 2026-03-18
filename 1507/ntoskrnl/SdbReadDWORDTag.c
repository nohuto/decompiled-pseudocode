/*
 * XREFs of SdbReadDWORDTag @ 0x1405778E0
 * Callers:
 *     KsepDbGetDriverShims @ 0x140577014 (KsepDbGetDriverShims.c)
 *     SdbpScanIndexes @ 0x140577AE4 (SdbpScanIndexes.c)
 *     SdbpGetExeEntryFlags @ 0x1405C4FAC (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x14069C004 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x14069C470 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140701FC4 (SdbQueryDataExTagID.c)
 *     SdbpCheckExe @ 0x140702524 (SdbpCheckExe.c)
 *     SdbpCheckPackageAttributes @ 0x1407031D8 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x1407033D4 (SdbpCheckRuntimePlatform.c)
 *     SdbpCheckRuntimePlatformV2 @ 0x140703418 (SdbpCheckRuntimePlatformV2.c)
 *     SdbpGetDeviceDWORD @ 0x1407035A4 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407035E8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140703804 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x140704904 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpReadTagData @ 0x140577A6C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140577EF8 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x4000 )
  {
    v6 = SdbpReadTagData(a1, v4, &v9, 4LL);
    v7 = v9;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadDWORDTag",
      129,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return a3;
  }
}
