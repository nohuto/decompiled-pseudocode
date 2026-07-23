/*
 * XREFs of SdbpGetNextTagId @ 0x1404E6DB0
 * Callers:
 *     SdbGetNextChild @ 0x1404E7594 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1404E882C (SdbGetFirstChild.c)
 *     SdbpGetNextIndexedRecord @ 0x140574398 (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     SdbGetTagDataSize @ 0x1404E6D04 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x1404E7050 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
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
