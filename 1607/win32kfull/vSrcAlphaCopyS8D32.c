/*
 * XREFs of vSrcAlphaCopyS8D32 @ 0x1C00F87B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vSrcAlphaCopyS8D32(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  int v8; // ebx
  unsigned int v9; // ecx
  _BYTE *v10; // r10
  unsigned __int64 result; // rax
  int *v12; // r11
  __int64 v13; // r15
  _BYTE *v14; // rdi
  int *v15; // rsi
  unsigned __int64 v16; // r9
  __int64 v17; // rax

  v8 = a8;
  v10 = (_BYTE *)(a2 + a1);
  result = a5;
  v12 = (int *)(a4 + 4LL * a5);
  if ( a8 )
  {
    v13 = a7;
    v9 = a6 - a5;
    do
    {
      result = (unsigned __int64)&v12[v9];
      v14 = v10;
      v15 = v12;
      v16 = (4 * (unsigned __int64)v9 + 3) >> 2;
      if ( (unsigned __int64)v12 > result )
        v16 = 0LL;
      if ( v16 )
      {
        do
        {
          v17 = (unsigned __int8)*v14;
          if ( *v14 )
          {
            if ( (unsigned int)v17 >= 0x72 )
            {
              *v15 = 0xFFFFFF;
            }
            else
            {
              _mm_lfence();
              *v15 = alAlpha_255[BYTE2(off_1C0320110[v17])] | ((alAlpha_255[BYTE1(off_1C0320110[v17])] | (alAlpha_255[LOBYTE(off_1C0320110[v17])] << 8)) << 8);
            }
          }
          ++v14;
          ++v15;
          result = v14 - v10;
        }
        while ( v14 - v10 < v16 );
        v13 = a7;
      }
      v10 += a3;
      v12 = (int *)((char *)v12 + v13);
      --v8;
    }
    while ( v8 );
  }
  return result;
}
