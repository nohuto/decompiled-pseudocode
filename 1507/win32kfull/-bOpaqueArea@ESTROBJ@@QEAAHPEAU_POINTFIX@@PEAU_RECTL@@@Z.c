/*
 * XREFs of ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0022264
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00327F4 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
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
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r11
  int v31; // ecx
  int v32; // eax
  FIX v33; // r10d
  int v34; // r9d
  int v35; // ecx
  FIX v36; // r9d
  FIX v37; // r8d
  LONG v38; // ecx
  int v39; // eax
  _DWORD *v40; // r11
  int v41; // edx
  int v42; // edx
  _DWORD *v43; // r11
  int v44; // edx
  int v45; // edx
  int v46; // [rsp+20h] [rbp-20h] BYREF
  int v47; // [rsp+24h] [rbp-1Ch] BYREF
  int v48; // [rsp+28h] [rbp-18h] BYREF
  int v49; // [rsp+2Ch] [rbp-14h] BYREF
  int v50; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v51[3]; // [rsp+34h] [rbp-Ch] BYREF
  int v52; // [rsp+70h] [rbp+30h] BYREF
  int v53; // [rsp+88h] [rbp+48h] BYREF

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
  if ( (unsigned int)EFLOAT::bIsZero(v11) && (unsigned int)EFLOAT::bIsZero((EFLOAT *)v12) )
  {
    v41 = (v40[20] + 8) >> 4;
    if ( *(float *)v13 < 0.0 )
    {
      a3->left = v41 - ((v40[28] + 15) >> 4);
      a3->right = v41 - ((int)v40[26] >> 4);
    }
    else
    {
      a3->left = v41 + ((int)v40[26] >> 4);
      a3->right = v41 + ((v40[28] + 15) >> 4);
    }
    v42 = (v40[21] + 8) >> 4;
    if ( *(float *)(v12 + 4) < 0.0 )
    {
      a3->top = v42 - ((v40[27] + 15) >> 4);
      a3->bottom = v42 - ((int)v40[29] >> 4);
    }
    else
    {
      a3->top = v42 + ((int)v40[29] >> 4);
      a3->bottom = v42 + ((v40[27] + 15) >> 4);
    }
    ++a3->right;
    return 0LL;
  }
  if ( (unsigned int)EFLOAT::bIsZero(v13) && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v12 + 4)) )
  {
    v44 = (v43[20] + 8) >> 4;
    if ( *(float *)v12 >= 0.0 )
    {
      a3->left = v44 + ((int)v43[29] >> 4);
      a3->right = v44 + ((v43[27] + 15) >> 4);
    }
    else
    {
      a3->left = v44 - ((v43[27] + 15) >> 4);
      a3->right = v44 - ((int)v43[29] >> 4);
    }
    v45 = (v43[21] + 8) >> 4;
    if ( *(float *)v11 >= 0.0 )
    {
      a3->top = v45 + ((int)v43[26] >> 4);
      a3->bottom = v45 + ((v43[28] + 15) >> 4);
    }
    else
    {
      a3->top = v45 - ((v43[28] + 15) >> 4);
      a3->bottom = v45 - ((int)v43[26] >> 4);
    }
    ++a3->bottom;
    return 0LL;
  }
  v52 = 0;
  bFToL(v15, &v52, 0LL);
  v48 = 0;
  bFToL(v16, &v48, v17);
  v50 = 0;
  bFToL(v18, &v50, v19);
  v46 = 0;
  bFToL(v20, &v46, v21);
  v49 = 0;
  bFToL(v22, &v49, v23);
  v53 = 0;
  bFToL(v24, &v53, v25);
  v51[0] = 0;
  bFToL(v26, v51, v27);
  v47 = 0;
  bFToL(v28, &v47, v29);
  v31 = v49;
  v32 = v50;
  v33 = v52 + v49 + *(_DWORD *)(v30 + 80);
  a2->x = v33;
  v34 = v31 + v32;
  v35 = v51[0];
  v36 = *(_DWORD *)(v30 + 80) + v34;
  a2[1].x = v36;
  v37 = *(_DWORD *)(v30 + 80) + v35 + v32;
  a2[2].x = v37;
  a2[3].x = v52 + *(_DWORD *)(v30 + 80) + v35;
  a2->y = v48 + v53 + *(_DWORD *)(v30 + 84);
  a2[1].y = v46 + v53 + *(_DWORD *)(v30 + 84);
  a2[2].y = v46 + v47 + *(_DWORD *)(v30 + 84);
  a2[3].y = v48 + v47 + *(_DWORD *)(v30 + 84);
  a3->left = a2[v36 > v33 == v36 > v37].x;
  a3->right = a2[(v36 > v33 == v36 > v37) + 2].x;
  LOBYTE(v14) = a2[1].y > a2->y == a2[1].y > a2[2].y;
  a3->top = a2[v14].y;
  a3->bottom = a2[v14 + 2].y;
  ERECTL::vOrder((ERECTL *)a3);
  v38 = a3->left >> 4;
  a3->top = (a3->top >> 4) - 2;
  v39 = a3->right + 15;
  a3->left = v38 - 2;
  a3->right = (v39 >> 4) + 2;
  a3->bottom = ((a3->bottom + 15) >> 4) + 2;
  return 1LL;
}
