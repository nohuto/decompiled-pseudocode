/*
 * XREFs of SdbFindFirstNamedTag @ 0x1406C3D74
 * Callers:
 *     SdbpSearchDB @ 0x140484F3C (SdbpSearchDB.c)
 *     SdbQueryDataExTagID @ 0x1406C19DC (SdbQueryDataExTagID.c)
 * Callees:
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x140504604 (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbGetFirstChild @ 0x14050589C (SdbGetFirstChild.c)
 *     SdbGetStringTagPtr @ 0x140573D10 (SdbGetStringTagPtr.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbFindFirstNamedTag(__int64 a1, unsigned int a2, __int16 a3, __int16 a4, wchar_t *Str1)
{
  unsigned int v5; // ebx
  unsigned int i; // eax
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rax
  unsigned int v13; // edi

  v5 = 0;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, a2, v13) )
  {
    v13 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
    {
      FirstTag = SdbFindFirstTag(a1, v13, a4);
      if ( FirstTag )
      {
        StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
        if ( !StringTagPtr )
        {
          AslLogCallPrintf(1, (unsigned int)"SdbFindFirstNamedTag", 152, (unsigned int)"Can't get the name string");
          return v5;
        }
        if ( !wcsicmp(Str1, StringTagPtr) )
          return v13;
      }
    }
  }
  return v5;
}
