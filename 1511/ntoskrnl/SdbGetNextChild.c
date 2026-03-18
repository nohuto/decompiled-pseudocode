/*
 * XREFs of SdbGetNextChild @ 0x140441C58
 * Callers:
 *     SdbFindFirstTag @ 0x1403B6498 (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x1403B6644 (SdbFindNextTag.c)
 *     SdbpMatchList @ 0x14053533C (SdbpMatchList.c)
 *     SdbFindFirstNamedTag @ 0x14067F028 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14067F0EC (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x14043FCA8 (SdbpGetNextTagId.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int NextTagId; // edi
  unsigned int v7; // eax

  v4 = a2;
  if ( !(_DWORD)a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    goto LABEL_4;
  }
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, v4);
LABEL_4:
    v7 = SdbpGetNextTagId(a1, a3);
    return v7 < NextTagId ? v7 : 0;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbGetNextChild", 949, (unsigned int)"Trying to operate on non-list, non-root tag");
  return 0LL;
}
