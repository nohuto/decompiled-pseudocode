/*
 * XREFs of ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0031EC0
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0014318 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

__int64 __fastcall ESTROBJ::bOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, struct _RECTL *a3)
{
  int v5; // edx
  LONG v6; // r8d
  __int64 v7; // rax
  int v8; // edx
  _QWORD *v10; // rax
  EFLOAT *v11; // r14
  __int64 v12; // rsi
  EFLOAT *v13; // r8
  int v14; // edi
  _DWORD *v15; // r11
  int v16; // edx
  int v17; // edx
  float *v18; // r8
  _DWORD *v19; // r11
  int v20; // edx
  int v21; // edx
  float v22; // xmm3_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  char v25; // r8
  __int64 v26; // r11
  float v27; // xmm1_4
  char v28; // r8
  float v29; // xmm1_4
  char v30; // r8
  __int64 v31; // r11
  float v32; // xmm1_4
  char v33; // r8
  float v34; // xmm1_4
  char v35; // r8
  __int64 v36; // r11
  float v37; // xmm1_4
  char v38; // r8
  float v39; // xmm1_4
  char v40; // r8
  __int64 v41; // r11
  int v42; // ecx
  int v43; // eax
  FIX v44; // r9d
  int v45; // r8d
  int v46; // ecx
  FIX v47; // r8d
  FIX v48; // edx
  BOOL v49; // edx
  LONG v50; // ecx
  int v51; // eax
  int v52; // [rsp+20h] [rbp-20h] BYREF
  int v53; // [rsp+24h] [rbp-1Ch] BYREF
  int v54; // [rsp+28h] [rbp-18h] BYREF
  int v55; // [rsp+2Ch] [rbp-14h] BYREF
  int v56; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v57[3]; // [rsp+34h] [rbp-Ch] BYREF
  int v58; // [rsp+70h] [rbp+30h] BYREF
  int v59; // [rsp+88h] [rbp+48h] BYREF

  if ( (*((_DWORD *)this + 1) & 2) != 0 )
  {
    v5 = (*((_DWORD *)this + 20) + 8) >> 4;
    a3->left = v5 + (*((int *)this + 26) >> 4);
    v6 = v5 + ((*((_DWORD *)this + 28) + 15) >> 4);
    a3->right = v6;
    v7 = *((_QWORD *)this + 7);
    if ( (*(_DWORD *)(*(_QWORD *)v7 + 12LL) & 0x2000) != 0 && (*(_DWORD *)(*(_QWORD *)v7 + 488LL) & 6) != 0 )
    {
      a3->right = v6 + 1;
      *((_DWORD *)this + 1) &= ~0x10u;
    }
    v8 = (*((_DWORD *)this + 21) + 8) >> 4;
    a3->top = v8 - ((*((_DWORD *)this + 27) + 15) >> 4);
    a3->bottom = v8 - (*((int *)this + 29) >> 4);
    return 0LL;
  }
  v10 = (_QWORD *)*((_QWORD *)this + 7);
  v11 = (EFLOAT *)(*v10 + 396LL);
  v12 = *v10 + 412LL;
  v14 = 0;
  if ( EFLOAT::bIsZero(v11) && EFLOAT::bIsZero((EFLOAT *)v12) )
  {
    v16 = (v15[20] + 8) >> 4;
    if ( *(float *)v13 < 0.0 )
    {
      a3->left = v16 - ((v15[28] + 15) >> 4);
      a3->right = v16 - ((int)v15[26] >> 4);
    }
    else
    {
      a3->left = v16 + ((int)v15[26] >> 4);
      a3->right = v16 + ((v15[28] + 15) >> 4);
    }
    v17 = (v15[21] + 8) >> 4;
    if ( *(float *)(v12 + 4) < 0.0 )
    {
      a3->top = v17 - ((v15[27] + 15) >> 4);
      a3->bottom = v17 - ((int)v15[29] >> 4);
    }
    else
    {
      a3->top = v17 + ((int)v15[29] >> 4);
      a3->bottom = v17 + ((v15[27] + 15) >> 4);
    }
    ++a3->right;
    return 0LL;
  }
  if ( EFLOAT::bIsZero(v13) && EFLOAT::bIsZero((EFLOAT *)(v12 + 4)) )
  {
    v20 = (v19[20] + 8) >> 4;
    if ( *(float *)v12 >= 0.0 )
    {
      a3->left = v20 + ((int)v19[29] >> 4);
      a3->right = v20 + ((v19[27] + 15) >> 4);
    }
    else
    {
      a3->left = v20 - ((v19[27] + 15) >> 4);
      a3->right = v20 - ((int)v19[29] >> 4);
    }
    v21 = (v19[21] + 8) >> 4;
    if ( *(float *)v11 >= 0.0 )
    {
      a3->top = v21 + ((int)v19[26] >> 4);
      a3->bottom = v21 + ((v19[28] + 15) >> 4);
    }
    else
    {
      a3->top = v21 - ((v19[28] + 15) >> 4);
      a3->bottom = v21 - ((int)v19[26] >> 4);
    }
    ++a3->bottom;
    return 0LL;
  }
  v22 = *v18;
  v23 = (float)(int)v19[26];
  v58 = 0;
  bFToL(v23 * v22, &v58, 0);
  v24 = v23 * *(float *)v11;
  v54 = 0;
  bFToL(v24, &v54, v25);
  v27 = (float)*(int *)(v26 + 112);
  v56 = 0;
  bFToL(v27 * v22, &v56, v28);
  v29 = v27 * *(float *)v11;
  v52 = 0;
  bFToL(v29, &v52, v30);
  v32 = (float)*(int *)(v31 + 108);
  v55 = 0;
  bFToL(v32 * *(float *)v12, &v55, v33);
  v34 = v32 * *(float *)(v12 + 4);
  v59 = 0;
  bFToL(v34, &v59, v35);
  v37 = (float)*(int *)(v36 + 116);
  v57[0] = 0;
  bFToL(v37 * *(float *)v12, v57, v38);
  v39 = v37 * *(float *)(v12 + 4);
  v53 = 0;
  bFToL(v39, &v53, v40);
  v42 = v55;
  v43 = v56;
  v44 = v58 + v55 + *(_DWORD *)(v41 + 80);
  a2->x = v44;
  v45 = v42 + v43;
  v46 = v57[0];
  v47 = *(_DWORD *)(v41 + 80) + v45;
  a2[1].x = v47;
  v48 = *(_DWORD *)(v41 + 80) + v46 + v43;
  a2[2].x = v48;
  a2[3].x = v58 + *(_DWORD *)(v41 + 80) + v46;
  a2->y = v54 + v59 + *(_DWORD *)(v41 + 84);
  a2[1].y = v52 + v59 + *(_DWORD *)(v41 + 84);
  a2[2].y = v52 + v53 + *(_DWORD *)(v41 + 84);
  a2[3].y = v54 + v53 + *(_DWORD *)(v41 + 84);
  v49 = v47 > v44 == v47 > v48;
  a3->left = a2[v49].x;
  a3->right = a2[v49 + 2].x;
  LOBYTE(v14) = a2[1].y > a2->y == a2[1].y > a2[2].y;
  a3->top = a2[v14].y;
  a3->bottom = a2[v14 + 2].y;
  ERECTL::vOrder((ERECTL *)a3);
  v50 = a3->left >> 4;
  a3->top = (a3->top >> 4) - 2;
  v51 = a3->right + 15;
  a3->left = v50 - 2;
  a3->right = (v51 >> 4) + 2;
  a3->bottom = ((a3->bottom + 15) >> 4) + 2;
  return 1LL;
}
