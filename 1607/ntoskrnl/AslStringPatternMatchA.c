/*
 * XREFs of AslStringPatternMatchA @ 0x140535A8C
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140513CD0 (SdbpFindFirstIndexedWildCardTag.c)
 *     AslStringPatternMatchA @ 0x140535A8C (AslStringPatternMatchA.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1406C50E8 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     toupper @ 0x14014F3AC (toupper.c)
 *     AslStringPatternMatchA @ 0x140535A8C (AslStringPatternMatchA.c)
 */

__int64 __fastcall AslStringPatternMatchA(char *a1, _BYTE *a2)
{
  unsigned int v4; // edi
  char v5; // al
  char v6; // cl
  int v7; // ebx
  int v8; // ebx

  v4 = 1;
  while ( 1 )
  {
    v5 = *a1;
    if ( !*a1 && !*a2 )
      return v4;
    if ( v5 == 42 )
    {
      v6 = a1[1];
      if ( v6 != 42 )
      {
        if ( !v6 )
          return v4;
        v7 = toupper(v6);
        if ( v7 == toupper((char)*a2) )
        {
          if ( (unsigned int)AslStringPatternMatchA(a1 + 1, a2) )
            return v4;
        }
        goto LABEL_7;
      }
      ++a1;
    }
    else
    {
      if ( v5 != 63 )
      {
        v8 = toupper(v5);
        if ( v8 != toupper((char)*a2) )
          return 0;
      }
      ++a1;
LABEL_7:
      if ( !*a2 )
        return 0;
      ++a2;
    }
  }
}
