/*
 * XREFs of _Stopfx @ 0x18006BED8
 * Callers:
 *     _Stofx @ 0x18006AD30 (_Stofx.c)
 *     _Stodx @ 0x18006B754 (_Stodx.c)
 *     _Stoldx @ 0x18006BC08 (_Stoldx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Stopfx(unsigned __int8 **a1, _QWORD *a2)
{
  unsigned __int8 *v2; // rbx
  int v5; // edi
  unsigned int v6; // edi
  _BYTE *v7; // rsi
  __int64 result; // rax

  v2 = *a1;
  v5 = 0;
  while ( isspace(*v2) )
    ++v2;
  if ( *v2 == 45 )
  {
    v5 = 8;
  }
  else if ( *v2 != 43 )
  {
    goto LABEL_8;
  }
  ++v2;
LABEL_8:
  if ( ((*v2 - 78) & 0xDF) != 0 )
  {
    if ( ((*v2 - 73) & 0xDF) != 0 )
    {
      v6 = v5 | 1;
      goto LABEL_29;
    }
    if ( ((v2[1] - 78) & 0xDF) == 0 && ((v2[2] - 70) & 0xDF) == 0 )
    {
      v2 += 3;
      v6 = v5 | 3;
      if ( ((*v2 - 73) & 0xDF) == 0
        && ((v2[1] - 78) & 0xDF) == 0
        && ((v2[2] - 73) & 0xDF) == 0
        && ((v2[3] - 84) & 0xDF) == 0
        && ((v2[4] - 89) & 0xDF) == 0 )
      {
        v2 += 5;
      }
      goto LABEL_27;
    }
  }
  else if ( ((v2[1] - 65) & 0xDF) == 0 && ((v2[2] - 78) & 0xDF) == 0 )
  {
    v2 += 3;
    v6 = 4;
    v7 = v2;
    if ( *v2 == 40 )
    {
      do
      {
        do
          ++v7;
        while ( isalnum((unsigned __int8)*v7) );
      }
      while ( *v7 == 95 );
      if ( *v7 == 41 )
        v2 = v7 + 1;
    }
    goto LABEL_27;
  }
  v2 = *a1;
  v6 = 0;
LABEL_27:
  if ( a2 )
    *a2 = v2;
LABEL_29:
  result = v6;
  *a1 = v2;
  return result;
}
