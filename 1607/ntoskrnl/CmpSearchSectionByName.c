/*
 * XREFs of CmpSearchSectionByName @ 0x1407A8C5C
 * Callers:
 *     CmpGetSectionLineIndexValueCount @ 0x1407A83A8 (CmpGetSectionLineIndexValueCount.c)
 *     EmpInfParseGetSectionLineCount @ 0x1407A85B8 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x1407A8AF8 (CmpGetSectionLineIndex.c)
 *     CmpGetKeyName @ 0x1407A8C08 (CmpGetKeyName.c)
 * Callees:
 *     _stricmp @ 0x14014D904 (_stricmp.c)
 */

__int64 **__fastcall CmpSearchSectionByName(__int64 ***a1, const char *a2)
{
  __int64 **i; // rbx
  __int64 **v5; // rdi
  const char *v7; // rcx

  i = 0LL;
  if ( a1 && a2 )
  {
    v5 = a1[1];
    i = v5;
    if ( v5 )
    {
      do
      {
        if ( !stricmp((const char *)i[1], a2) )
          break;
        i = (__int64 **)*i;
      }
      while ( i );
      if ( i )
        goto LABEL_6;
    }
    for ( i = *a1; i; i = (__int64 **)*i )
    {
      if ( i == v5 )
        goto LABEL_19;
      v7 = (const char *)i[1];
      if ( v7 )
      {
        if ( !stricmp(v7, a2) )
          break;
      }
    }
    if ( i != v5 )
      goto LABEL_16;
LABEL_19:
    i = 0LL;
LABEL_16:
    if ( i )
LABEL_6:
      a1[1] = i;
  }
  return i;
}
