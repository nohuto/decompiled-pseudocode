/*
 * XREFs of ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C00231E0
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00225B0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C002AD38 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002AF58 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C002CC74 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C002CFD8 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C002D03C (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C002D088 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002E94C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C00FF8E0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 */

struct _GLYPHDATA *__fastcall ESTROBJ::vCharPos_H3(
        struct ESTROBJ *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int16 *a10)
{
  int v10; // r10d
  int v11; // edi
  unsigned int v12; // r11d
  __int64 v13; // rax
  struct ESTROBJ *v14; // rsi
  struct _GLYPHPOS *v15; // r13
  signed int v16; // ebp
  unsigned __int16 *v17; // rdx
  int v18; // r9d
  LONG *p_y; // r11
  int *v20; // rax
  int *p_ptl; // rbx
  int v22; // r10d
  unsigned __int16 *v23; // r14
  __int64 v24; // r12
  struct _GLYPHPOS *v25; // r15
  __int64 v26; // r8
  _DWORD *v27; // r13
  struct GPRUN *v28; // r13
  int v29; // esi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r12
  struct _GLYPHDATA **v33; // rdx
  struct _GLYPHDATA *v34; // rsi
  int v35; // r12d
  struct _GLYPHDATA **v36; // r13
  __int64 v37; // rax
  struct XDCOBJ *v38; // r15
  unsigned int v39; // r8d
  signed int v40; // r14d
  int v41; // r11d
  _DWORD *v42; // rcx
  int v43; // eax
  unsigned int v44; // ecx
  struct _GLYPHDATA *v45; // rax
  struct _GLYPHDATA *result; // rax
  int LowPart; // ecx
  struct GPRUN *Run; // rax
  __int64 v49; // rsi
  int v50; // edx
  int v51; // edx
  __m128i v52; // xmm1
  __int64 v53; // rcx
  int v54; // r8d
  char v55; // al
  unsigned int v56; // edx
  int v57; // ecx
  int v58; // eax
  struct _GLYPHPOS *v59; // r8
  int v60; // [rsp+40h] [rbp-78h] BYREF
  int v61; // [rsp+44h] [rbp-74h]
  LONG *v62; // [rsp+50h] [rbp-68h]
  unsigned __int16 *v63; // [rsp+58h] [rbp-60h]
  struct _GLYPHPOS *v64; // [rsp+60h] [rbp-58h]
  RFONTOBJ *v67; // [rsp+D0h] [rbp+18h]
  int v69; // [rsp+D8h] [rbp+20h]
  unsigned int v70; // [rsp+E0h] [rbp+28h]

  v67 = a3;
  v10 = a6;
  v11 = 0;
  v12 = a7;
  v61 = 0;
  v13 = *(_QWORD *)a3;
  v14 = a1;
  if ( a7 | a6 )
  {
    v52 = (__m128i)a9;
    v53 = *(_DWORD *)(v13 + 268) & 0x40 | 2u;
    *((_DWORD *)v14 + 1) |= v53;
    if ( v10 )
    {
      v60 = 0;
      bFToL(v53, &v60, 0LL);
      v54 = v60;
      *((_DWORD *)v14 + 31) = v60;
      if ( v54 > 0 )
        *((_DWORD *)v14 + 1) |= 0x800u;
    }
    v55 = bCalcBreakExtra((unsigned int)_mm_cvtsi128_si32(v52), v12, a8, (char *)v14 + 128);
    a3 = v67;
    if ( v55 )
    {
      v56 = *((_DWORD *)v14 + 31);
      v57 = *(_DWORD *)(*(_QWORD *)v67 + 464LL);
      if ( (int)(v57 + v56 + *((_DWORD *)v14 + 32)) < 0 )
        *((_DWORD *)v14 + 32) = -(v56 + v57);
      v58 = *(_DWORD *)(*(_QWORD *)v67 + 460LL);
      *((_DWORD *)v14 + 1) |= 0x1000u;
      v61 = v58;
    }
  }
  else
  {
    *((_DWORD *)a1 + 1) |= *(_DWORD *)(v13 + 268) & 0x71 | 2;
  }
  v15 = (struct _GLYPHPOS *)*((_QWORD *)v14 + 9);
  v16 = 0;
  v17 = (unsigned __int16 *)*((_QWORD *)v14 + 5);
  v18 = a4 + 8;
  p_y = &v15->ptl.y;
  v15->ptl.x = (a4 + 8) >> 4;
  v20 = (int *)a10;
  p_ptl = (int *)&v15->ptl;
  v22 = (int)(a5 + 8) >> 4;
  v64 = v15;
  v63 = v17;
  v69 = a4 + 8;
  a7 = v22;
  v62 = &v15->ptl.y;
  v15->ptl.y = v22;
  if ( v20 )
  {
    v35 = *v20;
LABEL_14:
    v36 = (struct _GLYPHDATA **)v67;
    if ( !v35 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v23 = v17;
  v24 = *(unsigned int *)v14;
  v25 = v15;
  v70 = *(_DWORD *)v14;
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 480LL) )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bAllocateCache(a3, (struct RFONTOBJ *)v17);
    if ( !(_DWORD)result )
      return result;
    v18 = v69;
    v17 = v23;
    v22 = a7;
    p_y = v62;
    a3 = v67;
  }
  v26 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(v26 + 96) + 1848LL) & 0x40000000) == 0 || *(_DWORD *)(v26 + 72) != 1 )
  {
    v27 = *(_DWORD **)(v26 + 480);
    a6 = 1;
    if ( *v27 )
    {
      v28 = (struct GPRUN *)(v27 + 4);
      a10 = &v17[v24];
      if ( v17 < a10 )
      {
        while ( 1 )
        {
          v29 = *v23;
          v30 = (unsigned int)(v29 - *(_DWORD *)v28);
          if ( (unsigned int)v30 >= *((_DWORD *)v28 + 1) )
          {
            Run = RFONTOBJ::gprunFindRun(v67, v29);
            v28 = Run;
            v49 = (unsigned int)(v29 - *(_DWORD *)Run);
            if ( (unsigned int)v49 >= *((_DWORD *)Run + 1) )
            {
              result = RFONTOBJ::wpgdGetLinkMetricsPlus(v67, a2, a1, v23, v63, v70, &a6, 1);
              v34 = result;
              if ( !result )
                return result;
              goto LABEL_11;
            }
            _mm_lfence();
            v31 = *((_QWORD *)Run + 1);
            v32 = 8 * v49;
          }
          else
          {
            _mm_lfence();
            v31 = *((_QWORD *)v28 + 1);
            v32 = 8 * v30;
          }
          v33 = (struct _GLYPHDATA **)(v32 + v31);
          v34 = *v33;
          if ( !*v33 )
          {
            result = (struct _GLYPHDATA *)RFONTOBJ::bInsertMetricsPlus(v67, v33, *v23);
            if ( !(_DWORD)result )
              return result;
            v34 = *(struct _GLYPHDATA **)(v32 + *((_QWORD *)v28 + 1));
          }
LABEL_11:
          v35 = a6;
          if ( !v34->gdf.pgb
            && a6
            && *(_DWORD *)(*(_QWORD *)v67 + 72LL)
            && !(unsigned int)RFONTOBJ::bInsertGlyphbits(v67, v34, v23 == v63) )
          {
            v35 = 0;
            a6 = 0;
          }
          ++v23;
          v25->hg = v34->hg;
          v25->pgdf = &v34->gdf;
          ++v25;
          if ( v23 >= a10 )
          {
            v14 = a1;
            v18 = v69;
            v22 = a7;
            p_y = v62;
            goto LABEL_14;
          }
        }
      }
      v36 = (struct _GLYPHDATA **)v67;
    }
    else
    {
      v36 = (struct _GLYPHDATA **)v67;
      if ( (_DWORD)v24 )
      {
        do
        {
          v25->hg = *(_DWORD *)(*(_QWORD *)v67 + 456LL);
          v25->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(v67);
          ++v25;
          LODWORD(v24) = v24 - 1;
        }
        while ( (_DWORD)v24 );
        v18 = v69;
        v22 = a7;
        p_y = v62;
      }
    }
LABEL_15:
    v37 = *((_QWORD *)v14 + 9);
    *((_DWORD *)v14 + 16) |= 2u;
    *((_QWORD *)v14 + 4) = v37;
LABEL_16:
    v38 = a2;
    goto LABEL_17;
  }
  v38 = a2;
  v59 = v15;
  v36 = (struct _GLYPHDATA **)v67;
  result = (struct _GLYPHDATA *)RFONTOBJ::bGetGlyphMetrics(v67, v24, v59, v17, a2, v14);
  if ( !(_DWORD)result )
    return result;
  v18 = v69;
  v22 = a7;
  p_y = v62;
LABEL_17:
  if ( (*((_BYTE *)v14 + 4) & 0x30) != 0x30 || (v50 = *((_DWORD *)v14 + 31), v50 < 0) || *((_DWORD *)v14 + 32) )
  {
    v39 = *(_DWORD *)v14;
    v40 = 0;
    v41 = v61;
    while ( 1 )
    {
      v42 = (_DWORD *)*((_QWORD *)p_ptl - 1);
      if ( v11 + v42[4] < v40 )
        v40 = v11 + v42[4];
      if ( v11 + v42[5] > v16 )
        v16 = v11 + v42[5];
      v43 = v42[3];
      v11 += v43;
      v44 = *((_DWORD *)v14 + 31);
      if ( v44 && (int)(v44 + v43) > 0 )
        v11 += v44;
      if ( *(p_ptl - 4) == v41 )
        v11 += *((_DWORD *)v14 + 32);
      if ( !--v39 )
        break;
      p_ptl += 6;
      p_ptl[1] = v22;
      *p_ptl = (v11 + v18) >> 4;
    }
    if ( v11 > v16 )
      v16 = v11;
  }
  else
  {
    v11 = v50 + HIDWORD(v64->pgdf[1].ppo);
    v51 = *(_DWORD *)v14 - 1;
    if ( *(_DWORD *)v14 != 1 )
    {
      do
      {
        p_y[6] = v22;
        p_y += 6;
        *(p_y - 1) = (v11 + v18) >> 4;
        v11 += *((_DWORD *)v14 + 31) + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
        --v51;
      }
      while ( v51 );
    }
    v40 = 0;
    v16 = v11;
  }
  *((_DWORD *)v14 + 30) = v11;
  *((_DWORD *)v14 + 22) = v11;
  *((_DWORD *)v14 + 23) = 0;
  *((_DWORD *)v14 + 26) = v40;
  *((_DWORD *)v14 + 28) = v16;
  v45 = *v36;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38 + 80LL) + 352LL) & 0x40) != 0 )
  {
    *((_DWORD *)v14 + 27) = -v45[4].ptqD.y.LowPart;
    result = *v36;
    LowPart = -(*v36)[4].ptqD.x.HighPart;
  }
  else
  {
    *((_DWORD *)v14 + 27) = v45[4].ptqD.x.HighPart;
    result = *v36;
    LowPart = (*v36)[4].ptqD.y.LowPart;
  }
  *((_DWORD *)v14 + 16) |= 4u;
  *((_DWORD *)v14 + 29) = LowPart;
  return result;
}
