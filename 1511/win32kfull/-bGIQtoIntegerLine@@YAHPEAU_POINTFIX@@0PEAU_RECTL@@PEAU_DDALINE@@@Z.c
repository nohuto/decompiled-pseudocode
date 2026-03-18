/*
 * XREFs of ?bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z @ 0x1C013D554
 * Callers:
 *     ?vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C013D220 (-vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bGIQtoIntegerLine(
        struct _POINTFIX *a1,
        struct _POINTFIX *a2,
        struct _RECTL *a3,
        struct _DDALINE *a4)
{
  FIX x; // r10d
  unsigned int v5; // r11d
  FIX v6; // ebx
  unsigned int v8; // edi
  unsigned int v9; // ebx
  FIX y; // edx
  FIX v11; // r8d
  int v12; // r8d
  int v13; // r15d
  int v14; // r12d
  int v15; // r10d
  int v16; // edi
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rbp
  int v22; // r13d
  int v23; // r9d
  int v24; // r9d
  unsigned __int64 v25; // r14
  struct _RECTL *v26; // rax
  int top; // r12d
  int bottom; // r13d
  int right; // r15d
  int left; // r10d
  int v31; // r15d
  int v32; // r10d
  int v33; // r13d
  int v34; // r12d
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // r10d
  __int64 v39; // rax
  int v40; // r15d
  int v41; // r12d
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  unsigned int v45; // eax
  FIX v46; // eax
  int v47; // eax
  int v48; // r14d
  int v49; // eax
  __int64 v50; // [rsp+0h] [rbp-58h]
  int v51; // [rsp+60h] [rbp+8h]
  int v52; // [rsp+68h] [rbp+10h]

  x = a1->x;
  v5 = 0;
  v6 = a2->x;
  v8 = 0;
  if ( a2->x < a1->x )
  {
    x = -x;
    v8 = 4;
    v6 = -v6;
  }
  v9 = v6 - x;
  if ( (v9 & 0x80000000) == 0 )
  {
    y = a1->y;
    v11 = a2->y;
    if ( v11 < y )
    {
      y = -y;
      v11 = -v11;
      v8 |= 2u;
    }
    v12 = v11 - y;
    if ( v12 >= 0 )
    {
      if ( v12 >= v9 )
      {
        if ( v12 == v9 )
        {
          v8 |= 8u;
        }
        else
        {
          v45 = v9;
          v8 |= 1u;
          v9 = v12;
          v12 = v45;
          v46 = x;
          x = y;
          y = v46;
        }
      }
      v13 = x >> 4;
      v14 = y >> 4;
      v15 = x & 0xF;
      v51 = v13;
      v16 = gaflHardwareRound[v8] | v8;
      v17 = y & 0xF;
      v52 = v14;
      if ( v9 > 0x1FFFFFF )
      {
        v19 = (int)v9 * (__int64)(v17 + 8) - v15 * (__int64)v12;
        if ( (v16 & 0x8000) != 0 )
          --v19;
      }
      else
      {
        v18 = v9 * (v17 + 8) - v15 * v12;
        if ( (v16 & 0x200) != 0 )
          --v18;
        v19 = v18;
      }
      v20 = v19 >> 4;
      LODWORD(v21) = ((v9 + v15) >> 4) - 1;
      v22 = ((_BYTE)v12 + (_BYTE)v17) & 0xF;
      v23 = ((_BYTE)v9 + (_BYTE)v15) & 0xF;
      if ( (((_BYTE)v9 + (_BYTE)v15) & 0xF) != 0 )
      {
        if ( (((_BYTE)v12 + (_BYTE)v17) & 0xF) != 0 )
        {
          v47 = v22 - 8;
          if ( v22 - 8 < 0 )
            v47 = 8 - v22;
          if ( v47 <= v23 )
            LODWORD(v21) = (v9 + v15) >> 4;
        }
        else if ( ((v23 - ((v16 & 0x100) != 0) + 8) & 0xFFFFFFF0) != 0 )
        {
          LODWORD(v21) = (v9 + v15) >> 4;
        }
      }
      if ( (v16 & 0x108) != 0x108 )
        goto LABEL_14;
      if ( (((_BYTE)v9 + (_BYTE)v15) & 0xF) != 0 && v22 == v23 + 8 )
        LODWORD(v21) = v21 - 1;
      if ( v15 && v17 == v15 + 8 )
      {
        v24 = 0;
      }
      else
      {
LABEL_14:
        v24 = 0;
        if ( v15 )
        {
          if ( v17 )
          {
            if ( v17 - 8 >= 0 )
              v48 = v17 - 8;
            else
              v48 = 8 - v17;
            if ( v48 <= v15 )
              v24 = 1;
          }
          else
          {
            v24 = ((v15 - ((v16 & 0x100) != 0) + 8) & 0xFFFFFFF0) != 0;
          }
        }
      }
      LODWORD(v25) = 0;
      if ( v20 >= 0 )
        LODWORD(v25) = v20 >= v9 - (v12 & -v24);
      if ( (int)v21 < v24 )
      {
        *((_DWORD *)a4 + 3) = 0;
        return 1;
      }
      if ( !a3 )
      {
        v20 += (v12 & (unsigned int)-v24) - (unsigned __int64)v9;
        if ( v20 >= 0 )
          LODWORD(v20) = v20 - v9;
LABEL_37:
        v40 = v24 + v13;
        v41 = v25 + v14;
        if ( (v16 & 1) != 0 )
        {
          v49 = v40;
          v40 = v41;
          v41 = v49;
        }
        if ( (v16 & 2) != 0 )
          v41 = -v41;
        if ( (v16 & 4) != 0 )
          v40 = -v40;
        v5 = 1;
        *(_DWORD *)a4 = v16;
        *((_DWORD *)a4 + 1) = v40;
        *((_DWORD *)a4 + 2) = v41;
        *((_DWORD *)a4 + 3) = v21 - v24 + 1;
        *((_DWORD *)a4 + 4) = v9;
        *((_DWORD *)a4 + 5) = v12;
        *((_DWORD *)a4 + 6) = v20;
        *((_DWORD *)a4 + 7) = 1;
        return v5;
      }
      v26 = &a3[v16 & 3];
      if ( (v16 & 4) != 0 )
      {
        if ( (v16 & 1) == 0 )
        {
          top = v26->top;
          left = 1 - v26->right;
          right = 1 - v26->left;
          bottom = v26->bottom;
          goto LABEL_22;
        }
        top = 1 - v26->bottom;
        bottom = 1 - v26->top;
      }
      else
      {
        top = v26->top;
        bottom = v26->bottom;
      }
      right = v26->right;
      left = v26->left;
LABEL_22:
      v31 = right - v51;
      v32 = left - v51;
      v33 = bottom - v52;
      v34 = top - v52;
      if ( v33 <= (int)v25 || v31 <= v24 || v32 > (int)v21 )
        goto LABEL_54;
      if ( (int)v21 >= v31 )
        LODWORD(v21) = v31 - 1;
      v35 = ~v20;
      v50 = ~v20;
      v36 = v20 + v12 * (__int64)(int)v21;
      if ( v36 >= 0xFFFFFFFFLL )
      {
        v36 /= (unsigned __int64)v9;
        v35 = ~v20;
      }
      else
      {
        LODWORD(v36) = (unsigned int)v36 / v9;
      }
      if ( v34 > (int)v36 )
        goto LABEL_54;
      if ( v33 <= (int)v36 )
      {
        v21 = v35 + (int)v9 * (__int64)v33;
        if ( v21 >= 0xFFFFFFFFLL )
          v21 /= (unsigned __int64)(unsigned int)v12;
        else
          LODWORD(v21) = (unsigned int)v21 / v12;
      }
      if ( v32 <= v24 )
      {
        v38 = v12;
      }
      else
      {
        v37 = v32;
        v24 = v32;
        v38 = v12;
        v39 = v20 + v12 * v37;
        if ( v39 >= 0xFFFFFFFFLL )
          v25 = v39 / (unsigned __int64)v9;
        else
          LODWORD(v25) = (unsigned int)v39 / v9;
        if ( v33 <= (int)v25 )
          goto LABEL_54;
      }
      if ( v34 > (int)v25 )
      {
        LODWORD(v25) = v34;
        v43 = v50 + (int)v9 * (__int64)v34;
        if ( v43 >= 0xFFFFFFFFLL )
          v44 = (v50 + (int)v9 * (__int64)v34) / (unsigned __int64)(unsigned int)v12;
        else
          LODWORD(v44) = (unsigned int)v43 / v12;
        v24 = v44 + 1;
        if ( v31 <= (int)v44 + 1 )
        {
LABEL_54:
          *((_DWORD *)a4 + 3) = 0;
          return 1;
        }
      }
      v13 = v51;
      v14 = v52;
      LODWORD(v20) = v38 * v24 - v9 * v25 - v9 + v20;
      goto LABEL_37;
    }
  }
  return v5;
}
