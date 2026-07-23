/*
 * XREFs of SdbGetNextChild @ 0x1404E7594
 * Callers:
 *     SdbFindNextTag @ 0x1404C9CA8 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x140573D28 (SdbpMatchList.c)
 *     SdbFindFirstNamedTag @ 0x1406C3EAC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1406C3F70 (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x1404E6DB0 (SdbpGetNextTagId.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int NextTagId; // edi
  unsigned int v7; // eax

  if ( !a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    goto LABEL_4;
  }
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, a2);
LABEL_4:
    v7 = SdbpGetNextTagId(a1, a3);
    return v7 < NextTagId ? v7 : 0;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbGetNextChild", 949, (unsigned int)"Trying to operate on non-list, non-root tag");
  return 0LL;
}
