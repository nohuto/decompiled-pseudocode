/*
 * XREFs of SdbpGetNextTagId @ 0x140577D90
 * Callers:
 *     SdbGetNextChild @ 0x140577CE4 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140577FAC (SdbGetFirstChild.c)
 *     SdbpGetNextIndexedRecord @ 0x1405ABC00 (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     SdbpGetTagHeadSize @ 0x140577D4C (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x140577E14 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140577EF8 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextTagId(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int TagHeadSize; // esi
  unsigned int TagDataSize; // eax

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 && (unsigned int)SdbGetTagDataSize(a1, v2) == -1 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpGetNextTagId", 854, (unsigned int)"Reading from unfinished list");
    return *(unsigned int *)(a1 + 20);
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, v2);
  if ( !TagHeadSize )
    return *(unsigned int *)(a1 + 20);
  TagDataSize = SdbGetTagDataSize(a1, v2);
  if ( (*(_DWORD *)(a1 + 1336) & 1) == 0 )
    TagDataSize = (TagDataSize + 1) & 0xFFFFFFFE;
  return v2 + TagHeadSize + TagDataSize;
}
