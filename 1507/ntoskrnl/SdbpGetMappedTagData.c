/*
 * XREFs of SdbpGetMappedTagData @ 0x140577948
 * Callers:
 *     SdbpGetIndex @ 0x140577710 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x140577814 (SdbpGetFirstIndexedRecord.c)
 *     SdbGetStringTagPtr @ 0x1405ABAB8 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x1405ABB30 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetNextIndexedRecord @ 0x1405ABC00 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x14069C470 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140701FC4 (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x140703C2C (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpGetTagHeadSize @ 0x140577D4C (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx

  v3 = a2 + SdbpGetTagHeadSize();
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
