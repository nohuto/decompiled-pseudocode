/*
 * XREFs of ConvertToAndFromWideCharSymCP @ 0x1C026A784
 * Callers:
 *     ConvertToAndFromWideChar @ 0x1C000F948 (ConvertToAndFromWideChar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertToAndFromWideCharSymCP(_WORD *a1, int a2, unsigned __int8 *a3, int a4, int a5)
{
  unsigned int v6; // r9d
  int v8; // eax
  __int64 v9; // r10
  __int64 v10; // r9
  unsigned __int8 v11; // al
  __int16 v12; // dx
  __int64 v13; // rdx
  unsigned __int16 v14; // ax

  v6 = 0;
  if ( a2 && !a1 || a4 && !a3 )
    return 0LL;
  v8 = a2 / 2;
  if ( a5 )
  {
    if ( a4 < v8 )
      v8 = a4;
    v9 = v8;
    if ( v8 > 0 )
    {
      v10 = v8;
      do
      {
        v11 = *a3;
        if ( *a3 >= 0x20u )
          v12 = v11 | 0xF000;
        else
          v12 = (char)v11;
        *a1 = v12;
        ++a3;
        ++a1;
        --v10;
      }
      while ( v10 );
    }
    return 2 * v9;
  }
  else
  {
    v13 = 0LL;
    if ( v8 < a4 )
      a4 = v8;
    if ( a4 <= 0 )
    {
      return (unsigned int)a4;
    }
    else
    {
      while ( 1 )
      {
        v14 = a1[v13];
        if ( v14 >= 0x20u && (unsigned __int16)(v14 + 4064) > 0xDFu )
          break;
        ++v6;
        a3[v13] = a1[v13];
        if ( ++v13 >= a4 )
          return (unsigned int)a4;
      }
      return v6;
    }
  }
}
