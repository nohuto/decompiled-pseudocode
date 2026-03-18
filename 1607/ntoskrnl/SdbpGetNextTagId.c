/*
 * XREFs of SdbpGetNextTagId @ 0x140503E20
 * Callers:
 *     SdbGetNextChild @ 0x140504604 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x14050589C (SdbGetFirstChild.c)
 *     SdbpGetNextIndexedRecord @ 0x140573E58 (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbGetTagDataSize @ 0x140503D74 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x1405040C0 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextTagId(__int64 a1, unsigned int a2)
{
  int TagHeadSize; // esi
  int TagDataSize; // eax

  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 && (unsigned int)SdbGetTagDataSize(a1, a2) == -1 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpGetNextTagId", 854, (unsigned int)"Reading from unfinished list");
    return *(unsigned int *)(a1 + 20);
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, a2);
  if ( !TagHeadSize )
    return *(unsigned int *)(a1 + 20);
  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( (*(_DWORD *)(a1 + 1336) & 1) == 0 )
    TagDataSize = (TagDataSize + 1) & 0xFFFFFFFE;
  return a2 + TagHeadSize + TagDataSize;
}
