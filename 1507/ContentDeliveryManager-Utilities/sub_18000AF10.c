/*
 * XREFs of sub_18000AF10 @ 0x18000AF10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180021DA8 @ 0x180021DA8 (sub_180021DA8.c)
 */

_WORD *__fastcall sub_18000AF10(__int64 a1, _WORD *a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  _WORD *v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rbp

  v3 = 0LL;
  v4 = a2;
  v5 = (a3 - (unsigned __int64)a2 + 1) >> 1;
  if ( (unsigned __int64)a2 > a3 )
    v5 = 0LL;
  if ( v5 )
  {
    v6 = a1 + 16;
    do
    {
      *v4 = sub_180021DA8((unsigned __int16)*v4, v6);
      ++v3;
      ++v4;
    }
    while ( v3 != v5 );
  }
  return v4;
}
