/*
 * XREFs of SdbpGetMappedTagData @ 0x1403B79DC
 * Callers:
 *     SdbpGetIndex @ 0x1403B7618 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1403B7910 (SdbpGetFirstIndexedRecord.c)
 *     SdbGetStringTagPtr @ 0x140535F9C (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x140536014 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetNextIndexedRecord @ 0x1405360E4 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x14061D890 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x14067D158 (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x14067EDD8 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpGetTagHeadSize @ 0x140440D88 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, __int64 a2)
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
