/*
 * XREFs of ?vSrcAlphaCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140175640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcAlphaCopyS8D32(
        const unsigned __int8 *a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // r12d
  __int64 v9; // r11
  const unsigned __int8 *v10; // r15
  unsigned __int8 *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r13
  unsigned __int8 *v15; // rbp
  const unsigned __int8 *v16; // rdi
  unsigned __int8 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // [rsp+50h] [rbp+8h]

  v8 = a8;
  v9 = (unsigned int)(a6 - a5);
  v10 = &a1[(int)a2];
  v11 = &a4[4 * a5];
  if ( a8 )
  {
    v12 = a7;
    v13 = 4 * v9;
    v14 = (int)a3;
    v20 = 4 * v9;
    do
    {
      v15 = &v11[v13];
      v16 = v10;
      v17 = v11;
      if ( v11 < &v11[v13] )
      {
        do
        {
          v18 = *v16;
          if ( (_BYTE)v18 )
          {
            if ( (unsigned __int8)v18 >= 0x72u )
            {
              *(_DWORD *)v17 = 0xFFFFFF;
            }
            else
            {
              _mm_lfence();
              v19 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v13, a2, a3) + 96) + 13456LL);
              v13 = *(unsigned __int8 *)(v19 + 4 * v18 + 1);
              a3 = (unsigned __int8 *)(v19 + 4 * v18);
              a2 = dword_140361ED8[a3[2]] | (unsigned int)((dword_140361ED8[v13] | (dword_140361ED8[*a3] << 8)) << 8);
              *(_DWORD *)v17 = a2;
            }
          }
          ++v16;
          v17 += 4;
        }
        while ( v17 < v15 );
        v12 = a7;
        v13 = v20;
      }
      v10 += v14;
      v11 += v12;
      --v8;
    }
    while ( v8 );
  }
}
