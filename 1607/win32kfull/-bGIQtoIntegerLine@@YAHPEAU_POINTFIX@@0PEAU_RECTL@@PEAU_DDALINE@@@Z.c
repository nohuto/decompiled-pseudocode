/*
 * XREFs of ?bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z @ 0x1C0010724
 * Callers:
 *     ?vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C00103F4 (-vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
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
  unsigned int v5; // ebx
  FIX v6; // r11d
  struct _DDALINE *v7; // r13
  unsigned int v8; // edi
  unsigned int v9; // r11d
  FIX y; // r8d
  FIX v11; // r9d
  int v12; // r9d
  int v13; // r12d
  int v14; // r15d
  int v15; // r10d
  int v16; // edi
  int v17; // r8d
  int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // rsi
  int v21; // ecx
  __int64 v22; // rbp
  int v23; // r14d
  int v24; // r14d
  unsigned __int64 v25; // r10
  struct _RECTL *v26; // rax
  int top; // r13d
  int bottom; // ecx
  int right; // r15d
  int left; // r8d
  int v31; // ecx
  int v32; // r15d
  int v33; // r13d
  int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // r12d
  int v38; // r15d
  unsigned int v40; // eax
  FIX v41; // eax
  int v42; // eax
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  __int64 v45; // [rsp+0h] [rbp-58h]
  int v46; // [rsp+68h] [rbp+10h]

  x = a1->x;
  v5 = 0;
  v6 = a2->x;
  v7 = a4;
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
          v40 = v9;
          v8 |= 1u;
          v9 = v12;
          v12 = v40;
          v41 = x;
          x = y;
          y = v41;
        }
      }
      v13 = x >> 4;
      v14 = y >> 4;
      v15 = x & 0xF;
      v46 = y >> 4;
      v16 = gaflHardwareRound[v8] | v8;
      v17 = y & 0xF;
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
      v21 = ((_BYTE)v12 + (_BYTE)v17) & 0xF;
      LODWORD(v22) = ((v9 + v15) >> 4) - 1;
      v23 = ((_BYTE)v9 + (_BYTE)v15) & 0xF;
      if ( (((_BYTE)v9 + (_BYTE)v15) & 0xF) != 0 )
      {
        if ( (((_BYTE)v12 + (_BYTE)v17) & 0xF) != 0 )
        {
          if ( (int)abs32(v21 - 8) <= v23 )
            LODWORD(v22) = (v9 + v15) >> 4;
        }
        else
        {
          v21 = ((_BYTE)v12 + (_BYTE)v17) & 0xF;
          if ( ((v23 - ((v16 & 0x100) != 0) + 8) & 0xFFFFFFF0) != 0 )
            LODWORD(v22) = (v9 + v15) >> 4;
        }
      }
      if ( (v16 & 0x108) != 0x108 )
        goto LABEL_14;
      if ( (((_BYTE)v9 + (_BYTE)v15) & 0xF) != 0 && v21 == v23 + 8 )
        LODWORD(v22) = v22 - 1;
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
            v24 = (int)abs32(v17 - 8) <= v15;
          else
            v24 = ((v15 - ((v16 & 0x100) != 0) + 8) & 0xFFFFFFF0) != 0;
        }
      }
      LODWORD(v25) = 0;
      if ( v20 >= 0 )
        LODWORD(v25) = v20 >= v9 - (v12 & -v24);
      if ( (int)v22 < v24 )
      {
        *((_DWORD *)v7 + 3) = 0;
        return 1;
      }
      if ( !a3 )
      {
        v20 += (v12 & (unsigned int)-v24) - (unsigned __int64)v9;
        if ( v20 >= 0 )
          LODWORD(v20) = v20 - v9;
LABEL_37:
        v37 = v24 + v13;
        v38 = v25 + v14;
        if ( (v16 & 1) != 0 )
        {
          v42 = v37;
          v37 = v38;
          v38 = v42;
        }
        if ( (v16 & 2) != 0 )
          v38 = -v38;
        if ( (v16 & 4) != 0 )
          v37 = -v37;
        *(_DWORD *)v7 = v16;
        *((_DWORD *)v7 + 1) = v37;
        *((_DWORD *)v7 + 3) = v22 - v24 + 1;
        v5 = 1;
        *((_DWORD *)v7 + 2) = v38;
        *((_DWORD *)v7 + 4) = v9;
        *((_DWORD *)v7 + 5) = v12;
        *((_DWORD *)v7 + 6) = v20;
        *((_DWORD *)v7 + 7) = 1;
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
      v31 = bottom - v46;
      v32 = right - v13;
      v33 = top - v46;
      v34 = left - v13;
      if ( v31 <= (int)v25 || v32 <= v24 || v34 > (int)v22 )
        goto LABEL_77;
      if ( (int)v22 >= v32 )
        LODWORD(v22) = v32 - 1;
      v45 = ~v20;
      v35 = v20 + v12 * (__int64)(int)v22;
      if ( v35 >= 0xFFFFFFFFLL )
        v35 /= (unsigned __int64)v9;
      else
        LODWORD(v35) = (unsigned int)v35 / v9;
      if ( v33 > (int)v35 )
        goto LABEL_77;
      if ( v31 <= (int)v35 )
      {
        v22 = v45 + (int)v9 * (__int64)v31;
        if ( v22 >= 0xFFFFFFFFLL )
          v22 /= (unsigned __int64)(unsigned int)v12;
        else
          LODWORD(v22) = (unsigned int)v22 / v12;
      }
      if ( v34 > v24
        && ((v24 = v34, v36 = v20 + v12 * (__int64)v34, v36 >= 0xFFFFFFFFLL)
          ? (v25 = (v20 + v12 * (__int64)v34) / (unsigned __int64)v9)
          : (LODWORD(v25) = (unsigned int)v36 / v9),
            v31 <= (int)v25)
        || v33 > (int)v25
        && ((LODWORD(v25) = v33, v43 = v45 + (int)v9 * (__int64)v33, v43 >= 0xFFFFFFFFLL)
          ? (v44 = (v45 + (int)v9 * (__int64)v33) / (unsigned __int64)(unsigned int)v12)
          : (LODWORD(v44) = (unsigned int)v43 / v12),
            v24 = v44 + 1,
            v32 <= (int)v44 + 1) )
      {
LABEL_77:
        *((_DWORD *)a4 + 3) = 0;
        return 1;
      }
      v14 = v46;
      v7 = a4;
      LODWORD(v20) = v12 * v24 - v9 * v25 - v9 + v20;
      goto LABEL_37;
    }
  }
  return v5;
}
