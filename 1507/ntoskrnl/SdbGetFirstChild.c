/*
 * XREFs of SdbGetFirstChild @ 0x140577FAC
 * Callers:
 *     SdbpScanIndexes @ 0x140577AE4 (SdbpScanIndexes.c)
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x1405AB558 (SdbpMatchList.c)
 *     SdbFindFirstNamedTag @ 0x140703E7C (SdbFindFirstNamedTag.c)
 * Callees:
 *     SdbpGetNextTagId @ 0x140577D90 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x140577EF8 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetFirstChild(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int NextTagId; // eax
  unsigned int v5; // ebx

  v2 = a2;
  if ( !(_DWORD)a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    v5 = 12;
    return v5 < NextTagId ? v5 : 0;
  }
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, v2);
    v5 = v2 + 6;
    return v5 < NextTagId ? v5 : 0;
  }
  return 0LL;
}
