/*
 * XREFs of RtlpMuiRegResizeStringPool @ 0x1800E848C
 * Callers:
 *     RtlpMuiRegGrowStringPool @ 0x1800E7B50 (RtlpMuiRegGrowStringPool.c)
 * Callees:
 *     RtlpMuiRegFreeStringPool @ 0x180047C60 (RtlpMuiRegFreeStringPool.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     RtlpMuiRegCreateStringPool @ 0x1800E6F68 (RtlpMuiRegCreateStringPool.c)
 */

_QWORD *__fastcall RtlpMuiRegResizeStringPool(const void **BaseAddress, __int16 a2, __int16 a3, char a4)
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
  if ( BaseAddress )
  {
    if ( v8 >= 1
      && v8 >= (int)*((unsigned __int16 *)BaseAddress + 3)
      && v7 >= (int)*((unsigned __int16 *)BaseAddress + 5) )
    {
      v9 = 2LL * *((unsigned __int16 *)BaseAddress + 2);
      if ( v9 <= 0xFFFFFFFF )
      {
        v10 = 2LL * *((unsigned __int16 *)BaseAddress + 4);
        if ( v10 <= 0xFFFFFFFF )
        {
          StringPool = RtlpMuiRegCreateStringPool(v8, v7);
          v5 = StringPool;
          if ( StringPool )
          {
            memmove((void *)StringPool[2], BaseAddress[2], (unsigned int)v9);
            memmove((void *)v5[3], BaseAddress[3], (unsigned int)v10);
            *((_WORD *)v5 + 3) = *((_WORD *)BaseAddress + 3);
            *((_WORD *)v5 + 5) = *((_WORD *)BaseAddress + 5);
            if ( !a4 )
              RtlpMuiRegFreeStringPool(BaseAddress);
          }
        }
      }
    }
  }
  return v5;
}
