/*
 * XREFs of SdbGetTagFromTagID @ 0x14043EEBC
 * Callers:
 *     SdbReadBinaryTag @ 0x1403B618C (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1403B62A0 (SdbReadDWORDTag.c)
 *     SdbpScanIndexes @ 0x1403B6308 (SdbpScanIndexes.c)
 *     SdbFindFirstTag @ 0x1403B6498 (SdbFindFirstTag.c)
 *     SdbGetFirstChild @ 0x1403B6508 (SdbGetFirstChild.c)
 *     SdbReadWORDTag @ 0x1403B6560 (SdbReadWORDTag.c)
 *     SdbFindNextTag @ 0x1403B6644 (SdbFindNextTag.c)
 *     SdbpGetIndex @ 0x1403B7618 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1403B7910 (SdbpGetFirstIndexedRecord.c)
 *     SdbGetTagDataSize @ 0x14043FBFC (SdbGetTagDataSize.c)
 *     SdbpGetNextTagId @ 0x14043FCA8 (SdbpGetNextTagId.c)
 *     SdbGetNextChild @ 0x140441C58 (SdbGetNextChild.c)
 *     SdbpFindMatcher @ 0x140535430 (SdbpFindMatcher.c)
 *     SdbGetStringTagPtr @ 0x140535F9C (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x140536014 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x140536088 (SdbpReadStringRef.c)
 *     SdbpGetNextIndexedRecord @ 0x1405360E4 (SdbpGetNextIndexedRecord.c)
 *     SdbReadQWORDTag @ 0x14054ED94 (SdbReadQWORDTag.c)
 *     SdbGetBinaryTagData @ 0x14067EDD8 (SdbGetBinaryTagData.c)
 *     SdbFindFirstNamedTag @ 0x14067F028 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14067F0EC (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbpReadMappedData @ 0x14043EFA8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return v3;
  AslLogCallPrintf(1, (unsigned int)"SdbGetTagFromTagID", 820, (unsigned int)"Error reading data");
  return 0LL;
}
