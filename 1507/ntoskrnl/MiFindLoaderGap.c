/*
 * XREFs of MiFindLoaderGap @ 0x1407DC100
 * Callers:
 *     sub_1407DBFEC @ 0x1407DBFEC (sub_1407DBFEC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindLoaderGap(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r10
  __int64 *v3; // r14
  __int64 *v4; // r9
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // r11

  v2 = *a2;
  v3 = (__int64 *)(a1 + 32);
  v4 = *(__int64 **)(a1 + 32);
  *a2 = 0LL;
  v6 = 1LL;
  v7 = -1LL;
  v8 = -1LL;
  if ( v4 == (__int64 *)(a1 + 32) )
    return -1LL;
  do
  {
    v9 = *((int *)v4 + 4);
    if ( (unsigned int)v9 > 0x20 || (v10 = 0x1C0C00048LL, !_bittest64(&v10, v9)) )
    {
      v11 = v4[3];
      v12 = v8 + 1;
      if ( v11 > v8 + 1 )
      {
        v13 = v11 - v12;
        if ( v8 == -1 )
        {
          --v13;
          v12 = 1LL;
        }
        if ( v2 && v13 >= v2 )
        {
          if ( (((48 * (v11 - v2) - 0x58000000000LL) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL == (((48 * v11
                                                                                                - 0x58000000000LL) >> 18) & 0x3FFFFFF8)
                                                                                             - 0x904C0000000LL )
          {
            *a2 = v2;
            return v11 - v2;
          }
          if ( v8 != -1
            && (((48 * (v12 + v2) - 0x58000000001LL) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL == (((unsigned __int64)(48 * v12 - 0x58000000001LL) >> 18) & 0x3FFFFFF8)
                                                                                             - 0x904C0000000LL )
          {
            *a2 = v2;
            return v12;
          }
        }
        if ( v13 > v6 )
        {
          v7 = v12;
          v6 = v13;
        }
      }
      v8 = v4[4] + v11 - 1;
    }
    v4 = (__int64 *)*v4;
  }
  while ( v4 != v3 );
  if ( v6 == 1 )
    return -1LL;
  *a2 = v6;
  return v7;
}
