/*
 * XREFs of SdbGetStringTagPtr @ 0x140574250
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140513CD0 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x1405142C4 (SdbpSearchDB.c)
 *     KsepDbReadKFlag @ 0x1405740B4 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1405741BC (SdbpFindMatchingName.c)
 *     KsepDbGetSdbString @ 0x1406527CC (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x140652BEC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1406C1B14 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingDevice @ 0x1406C2224 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingFiles @ 0x1406C22E4 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1406C2FFC (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C3424 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1406C3640 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1406C3B1C (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x1406C3EAC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1406C3F70 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x1406C4B68 (SdbpCheckAllAttributes.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1406C50E8 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x140514168 (SdbpGetMappedTagData.c)
 *     SdbpGetMappedStringFromTable @ 0x1405742C8 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x14057433C (SdbpReadStringRef.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int16 v5; // ax
  unsigned int StringRef; // eax
  const char *v9; // r9
  int v10; // r8d

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
    v9 = "Error getting StringRef";
    v10 = 625;
  }
  else
  {
    v9 = "Invalid pdb";
    v10 = 605;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbGetStringTagPtr", v10, (_DWORD)v9);
  return 0LL;
}
