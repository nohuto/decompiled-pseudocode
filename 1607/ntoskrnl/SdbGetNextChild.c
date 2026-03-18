/*
 * XREFs of SdbGetNextChild @ 0x140504604
 * Callers:
 *     SdbFindNextTag @ 0x1404E791C (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x1405737E8 (SdbpMatchList.c)
 *     SdbFindFirstNamedTag @ 0x1406C3D74 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1406C3E38 (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x140503E20 (SdbpGetNextTagId.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
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
