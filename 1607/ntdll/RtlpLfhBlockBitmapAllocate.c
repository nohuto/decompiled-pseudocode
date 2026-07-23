/*
 * XREFs of RtlpLfhBlockBitmapAllocate @ 0x180041D84
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x180041C38 (RtlpHpLfhSubsegmentAllocateBlock.c)
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
  volatile signed __int64 *v5; // rsi
  unsigned __int64 v6; // rbx
  volatile signed __int64 *v7; // r10
  volatile signed __int64 *v8; // rbp
  signed __int64 v9; // rdi
  __int64 v10; // r11
  unsigned __int64 v11; // rcx
  bool v12; // zf
  signed __int64 v13; // rax
  unsigned __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp+10h]

  v5 = (volatile signed __int64 *)a1[1];
  v6 = *a1;
  v7 = &v5[(unsigned __int64)(unsigned int)(2 * a2) >> 6];
  v8 = &v5[(*a1 - 1) >> 6];
LABEL_2:
  if ( v6 < 0x40 )
  {
    v9 = *v7;
    if ( (unsigned int)v6 < a4 )
      a4 = v6;
  }
  else
  {
    while ( 1 )
    {
      v9 = *v7;
      if ( (*v7 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      if ( v7 == v8 )
        v7 = v5;
      else
        ++v7;
    }
    if ( v7 == v8 && (v6 & 0x3F) != 0 && (v6 & 0x3F) < a4 )
      a4 = v6 & 0x3F;
  }
  a3 = ((a4 * a3) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    if ( a4 < 0x40 )
    {
      _BitScanForward64(&v15, ~v9 & 0x5555555555555555LL);
      a3 += v15;
      v10 = (((1LL << a4) - 1) << v15) & 0x5555555555555555LL;
    }
    else
    {
      v10 = 0x5555555555555555LL;
    }
    _BitScanForward64(&v11, __ROR8__(v10 & ~v9, a3));
    v16 = ((_BYTE)a3 + (_BYTE)v11) & 0x3F;
    v13 = _InterlockedCompareExchange64(v7, v9 | (a5 << v16), v9);
    v12 = v9 == v13;
    v9 = v13;
    if ( v12 )
      return (v16 + ((unsigned int)(v7 - v5) << 6)) >> 1;
    if ( (v13 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      if ( ++v7 > v8 )
        v7 = v5;
      goto LABEL_2;
    }
  }
}
