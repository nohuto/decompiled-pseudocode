/*
 * XREFs of ?pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z @ 0x1C0116974
 * Callers:
 *     vSrcOpaqCopyS4D32 @ 0x1C01167A0 (vSrcOpaqCopyS4D32.c)
 *     vSrcOpaqCopyS4D16 @ 0x1C0262D30 (vSrcOpaqCopyS4D16.c)
 *     vSrcOpaqCopyS4D24 @ 0x1C0262F10 (vSrcOpaqCopyS4D24.c)
 * Callees:
 *     <none>
 */

int *__fastcall pvFillOpaqTable(int a1, int a2, int a3, struct SURFACE *a4)
{
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r9d
  int v11; // edi
  int v12; // r10d
  int v13; // r11d
  int v14; // r14d
  int v15; // ebx
  int v16; // r15d
  int v17; // r8d
  int v18; // r13d
  int v19; // eax
  int v20; // r13d
  int v21; // eax
  int v22; // r12d
  int v23; // edx
  unsigned int v24; // esi
  int v25; // ecx
  unsigned int v26; // r13d
  unsigned __int64 v27; // rax
  unsigned int *v28; // rbp
  int *v29; // rdx
  _WORD *v30; // rbp
  int v31; // [rsp+0h] [rbp-48h]
  int v32; // [rsp+4h] [rbp-44h]
  int v33; // [rsp+8h] [rbp-40h]
  int v34; // [rsp+Ch] [rbp-3Ch]
  int v37; // [rsp+68h] [rbp+20h]

  if ( *(_QWORD *)a4 != qword_1C0329448 || a3 != dword_1C0329450 || a2 != dword_1C0329454 )
  {
    qword_1C0329448 = *(_QWORD *)a4;
    v7 = *((_QWORD *)a4 + 15);
    dword_1C0329454 = a2;
    dword_1C0329450 = a3;
    if ( !v7 )
      v7 = *(_QWORD *)(*((_QWORD *)a4 + 6) + 1832LL);
    v8 = *(_DWORD *)(v7 + 24);
    if ( (v8 & 2) != 0 )
    {
      v29 = *(int **)(v7 + 120);
      v15 = v29[9] + v29[6] - 8;
      v13 = v29[10] + v29[7] - 8;
      v11 = v29[11] + v29[8] - 8;
      v10 = *v29;
      v12 = v29[1];
      v14 = v29[2];
    }
    else
    {
      if ( a1 == 2 )
      {
        v9 = 5;
        v10 = 31;
      }
      else
      {
        v9 = 8;
        v10 = 255;
      }
      if ( (v8 & 4) != 0 )
      {
        v15 = v9 - 8;
        v12 = v10 << v9;
        v13 = v9 + v9 - 8;
        v11 = v9 + v13;
        v14 = v10 << v9 << v9;
      }
      else if ( (v8 & 8) != 0 )
      {
        v11 = v9 - 8;
        v12 = v10 << v9;
        v13 = v9 + v9 - 8;
        v14 = v10;
        v15 = v9 + v13;
        v10 = v10 << v9 << v9;
      }
      else
      {
        v10 = 0;
        v12 = 0;
        v14 = 0;
        v15 = 0;
        v13 = 0;
        v11 = 0;
      }
    }
    LOBYTE(v16) = 0;
    if ( v15 < 0 )
    {
      v16 = -v15;
      LOBYTE(v15) = 0;
    }
    LOBYTE(v17) = 0;
    v18 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v10) << v16) >> v15)];
    v19 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a2 & (unsigned int)v10) << v16) >> v15)] - v18;
    v20 = 16 * v18;
    v33 = v19;
    if ( v13 < 0 )
    {
      v17 = -v13;
      LOBYTE(v13) = 0;
    }
    v22 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v12) << v17) >> v13)];
    v21 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a2 & (unsigned int)v12) << v17) >> v13)] - v22;
    v31 = 16 * v22;
    LOBYTE(v22) = 0;
    v34 = v21;
    if ( v11 < 0 )
    {
      v22 = -v11;
      LOBYTE(v11) = 0;
    }
    v37 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v14) << v22) >> v11)];
    v27 = (a2 & (unsigned int)v14) << v22;
    v23 = v34;
    v24 = v34 + v31;
    v32 = RFONTOBJ::gTables[(unsigned __int8)(v27 >> v11)] - v37;
    v25 = v33;
    v26 = v33 + v20;
    LODWORD(v27) = v32 + 16 * v37;
    if ( a1 == 2 )
    {
      LOWORD(dword_1C032DB60) = a3;
      v30 = (_WORD *)&dword_1C032DB60 + 1;
      do
      {
        v27 = (unsigned int)(v32 + v27);
        v26 += v25;
        v24 += v23;
        v25 = v33;
        *v30++ = v10 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v26 >> 4) + 256] << v15) >> v16) | v12 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v24 >> 4) + 256] << v13) >> v17) | v14 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)(v27 >> 4) + 256] << v11) >> v22);
        v23 = v34;
      }
      while ( v30 < word_1C032DB7E );
      *v30 = a2;
    }
    else
    {
      dword_1C032DB60 = a3;
      v28 = (unsigned int *)&unk_1C032DB64;
      do
      {
        v27 = (unsigned int)(v32 + v27);
        v26 += v25;
        v24 += v23;
        v25 = v33;
        *v28++ = v10 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v26 >> 4) + 256] << v15) >> v16) | v12 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v24 >> 4) + 256] << v13) >> v17) | v14 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)(v27 >> 4) + 256] << v11) >> v22);
        v23 = v34;
      }
      while ( v28 < &dword_1C032DB9C );
      *v28 = a2;
    }
  }
  return &dword_1C032DB60;
}
