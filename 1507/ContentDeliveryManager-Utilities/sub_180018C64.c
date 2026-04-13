/*
 * XREFs of sub_180018C64 @ 0x180018C64
 * Callers:
 *     sub_1800137FC @ 0x1800137FC (sub_1800137FC.c)
 *     sub_180020E24 @ 0x180020E24 (sub_180020E24.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180018C64(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rax
  unsigned int v5; // ebx
  _WORD *v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  _WORD *v9; // rax
  unsigned __int64 v10; // rsi
  LPVOID v11; // rax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    return (unsigned int)-2147024362;
  v4 = -1LL;
  v5 = 0;
  if ( *(_QWORD *)(a1 + 16) == -1LL )
  {
    if ( *(_QWORD *)(a1 + 8) == -1LL )
    {
      v6 = *(_WORD **)a1;
      if ( v6 )
      {
        do
          ++v4;
        while ( v6[v4] );
      }
      else
      {
        v4 = 0LL;
      }
      *(_QWORD *)(a1 + 8) = v4;
    }
    if ( *(_QWORD *)a1 )
      v7 = *(_QWORD *)(a1 + 8) + 1LL;
    else
      v7 = 0LL;
    *(_QWORD *)(a1 + 16) = v7;
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    if ( v2 <= v8 )
      return v5;
    v10 = 2 * v8;
    if ( is_mul_ok(v8, 2uLL) )
    {
      if ( v8 > 0x800 )
        v10 = v8 + 2048;
      if ( v2 > v10 )
        v10 = a2 + 1;
      v11 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v10);
      if ( v11 )
      {
        *(_QWORD *)(a1 + 16) = v10;
        *(_QWORD *)a1 = v11;
        return v5;
      }
      return (unsigned int)-2147024882;
    }
    return (unsigned int)-2147024362;
  }
  if ( !is_mul_ok(v2, 2uLL) )
    return (unsigned int)-2147024362;
  v9 = CoTaskMemAlloc(2 * v2);
  if ( !v9 )
    return (unsigned int)-2147024882;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)a1 = v9;
  *v9 = 0;
  return v5;
}
