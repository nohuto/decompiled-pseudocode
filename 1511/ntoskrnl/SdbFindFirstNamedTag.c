/*
 * XREFs of SdbFindFirstNamedTag @ 0x14067F028
 * Callers:
 *     SdbpSearchDB @ 0x1403B7744 (SdbpSearchDB.c)
 *     SdbQueryDataExTagID @ 0x14067D158 (SdbQueryDataExTagID.c)
 * Callees:
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x1403B6498 (SdbFindFirstTag.c)
 *     SdbGetFirstChild @ 0x1403B6508 (SdbGetFirstChild.c)
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x140441C58 (SdbGetNextChild.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140535F9C (SdbGetStringTagPtr.c)
 */

__int64 __fastcall SdbFindFirstNamedTag(__int64 a1, __int64 a2, __int16 a3, __int16 a4, wchar_t *Str1)
{
  unsigned int v5; // ebx
  unsigned int v8; // ebp
  unsigned int i; // eax
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rax
  unsigned int v13; // edi

  v5 = 0;
  v8 = a2;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, v8, v13) )
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
          AslLogCallPrintf(1LL);
          return v5;
        }
        if ( !wcsicmp(Str1, StringTagPtr) )
          return v13;
      }
    }
  }
  return v5;
}
