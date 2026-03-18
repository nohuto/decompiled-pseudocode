/*
 * XREFs of mth_IntelMul @ 0x1C00ADF24
 * Callers:
 *     scl_InitializeScaling @ 0x1C00A2E10 (scl_InitializeScaling.c)
 *     fsg_MergeGlyphData @ 0x1C00AD7C8 (fsg_MergeGlyphData.c)
 *     scl_PostTransformGlyph @ 0x1C0104204 (scl_PostTransformGlyph.c)
 * Callees:
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 */

void __fastcall mth_IntelMul(int a1, char *a2, char *a3, int *a4, unsigned int a5, unsigned int a6)
{
  int *v6; // r10
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
  int fixed; // eax
  int v22; // r10d
  unsigned int v23; // r11d
  int v24; // eax
  int v25; // r10d
  unsigned int v26; // [rsp+80h] [rbp+50h]

  v6 = a4;
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
    v26 = v13;
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
      v19 = a2 - a3;
      do
      {
        v20 = *(_DWORD *)&a3[v19];
        FixMul(v16, *(unsigned int *)a3);
        fixed = FixMul(v12, v20);
        *(_DWORD *)&a3[v19] = fixed + v22;
        FixMul(v17, v23);
        v24 = FixMul(v26, v20);
        --v18;
        *(_DWORD *)a3 = v24 + v25;
        a3 += 4;
      }
      while ( v18 >= 0 );
    }
  }
  else
  {
    while ( --a1 >= 0 )
    {
      *(_DWORD *)a3 = 0;
      a3 += 4;
      *(_DWORD *)a2 = 0;
      a2 += 4;
    }
  }
}
