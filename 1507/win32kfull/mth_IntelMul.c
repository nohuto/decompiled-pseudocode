/*
 * XREFs of mth_IntelMul @ 0x1C00B4E24
 * Callers:
 *     scl_InitializeScaling @ 0x1C00AB384 (scl_InitializeScaling.c)
 *     fsg_MergeGlyphData @ 0x1C00B991C (fsg_MergeGlyphData.c)
 *     scl_PostTransformGlyph @ 0x1C00FA5AC (scl_PostTransformGlyph.c)
 * Callees:
 *     FixMul @ 0x1C00B6E4C (FixMul.c)
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
 */

void __fastcall mth_IntelMul(int a1, char *a2, char *a3, int *a4, unsigned int a5, unsigned int a6)
{
  int *v6; // r10
  char *v7; // r14
  unsigned int v10; // r11d
  __int64 v11; // r10
  unsigned int v12; // r13d
  int v13; // eax
  __int64 v14; // r10
  unsigned int v15; // r11d
  unsigned int v16; // r15d
  unsigned int v17; // r12d
  int v18; // edi
  signed __int64 v19; // rsi
  unsigned int v20; // ebx
  __int64 v21; // r8
  int fixed; // eax
  int v23; // r10d
  unsigned int v24; // r11d
  __int64 v25; // r8
  __int64 v26; // r8
  int v27; // eax
  int v28; // r10d
  unsigned int v29; // [rsp+80h] [rbp+50h]

  v6 = a4;
  v7 = a3;
  if ( a5 && (v10 = a6) != 0 )
  {
    if ( a5 == 0x10000 )
    {
      v12 = *a4;
      v13 = a4[1];
    }
    else
    {
      v12 = CompDiv(a5, (__int64)*a4 << 16);
      v13 = CompDiv(a5, (__int64)*(int *)(v11 + 4) << 16);
    }
    v29 = v13;
    if ( v10 == 0x10000 )
    {
      v16 = v6[3];
      v17 = v6[4];
    }
    else
    {
      v16 = CompDiv(v10, __PAIR64__(v6[3] >> 16, v6[3] << 16));
      v17 = CompDiv(v15, (__int64)*(int *)(v14 + 16) << 16);
    }
    v18 = a1 - 1;
    if ( v18 >= 0 )
    {
      v19 = a2 - v7;
      do
      {
        v20 = *(_DWORD *)&v7[v19];
        FixMul(v16, *(unsigned int *)v7, a3);
        fixed = FixMul(v12, v20, v21);
        *(_DWORD *)&v7[v19] = fixed + v23;
        FixMul(v17, v24, v25);
        v27 = FixMul(v29, v20, v26);
        --v18;
        *(_DWORD *)v7 = v27 + v28;
        v7 += 4;
      }
      while ( v18 >= 0 );
    }
  }
  else
  {
    while ( --a1 >= 0 )
    {
      *(_DWORD *)v7 = 0;
      v7 += 4;
      *(_DWORD *)a2 = 0;
      a2 += 4;
    }
  }
}
