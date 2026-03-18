/*
 * XREFs of ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C02B5BAC
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0028490 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00238E4 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C010BF20 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02B647C (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G3(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        int a7,
        int a8,
        int *a9,
        int *a10)
{
  __int64 v13; // rax
  int *v14; // r13
  float v15; // xmm6_4
  float v16; // xmm7_4
  int v17; // r14d
  float v18; // xmm8_4
  float v19; // xmm9_4
  _DWORD *v20; // rsi
  int v21; // ecx
  __int64 v22; // rax
  int v23; // edx
  int v24; // eax
  struct _GLYPHPOS *v25; // r8
  signed int v26; // r14d
  unsigned __int16 *v27; // r9
  int v28; // esi
  POINTL *p_ptl; // r12
  int v30; // r15d
  __int64 v31; // rax
  struct RFONTOBJ *v32; // rdx
  __int64 v33; // rax
  BOOL v34; // eax
  int *v35; // rdi
  int v36; // r15d
  char v37; // r8
  int v38; // r11d
  float v39; // xmm5_4
  int v40; // ecx
  signed int v41; // eax
  signed int v42; // ecx
  float v43; // xmm5_4
  int v44; // edx
  __int64 v45; // r11
  int v46; // ecx
  signed int v47; // ecx
  __int64 v48; // r11
  int v49; // ecx
  float v50; // xmm5_4
  float v51; // xmm5_4
  int v52; // kr04_4
  int v53; // r8d
  int v54; // r8d
  __int64 v55; // r11
  int v56; // r11d
  int v57; // r11d
  int v58; // eax
  int v59; // edx
  float v60; // xmm1_4
  int v61; // r8d
  __int128 v62; // xmm0
  int v63; // edx
  int v64; // [rsp+30h] [rbp-B1h]
  int v65; // [rsp+38h] [rbp-A9h]
  int v66; // [rsp+48h] [rbp-99h] BYREF
  int v67; // [rsp+4Ch] [rbp-95h] BYREF
  int v68; // [rsp+50h] [rbp-91h]
  int v69; // [rsp+54h] [rbp-8Dh] BYREF
  signed int v70; // [rsp+58h] [rbp-89h]
  int v71; // [rsp+5Ch] [rbp-85h]
  float v72; // [rsp+60h] [rbp-81h] BYREF
  int v73; // [rsp+64h] [rbp-7Dh]
  int v74; // [rsp+68h] [rbp-79h]
  float v75; // [rsp+6Ch] [rbp-75h] BYREF
  __int128 v76; // [rsp+70h] [rbp-71h]
  __int64 v77; // [rsp+80h] [rbp-61h]
  int v78; // [rsp+88h] [rbp-59h]
  int v79; // [rsp+8Ch] [rbp-55h]
  _DWORD *v80; // [rsp+90h] [rbp-51h]
  __int64 v81; // [rsp+98h] [rbp-49h]
  int v83; // [rsp+138h] [rbp+57h] BYREF
  LONG v84; // [rsp+140h] [rbp+5Fh]

  v84 = a4;
  v13 = *(_QWORD *)a3;
  if ( *(_DWORD *)(*(_QWORD *)a3 + 652LL) )
    return;
  v14 = a9;
  v15 = *(float *)(v13 + 448);
  v16 = *(float *)(v13 + 452);
  v17 = *(_DWORD *)(v13 + 308);
  v18 = *(float *)(v13 + 440);
  v19 = *(float *)(v13 + 444);
  v77 = *(_QWORD *)(v13 + 432);
  v75 = v15;
  v72 = v16;
  v73 = v17;
  if ( a9 )
  {
    v24 = v83;
LABEL_10:
    v68 = v24;
    goto LABEL_11;
  }
  v20 = (_DWORD *)((char *)this + 128);
  *((_DWORD *)this + 31) = 0;
  v21 = a6;
  *v20 = 0;
  v68 = 0;
  if ( v21 )
  {
    v22 = *(_QWORD *)a3;
    v83 = 0;
    bFToL((float)v21 * *(float *)(v22 + 440), &v83, 0);
    *((_DWORD *)this + 31) = v83;
  }
  if ( bCalcBreakExtra(*(unsigned int *)(*(_QWORD *)a3 + 440LL), a7, a8) )
  {
    vGenWidths(
      &v69,
      &v83,
      (struct EFLOAT *)&v72,
      (struct EFLOAT *)&v75,
      *(_DWORD *)(*(_QWORD *)a3 + 464LL),
      v17,
      0,
      v17);
    v23 = *((_DWORD *)this + 31);
    if ( v83 + v69 + v23 + *v20 < 0 )
      *v20 = -(v83 + v23 + v69);
    v24 = *(_DWORD *)(*(_QWORD *)a3 + 460LL);
    goto LABEL_10;
  }
LABEL_11:
  v25 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
  v26 = 0x80000000;
  v27 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v28 = 0x7FFFFFFF;
  v25->ptl.y = a5;
  p_ptl = &v25->ptl;
  v25->ptl.x = a4;
  v30 = 0;
  v31 = *(_QWORD *)a3;
  v32 = (struct RFONTOBJ *)*(unsigned int *)this;
  v71 = 0;
  *(_QWORD *)&v76 = 0x800000007FFFFFFFuLL;
  v78 = *(_DWORD *)(v31 + 312);
  v70 = 0x80000000;
  v74 = 0x7FFFFFFF;
  *((_QWORD *)&v76 + 1) = 0x7FFFFFFF80000000LL;
  if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v32, v25, v27, &v67, a2, this) )
  {
    if ( v67 )
    {
      v33 = *((_QWORD *)this + 9);
      *((_DWORD *)this + 16) |= 2u;
      *((_QWORD *)this + 4) = v33;
    }
    v34 = (*(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x10) != 0 && (*((_DWORD *)this + 16) & 0x1400) == 0;
    v67 = 0;
    if ( *(_DWORD *)this )
    {
      v35 = a10;
      v81 = v34;
      while ( 1 )
      {
        v80 = (_DWORD *)p_ptl[-1];
        v65 = v80[7];
        v64 = v80[6];
        v79 = v80[3];
        vGenWidths(&v69, &v83, (struct EFLOAT *)&v72, (struct EFLOAT *)&v75, v79, v64, v65, v73);
        v36 = v69 + v30;
        v66 = 0;
        bFToL((float)v36 * v16, &v66, 0);
        v40 = v74;
        if ( v66 + v78 < v74 )
          v40 = v66 + v78;
        v41 = v66 + v73;
        v74 = v40;
        HIDWORD(v76) = v40;
        v42 = v70;
        v66 = v38;
        if ( v41 > v70 )
          v42 = v41;
        v70 = v42;
        DWORD1(v76) = v42;
        bFToL(v39 * v15, &v66, v37);
        v44 = v66 - v79 / 2;
        if ( v81 == v45 )
        {
          if ( v44 + v80[4] - 4 < v28 )
            v28 = v44 + v80[4] - 4;
          v46 = v80[5] + 4;
          LODWORD(v76) = v28;
          v47 = v44 + v46;
          if ( v47 > v26 )
            v26 = v47;
          DWORD2(v76) = v26;
        }
        else
        {
          if ( v44 - 4 < v28 )
            v28 = v44 - 4;
          LODWORD(v76) = v28;
          if ( v44 + v79 + 4 > v26 )
          {
            v26 = v44 + v79 + 4;
            DWORD2(v76) = v26;
          }
        }
        v66 = 0;
        bFToL(v43 * *(float *)&v77, &v66, 0);
        v49 = v66;
        v51 = v50 * *((float *)&v77 + 1);
        v52 = *(_DWORD *)(v48 + 52);
        v66 &= v53;
        p_ptl->x = v84 + v49 - v52 / 2;
        bFToL(v51, &v66, v53);
        p_ptl->y = a5 + v66 - *(_DWORD *)(v55 + 60) / 2;
        if ( !v14 )
          break;
        v56 = *v14++ + v71;
        v66 &= v54;
        v71 = v56;
        bFToL((float)v56 * v18, &v66, v54);
        v30 = v66;
        if ( v35 )
        {
          *v35 = v57;
LABEL_42:
          ++v35;
        }
LABEL_43:
        p_ptl += 3;
        if ( (unsigned int)++v67 >= *(_DWORD *)this )
          goto LABEL_44;
      }
      v30 = v83 + *((_DWORD *)this + 31) + v36;
      v58 = *((_DWORD *)this + 32);
      if ( v58 )
      {
        if ( p_ptl[-2].x == v68 )
          v30 += v58;
      }
      if ( !v35 )
        goto LABEL_43;
      v66 &= v54;
      bFToL((float)v30 * v19, &v66, v54);
      *v35 = v66;
      goto LABEL_42;
    }
LABEL_44:
    v83 = 0;
    bFToL((float)v30 * *(float *)&v77, &v83, 0);
    v59 = v83;
    v60 = (float)v30 * *((float *)&v77 + 1);
    v83 &= v61;
    *((_DWORD *)this + 22) = v59;
    bFToL(v60, &v83, v61);
    v62 = v76;
    v63 = v83;
    *((_DWORD *)this + 16) |= 4u;
    *(_OWORD *)((char *)this + 104) = v62;
    *((_DWORD *)this + 23) = v63;
  }
}
