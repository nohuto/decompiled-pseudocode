/*
 * XREFs of RtlpMuiRegResizeStringPool @ 0x1800E848C
 * Callers:
 *     RtlpMuiRegGrowStringPool @ 0x1800E7B50 (RtlpMuiRegGrowStringPool.c)
 * Callees:
 *     RtlpMuiRegFreeStringPool @ 0x180047C60 (RtlpMuiRegFreeStringPool.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     RtlpMuiRegCreateStringPool @ 0x1800E6F68 (RtlpMuiRegCreateStringPool.c)
 */

__int64 __fastcall RtlpMuiRegResizeStringPool(unsigned __int64 a1, __int16 a2, __int16 a3, char a4)
{
  __int64 v5; // rdi
  __int16 v7; // r10
  __int16 v8; // ax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 StringPool; // rax

  v5 = 0LL;
  v7 = a3;
  v8 = a2;
  if ( a2 < 1 )
    v8 = 4;
  if ( a3 < 1 )
    v7 = 40;
  if ( a1 )
  {
    if ( v8 >= 1 && v8 >= (int)*(unsigned __int16 *)(a1 + 6) && v7 >= (int)*(unsigned __int16 *)(a1 + 10) )
    {
      v9 = 2LL * *(unsigned __int16 *)(a1 + 4);
      if ( v9 <= 0xFFFFFFFF )
      {
        v10 = 2LL * *(unsigned __int16 *)(a1 + 8);
        if ( v10 <= 0xFFFFFFFF )
        {
          StringPool = RtlpMuiRegCreateStringPool(v8, v7);
          v5 = StringPool;
          if ( StringPool )
          {
            memmove(*(void **)(StringPool + 16), *(const void **)(a1 + 16), (unsigned int)v9);
            memmove(*(void **)(v5 + 24), *(const void **)(a1 + 24), (unsigned int)v10);
            *(_WORD *)(v5 + 6) = *(_WORD *)(a1 + 6);
            *(_WORD *)(v5 + 10) = *(_WORD *)(a1 + 10);
            if ( !a4 )
              RtlpMuiRegFreeStringPool(a1);
          }
        }
      }
    }
  }
  return v5;
}
