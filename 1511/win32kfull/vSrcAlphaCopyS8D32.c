/*
 * XREFs of vSrcAlphaCopyS8D32 @ 0x1C00D9430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcAlphaCopyS8D32(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  _BYTE *v9; // rdi
  int *v10; // rbx
  __int64 v11; // r15
  _BYTE *v12; // rax
  int *v13; // r9
  unsigned __int64 v14; // r10
  __int64 v15; // rcx

  v8 = a8;
  v9 = (_BYTE *)(a1 + a2);
  v10 = (int *)(a4 + 4LL * a5);
  if ( a8 )
  {
    v11 = (unsigned int)(a6 - a5);
    do
    {
      v12 = v9;
      v13 = v10;
      v14 = (unsigned __int64)(v11 * 4 + 3) >> 2;
      if ( v10 > &v10[v11] )
        v14 = 0LL;
      if ( v14 )
      {
        do
        {
          v15 = (unsigned __int8)*v12;
          if ( *v12 )
          {
            if ( (unsigned int)v15 >= 0x72 )
            {
              *v13 = 0xFFFFFF;
            }
            else
            {
              _mm_lfence();
              *v13 = alAlpha_255[*((unsigned __int8 *)off_1C031B228 + 4 * v15 + 2)] | ((alAlpha_255[*((unsigned __int8 *)off_1C031B228 + 4 * v15 + 1)] | (alAlpha_255[*((unsigned __int8 *)off_1C031B228 + 4 * v15)] << 8)) << 8);
            }
          }
          ++v12;
          ++v13;
        }
        while ( v12 - v9 < v14 );
      }
      v9 += a3;
      v10 = (int *)((char *)v10 + a7);
      --v8;
    }
    while ( v8 );
  }
}
