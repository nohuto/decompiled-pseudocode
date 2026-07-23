/*
 * XREFs of MD5Update @ 0x18006BA20
 * Callers:
 *     MD5Final @ 0x18006B950 (MD5Final.c)
 *     ImportTablepHashCanonicalLists @ 0x1800DB5AC (ImportTablepHashCanonicalLists.c)
 * Callees:
 *     TransformMD5 @ 0x18006BB70 (TransformMD5.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall MD5Update(__int64 a1, _OWORD *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  _OWORD *v4; // rsi
  unsigned int v6; // r14d
  unsigned int v7; // r9d
  __int64 result; // rax
  unsigned int v9; // ebp
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbp

  v3 = a3;
  v4 = a2;
  v6 = (*(_DWORD *)a1 >> 3) & 0x3F;
  v7 = *(_DWORD *)a1 + 8 * a3;
  *(_DWORD *)a1 = v7;
  if ( v7 < 8 * a3 )
    ++*(_DWORD *)(a1 + 4);
  result = a3 >> 29;
  *(_DWORD *)(a1 + 4) += result;
  if ( v6 )
  {
    v9 = v6 + a3;
    if ( v6 + a3 >= 0x40 )
    {
      memmove((void *)(v6 + a1 + 24), a2, 64 - v6);
      v4 = (_OWORD *)((char *)v4 + 64 - v6);
      v3 = v9 - 64;
      result = TransformMD5(a1 + 8, a1 + 24);
      v6 = 0;
    }
  }
  if ( ((unsigned __int8)v4 & 3) != 0 )
  {
    if ( v3 >= 0x40 )
    {
      v11 = (unsigned __int64)v3 >> 6;
      do
      {
        *(_OWORD *)(a1 + 24) = *v4;
        *(_OWORD *)(a1 + 40) = v4[1];
        *(_OWORD *)(a1 + 56) = v4[2];
        *(_OWORD *)(a1 + 72) = v4[3];
        result = TransformMD5(a1 + 8, a1 + 24);
        v4 += 4;
        v3 -= 64;
        --v11;
      }
      while ( v11 );
    }
  }
  else if ( v3 >= 0x40 )
  {
    v10 = (unsigned __int64)v3 >> 6;
    do
    {
      result = TransformMD5(a1 + 8, v4);
      v4 += 4;
      v3 -= 64;
      --v10;
    }
    while ( v10 );
  }
  if ( v3 )
    return (__int64)memmove((void *)(v6 + a1 + 24), v4, v3);
  return result;
}
