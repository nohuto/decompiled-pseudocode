/*
 * XREFs of SdbpFindNextNamedTag @ 0x1406C3E38
 * Callers:
 *     SdbpSearchDB @ 0x140484F3C (SdbpSearchDB.c)
 * Callees:
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x140504604 (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x140573D10 (SdbGetStringTagPtr.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpFindNextNamedTag(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4, wchar_t *Str1)
{
  unsigned int v7; // edi
  unsigned int v9; // ebx
  __int16 TagFromTagID; // r15
  unsigned int FirstTag; // eax
  unsigned int v13; // ebp
  const wchar_t *StringTagPtr; // rax
  unsigned int NextChild; // eax

  v7 = a3;
  v9 = 0;
  TagFromTagID = SdbGetTagFromTagID(a1, a3);
  if ( TagFromTagID )
  {
    while ( 1 )
    {
      NextChild = SdbGetNextChild(a1, a2, v7);
      v7 = NextChild;
      if ( !NextChild )
        break;
      if ( (unsigned __int16)SdbGetTagFromTagID(a1, NextChild) == TagFromTagID )
      {
        FirstTag = SdbFindFirstTag(a1, v7, a4);
        v13 = FirstTag;
        if ( FirstTag )
        {
          StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
          if ( !StringTagPtr )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpFindNextNamedTag",
              215,
              (unsigned int)"Can't get the name string tagid 0x%lx",
              v13);
            return v9;
          }
          if ( !wcsicmp(Str1, StringTagPtr) )
            return v7;
        }
      }
    }
    return v9;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpFindNextNamedTag", 198, (unsigned int)"Invalid tagid 0x%lx", v7);
    return 0LL;
  }
}
