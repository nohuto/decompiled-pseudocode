/*
 * XREFs of ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0023650
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
 */

struct _GLYPHDATA *__fastcall ESTROBJ::vCharPos_H1(
        unsigned int *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        _DWORD *a6,
        float a7)
{
  float v8; // xmm0_4
  struct _GLYPHPOS *v10; // r14
  unsigned __int16 *v11; // r12
  int v12; // r10d
  __int64 v13; // rax
  unsigned __int16 *v14; // rdi
  __int64 v15; // rbx
  struct _GLYPHPOS *v16; // rsi
  __int64 v17; // r8
  _DWORD *v18; // rbp
  struct GPRUN *v19; // rbp
  unsigned __int16 *v20; // r15
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r14
  struct _GLYPHDATA **v25; // rdx
  struct _GLYPHDATA *v26; // rbx
  __int64 v27; // rax
  LONG *p_y; // r11
  int v29; // r9d
  RFONTOBJ *v30; // r8
  int v31; // r15d
  signed int v32; // r12d
  int v33; // esi
  int v34; // r15d
  int v35; // ebx
  int v36; // edx
  __int64 v37; // rax
  unsigned int v38; // ebp
  _DWORD *v39; // rdi
  __int64 v40; // rcx
  struct XDCOBJ *v41; // rax
  RFONTOBJ *v42; // r8
  struct _GLYPHDATA *result; // rax
  int v44; // ecx
  unsigned int v45; // ebp
  _DWORD *v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rcx
  RFONTOBJ *v49; // r14
  struct GPRUN *Run; // rax
  __int64 v51; // rbx
  RFONTOBJ *v52; // rdx
  int v53; // [rsp+44h] [rbp-64h] BYREF
  int v54; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v55; // [rsp+4Ch] [rbp-5Ch]
  struct _GLYPHPOS *v56; // [rsp+50h] [rbp-58h]
  int v57; // [rsp+B0h] [rbp+8h] BYREF
  struct XDCOBJ *v58; // [rsp+B8h] [rbp+10h]
  RFONTOBJ *v59; // [rsp+C0h] [rbp+18h]
  int v60; // [rsp+C8h] [rbp+20h]

  v60 = a4;
  v59 = a3;
  v58 = a2;
  v8 = a7;
  v11 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v12 = *(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x40;
  v56 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 9);
  v10 = v56;
  a1[1] |= v12 | 2;
  v13 = *(_QWORD *)a3;
  v14 = v11;
  v15 = *a1;
  v16 = v10;
  v55 = *a1;
  if ( !*(_QWORD *)(v13 + 480) )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bAllocateCache(a3, a2);
    if ( !(_DWORD)result )
      return result;
    a2 = v58;
  }
  v17 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 96LL) + 1848LL) & 0x40000000) != 0 && *(_DWORD *)(v17 + 72) == 1 )
  {
    result = (struct _GLYPHDATA *)RFONTOBJ::bGetGlyphMetrics(a3, v15, v10, v11, a2, (struct ESTROBJ *)a1);
    if ( (_DWORD)result )
      goto LABEL_12;
    return result;
  }
  v18 = *(_DWORD **)(v17 + 480);
  v57 = 1;
  if ( *v18 )
  {
    v19 = (struct GPRUN *)(v18 + 4);
    v20 = &v11[v15];
    if ( v11 >= v20 )
      goto LABEL_11;
    while ( 1 )
    {
      v21 = *v14;
      v22 = (unsigned int)(v21 - *(_DWORD *)v19);
      if ( (unsigned int)v22 >= *((_DWORD *)v19 + 1) )
      {
        v49 = v59;
        Run = RFONTOBJ::gprunFindRun(v59, v21);
        v19 = Run;
        v51 = (unsigned int)(v21 - *(_DWORD *)Run);
        if ( (unsigned int)v51 >= *((_DWORD *)Run + 1) )
        {
          result = RFONTOBJ::wpgdGetLinkMetricsPlus(v49, v58, (struct ESTROBJ *)a1, v14, v11, v55, &v57, 1);
          v26 = result;
          if ( !result )
            return result;
          goto LABEL_8;
        }
        _mm_lfence();
        v23 = *((_QWORD *)Run + 1);
        v24 = 8 * v51;
      }
      else
      {
        _mm_lfence();
        v23 = *((_QWORD *)v19 + 1);
        v24 = 8 * v22;
      }
      v25 = (struct _GLYPHDATA **)(v24 + v23);
      v26 = *v25;
      if ( !*v25 )
      {
        result = (struct _GLYPHDATA *)RFONTOBJ::bInsertMetricsPlus(v59, v25, *v14);
        if ( !(_DWORD)result )
          return result;
        v26 = *(struct _GLYPHDATA **)(v24 + *((_QWORD *)v19 + 1));
      }
LABEL_8:
      if ( !v26->gdf.pgb
        && v57
        && *(_DWORD *)(*(_QWORD *)v59 + 72LL)
        && !(unsigned int)RFONTOBJ::bInsertGlyphbits(v59, v26, v14 == v11) )
      {
        v57 = 0;
      }
      ++v14;
      v16->hg = v26->hg;
      v16->pgdf = &v26->gdf;
      ++v16;
      if ( v14 >= v20 )
      {
        v10 = v56;
        if ( v57 )
          goto LABEL_11;
        goto LABEL_12;
      }
    }
  }
  for ( ; (_DWORD)v15; LODWORD(v15) = v15 - 1 )
  {
    v16->hg = *(_DWORD *)(*(_QWORD *)a3 + 456LL);
    v16->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a3);
    ++v16;
  }
LABEL_11:
  v27 = *((_QWORD *)a1 + 9);
  a1[16] |= 2u;
  *((_QWORD *)a1 + 4) = v27;
LABEL_12:
  p_y = &v10->ptl.y;
  v29 = v60 + 8;
  v30 = v59;
  v31 = a5 + 8;
  v10->ptl.x = (v60 + 8) >> 4;
  v32 = 0;
  v33 = 0;
  v34 = v31 >> 4;
  v35 = 0;
  v10->ptl.y = v34;
  v36 = 0;
  v37 = *(_QWORD *)v30;
  v60 = v29;
  if ( (*(_DWORD *)(v37 + 268) & 0x10) == 0 || (a1[16] & 0x1400) != 0 )
  {
    v45 = *a1;
    v46 = a6;
    while ( 1 )
    {
      v47 = *(_QWORD *)(p_y - 3);
      if ( v36 + *(_DWORD *)(v47 + 16) < v32 )
        v32 = v36 + *(_DWORD *)(v47 + 16);
      v48 = (unsigned int)(v36 + *(_DWORD *)(v47 + 20));
      if ( (int)v48 > v33 )
        v33 = v48;
      v35 += *v46++;
      if ( v8 == 16.0 )
      {
        v36 = 16 * v35;
      }
      else
      {
        v54 = 0;
        bFToL(v48, &v54, 0LL);
        v29 = v60;
        v36 = v54;
      }
      if ( !--v45 )
        break;
      p_y += 6;
      *p_y = v34;
      *(p_y - 1) = (v36 + v29) >> 4;
    }
  }
  else
  {
    v38 = *a1;
    v39 = a6;
    while ( 1 )
    {
      if ( v36 < v32 )
        v32 = v36;
      v40 = (unsigned int)(v36 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL));
      if ( (int)v40 > v33 )
        v33 = v36 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
      v35 += *v39++;
      if ( v8 == 16.0 )
      {
        v36 = 16 * v35;
      }
      else
      {
        v53 = 0;
        bFToL(v40, &v53, 0LL);
        v29 = v60;
        v36 = v53;
      }
      if ( !--v38 )
        break;
      p_y += 6;
      *p_y = v34;
      *(p_y - 1) = (v36 + v29) >> 4;
    }
  }
  v41 = v58;
  a1[22] = v36;
  a1[23] = 0;
  if ( v36 > v33 )
    v33 = v36;
  a1[28] = v33;
  a1[26] = v32;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v41 + 80LL) + 352LL) & 0x40) != 0 )
  {
    v52 = v59;
    a1[27] = -*(_DWORD *)(*(_QWORD *)v59 + 312LL);
    result = *(struct _GLYPHDATA **)v52;
    v44 = -*(_DWORD *)(*(_QWORD *)v52 + 308LL);
  }
  else
  {
    v42 = v59;
    a1[27] = *(_DWORD *)(*(_QWORD *)v59 + 308LL);
    result = *(struct _GLYPHDATA **)v42;
    v44 = *(_DWORD *)(*(_QWORD *)v42 + 312LL);
  }
  a1[16] |= 4u;
  a1[29] = v44;
  return result;
}
