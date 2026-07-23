/*
 * XREFs of PfSnFindString @ 0x1403E8E44
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1403E8CF0 (PfSnParsePrefetchParam.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall PfSnFindString(unsigned __int16 *a1, unsigned __int16 *a2)
{
  _WORD *v2; // r8
  _WORD *v3; // r10
  unsigned __int64 v4; // r9
  _WORD *v5; // r11
  bool v6; // zf
  _WORD *v7; // rdx
  _WORD *v8; // rcx

  v2 = (_WORD *)*((_QWORD *)a1 + 1);
  v3 = (_WORD *)*((_QWORD *)a2 + 1);
  v4 = (unsigned __int64)&v2[(unsigned __int64)*a1 >> 1];
  v5 = &v3[(unsigned __int64)*a2 >> 1];
  while ( 1 )
  {
    if ( (unsigned __int64)v2 >= v4 )
      return 0LL;
    v7 = v3;
    v8 = v2;
    while ( 1 )
    {
      v6 = v7 == v5;
      if ( v7 >= v5 )
        break;
      if ( *v8 == *v7 )
      {
        ++v7;
        if ( (unsigned __int64)++v8 < v4 )
          continue;
      }
      v6 = v7 == v5;
      break;
    }
    if ( v6 )
      return v2;
    ++v2;
  }
}
