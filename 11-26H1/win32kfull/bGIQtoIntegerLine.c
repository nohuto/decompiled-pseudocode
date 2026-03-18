/*
 * XREFs of bGIQtoIntegerLine @ 0x140187E1C
 * Callers:
 *     vDrawLine @ 0x140187A94 (vDrawLine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bGIQtoIntegerLine(int *a1, int *a2, __int64 a3, _DWORD *a4)
{
  int v4; // eax
  unsigned int v5; // r11d
  int v6; // r10d
  int v7; // edi
  _DWORD *v8; // r12
  __int64 v9; // rbx
  int v11; // esi
  int v12; // esi
  int v13; // r8d
  int v14; // r9d
  int v15; // r9d
  int v16; // r10d
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  unsigned int v20; // r10d
  int v21; // eax
  int v22; // r8d
  unsigned int v23; // ecx
  int v24; // ecx
  int v25; // eax
  signed __int64 v26; // rbp
  __int64 v27; // rbp
  int v28; // r13d
  unsigned __int64 v29; // r14
  int v30; // edx
  int v31; // edi
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  int v34; // r13d
  int v35; // ecx
  int v36; // r10d
  int v37; // r12d
  int v38; // ecx
  int v39; // r10d
  int v40; // r12d
  int v41; // r13d
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // r12d
  __int64 v46; // rax
  int v47; // edx
  int v48; // edx
  int v49; // r8d
  int v50; // ecx
  int v51; // eax
  int v53; // ecx
  int v54; // ecx
  signed __int64 v55; // rax
  __int64 v56; // rax
  int v57; // [rsp+0h] [rbp-48h]
  int v58; // [rsp+58h] [rbp+10h]

  v4 = *a1;
  v5 = 0;
  v6 = *a2;
  v7 = -*a1;
  v8 = a4;
  v9 = 4LL;
  if ( *a2 >= *a1 )
    v7 = *a1;
  if ( v6 >= v4 )
    v9 = 0LL;
  v11 = -*a2;
  if ( v6 >= v4 )
    v11 = *a2;
  v12 = v11 - v7;
  if ( v12 >= 0 )
  {
    v13 = a1[1];
    v14 = a2[1];
    if ( v14 < v13 )
    {
      v13 = -v13;
      v14 = -v14;
      v9 = (unsigned int)v9 | 2;
    }
    v15 = v14 - v13;
    if ( v15 >= 0 )
    {
      v16 = v7;
      if ( v15 >= (unsigned int)v12 )
      {
        if ( v15 == v12 )
        {
          v9 = (unsigned int)v9 | 8;
        }
        else
        {
          v17 = v12;
          v16 = v13;
          v12 = v15;
          v13 = v7;
          v15 = v17;
          v9 = (unsigned int)v9 | 1;
        }
      }
      v18 = v16;
      v19 = dword_140362450[v9] | v9;
      v20 = v16 & 0xF;
      v58 = v18 >> 4;
      v21 = v13;
      v22 = v13 & 0xF;
      v57 = v21 >> 4;
      v23 = v22 + 8;
      if ( (unsigned int)v12 > 0x1FFFFFF )
      {
        v26 = v12 * (unsigned __int64)v23 - v15 * (unsigned __int64)v20 - 1;
        if ( (v19 & 0x8000) == 0 )
          v26 = v12 * (unsigned __int64)v23 - v15 * (unsigned __int64)v20;
      }
      else
      {
        v24 = v12 * v23 - v15 * v20;
        v25 = v24 - 1;
        if ( (v19 & 0x200) == 0 )
          v25 = v24;
        v26 = v25;
      }
      v27 = v26 >> 4;
      v28 = ((_BYTE)v15 + (_BYTE)v22) & 0xF;
      LODWORD(v29) = ((v20 + v12) >> 4) - 1;
      v30 = ((_BYTE)v20 + (_BYTE)v12) & 0xF;
      if ( (((_BYTE)v20 + (_BYTE)v12) & 0xF) != 0 )
      {
        if ( (((_BYTE)v15 + (_BYTE)v22) & 0xF) != 0 )
        {
          v53 = 8 - v28;
          if ( 8 - v28 < 0 )
            v53 = v28 - 8;
          if ( v53 <= v30 )
            LODWORD(v29) = (v20 + v12) >> 4;
        }
        else if ( v30 - (unsigned int)((v19 & 0x100) != 0) + 8 >= 0x10 )
        {
          LODWORD(v29) = (v20 + v12) >> 4;
        }
      }
      if ( (v19 & 0x108) != 0x108 )
        goto LABEL_20;
      if ( (((_BYTE)v20 + (_BYTE)v12) & 0xF) != 0 && v28 == v30 + 8 )
        LODWORD(v29) = v29 - 1;
      if ( v20 && v22 == v20 + 8 )
      {
        v31 = 0;
      }
      else
      {
LABEL_20:
        v31 = 0;
        if ( v20 )
        {
          if ( v22 )
          {
            v54 = 8 - v22;
            if ( 8 - v22 < 0 )
              v54 = v22 - 8;
            if ( v54 <= (int)v20 )
              v31 = 1;
          }
          else
          {
            LOBYTE(v31) = v20 - ((v19 & 0x100) != 0) + 8 >= 0x10;
          }
        }
      }
      LODWORD(v32) = 0;
      if ( v27 >= 0 )
        LODWORD(v32) = v27 >= v12 - (v15 & (unsigned int)-v31);
      if ( (int)v29 < v31 )
      {
        v8[3] = 0;
        return 1;
      }
      if ( !a3 )
      {
        v27 += (v15 & (unsigned int)-v31) - (unsigned __int64)(unsigned int)v12;
        if ( v27 >= 0 )
          LODWORD(v27) = v27 - v12;
LABEL_43:
        v48 = v32 + v57;
        *v8 = v19;
        v8[4] = v12;
        v49 = v31 + v58;
        v8[5] = v15;
        if ( (v19 & 1) == 0 )
          v49 = v48;
        v8[6] = v27;
        if ( (v19 & 1) == 0 )
          v48 = v31 + v58;
        v8[7] = 1;
        v50 = -v48;
        v5 = 1;
        if ( (v19 & 4) == 0 )
          v50 = v48;
        v51 = -v49;
        v8[1] = v50;
        if ( (v19 & 2) == 0 )
          v51 = v49;
        v8[2] = v51;
        v8[3] = v29 - v31 + 1;
        return v5;
      }
      v33 = 16LL * (v19 & 3);
      if ( (v19 & 4) != 0 )
      {
        if ( (v19 & 1) == 0 )
        {
          v34 = *(_DWORD *)(v33 + a3 + 4);
          v37 = 1 - *(_DWORD *)(v33 + a3 + 8);
          v36 = 1 - *(_DWORD *)(v33 + a3);
          v35 = *(_DWORD *)(v33 + a3 + 12);
          goto LABEL_28;
        }
        v34 = 1 - *(_DWORD *)(v33 + a3 + 12);
        v35 = 1 - *(_DWORD *)(v33 + a3 + 4);
      }
      else
      {
        v34 = *(_DWORD *)(v33 + a3 + 4);
        v35 = *(_DWORD *)(v33 + a3 + 12);
      }
      v36 = *(_DWORD *)(v33 + a3 + 8);
      v37 = *(_DWORD *)(v33 + a3);
LABEL_28:
      v38 = v35 - v57;
      v39 = v36 - v58;
      v40 = v37 - v58;
      v41 = v34 - v57;
      if ( v38 <= (int)v32 || v39 <= v31 || v40 > (int)v29 )
        goto LABEL_84;
      if ( (int)v29 >= v39 )
        LODWORD(v29) = v39 - 1;
      v42 = ~v27;
      v43 = v27 + v15 * (__int64)(int)v29;
      if ( v43 >= 0xFFFFFFFFLL )
        v43 /= (unsigned __int64)(unsigned int)v12;
      else
        LODWORD(v43) = (unsigned int)v43 / v12;
      if ( v41 > (int)v43 )
        goto LABEL_84;
      if ( v38 <= (int)v43 )
      {
        v56 = v42 + v38 * (__int64)v12;
        if ( v56 >= 0xFFFFFFFFLL )
          v29 = v56 / (unsigned __int64)(unsigned int)v15;
        else
          LODWORD(v29) = (unsigned int)v56 / v15;
      }
      if ( v40 <= v31 )
      {
        v45 = v15;
      }
      else
      {
        v44 = v40;
        v31 = v40;
        v45 = v15;
        v46 = v27 + v15 * v44;
        if ( v46 >= 0xFFFFFFFFLL )
          v32 = v46 / (unsigned __int64)(unsigned int)v12;
        else
          LODWORD(v32) = (unsigned int)v46 / v12;
        if ( v38 <= (int)v32 )
          goto LABEL_84;
      }
      if ( v41 > (int)v32 )
      {
        LODWORD(v32) = v41;
        v55 = v42 + v41 * (__int64)v12;
        if ( v55 >= 0xFFFFFFFFLL )
          v55 = (v42 + v41 * (__int64)v12) / (unsigned __int64)(unsigned int)v15;
        else
          LODWORD(v55) = (unsigned int)v55 / v15;
        v31 = v55 + 1;
        if ( v39 <= (int)v55 + 1 )
        {
LABEL_84:
          a4[3] = 0;
          return 1;
        }
      }
      v47 = v45 * v31;
      v8 = a4;
      LODWORD(v27) = v47 - v12 * v32 - v12 + v27;
      goto LABEL_43;
    }
  }
  return v5;
}
