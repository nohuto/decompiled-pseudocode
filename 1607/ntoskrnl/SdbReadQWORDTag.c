/*
 * XREFs of SdbReadQWORDTag @ 0x140573C10
 * Callers:
 *     SdbpMatchOsVersion @ 0x1405738EC (SdbpMatchOsVersion.c)
 *     KsepDbReadKFlag @ 0x140573B74 (KsepDbReadKFlag.c)
 *     KsepDbReadKData @ 0x140652B08 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1406C19DC (SdbQueryDataExTagID.c)
 *     SdbpCheckPackageAttributes @ 0x1406C2EC4 (SdbpCheckPackageAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1406C3508 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x1406C4A30 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1405069B4 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rcx
  int TagFromTagID; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    v6 = SdbpReadTagData(a1, a2, &v10, 8u);
    v7 = v10;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadQWORDTag",
      136,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type",
      a2,
      TagFromTagID);
    return a3;
  }
}
