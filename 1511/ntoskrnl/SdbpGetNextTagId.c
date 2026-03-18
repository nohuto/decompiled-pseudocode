/*
 * XREFs of SdbpGetNextTagId @ 0x14043FCA8
 * Callers:
 *     SdbGetFirstChild @ 0x1403B6508 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x140441C58 (SdbGetNextChild.c)
 *     SdbpGetNextIndexedRecord @ 0x1405360E4 (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 *     SdbGetTagDataSize @ 0x14043FBFC (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x140440D88 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextTagId(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int TagHeadSize; // esi
  int TagDataSize; // eax

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
