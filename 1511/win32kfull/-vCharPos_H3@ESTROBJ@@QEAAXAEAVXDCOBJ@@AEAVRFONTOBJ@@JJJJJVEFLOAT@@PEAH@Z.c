/*
 * XREFs of ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C00293F0
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0028490 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C00234A4 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0023760 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00254D0 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0025850 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00258A0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0026C30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C010BF20 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01492DC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H3(
        struct ESTROBJ *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int *a10)
{
  int v10; // r10d
  int v11; // edi
  unsigned int v12; // r11d
  __int64 v13; // rax
  struct ESTROBJ *v15; // rsi
  struct _GLYPHPOS *v16; // r9
  signed int v17; // ebp
  unsigned __int16 *v18; // rdx
  int v19; // r10d
  POINTL *p_ptl; // rbx
  int v21; // r11d
  unsigned __int16 *v22; // r14
  __int64 v23; // r12
  struct _GLYPHPOS *v24; // r15
  __int64 v25; // r8
  _DWORD *v26; // r13
  struct GPRUN *v27; // r13
  int v28; // esi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r12
  struct _GLYPHDATA **v32; // rdx
  struct _GLYPHDATA *v33; // rsi
  int v34; // r12d
  __int64 v35; // rax
  struct XDCOBJ *v36; // r15
  unsigned int v37; // r8d
  signed int v38; // r14d
  int v39; // r9d
  _DWORD *v40; // rcx
  int v41; // eax
  unsigned int v42; // ecx
  __int64 v43; // rax
  __int64 result; // rax
  int v45; // ecx
  struct GPRUN *Run; // rax
  __int64 v47; // rsi
  int v48; // edx
  int v49; // edx
  LONG *v50; // r8
  __m128i v51; // xmm1
  __int64 v52; // rcx
  int v53; // r8d
  unsigned int v54; // edx
  int v55; // ecx
  int v56; // eax
  int v57; // [rsp+40h] [rbp-78h] BYREF
  int v58; // [rsp+44h] [rbp-74h]
  struct _GLYPHPOS *v59; // [rsp+50h] [rbp-68h]
  unsigned __int16 *v60; // [rsp+58h] [rbp-60h]
  LONG *p_y; // [rsp+60h] [rbp-58h]
  int v66; // [rsp+D8h] [rbp+20h]
  unsigned int v67; // [rsp+E0h] [rbp+28h]

  v10 = a6;
  v11 = 0;
  v12 = a7;
  v58 = 0;
  v13 = *(_QWORD *)a3;
  v15 = a1;
  if ( a7 | a6 )
  {
    v51 = (__m128i)a9;
    v52 = *(_DWORD *)(v13 + 268) & 0x40 | 2u;
    *((_DWORD *)v15 + 1) |= v52;
    if ( v10 )
    {
      v57 = 0;
      bFToL(v52, &v57, 0LL);
      v53 = v57;
      *((_DWORD *)v15 + 31) = v57;
      if ( v53 > 0 )
        *((_DWORD *)v15 + 1) |= 0x800u;
    }
    if ( (unsigned __int8)bCalcBreakExtra((unsigned int)_mm_cvtsi128_si32(v51), v12, a8, (char *)v15 + 128) )
    {
      v54 = *((_DWORD *)v15 + 31);
      v55 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      if ( (int)(v55 + v54 + *((_DWORD *)v15 + 32)) < 0 )
        *((_DWORD *)v15 + 32) = -(v54 + v55);
      v56 = *(_DWORD *)(*(_QWORD *)a3 + 460LL);
      *((_DWORD *)v15 + 1) |= 0x1000u;
      v58 = v56;
    }
  }
  else
  {
    *((_DWORD *)a1 + 1) |= *(_DWORD *)(v13 + 268) & 0x71 | 2;
  }
  v16 = (struct _GLYPHPOS *)*((_QWORD *)v15 + 9);
  v17 = 0;
  v18 = (unsigned __int16 *)*((_QWORD *)v15 + 5);
  v19 = a4 + 8;
  p_ptl = &v16->ptl;
  v16->ptl.x = (a4 + 8) >> 4;
  v21 = (int)(a5 + 8) >> 4;
  p_y = &v16->ptl.y;
  v16->ptl.y = v21;
  v59 = v16;
  v60 = v18;
  v66 = a4 + 8;
  a7 = v21;
  if ( a10 )
  {
    v34 = *a10;
LABEL_14:
    if ( !v34 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v22 = v18;
  v23 = *(unsigned int *)v15;
  v24 = v16;
  v67 = *(_DWORD *)v15;
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 480LL) )
  {
    result = RFONTOBJ::bAllocateCache(a3, (struct RFONTOBJ *)v18);
    if ( !(_DWORD)result )
      return result;
    v19 = v66;
    v18 = v22;
    v21 = a7;
    v16 = v24;
  }
  v25 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 96LL) + 1848LL) & 0x40000000) == 0 || *(_DWORD *)(v25 + 72) != 1 )
  {
    v26 = *(_DWORD **)(v25 + 480);
    a6 = 1;
    if ( *v26 )
    {
      v27 = (struct GPRUN *)(v26 + 4);
      a10 = (int *)&v18[v23];
      if ( v18 < (unsigned __int16 *)a10 )
      {
        while ( 1 )
        {
          v28 = *v22;
          v29 = (unsigned int)(v28 - *(_DWORD *)v27);
          if ( (unsigned int)v29 >= *((_DWORD *)v27 + 1) )
          {
            Run = RFONTOBJ::gprunFindRun(a3, v28);
            v27 = Run;
            v47 = (unsigned int)(v28 - *(_DWORD *)Run);
            if ( (unsigned int)v47 >= *((_DWORD *)Run + 1) )
            {
              result = (__int64)RFONTOBJ::wpgdGetLinkMetricsPlus(a3, a2, a1, v22, v60, v67, &a6, 1);
              v33 = (struct _GLYPHDATA *)result;
              if ( !result )
                return result;
              goto LABEL_11;
            }
            _mm_lfence();
            v30 = *((_QWORD *)Run + 1);
            v31 = 8 * v47;
          }
          else
          {
            _mm_lfence();
            v30 = *((_QWORD *)v27 + 1);
            v31 = 8 * v29;
          }
          v32 = (struct _GLYPHDATA **)(v31 + v30);
          v33 = *v32;
          if ( !*v32 )
          {
            result = RFONTOBJ::bInsertMetricsPlus(a3, v32, *v22);
            if ( !(_DWORD)result )
              return result;
            v33 = *(struct _GLYPHDATA **)(v31 + *((_QWORD *)v27 + 1));
          }
LABEL_11:
          v34 = a6;
          if ( !v33->gdf.pgb
            && a6
            && *(_DWORD *)(*(_QWORD *)a3 + 72LL)
            && !(unsigned int)RFONTOBJ::bInsertGlyphbits(a3, v33, v22 == v60) )
          {
            v34 = 0;
            a6 = 0;
          }
          ++v22;
          v24->hg = v33->hg;
          v24->pgdf = &v33->gdf;
          ++v24;
          if ( v22 >= (unsigned __int16 *)a10 )
          {
            v15 = a1;
            v19 = v66;
            v21 = a7;
            v16 = v59;
            goto LABEL_14;
          }
        }
      }
    }
    else if ( (_DWORD)v23 )
    {
      do
      {
        v24->hg = *(_DWORD *)(*(_QWORD *)a3 + 456LL);
        v24->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a3);
        ++v24;
        LODWORD(v23) = v23 - 1;
      }
      while ( (_DWORD)v23 );
      v15 = a1;
      v19 = v66;
      v21 = a7;
      v16 = v59;
    }
LABEL_15:
    v35 = *((_QWORD *)v15 + 9);
    *((_DWORD *)v15 + 16) |= 2u;
    *((_QWORD *)v15 + 4) = v35;
LABEL_16:
    v36 = a2;
    goto LABEL_17;
  }
  v36 = a2;
  result = RFONTOBJ::bGetGlyphMetrics(a3, (struct RFONTOBJ *)(unsigned int)v23, v59, v18, a2, v15);
  if ( !(_DWORD)result )
    return result;
  v19 = v66;
  v21 = a7;
  v16 = v59;
LABEL_17:
  if ( (*((_BYTE *)v15 + 4) & 0x30) != 0x30 || (v48 = *((_DWORD *)v15 + 31), v48 < 0) || *((_DWORD *)v15 + 32) )
  {
    v37 = *(_DWORD *)v15;
    v38 = 0;
    v39 = v58;
    while ( 1 )
    {
      v40 = (_DWORD *)p_ptl[-1];
      if ( v11 + v40[4] < v38 )
        v38 = v11 + v40[4];
      if ( v11 + v40[5] > v17 )
        v17 = v11 + v40[5];
      v41 = v40[3];
      v11 += v41;
      v42 = *((_DWORD *)v15 + 31);
      if ( v42 && (int)(v42 + v41) > 0 )
        v11 += v42;
      if ( p_ptl[-2].x == v39 )
        v11 += *((_DWORD *)v15 + 32);
      if ( !--v37 )
        break;
      p_ptl += 3;
      p_ptl->y = v21;
      p_ptl->x = (v11 + v19) >> 4;
    }
    if ( v11 > v17 )
      v17 = v11;
  }
  else
  {
    v11 = v48 + HIDWORD(v16->pgdf[1].ppo);
    v49 = *(_DWORD *)v15 - 1;
    if ( *(_DWORD *)v15 != 1 )
    {
      v50 = p_y;
      do
      {
        v50[6] = v21;
        v50 += 6;
        *(v50 - 1) = (v11 + v19) >> 4;
        v11 += *((_DWORD *)v15 + 31) + *(_DWORD *)(*(_QWORD *)(v50 - 3) + 12LL);
        --v49;
      }
      while ( v49 );
    }
    v38 = 0;
    v17 = v11;
  }
  *((_DWORD *)v15 + 30) = v11;
  *((_DWORD *)v15 + 22) = v11;
  *((_DWORD *)v15 + 23) = 0;
  *((_DWORD *)v15 + 26) = v38;
  *((_DWORD *)v15 + 28) = v17;
  v43 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36 + 80LL) + 352LL) & 0x40) != 0 )
  {
    *((_DWORD *)v15 + 27) = -*(_DWORD *)(v43 + 312);
    result = *(_QWORD *)a3;
    v45 = -*(_DWORD *)(*(_QWORD *)a3 + 308LL);
  }
  else
  {
    *((_DWORD *)v15 + 27) = *(_DWORD *)(v43 + 308);
    result = *(_QWORD *)a3;
    v45 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
  }
  *((_DWORD *)v15 + 16) |= 4u;
  *((_DWORD *)v15 + 29) = v45;
  return result;
}
