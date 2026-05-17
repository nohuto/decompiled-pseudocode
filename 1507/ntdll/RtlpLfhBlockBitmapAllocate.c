/*
 * XREFs of RtlpLfhBlockBitmapAllocate @ 0x1800309B0
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLfhBlockBitmapAllocate(
        unsigned __int64 *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  volatile signed __int64 *v5; // r11
  unsigned __int64 v7; // rdi
  volatile signed __int64 *v8; // rdx
  volatile signed __int64 *v9; // rsi
  signed __int64 v10; // rbx
  __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  bool v13; // zf
  signed __int64 v14; // rax
  unsigned __int64 v16; // r8
  int v17; // [rsp+20h] [rbp+10h]

  v5 = (volatile signed __int64 *)a1[1];
  v7 = *a1;
  v8 = &v5[(unsigned __int64)(unsigned int)(2 * a2) >> 6];
  v9 = &v5[(*a1 - 1) >> 6];
LABEL_2:
  if ( v7 < 0x40 )
  {
    v10 = *v8;
    if ( (unsigned int)v7 < a4 )
      a4 = v7;
  }
  else
  {
    while ( 1 )
    {
      v10 = *v8;
      if ( (*v8 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      if ( v8 == v9 )
        v8 = v5;
      else
        ++v8;
    }
    if ( v8 == v9 && (v7 & 0x3F) != 0 && (v7 & 0x3F) < a4 )
      a4 = v7 & 0x3F;
  }
  a3 = ((a4 * a3) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    if ( a4 < 0x40 )
    {
      _BitScanForward64(&v16, ~v10 & 0x5555555555555555LL);
      a3 += v16;
      v11 = (((1LL << a4) - 1) << v16) & 0x5555555555555555LL;
    }
    else
    {
      v11 = 0x5555555555555555LL;
    }
    _BitScanForward64(&v12, __ROR8__(v11 & ~v10, a3));
    v17 = ((_BYTE)a3 + (_BYTE)v12) & 0x3F;
    v14 = _InterlockedCompareExchange64(v8, v10 | (a5 << v17), v10);
    v13 = v10 == v14;
    v10 = v14;
    if ( v13 )
      return (v17 + ((unsigned int)(v8 - v5) << 6)) >> 1;
    if ( (v14 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      if ( ++v8 > v9 )
        v8 = v5;
      goto LABEL_2;
    }
  }
}
