/*
 * XREFs of RtlpLfhBlockBitmapAllocate @ 0x180027950
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
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
  signed __int64 *v5; // r14
  unsigned __int64 v7; // rsi
  volatile signed __int64 *v9; // rdx
  volatile signed __int64 *v10; // rdi
  signed __int64 v11; // r10
  signed __int64 *v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  bool v16; // zf
  signed __int64 v17; // rax
  int v19; // [rsp+28h] [rbp+10h]

  v5 = (signed __int64 *)a1[1];
  v7 = *a1;
  v9 = &v5[(unsigned __int64)(unsigned int)(2 * a2) >> 6];
  v10 = &v5[(*a1 - 1) >> 6];
LABEL_2:
  v11 = *v9;
  if ( v7 >= 0x40 )
  {
    if ( (v11 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      do
      {
        v12 = v5;
        if ( v9 != v10 )
          v12 = (signed __int64 *)(v9 + 1);
        v9 = v12;
        v11 = *v12;
      }
      while ( (*v12 & 0x5555555555555555LL) == 0x5555555555555555LL );
    }
    if ( v9 == v10 && (v7 & 0x3F) != 0 && (v7 & 0x3F) < a4 )
      a4 = v7 & 0x3F;
  }
  else if ( (unsigned int)v7 < a4 )
  {
    a4 = v7;
  }
  a3 = ((a4 * a3) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    if ( a4 >= 0x40 )
    {
      v14 = 0x5555555555555555LL;
    }
    else
    {
      _BitScanForward64(&v13, ~v11 & 0x5555555555555555LL);
      a3 += v13;
      v14 = (((1LL << a4) - 1) << v13) & 0x5555555555555555LL;
    }
    _BitScanForward64(&v15, __ROR8__(v14 & ~v11, a3));
    v19 = ((_BYTE)a3 + (_BYTE)v15) & 0x3F;
    v17 = _InterlockedCompareExchange64(v9, v11 | (a5 << v19), v11);
    v16 = v11 == v17;
    v11 = v17;
    if ( v16 )
      return (v19 + ((unsigned int)(v9 - v5) << 6)) >> 1;
    if ( (v17 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      if ( ++v9 > v10 )
        v9 = v5;
      goto LABEL_2;
    }
  }
}
