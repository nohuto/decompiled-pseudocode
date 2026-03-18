/*
 * XREFs of SdbGetStringTagPtr @ 0x140535F9C
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1403B72DC (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x1403B7744 (SdbpSearchDB.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140534F48 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x140535580 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x140535F08 (SdbpFindMatchingName.c)
 *     KsepDbReadKFlag @ 0x14054ECF8 (KsepDbReadKFlag.c)
 *     KsepDbGetSdbString @ 0x14061D3F4 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x14061D890 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x14067D158 (SdbQueryDataExTagID.c)
 *     SdbpCheckExe @ 0x14067D6B8 (SdbpCheckExe.c)
 *     SdbpCheckMatchingDevice @ 0x14067D848 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckPackageAttributes @ 0x14067E384 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x14067E794 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14067E9B0 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x14067ED50 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x14067F028 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14067F0EC (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x14067FAB0 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x1403B79DC (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     SdbpGetMappedStringFromTable @ 0x140536014 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x140536088 (SdbpReadStringRef.c)
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
