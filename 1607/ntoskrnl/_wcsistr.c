/*
 * XREFs of _wcsistr @ 0x1406E4CC8
 * Callers:
 *     SubstringMatch @ 0x1406E4C40 (SubstringMatch.c)
 * Callees:
 *     <none>
 */

char *__fastcall wcsistr(char *a1, char *a2)
{
  __int16 v4; // ax
  signed __int64 i; // r9
  __int16 *v6; // rdx
  __int16 v7; // r8
  __int16 v8; // r10

  if ( !*(_WORD *)a2 )
    return a1;
  v4 = *(_WORD *)a1;
  if ( *(_WORD *)a1 )
  {
    for ( i = a1 - a2; ; i += 2LL )
    {
      v6 = (__int16 *)a2;
      if ( v4 )
        break;
LABEL_13:
      if ( !*v6 )
        return a1;
      a1 += 2;
      v4 = *(_WORD *)a1;
      if ( !*(_WORD *)a1 )
        return 0LL;
    }
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        return a1;
      v8 = *(__int16 *)((char *)v6 + i);
      if ( (unsigned __int16)(v8 - 97) <= 0x19u )
        v8 -= 32;
      if ( (unsigned __int16)(v7 - 97) <= 0x19u )
        v7 -= 32;
      if ( v8 == v7 )
      {
        if ( *(__int16 *)((char *)++v6 + i) )
          continue;
      }
      goto LABEL_13;
    }
  }
  return 0LL;
}
