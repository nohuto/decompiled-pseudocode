/*
 * XREFs of ?pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z @ 0x1C014BF64
 * Callers:
 *     vSrcOpaqCopyS4D32 @ 0x1C014BD90 (vSrcOpaqCopyS4D32.c)
 *     vSrcOpaqCopyS4D16 @ 0x1C0266380 (vSrcOpaqCopyS4D16.c)
 *     vSrcOpaqCopyS4D24 @ 0x1C0266560 (vSrcOpaqCopyS4D24.c)
 * Callees:
 *     <none>
 */

int *__fastcall pvFillOpaqTable(int a1, int a2, int a3, struct SURFACE *a4)
{
  __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r9d
  int v12; // edi
  int v13; // r10d
  int v14; // r11d
  int v15; // r14d
  int v16; // ebx
  int v17; // r15d
  int v18; // r8d
  int v19; // edx
  int v20; // eax
  int v21; // r12d
  unsigned __int64 v22; // rax
  int v23; // edx
  unsigned int v24; // esi
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int *v27; // rbp
  int *v28; // rdx
  _WORD *v29; // rbp
  int v30; // [rsp+0h] [rbp-58h]
  int v31; // [rsp+4h] [rbp-54h]
  int v32; // [rsp+8h] [rbp-50h]
  int v33; // [rsp+Ch] [rbp-4Ch]
  int v34; // [rsp+10h] [rbp-48h]
  int v36; // [rsp+78h] [rbp+20h]

  if ( *(_QWORD *)a4 != qword_1C03241F0 || a3 != dword_1C03241F8 || a2 != dword_1C03241FC )
  {
    qword_1C03241F0 = *(_QWORD *)a4;
    v8 = *((_QWORD *)a4 + 15);
    dword_1C0324200 = a1;
    dword_1C03241FC = a2;
    dword_1C03241F8 = a3;
    if ( !v8 )
      v8 = *(_QWORD *)(*((_QWORD *)a4 + 6) + 1832LL);
    v9 = *(_DWORD *)(v8 + 24);
    if ( (v9 & 2) != 0 )
    {
      v28 = *(int **)(v8 + 128);
      v16 = v28[9] + v28[6] - 8;
      v14 = v28[10] + v28[7] - 8;
      v12 = v28[11] + v28[8] - 8;
      v11 = *v28;
      v13 = v28[1];
      v15 = v28[2];
    }
    else
    {
      if ( a1 == 2 )
      {
        v10 = 5;
        v11 = 31;
      }
      else
      {
        v10 = 8;
        v11 = 255;
      }
      if ( (v9 & 4) != 0 )
      {
        v16 = v10 - 8;
        v13 = v11 << v10;
        v14 = v10 + v10 - 8;
        v12 = v10 + v14;
        v15 = v11 << v10 << v10;
      }
      else if ( (v9 & 8) != 0 )
      {
        v12 = v10 - 8;
        v13 = v11 << v10;
        v14 = v10 + v10 - 8;
        v15 = v11;
        v16 = v10 + v14;
        v11 = v11 << v10 << v10;
      }
      else
      {
        v11 = 0;
        v13 = 0;
        v15 = 0;
        v16 = 0;
        v14 = 0;
        v12 = 0;
      }
    }
    LOBYTE(v17) = 0;
    if ( v16 < 0 )
    {
      v17 = -v16;
      LOBYTE(v16) = 0;
    }
    LOBYTE(v18) = 0;
    v19 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v11) << v17) >> v16)];
    v34 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a2 & (unsigned int)v11) << v17) >> v16)] - v19;
    v31 = 16 * v19;
    if ( v14 < 0 )
    {
      v18 = -v14;
      LOBYTE(v14) = 0;
    }
    v21 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v13) << v18) >> v14)];
    v20 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a2 & (unsigned int)v13) << v18) >> v14)] - v21;
    v36 = 16 * v21;
    LOBYTE(v21) = 0;
    v32 = v20;
    if ( v12 < 0 )
    {
      v21 = -v12;
      LOBYTE(v12) = 0;
    }
    v30 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v15) << v21) >> v12)];
    v22 = (a2 & (unsigned int)v15) << v21;
    v23 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a2 & (unsigned int)v11) << v17) >> v16)] - v19;
    v24 = v34 + v31;
    v33 = RFONTOBJ::gTables[(unsigned __int8)(v22 >> v12)] - v30;
    v25 = v32 + v36;
    v26 = v33 + 16 * v30;
    if ( a1 == 2 )
    {
      LOWORD(dword_1C03289A0) = a3;
      v29 = (_WORD *)&dword_1C03289A0 + 1;
      do
      {
        v24 += v23;
        v26 += v33;
        *v29++ = v11 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v24 >> 4) + 256] << v16) >> v17) | v13 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)(unsigned int)(v32 + v25) >> 4) + 256] << v14) >> v18) | v15 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v26 >> 4) + 256] << v12) >> v21);
        v23 = v34;
        v25 += v32;
      }
      while ( v29 < word_1C03289BE );
      *v29 = a2;
    }
    else
    {
      dword_1C03289A0 = a3;
      v27 = (unsigned int *)&unk_1C03289A4;
      do
      {
        v24 += v23;
        v26 += v33;
        *v27++ = v11 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v24 >> 4) + 256] << v16) >> v17) | v13 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)(unsigned int)(v32 + v25) >> 4) + 256] << v14) >> v18) | v15 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v26 >> 4) + 256] << v12) >> v21);
        v23 = v34;
        v25 += v32;
      }
      while ( v27 < &dword_1C03289DC );
      *v27 = a2;
    }
  }
  return &dword_1C03289A0;
}
