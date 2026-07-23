/*
 * XREFs of CmpProcessForSimpleStringSub @ 0x1407A8D00
 * Callers:
 *     CmpGetSectionLineIndex @ 0x1407A8AF8 (CmpGetSectionLineIndex.c)
 * Callees:
 *     _strnicmp @ 0x14014D97C (_strnicmp.c)
 */

_BYTE *__fastcall CmpProcessForSimpleStringSub(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  _QWORD *v6; // rbx
  const char *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v2 = a2;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  v4 = *(_QWORD *)(a1 + 40);
  if ( *a2 == 37 && v3 > 2 && a2[v3 - 1] == 37 )
  {
    if ( v4 )
    {
      v6 = *(_QWORD **)(v4 + 16);
      if ( v6 )
      {
        do
        {
          v7 = (const char *)v6[1];
          if ( v7 && !strnicmp(v7, v2 + 1, v3 - 2) && !*(_BYTE *)(v6[1] + v3 - 2) )
            break;
          v6 = (_QWORD *)*v6;
        }
        while ( v6 );
        if ( v6 )
        {
          v8 = v6[2];
          if ( v8 )
          {
            v9 = *(_QWORD *)(v8 + 8);
            if ( v9 )
              return (_BYTE *)v9;
          }
        }
      }
    }
  }
  return v2;
}
