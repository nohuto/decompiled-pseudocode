/*
 * XREFs of ?vSrcAlphaCopyS4D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1401EA2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcAlphaCopyS4D32(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v8; // r10
  int v9; // ebx
  const unsigned __int8 *v10; // rsi
  __int64 v11; // rdi
  const unsigned __int8 *v12; // r8
  unsigned __int8 *v13; // r9
  _DWORD *v14; // rdx
  __int64 v15; // r11
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax

  v8 = &a4[4 * a5];
  v9 = a8;
  v10 = &a1[a2 / 2];
  if ( a8 )
  {
    v11 = a3;
    do
    {
      v12 = v10;
      v13 = v8;
      if ( ((a5 + 1) & 0xFFFFFFFE) != a5 )
      {
        if ( (*v10 & 0xF) != 0 )
          *(_DWORD *)v8 = dword_140363DA0[*v10 & 0xF];
        v12 = v10 + 1;
        v13 = v8 + 4;
      }
      if ( (int)((a6 & 0xFFFFFFFE) - ((a5 + 1) & 0xFFFFFFFE)) / 2 > 0 )
      {
        v14 = v13 + 4;
        v15 = (unsigned int)((int)((a6 & 0xFFFFFFFE) - ((a5 + 1) & 0xFFFFFFFE)) / 2);
        do
        {
          v16 = *v12;
          if ( (v16 & 0xF0) != 0 )
            *(v14 - 1) = dword_140363DA0[v16 >> 4];
          v13 = (unsigned __int8 *)(v14 + 1);
          if ( (v16 & 0xF) != 0 )
            *v14 = dword_140363DA0[v16 & 0xF];
          ++v12;
          v14 += 2;
          --v15;
        }
        while ( v15 );
      }
      if ( a6 != (a6 & 0xFFFFFFFE) )
      {
        v17 = *v12;
        if ( (v17 & 0xF0) != 0 )
          *(_DWORD *)v13 = dword_140363DA0[v17 >> 4];
      }
      v10 += v11;
      v8 += a7;
      --v9;
    }
    while ( v9 );
  }
}
