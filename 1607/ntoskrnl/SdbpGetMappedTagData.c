/*
 * XREFs of SdbpGetMappedTagData @ 0x140484DE0
 * Callers:
 *     SdbpGetIndex @ 0x140484AD4 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x140484D14 (SdbpGetFirstIndexedRecord.c)
 *     SdbGetStringTagPtr @ 0x140573D10 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x140573D88 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetNextIndexedRecord @ 0x140573E58 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x140652B08 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1406C19DC (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x1406C3F40 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpGetTagHeadSize @ 0x1405040C0 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx
  int v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+28h] [rbp-10h]

  v3 = a2 + SdbpGetTagHeadSize();
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    v7 = *(_DWORD *)(a1 + 20);
    v6 = v3;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMappedData",
      439,
      (unsigned int)"Trying to read mapped data past the end of the database offset 0x%x size 0x%x",
      v6,
      v7);
    v4 = 0LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMappedTagData", 442, (unsigned int)"Error getting ptr to tag data");
  return v4;
}
