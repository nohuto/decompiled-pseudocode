/*
 * XREFs of SdbGetTagFromTagID @ 0x1404E41E0
 * Callers:
 *     SdbReadBinaryTag @ 0x140495F50 (SdbReadBinaryTag.c)
 *     SdbFindNextTag @ 0x1404C9CA8 (SdbFindNextTag.c)
 *     SdbReadDWORDTag @ 0x1404CCBB0 (SdbReadDWORDTag.c)
 *     SdbGetTagDataSize @ 0x1404E6D04 (SdbGetTagDataSize.c)
 *     SdbpGetNextTagId @ 0x1404E6DB0 (SdbpGetNextTagId.c)
 *     SdbGetNextChild @ 0x1404E7594 (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbGetFirstChild @ 0x1404E882C (SdbGetFirstChild.c)
 *     SdbpScanIndexes @ 0x1404E899C (SdbpScanIndexes.c)
 *     SdbReadWORDTag @ 0x1404E98D8 (SdbReadWORDTag.c)
 *     SdbpGetIndex @ 0x140513E5C (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14051409C (SdbpGetFirstIndexedRecord.c)
 *     SdbpFindMatcher @ 0x140573DCC (SdbpFindMatcher.c)
 *     SdbReadQWORDTag @ 0x140574150 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x1405742C8 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x14057433C (SdbpReadStringRef.c)
 *     SdbpGetNextIndexedRecord @ 0x140574398 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstNamedTag @ 0x1406C3EAC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1406C3F70 (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x1406C4078 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpReadMappedData @ 0x1404E3A0C (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
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
