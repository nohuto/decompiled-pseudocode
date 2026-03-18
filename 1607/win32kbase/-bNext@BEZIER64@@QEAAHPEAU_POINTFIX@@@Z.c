/*
 * XREFs of ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00C1E20
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C00469D8 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0047794 (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1C008A194 (-vInit@HFDBASIS64@@QEAAXJJJJ@Z.c)
 *     ?bIntersect@@YAHPEAU_RECTFX@@0@Z @ 0x1C00C1DEC (-bIntersect@@YAHPEAU_RECTFX@@0@Z.c)
 *     ?vError@HFDBASIS64@@QEAAXPEA_J@Z @ 0x1C00C22E0 (-vError@HFDBASIS64@@QEAAXPEA_J@Z.c)
 *     ?vParentError@HFDBASIS64@@QEAAXPEA_J@Z @ 0x1C00C2460 (-vParentError@HFDBASIS64@@QEAAXPEA_J@Z.c)
 *     ?vUntransform@HFDBASIS64@@QEAAXPEAJ@Z @ 0x1C00C24D8 (-vUntransform@HFDBASIS64@@QEAAXPEAJ@Z.c)
 */

__int64 __fastcall BEZIER64::bNext(BEZIER64 *this, struct _POINTFIX *a2)
{
  HFDBASIS64 *v4; // rsi
  __int64 v5; // r10
  struct _RECTFX *v6; // r10
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v38; // r11d
  __int64 v39; // r10
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  _RECTFX v50; // [rsp+30h] [rbp-30h] BYREF
  struct _POINTFIX v51; // [rsp+40h] [rbp-20h] BYREF
  int v52; // [rsp+48h] [rbp-18h]
  int v53; // [rsp+4Ch] [rbp-14h]
  int v54; // [rsp+50h] [rbp-10h]
  int v55; // [rsp+54h] [rbp-Ch]
  int v56; // [rsp+58h] [rbp-8h]
  int v57; // [rsp+5Ch] [rbp-4h]
  __int64 v58; // [rsp+80h] [rbp+20h] BYREF

  if ( !*((_DWORD *)this + 41) )
  {
    v4 = (BEZIER64 *)((char *)this + 64);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 64), (int *)&v51);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 96), &v51.y);
    HFDBASIS64::vInit(this, v51.x, v52, v54, v56);
    HFDBASIS64::vInit((BEZIER64 *)((char *)this + 32), v51.y, v53, v55, v57);
    v5 = *((_QWORD *)this + 17);
    *((_DWORD *)this + 41) = 1;
    if ( !v5 || (vBoundBox(&v51, &v50), !v6) || bIntersect(&v50, v6) )
    {
      while ( 1 )
      {
        HFDBASIS64::vError(this, &v58);
        if ( v58 <= *((_QWORD *)this + 16) )
        {
          HFDBASIS64::vError((BEZIER64 *)((char *)this + 32), &v58);
          if ( v58 <= v7 )
            break;
        }
        *((_DWORD *)this + 41) *= 2;
        v8 = *((_QWORD *)this + 3);
        v9 = (v8 + *((_QWORD *)this + 2)) >> 3;
        v10 = *((_QWORD *)this + 1) - v9;
        *((_QWORD *)this + 2) = v9;
        *((_QWORD *)this + 1) = v10 >> 1;
        *((_QWORD *)this + 3) = v8 >> 2;
        v11 = *((_QWORD *)this + 7);
        v12 = (v11 + *((_QWORD *)this + 6)) >> 3;
        v13 = *((_QWORD *)this + 5) - v12;
        *((_QWORD *)this + 6) = v12;
        *((_QWORD *)this + 7) = v11 >> 2;
        *((_QWORD *)this + 5) = v13 >> 1;
      }
    }
    v14 = (*((_DWORD *)this + 40))-- == 1;
    if ( !v14 )
    {
      v15 = *((_QWORD *)v4 + 2);
      v16 = *((_QWORD *)v4 + 1);
      v17 = v15 - *((_QWORD *)v4 + 3);
      *(_QWORD *)v4 += v16;
      *((_QWORD *)v4 + 2) = v15 + v17;
      *((_QWORD *)v4 + 1) = v15 + v16;
      *((_QWORD *)v4 + 3) = v15;
      v18 = *((_QWORD *)this + 14);
      v19 = *((_QWORD *)this + 13);
      v20 = v18 - *((_QWORD *)this + 15);
      *((_QWORD *)this + 12) += v19;
      *((_QWORD *)this + 14) = v18 + v20;
      *((_QWORD *)this + 15) = v18;
      *((_QWORD *)this + 13) = v18 + v19;
      HFDBASIS64::vError(v4, &v58);
      v21 = geqErrorHigh;
      if ( v58 > geqErrorHigh || (HFDBASIS64::vError((BEZIER64 *)((char *)this + 96), &v58), v58 > v21) )
      {
        *((_DWORD *)this + 40) *= 2;
        v22 = *((_QWORD *)v4 + 3);
        v23 = *((_QWORD *)v4 + 1);
        v24 = (v22 + *((_QWORD *)v4 + 2)) >> 3;
        *((_QWORD *)v4 + 2) = v24;
        *((_QWORD *)v4 + 1) = (v23 - v24) >> 1;
        *((_QWORD *)v4 + 3) = v22 >> 2;
        v25 = *((_QWORD *)this + 15);
        v26 = (v25 + *((_QWORD *)this + 14)) >> 3;
        v27 = *((_QWORD *)this + 13) - v26;
        *((_QWORD *)this + 14) = v26;
        *((_QWORD *)this + 15) = v25 >> 2;
        *((_QWORD *)this + 13) = v27 >> 1;
        v21 = geqErrorHigh;
      }
      if ( (*((_DWORD *)this + 40) & 1) == 0 )
      {
        while ( 1 )
        {
          HFDBASIS64::vParentError(v4, &v58);
          if ( v58 > v21 )
            break;
          HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 96), &v58);
          if ( v58 > v21 )
            break;
          *((_QWORD *)v4 + 3) *= 4LL;
          v28 = *((_QWORD *)v4 + 2);
          *((_QWORD *)v4 + 1) = v28 + 2LL * *((_QWORD *)v4 + 1);
          *((_QWORD *)v4 + 2) = 8 * v28 - *((_QWORD *)v4 + 3);
          v29 = *((_QWORD *)this + 14);
          v30 = *((_QWORD *)this + 13);
          *((_QWORD *)this + 15) *= 4LL;
          *((_QWORD *)this + 13) = v29 + 2 * v30;
          *((_QWORD *)this + 14) = 8 * v29 - *((_QWORD *)this + 15);
          *((int *)this + 40) >>= 1;
          if ( (*((_DWORD *)this + 40) & 1) != 0 )
            break;
          v21 = geqErrorHigh;
        }
      }
    }
  }
  v31 = *((_QWORD *)this + 2);
  v32 = *((_QWORD *)this + 1);
  *(_QWORD *)this += v32;
  *((_QWORD *)this + 1) = v31 + v32;
  v33 = v31 - *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v31;
  *((_QWORD *)this + 2) = v31 + v33;
  v34 = *((_QWORD *)this + 6);
  v35 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 4) += v35;
  v36 = v34 - *((_QWORD *)this + 7);
  *((_QWORD *)this + 5) = v34 + v35;
  *((_QWORD *)this + 6) = v34 + v36;
  *((_QWORD *)this + 7) = v34;
  a2->x = (*(_QWORD *)this + 0x8000000LL) >> 28;
  a2->y = (*((_QWORD *)this + 4) + 0x8000000LL) >> 28;
  v14 = (*((_DWORD *)this + 41))-- == 1;
  if ( v14 && !*((_DWORD *)this + 40) )
    return 0LL;
  HFDBASIS64::vError(this, &v58);
  if ( v58 > *((_QWORD *)this + 16) || (HFDBASIS64::vError((BEZIER64 *)((char *)this + 32), &v58), v58 > v39) )
  {
    *((_DWORD *)this + 41) = 2 * v38;
    v40 = *((_QWORD *)this + 3);
    v41 = (v40 + *((_QWORD *)this + 2)) >> 3;
    v42 = *((_QWORD *)this + 1) - v41;
    *((_QWORD *)this + 2) = v41;
    *((_QWORD *)this + 1) = v42 >> 1;
    *((_QWORD *)this + 3) = v40 >> 2;
    v43 = *((_QWORD *)this + 7);
    v44 = (v43 + *((_QWORD *)this + 6)) >> 3;
    v45 = *((_QWORD *)this + 5) - v44;
    *((_QWORD *)this + 6) = v44;
    *((_QWORD *)this + 7) = v43 >> 2;
    *((_QWORD *)this + 5) = v45 >> 1;
  }
  for ( ; (*((_DWORD *)this + 41) & 1) == 0; *((int *)this + 41) >>= 1 )
  {
    HFDBASIS64::vParentError(this, &v58);
    v46 = *((_QWORD *)this + 16);
    if ( v58 > v46 )
      break;
    HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 32), &v58);
    if ( v58 > v46 )
      break;
    *((_QWORD *)this + 3) *= 4LL;
    v47 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 1) = v47 + 2LL * *((_QWORD *)this + 1);
    *((_QWORD *)this + 2) = 8 * v47 - *((_QWORD *)this + 3);
    v48 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 7) *= 4LL;
    v49 = v48 + 2LL * *((_QWORD *)this + 5);
    *((_QWORD *)this + 6) = 8 * v48 - *((_QWORD *)this + 7);
    *((_QWORD *)this + 5) = v49;
  }
  return 1LL;
}
