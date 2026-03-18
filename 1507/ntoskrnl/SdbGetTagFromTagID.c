/*
 * XREFs of SdbGetTagFromTagID @ 0x140577EF8
 * Callers:
 *     SdbReadBinaryTag @ 0x1405745EC (SdbReadBinaryTag.c)
 *     SdbpGetIndex @ 0x140577710 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x140577814 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x1405778E0 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140577984 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x140577A00 (SdbReadWORDTag.c)
 *     SdbpScanIndexes @ 0x140577AE4 (SdbpScanIndexes.c)
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140577CE4 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x140577D90 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x140577E14 (SdbGetTagDataSize.c)
 *     SdbGetFirstChild @ 0x140577FAC (SdbGetFirstChild.c)
 *     SdbpFindMatcher @ 0x1405AB64C (SdbpFindMatcher.c)
 *     SdbGetStringTagPtr @ 0x1405ABAB8 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x1405ABB30 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x1405ABBA4 (SdbpReadStringRef.c)
 *     SdbpGetNextIndexedRecord @ 0x1405ABC00 (SdbpGetNextIndexedRecord.c)
 *     SdbReadQWORDTag @ 0x1405C6BBC (SdbReadQWORDTag.c)
 *     SdbGetBinaryTagData @ 0x140703C2C (SdbGetBinaryTagData.c)
 *     SdbFindFirstNamedTag @ 0x140703E7C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140703F40 (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbpReadMappedData @ 0x140577F28 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
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
