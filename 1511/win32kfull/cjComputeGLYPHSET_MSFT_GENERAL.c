/*
 * XREFs of cjComputeGLYPHSET_MSFT_GENERAL @ 0x1C02459B8
 * Callers:
 *     bLoadGlyphSet @ 0x1C00A3E84 (bLoadGlyphSet.c)
 * Callees:
 *     CreateGlyphSetFromMITable @ 0x1C0244E64 (CreateGlyphSetFromMITable.c)
 */

__int64 __fastcall cjComputeGLYPHSET_MSFT_GENERAL(__int64 a1, unsigned int a2, ULONG **a3, __int64 a4)
{
  _WORD *v4; // rdi
  unsigned __int16 v5; // si
  __int64 v7; // r11
  char *v8; // r14
  int v9; // edx
  unsigned __int16 v10; // r9
  int v11; // r13d
  char *v12; // r8
  char *v13; // r12
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx
  _DWORD *v16; // rdi
  unsigned __int16 v17; // bp
  signed __int64 v18; // r12
  unsigned __int16 v19; // r8
  unsigned __int16 v20; // r11
  unsigned __int16 v21; // r10
  __int16 v22; // ax
  int v23; // eax
  unsigned int GlyphSetFromMITable; // ebx
  char *v26; // [rsp+20h] [rbp-58h]
  char *v27; // [rsp+28h] [rbp-50h]
  int v28; // [rsp+80h] [rbp+8h]

  v4 = (_WORD *)(a1 + 14);
  v5 = 0;
  v7 = __ROR2__(*(_WORD *)(a1 + 6), 8) >> 1;
  v8 = (char *)(a1 + 14);
  v9 = 0;
  v10 = 0;
  v11 = v7 - 1;
  v28 = v7 - 1;
  v12 = (char *)(a1 + 14 + 2LL * ((int)v7 + 1));
  v13 = v12;
  v27 = &v12[2 * v7];
  v26 = &v12[4 * (_DWORD)v7];
  if ( (int)v7 - 1 <= 0 )
    goto LABEL_25;
  do
  {
    v14 = __ROR2__(*(_WORD *)v12, 8);
    v15 = __ROR2__(*v4, 8);
    if ( v15 >= v14 && v14 != 0xFFFF )
      v9 += v15 - v14 + 1;
    ++v10;
    ++v4;
    v12 += 2;
  }
  while ( v10 < v11 );
  if ( (unsigned int)(v9 - 1) <= 0xFFFE && (v16 = EngAllocMem(0, 8 * v9, 0x64667454u)) != 0LL )
  {
    v17 = 0;
    v18 = v13 - v8;
    do
    {
      v19 = __ROR2__(*(_WORD *)&v8[v18], 8);
      v20 = __ROR2__(*(_WORD *)v8, 8);
      if ( v20 >= v19 && v19 != 0xFFFF && v19 <= v20 )
      {
        v21 = v19;
        do
        {
          v16[2 * v17] = 0;
          if ( v19 <= 0xFFu )
            LOWORD(v16[2 * v17]) = v21;
          else
            LOWORD(v16[2 * v17]) = __ROL2__(v21, 8);
          v22 = *(_WORD *)&v26[2 * v5];
          if ( v22 )
            v23 = (unsigned __int16)(__ROR2__(*(_WORD *)&v27[2 * v5], 8)
                                   + __ROR2__(
                                       *(_WORD *)&v26[2 * v5
                                                    + 2
                                                    * (((unsigned __int64)(unsigned __int16)__ROR2__(v22, 8) >> 1) - v19)
                                                    + 2 * v21],
                                       8));
          else
            v23 = (unsigned __int16)(v21 + __ROR2__(*(_WORD *)&v27[2 * v5], 8));
          v16[2 * v17 + 1] = v23;
          if ( v16[2 * v17 + 1] >= a2 )
            v16[2 * v17 + 1] = 0;
          ++v17;
          ++v21;
        }
        while ( v21 <= v20 );
        v11 = v28;
      }
      ++v5;
      v8 += 2;
    }
    while ( v5 < v11 );
    GlyphSetFromMITable = CreateGlyphSetFromMITable(a4, (__int64)v16, v17, a3);
    EngFreeMem(v16);
    return GlyphSetFromMITable;
  }
  else
  {
LABEL_25:
    if ( a3 )
      *a3 = 0LL;
    return 0LL;
  }
}
