/*
 * XREFs of SdbReadDWORDTag @ 0x1404EA9AC
 * Callers:
 *     KsepDbGetDriverShims @ 0x14048471C (KsepDbGetDriverShims.c)
 *     SdbpScanIndexes @ 0x140505A0C (SdbpScanIndexes.c)
 *     SdbpGetExeEntryFlags @ 0x140573320 (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x140652718 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x140652B08 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1406C19DC (SdbQueryDataExTagID.c)
 *     SdbpCheckExe @ 0x1406C1F3C (SdbpCheckExe.c)
 *     SdbpCheckPackageAttributes @ 0x1406C2EC4 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x1406C30D0 (SdbpCheckRuntimePlatform.c)
 *     SdbpCheckRuntimePlatformV2 @ 0x1406C3114 (SdbpCheckRuntimePlatformV2.c)
 *     SdbpGetDeviceDWORD @ 0x1406C32A8 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C32EC (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1406C3508 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x1406C4A30 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1405069B4 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  int TagFromTagID; // [rsp+28h] [rbp-10h]
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x4000 )
  {
    v6 = SdbpReadTagData(a1, v4, &v10, 4LL);
    v7 = v10;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadDWORDTag",
      129,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type",
      v4,
      TagFromTagID);
    return a3;
  }
}
