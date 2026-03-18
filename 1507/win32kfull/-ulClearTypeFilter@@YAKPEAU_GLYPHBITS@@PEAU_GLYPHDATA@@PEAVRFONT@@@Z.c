/*
 * XREFs of ?ulClearTypeFilter@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C0032E98
 * Callers:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0032254 (-ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulClearTypeFilter(struct _GLYPHBITS *a1, struct _GLYPHDATA *a2, struct RFONT *a3)
{
  __int64 cx; // rsi
  _BYTE *v4; // r15
  LONG cy; // ebp
  char v8; // cl
  __int64 v9; // rdx
  BYTE *aj; // r8
  int v11; // r9d
  BYTE *v12; // rcx
  LONG v13; // edx
  unsigned int v14; // edi
  int v15; // r12d
  int v16; // r9d
  _BYTE *v17; // r11
  __int64 v18; // rax
  BYTE *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r13
  _BYTE *v22; // r10
  BYTE *v23; // rsi
  _BYTE *v24; // rbp
  unsigned __int8 v25; // cl
  unsigned __int8 v26; // r12
  unsigned __int8 v27; // r13
  int v28; // r15d
  int v29; // edx
  int v30; // eax
  __int64 v32; // [rsp+20h] [rbp-48h]
  int v33; // [rsp+28h] [rbp-40h]
  int v34; // [rsp+70h] [rbp+8h]
  _BYTE *v35; // [rsp+88h] [rbp+20h]

  cx = (unsigned int)a1->sizlBitmap.cx;
  v4 = &gajStorageTable;
  cy = a1->sizlBitmap.cy;
  v35 = &gajStorageTable;
  if ( __PAIR64__(cy, cx) != 0x100000001LL || a1->aj[0] )
  {
    if ( (*((_DWORD *)a3 + 49) & 1) == 0 || (v8 = 1, *((_DWORD *)a3 + 80)) )
      v8 = 0;
    v9 = *(_QWORD *)(*((_QWORD *)a3 + 14) + 32LL);
    if ( (*(_DWORD *)(v9 + 48) & 0x401000) != 0
      && v8
      && *(_WORD *)(v9 + 46) <= 0x190u
      && (!_wcsicmp((const wchar_t *)(v9 + *(int *)(v9 + 8)), L"Courier New")
       || !_wcsicmp(
             (const wchar_t *)(*(_QWORD *)(*((_QWORD *)a3 + 14) + 32LL)
                             + *(int *)(*(_QWORD *)(*((_QWORD *)a3 + 14) + 32LL) + 8LL)),
             L"Rod")
       || !_wcsicmp(
             (const wchar_t *)(*(_QWORD *)(*((_QWORD *)a3 + 14) + 32LL)
                             + *(int *)(*(_QWORD *)(*((_QWORD *)a3 + 14) + 32LL) + 8LL)),
             L"Rod Transparent")
       || !_wcsicmp(
             (const wchar_t *)(*(_QWORD *)(*((_QWORD *)a3 + 14) + 32LL)
                             + *(int *)(*(_QWORD *)(*((_QWORD *)a3 + 14) + 32LL) + 8LL)),
             L"Fixed Miriam Transparent")
       || !_wcsicmp(
             (const wchar_t *)(*(_QWORD *)(*((_QWORD *)a3 + 14) + 32LL)
                             + *(int *)(*(_QWORD *)(*((_QWORD *)a3 + 14) + 32LL) + 8LL)),
             L"Miriam Fixed")
       || !_wcsicmp(
             (const wchar_t *)(*(_QWORD *)(*((_QWORD *)a3 + 14) + 32LL)
                             + *(int *)(*(_QWORD *)(*((_QWORD *)a3 + 14) + 32LL) + 8LL)),
             L"Simplified Arabic Fixed")) )
    {
      v4 = &gajStorageTableBloated;
      v35 = &gajStorageTableBloated;
    }
    aj = a1->aj;
    v11 = 0;
    v12 = a1->aj;
    v13 = cy;
    if ( cy )
    {
      do
      {
        if ( (*v12 & 0x30) != 0 )
          v11 |= 1u;
        if ( (v12[(unsigned int)(cx - 1)] & 3) != 0 )
          v11 |= 2u;
        if ( (v11 & 3) == 3 )
          break;
        v12 += cx;
        --v13;
      }
      while ( v13 );
      aj = a1->aj;
    }
    v14 = cx;
    v15 = v11 & 1;
    v34 = v15;
    if ( (v11 & 1) != 0 )
      v14 = cx + 1;
    v16 = v11 & 2;
    if ( v16 )
      ++v14;
    v17 = (char *)&a1->sizlBitmap.cy + (unsigned int)(cx * cy) + 3;
    v18 = cy * v14;
    v19 = (BYTE *)&a1->sizlBitmap.cy + v18 + 3;
    v33 = cy * v14;
    if ( v19 > aj )
    {
      v20 = cx;
      v21 = v14;
      v32 = cx;
      v22 = &v17[-cx];
      do
      {
        v23 = v19;
        v24 = v17;
        if ( v16 )
        {
          v23 = v19 - 1;
          *v19 = v4[81 * (*v17 & 3)];
        }
        v25 = 0;
        if ( v17 > v22 )
        {
          v26 = *v17;
          do
          {
            if ( v24 == v22 + 1 )
              v27 = 0;
            else
              v27 = *(v24 - 1);
            v28 = (v25 >> 4) & 3;
            if ( (v27 & 3) != 0 || v26 || v28 )
            {
              v29 = (v26 & 3) + 3 * (((v26 >> 2) & 3) + 3 * (3 * (v27 & 3) + ((v26 >> 4) & 3)));
              v30 = v28 + 2 * v29;
              v4 = v35;
              *v23 = v35[v30 + v29];
            }
            else
            {
              *v23 = 0;
              v4 = v35;
            }
            --v24;
            --v23;
            v25 = v26;
            v26 = v27;
          }
          while ( v24 > v22 );
          v15 = v34;
          aj = a1->aj;
          v20 = v32;
          v21 = v14;
        }
        if ( v15 )
          *v23 = v4[((unsigned __int64)(unsigned __int8)v22[1] >> 4) & 3];
        v19 -= v21;
        v17 -= v20;
        v22 -= v20;
      }
      while ( v19 > aj );
      LODWORD(v18) = v33;
    }
    a1->sizlBitmap.cx = v14;
    if ( v15 )
      --a1->ptlOrigin.x;
    return (((_DWORD)v18 + 3) & 0xFFFFFFFC) + 16;
  }
  else
  {
    a1->sizlBitmap = 0LL;
    return 16LL;
  }
}
