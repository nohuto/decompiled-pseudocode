/*
 * XREFs of SdbpGetMappedTagData @ 0x140514168
 * Callers:
 *     SdbpGetIndex @ 0x140513E5C (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14051409C (SdbpGetFirstIndexedRecord.c)
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x1405742C8 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetNextIndexedRecord @ 0x140574398 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x140652BEC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1406C1B14 (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x1406C4078 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpGetTagHeadSize @ 0x1404E7050 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, unsigned int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx

  v3 = a2 + SdbpGetTagHeadSize(a1, a2);
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMappedData",
      439,
      (unsigned int)"Trying to read mapped data past the end of the database offset 0x%x size 0x%x");
    v4 = 0LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMappedTagData", 442, (unsigned int)"Error getting ptr to tag data");
  return v4;
}
