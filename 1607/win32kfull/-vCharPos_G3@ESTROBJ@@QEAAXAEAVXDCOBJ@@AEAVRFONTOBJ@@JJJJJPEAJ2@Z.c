/*
 * XREFs of ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C02B8D94
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0031964 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E8C8 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C012D2F4 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02B9670 (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
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
  BOOL v33; // eax
  int *v34; // rdi
  int v35; // r15d
  char v36; // r8
  int v37; // r11d
  float v38; // xmm5_4
  int v39; // ecx
  signed int v40; // eax
  signed int v41; // ecx
  float v42; // xmm5_4
  __int64 v43; // r11
  int v44; // edx
  int v45; // ecx
  signed int v46; // ecx
  __int64 v47; // r11
  int v48; // r8d
  float v49; // xmm5_4
  float v50; // xmm5_4
  int v51; // eax
  int v52; // ecx
  int v53; // r8d
  __int64 v54; // r11
  int v55; // r11d
  int v56; // r11d
  int v57; // eax
  int v58; // edx
  float v59; // xmm1_4
  int v60; // r8d
  __int128 v61; // xmm0
  int v62; // edx
  int v63; // [rsp+30h] [rbp-B1h]
  int v64; // [rsp+38h] [rbp-A9h]
  int v65; // [rsp+48h] [rbp-99h] BYREF
  int v66; // [rsp+4Ch] [rbp-95h] BYREF
  int v67; // [rsp+50h] [rbp-91h] BYREF
  int v68; // [rsp+54h] [rbp-8Dh]
  float v69; // [rsp+58h] [rbp-89h] BYREF
  float v70; // [rsp+5Ch] [rbp-85h] BYREF
  int v71; // [rsp+60h] [rbp-81h]
  int v72; // [rsp+64h] [rbp-7Dh]
  signed int v73; // [rsp+68h] [rbp-79h]
  int v74; // [rsp+6Ch] [rbp-75h]
  __int128 v75; // [rsp+70h] [rbp-71h]
  __int64 v76; // [rsp+80h] [rbp-61h]
  int v77; // [rsp+88h] [rbp-59h]
  int v78; // [rsp+8Ch] [rbp-55h]
  _DWORD *v79; // [rsp+90h] [rbp-51h]
  __int64 v80; // [rsp+98h] [rbp-49h]
  int v82; // [rsp+138h] [rbp+57h] BYREF
  LONG v83; // [rsp+140h] [rbp+5Fh]

  v83 = a4;
  v13 = *(_QWORD *)a3;
  if ( *(_DWORD *)(*(_QWORD *)a3 + 652LL) )
    return;
  v14 = a9;
  v15 = *(float *)(v13 + 448);
  v16 = *(float *)(v13 + 452);
  v17 = *(_DWORD *)(v13 + 308);
  v18 = *(float *)(v13 + 440);
  v19 = *(float *)(v13 + 444);
  v76 = *(_QWORD *)(v13 + 432);
  v69 = v15;
  v70 = v16;
  v72 = v17;
  if ( a9 )
  {
    v24 = v82;
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
    v82 = 0;
    bFToL((float)v21 * *(float *)(v22 + 440), &v82, 0);
    *((_DWORD *)this + 31) = v82;
  }
  if ( bCalcBreakExtra(*(_DWORD *)(*(_QWORD *)a3 + 440LL), a7, a8) )
  {
    vGenWidths(
      &v67,
      &v82,
      (struct EFLOAT *)&v70,
      (struct EFLOAT *)&v69,
      *(_DWORD *)(*(_QWORD *)a3 + 464LL),
      v17,
      0,
      v17);
    v23 = *((_DWORD *)this + 31);
    if ( v82 + v67 + v23 + *v20 < 0 )
      *v20 = -(v82 + v23 + v67);
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
  v74 = 0;
  *(_QWORD *)&v75 = 0x800000007FFFFFFFuLL;
  v77 = *(_DWORD *)(v31 + 312);
  v73 = 0x80000000;
  v71 = 0x7FFFFFFF;
  *((_QWORD *)&v75 + 1) = 0x7FFFFFFF80000000LL;
  if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v32, v25, v27, &v66, a2, this) )
  {
    if ( v66 )
    {
      *((_DWORD *)this + 16) |= 2u;
      *((_QWORD *)this + 4) = *((_QWORD *)this + 9);
    }
    v33 = (*(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x10) != 0 && (*((_DWORD *)this + 16) & 0x1400) == 0;
    v66 = 0;
    if ( *(_DWORD *)this )
    {
      v34 = a10;
      v80 = v33;
      while ( 1 )
      {
        v79 = (_DWORD *)p_ptl[-1];
        v64 = v79[7];
        v63 = v79[6];
        v78 = v79[3];
        vGenWidths(&v67, &v82, (struct EFLOAT *)&v70, (struct EFLOAT *)&v69, v78, v63, v64, v72);
        v35 = v67 + v30;
        v65 = 0;
        bFToL((float)v35 * v16, &v65, 0);
        v39 = v71;
        if ( v65 + v77 < v71 )
          v39 = v65 + v77;
        v40 = v65 + v72;
        v71 = v39;
        HIDWORD(v75) = v39;
        v41 = v73;
        v65 = v37;
        if ( v40 > v73 )
          v41 = v40;
        v73 = v41;
        DWORD1(v75) = v41;
        bFToL(v38 * v15, &v65, v36);
        v44 = v65 - v78 / ((int)v43 + 2);
        if ( v80 == v43 )
        {
          if ( v44 + v79[4] - 4 < v28 )
            v28 = v44 + v79[4] - 4;
          v45 = v79[5] + 4;
          LODWORD(v75) = v28;
          v46 = v44 + v45;
          if ( v46 > v26 )
            v26 = v46;
          DWORD2(v75) = v26;
        }
        else
        {
          if ( v44 - 4 < v28 )
            v28 = v44 - 4;
          LODWORD(v75) = v28;
          if ( v44 + v78 + 4 > v26 )
          {
            v26 = v44 + v78 + 4;
            DWORD2(v75) = v26;
          }
        }
        v65 = 0;
        bFToL(v42 * *(float *)&v76, &v65, 0);
        v50 = v49 * *((float *)&v76 + 1);
        v51 = *(_DWORD *)(v47 + 52) / (v48 + 2);
        v52 = v65;
        v65 &= v48;
        p_ptl->x = v83 + v52 - v51;
        bFToL(v50, &v65, v48);
        p_ptl->y = a5 + v65 - *(_DWORD *)(v54 + 60) / (v53 + 2);
        if ( !v14 )
          break;
        v55 = *v14++ + v74;
        v65 &= v53;
        v74 = v55;
        bFToL((float)v55 * v18, &v65, v53);
        v30 = v65;
        if ( v34 )
        {
          *v34 = v56;
LABEL_42:
          ++v34;
        }
LABEL_43:
        p_ptl += 3;
        if ( (unsigned int)++v66 >= *(_DWORD *)this )
          goto LABEL_44;
      }
      v30 = v82 + *((_DWORD *)this + 31) + v35;
      v57 = *((_DWORD *)this + 32);
      if ( v57 )
      {
        if ( p_ptl[-2].x == v68 )
          v30 += v57;
      }
      if ( !v34 )
        goto LABEL_43;
      v65 &= v53;
      bFToL((float)v30 * v19, &v65, v53);
      *v34 = v65;
      goto LABEL_42;
    }
LABEL_44:
    v82 = 0;
    bFToL((float)v30 * *(float *)&v76, &v82, 0);
    v58 = v82;
    v59 = (float)v30 * *((float *)&v76 + 1);
    v82 &= v60;
    *((_DWORD *)this + 22) = v58;
    bFToL(v59, &v82, v60);
    v61 = v75;
    v62 = v82;
    *((_DWORD *)this + 16) |= 4u;
    *(_OWORD *)((char *)this + 104) = v61;
    *((_DWORD *)this + 23) = v62;
  }
}
