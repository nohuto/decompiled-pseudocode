/*
 * XREFs of SdbGetTagFromTagID @ 0x140501250
 * Callers:
 *     SdbpGetIndex @ 0x140484AD4 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x140484D14 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadBinaryTag @ 0x1404954C0 (SdbReadBinaryTag.c)
 *     SdbFindNextTag @ 0x1404E791C (SdbFindNextTag.c)
 *     SdbReadDWORDTag @ 0x1404EA9AC (SdbReadDWORDTag.c)
 *     SdbGetTagDataSize @ 0x140503D74 (SdbGetTagDataSize.c)
 *     SdbpGetNextTagId @ 0x140503E20 (SdbpGetNextTagId.c)
 *     SdbGetNextChild @ 0x140504604 (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbGetFirstChild @ 0x14050589C (SdbGetFirstChild.c)
 *     SdbpScanIndexes @ 0x140505A0C (SdbpScanIndexes.c)
 *     SdbReadWORDTag @ 0x140506948 (SdbReadWORDTag.c)
 *     SdbpFindMatcher @ 0x14057388C (SdbpFindMatcher.c)
 *     SdbReadQWORDTag @ 0x140573C10 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140573D10 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x140573D88 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x140573DFC (SdbpReadStringRef.c)
 *     SdbpGetNextIndexedRecord @ 0x140573E58 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstNamedTag @ 0x1406C3D74 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1406C3E38 (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x1406C3F40 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpReadMappedData @ 0x140500A7C (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, unsigned int a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2u) )
    return v3;
  AslLogCallPrintf(1, (unsigned int)"SdbGetTagFromTagID", 820, (unsigned int)"Error reading data");
  return 0LL;
}
