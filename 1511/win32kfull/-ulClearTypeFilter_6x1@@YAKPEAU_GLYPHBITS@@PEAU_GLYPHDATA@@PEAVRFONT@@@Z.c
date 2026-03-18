/*
 * XREFs of ?ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C001A594
 * Callers:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C001AB14 (-ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C0264384 (-ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 * Callees:
 *     ?SelectStorageTable@RFONTOBJ@@SAPEBEPEAVRFONT@@PEBE1@Z @ 0x1C001A3C8 (-SelectStorageTable@RFONTOBJ@@SAPEBEPEAVRFONT@@PEBE1@Z.c)
 */

__int64 __fastcall ulClearTypeFilter_6x1(struct _GLYPHBITS *a1, struct _GLYPHDATA *a2, struct RFONT *a3)
{
  __int64 cx; // rdi
  LONG cy; // ebp
  BYTE *aj; // r15
  BYTE *v7; // rdx
  const unsigned __int8 *v8; // r13
  int v9; // r9d
  LONG i; // r8d
  unsigned int v11; // esi
  int v12; // r12d
  int v13; // r9d
  _BYTE *v14; // r11
  __int64 v15; // rax
  BYTE *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  _BYTE *v19; // r10
  BYTE *v20; // rdi
  _BYTE *v21; // rbp
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // r12
  unsigned __int8 v24; // r13
  int v25; // r15d
  int v26; // edx
  const unsigned __int8 *v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+28h] [rbp-50h]
  int v30; // [rsp+30h] [rbp-48h]
  int v31; // [rsp+80h] [rbp+8h]
  int v32; // [rsp+98h] [rbp+20h]

  cx = (unsigned int)a1->sizlBitmap.cx;
  cy = a1->sizlBitmap.cy;
  if ( __PAIR64__(cy, cx) != 0x100000001LL || a1->aj[0] )
  {
    v28 = RFONTOBJ::SelectStorageTable(a3, (const unsigned __int8 *)a2, (const unsigned __int8 *)a3);
    aj = a1->aj;
    v7 = a1->aj;
    v8 = v28;
    v9 = 0;
    for ( i = cy; i; --i )
    {
      if ( (*v7 & 0x30) != 0 )
        v9 |= 1u;
      if ( (v7[(unsigned int)(cx - 1)] & 3) != 0 )
        v9 |= 2u;
      if ( (v9 & 3) == 3 )
        break;
      v7 += cx;
    }
    v11 = cx;
    v12 = v9 & 1;
    v32 = v12;
    if ( (v9 & 1) != 0 )
      v11 = cx + 1;
    v13 = v9 & 2;
    v31 = v13;
    if ( v13 )
      ++v11;
    v14 = (char *)&a1->sizlBitmap.cy + (unsigned int)(cx * cy) + 3;
    v15 = cy * v11;
    v16 = (BYTE *)&a1->sizlBitmap.cy + v15 + 3;
    v30 = cy * v11;
    if ( v16 > aj )
    {
      v17 = cx;
      v18 = v11;
      v29 = cx;
      v19 = &v14[-cx];
      do
      {
        v20 = v16;
        v21 = v14;
        if ( v13 )
        {
          v20 = v16 - 1;
          *v16 = v8[81 * (*v14 & 3)];
        }
        v22 = 0;
        if ( v14 > v19 )
        {
          v23 = *v14;
          do
          {
            if ( v21 == v19 + 1 )
              v24 = 0;
            else
              v24 = *(v21 - 1);
            v25 = (v22 >> 4) & 3;
            if ( (v24 & 3) != 0 || v23 || v25 )
            {
              v26 = (v23 & 3) + 3 * (((v23 >> 2) & 3) + 3 * (3 * (v24 & 3) + ((v23 >> 4) & 3)));
              *v20 = v28[v25 + 2 * v26 + v26];
            }
            else
            {
              *v20 = 0;
            }
            --v21;
            --v20;
            v22 = v23;
            v23 = v24;
          }
          while ( v21 > v19 );
          v13 = v31;
          aj = a1->aj;
          v12 = v32;
          v17 = v29;
          v8 = v28;
          v18 = v11;
        }
        if ( v12 )
          *v20 = v8[((unsigned __int64)(unsigned __int8)v19[1] >> 4) & 3];
        v16 -= v18;
        v14 -= v17;
        v19 -= v17;
      }
      while ( v16 > aj );
      LODWORD(v15) = v30;
    }
    a1->sizlBitmap.cx = v11;
    if ( v12 )
      --a1->ptlOrigin.x;
    return (((_DWORD)v15 + 3) & 0xFFFFFFFC) + 16LL;
  }
  else
  {
    a1->sizlBitmap = 0LL;
    return 16LL;
  }
}
