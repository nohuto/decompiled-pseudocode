/*
 * XREFs of ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0028120
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C001AA10 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 */

__int64 __fastcall ESTROBJ::bOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, struct _RECTL *a3)
{
  int v6; // edx
  LONG v7; // ecx
  __int64 v8; // rax
  int v9; // edx
  __int64 result; // rax
  _QWORD *v11; // rax
  EFLOAT *v12; // r15
  __int64 v13; // r14
  EFLOAT *v14; // r8
  _DWORD *v15; // r11
  int v16; // edx
  int v17; // edx
  int v18; // eax
  __int64 v19; // rcx
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
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r11
  int v35; // ecx
  int v36; // eax
  FIX v37; // r9d
  int v38; // r10d
  int v39; // ecx
  FIX v40; // r10d
  int v41; // eax
  int v42; // edx
  int v43; // ecx
  BOOL v44; // esi
  LONG v45; // eax
  int v46; // ecx
  unsigned int v47; // r8d
  int v48; // eax
  _DWORD *v49; // r11
  int v50; // edx
  int v51; // edx
  int v52; // [rsp+20h] [rbp-30h] BYREF
  int v53; // [rsp+24h] [rbp-2Ch] BYREF
  int v54; // [rsp+28h] [rbp-28h] BYREF
  int v55; // [rsp+2Ch] [rbp-24h] BYREF
  int v56; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v57[3]; // [rsp+34h] [rbp-1Ch] BYREF
  int v58; // [rsp+70h] [rbp+20h] BYREF
  int v59; // [rsp+88h] [rbp+38h] BYREF

  if ( (*((_DWORD *)this + 1) & 2) != 0 )
  {
    v6 = (*((_DWORD *)this + 20) + 8) >> 4;
    a3->left = v6 + (*((int *)this + 26) >> 4);
    v7 = v6 + ((*((_DWORD *)this + 28) + 15) >> 4);
    a3->right = v7;
    v8 = *((_QWORD *)this + 7);
    if ( (*(_DWORD *)(*(_QWORD *)v8 + 12LL) & 0x2000) != 0 && (*(_DWORD *)(*(_QWORD *)v8 + 488LL) & 6) != 0 )
    {
      a3->right = v7 + 1;
      *((_DWORD *)this + 1) &= ~0x10u;
    }
    v9 = (*((_DWORD *)this + 21) + 8) >> 4;
    a3->top = v9 - ((*((_DWORD *)this + 27) + 15) >> 4);
    a3->bottom = v9 - (*((int *)this + 29) >> 4);
    return 0LL;
  }
  else
  {
    v11 = (_QWORD *)*((_QWORD *)this + 7);
    v12 = (EFLOAT *)(*v11 + 396LL);
    v13 = *v11 + 412LL;
    if ( EFLOAT::bIsZero(v12) && EFLOAT::bIsZero((EFLOAT *)v13) )
    {
      v16 = (v15[20] + 8) >> 4;
      if ( *(float *)v14 < 0.0 )
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
      if ( *(float *)(v13 + 4) < 0.0 )
      {
        a3->top = v17 - ((v15[27] + 15) >> 4);
        v48 = v15[29];
        ++a3->right;
        a3->bottom = v17 - (v48 >> 4);
      }
      else
      {
        a3->top = v17 + ((int)v15[29] >> 4);
        v18 = v15[27];
        ++a3->right;
        a3->bottom = v17 + ((v18 + 15) >> 4);
      }
      return 0LL;
    }
    else if ( EFLOAT::bIsZero(v14) && EFLOAT::bIsZero((EFLOAT *)(v13 + 4)) )
    {
      v50 = (v49[20] + 8) >> 4;
      if ( *(float *)v13 >= 0.0 )
      {
        a3->left = v50 + ((int)v49[29] >> 4);
        a3->right = v50 + ((v49[27] + 15) >> 4);
      }
      else
      {
        a3->left = v50 - ((v49[27] + 15) >> 4);
        a3->right = v50 - ((int)v49[29] >> 4);
      }
      v51 = (v49[21] + 8) >> 4;
      if ( *(float *)v12 >= 0.0 )
      {
        a3->top = v51 + ((int)v49[26] >> 4);
        a3->bottom = v51 + ((v49[28] + 15) >> 4);
      }
      else
      {
        a3->top = v51 - ((v49[28] + 15) >> 4);
        a3->bottom = v51 - ((int)v49[26] >> 4);
      }
      ++a3->bottom;
      return 0LL;
    }
    else
    {
      v59 = 0;
      bFToL(v19, &v59, 0LL);
      v55 = 0;
      bFToL(v20, &v55, v21);
      v52 = 0;
      bFToL(v22, &v52, v23);
      v56 = 0;
      bFToL(v24, &v56, v25);
      v58 = 0;
      bFToL(v26, &v58, v27);
      v54 = 0;
      bFToL(v28, &v54, v29);
      v53 = 0;
      bFToL(v30, &v53, v31);
      v57[0] = 0;
      bFToL(v32, v57, v33);
      v35 = v58;
      v36 = v52;
      v37 = v59 + v58 + *(_DWORD *)(v34 + 80);
      a2->x = v37;
      v38 = v35 + v36;
      v39 = v53;
      v40 = *(_DWORD *)(v34 + 80) + v38;
      v41 = v53 + v36;
      a2[1].x = v40;
      a2[2].x = *(_DWORD *)(v34 + 80) + v41;
      a2[3].x = v59 + *(_DWORD *)(v34 + 80) + v39;
      a2->y = v55 + v54 + *(_DWORD *)(v34 + 84);
      a2[1].y = v56 + v54 + *(_DWORD *)(v34 + 84);
      a2[2].y = v56 + v57[0] + *(_DWORD *)(v34 + 84);
      a2[3].y = v55 + v57[0] + *(_DWORD *)(v34 + 84);
      v42 = v40 > v37;
      v43 = v40 > a2[2].x;
      a3->left = a2[v42 == v43].x;
      a3->right = a2[(v42 == v43) + 2].x;
      v44 = a2[1].y > a2->y == a2[1].y > a2[2].y;
      a3->top = a2[a2[1].y > a2->y == a2[1].y > a2[2].y].y;
      a3->bottom = a2[v44 + 2].y;
      ERECTL::vOrder((ERECTL *)a3);
      v45 = a3->top >> 4;
      a3->left = (a3->left >> 4) - 2;
      v46 = a3->right + 15;
      a3->top = v45 - 2;
      result = v47;
      a3->right = (v46 >> 4) + 2;
      a3->bottom = ((a3->bottom + 15) >> 4) + 2;
    }
  }
  return result;
}
