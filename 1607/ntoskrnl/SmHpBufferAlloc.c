/*
 * XREFs of SmHpBufferAlloc @ 0x140115ECC
 * Callers:
 *     SmHpChunkAlloc @ 0x140118638 (SmHpChunkAlloc.c)
 * Callees:
 *     SmBinaryArrayGrow @ 0x140115E38 (SmBinaryArrayGrow.c)
 *     SmHpBufferUpdateFullness @ 0x1401186C8 (SmHpBufferUpdateFullness.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char *__fastcall SmHpBufferAlloc(_DWORD *a1)
{
  _QWORD *PoolWithTag; // rsi
  __int64 v3; // rdx
  unsigned int v4; // edx
  char *v5; // rbx
  _WORD *v6; // r9
  __int64 v7; // r8
  _WORD *v8; // rdx
  unsigned __int64 i; // rcx
  __int64 v11; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x42436D73u);
  if ( !PoolWithTag )
    return 0LL;
  v3 = (unsigned int)a1[136];
  if ( (_DWORD)v3 == -1 )
  {
    v4 = a1[64];
    if ( v4 > a1[65] )
    {
      v5 = 0LL;
      goto LABEL_10;
    }
    v5 = SmBinaryArrayGrow((__int64)a1, v4);
    if ( !v5 )
      goto LABEL_10;
    LODWORD(v3) = a1[64];
    a1[64] = v3 + 1;
  }
  else
  {
    _BitScanReverse((unsigned int *)&v11, v3);
    v5 = (char *)(*(_QWORD *)&a1[2 * v11] + 16 * (v3 ^ (unsigned int)(1 << v11)));
    a1[136] = *((_DWORD *)v5 + 2);
  }
  PoolWithTag[2] = 0LL;
  v6 = v5 + 8;
  *((_DWORD *)PoolWithTag + 4) = v3;
  v7 = 0LL;
  PoolWithTag[1] = PoolWithTag;
  *PoolWithTag = PoolWithTag;
  *((_QWORD *)v5 + 1) = 0LL;
  *(_QWORD *)v5 = PoolWithTag;
  v8 = (_WORD *)((char *)PoolWithTag + (unsigned int)a1[70]);
  for ( i = (unsigned __int64)v8 + (unsigned int)a1[68];
        i <= (unsigned __int64)(PoolWithTag + 512);
        i += (unsigned int)a1[68] )
  {
    LOWORD(v7) = v7 + 1;
    *v6 = (_WORD)v8 - (_WORD)PoolWithTag;
    v6 = v8;
    v8 = (_WORD *)i;
  }
  *v6 = -1;
  SmHpBufferUpdateFullness(a1, v5, v7);
  PoolWithTag = 0LL;
LABEL_10:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v5;
}
