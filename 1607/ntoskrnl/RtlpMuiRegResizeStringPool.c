/*
 * XREFs of RtlpMuiRegResizeStringPool @ 0x1406E7500
 * Callers:
 *     RtlpMuiRegGrowStringPool @ 0x1406E71D0 (RtlpMuiRegGrowStringPool.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlpMuiRegCreateStringPool @ 0x140560CD8 (RtlpMuiRegCreateStringPool.c)
 */

_QWORD *__fastcall RtlpMuiRegResizeStringPool(const void **P, __int16 a2, __int16 a3, char a4)
{
  _QWORD *v5; // rdi
  __int16 v7; // r10
  __int16 v8; // ax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  _QWORD *StringPool; // rax

  v5 = 0LL;
  v7 = a3;
  v8 = a2;
  if ( a2 < 1 )
    v8 = 4;
  if ( a3 < 1 )
    v7 = 40;
  if ( P )
  {
    if ( v8 >= 1 && v8 >= (int)*((unsigned __int16 *)P + 3) && v7 >= (int)*((unsigned __int16 *)P + 5) )
    {
      v9 = 2LL * *((unsigned __int16 *)P + 2);
      if ( v9 <= 0xFFFFFFFF )
      {
        v10 = 2LL * *((unsigned __int16 *)P + 4);
        if ( v10 <= 0xFFFFFFFF )
        {
          StringPool = RtlpMuiRegCreateStringPool(v8, v7);
          v5 = StringPool;
          if ( StringPool )
          {
            memmove((void *)StringPool[2], P[2], (unsigned int)v9);
            memmove((void *)v5[3], P[3], (unsigned int)v10);
            *((_WORD *)v5 + 3) = *((_WORD *)P + 3);
            *((_WORD *)v5 + 5) = *((_WORD *)P + 5);
            if ( !a4 )
              ExFreePoolWithTag(P, 0);
          }
        }
      }
    }
  }
  return v5;
}
