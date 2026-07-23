/*
 * XREFs of RtlAreBitsSetEx @ 0x1400B39FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlAreBitsSetEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char v3; // r9
  unsigned __int64 v4; // r11
  __int64 v6; // rcx
  __int64 *v7; // r8
  __int64 *v8; // r10
  __int64 v9; // rax
  unsigned __int64 v10; // r9

  v3 = a3;
  v4 = a3 + a2 - 1;
  if ( v4 >= *(_QWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return _bittest64(*(const signed __int64 **)(a1 + 8), a2);
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (__int64 *)(v6 + 8 * (a2 >> 6));
  v8 = (__int64 *)(v6 + 8 * (v4 >> 6));
  v9 = *v7;
  if ( v7 == v8 )
  {
    v10 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - v3) << a2;
  }
  else
  {
    if ( ((-1LL << a2) & v9) != -1LL << a2 )
      return 0;
    while ( ++v7 != v8 )
    {
      if ( *v7 != -1 )
        return 0;
    }
    v9 = *v7;
    v10 = 0xFFFFFFFFFFFFFFFFuLL >> (-1 - (unsigned __int8)v4);
  }
  return (v10 & v9) == v10;
}
