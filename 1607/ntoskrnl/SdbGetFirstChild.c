/*
 * XREFs of SdbGetFirstChild @ 0x1404E882C
 * Callers:
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbpScanIndexes @ 0x1404E899C (SdbpScanIndexes.c)
 *     SdbpMatchList @ 0x140573D28 (SdbpMatchList.c)
 *     SdbFindFirstNamedTag @ 0x1406C3EAC (SdbFindFirstNamedTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x1404E6DB0 (SdbpGetNextTagId.c)
 */

__int64 __fastcall SdbGetFirstChild(__int64 a1, unsigned int a2)
{
  unsigned int NextTagId; // eax
  unsigned int v5; // ebx

  if ( !a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    v5 = 12;
    return v5 < NextTagId ? v5 : 0;
  }
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, a2);
    v5 = a2 + 6;
    return v5 < NextTagId ? v5 : 0;
  }
  return 0LL;
}
