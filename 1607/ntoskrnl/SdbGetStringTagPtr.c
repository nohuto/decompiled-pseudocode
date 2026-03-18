/*
 * XREFs of SdbGetStringTagPtr @ 0x140573D10
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140484948 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x140484F3C (SdbpSearchDB.c)
 *     KsepDbReadKFlag @ 0x140573B74 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x140573C7C (SdbpFindMatchingName.c)
 *     KsepDbGetSdbString @ 0x1406526E8 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x140652B08 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1406C19DC (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingDevice @ 0x1406C20EC (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingFiles @ 0x1406C21AC (SdbpCheckMatchingFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1406C2EC4 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C32EC (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1406C3508 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1406C39E4 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x1406C3D74 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1406C3E38 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x1406C4A30 (SdbpCheckAllAttributes.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1406C4FB0 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x140484DE0 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedStringFromTable @ 0x140573D88 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x140573DFC (SdbpReadStringRef.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int16 v5; // ax
  unsigned int StringRef; // eax

  v2 = 0LL;
  if ( a1 )
  {
    v5 = SdbGetTagFromTagID(a1, a2) & 0xF000;
    if ( v5 == (__int16)0x8000 )
      return SdbpGetMappedTagData(a1, a2);
    if ( v5 != 24576 )
      return v2;
    StringRef = SdbpReadStringRef(a1, a2);
    if ( StringRef )
      return SdbpGetMappedStringFromTable(a1, StringRef);
    AslLogCallPrintf(1, (unsigned int)"SdbGetStringTagPtr", 625, (unsigned int)"Error getting StringRef");
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbGetStringTagPtr", 605, (unsigned int)"Invalid pdb");
  }
  return 0LL;
}
