/*
 * XREFs of RtlpLfhFindClearBitAndSet @ 0x18004F310
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x18004EFA0 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLfhFindClearBitAndSet(unsigned __int64 *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r11
  unsigned __int64 v7; // r8
  _QWORD *v9; // r10
  unsigned int v10; // edi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  unsigned int v17; // ebx

  v4 = *a1;
  v5 = -1LL;
  v7 = a2;
  if ( *a1 >= 0x40 )
  {
    v15 = (_QWORD *)a1[1];
    v16 = &v15[(v4 - 1) >> 6];
    v9 = &v15[v7 >> 6];
    do
    {
      if ( *v9 != -1LL )
        break;
      if ( v9 == v16 )
        v9 = v15;
      else
        ++v9;
    }
    while ( v9 != &v15[v7 >> 6] );
    if ( v9 == v16 )
    {
      v17 = v4 & 0x3F;
      if ( v17 )
      {
        if ( v17 < (unsigned __int64)a4 )
          a4 = *(_DWORD *)a1 & 0x3F;
      }
    }
  }
  else
  {
    v9 = (_QWORD *)a1[1];
    if ( v4 < a4 )
      a4 = *a1;
  }
  v10 = (a4 * a3) >> 7;
  if ( a4 < 0x40 )
  {
    _BitScanForward64(&v11, ~*v9);
    LOBYTE(v10) = v11 + v10;
    v5 = ((1LL << a4) - 1) << v11;
  }
  _BitScanForward64(&v12, ~__ROR8__(*v9 | ~v5, v10));
  v13 = ((_BYTE)v10 + (_BYTE)v12) & 0x3F;
  *v9 |= 1LL << v13;
  return v13 + ((__int64)((__int64)v9 - a1[1]) >> 3 << 6);
}
