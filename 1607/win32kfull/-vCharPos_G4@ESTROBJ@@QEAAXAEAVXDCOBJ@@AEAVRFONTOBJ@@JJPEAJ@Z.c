/*
 * XREFs of ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02B9254
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0031964 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E8C8 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C0144DE8 (-bIs16@EFLOAT@@QEAAHXZ.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02B9670 (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G4(ESTROBJ *this, struct XDCOBJ *a2, struct RFONTOBJ *a3, LONG a4, LONG a5, int *a6)
{
  __int64 v6; // r10
  unsigned int v7; // r12d
  __int64 v11; // xmm1_8
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  _BOOL8 v16; // rdi
  BOOL v17; // eax
  struct _GLYPHPOS *v18; // r8
  unsigned __int16 *v19; // r9
  int v20; // r15d
  __int64 v21; // r10
  POINTL *p_ptl; // r13
  int v23; // r14d
  struct RFONTOBJ *v24; // rdx
  RFONTOBJ *v25; // r11
  _DWORD *v26; // rdi
  int v27; // ebx
  int v28; // r8d
  float v29; // xmm5_4
  int v30; // edx
  int v31; // eax
  int v32; // r8d
  float v33; // xmm5_4
  int v34; // edx
  int v35; // eax
  int v36; // ecx
  signed int v37; // eax
  char v38; // r8
  int v39; // r11d
  float v40; // xmm5_4
  float v41; // xmm5_4
  int v42; // ecx
  char v43; // r8
  char v44; // r8
  char v45; // r8
  int v46; // r11d
  int v47; // eax
  int *v48; // r11
  int v49; // ecx
  float v50; // eax
  int v51; // ecx
  int v52; // eax
  char v53; // r8
  float v54; // xmm2_4
  char v55; // r8
  char v56; // r8
  int v57; // ecx
  __int128 v58; // xmm0
  int v59; // [rsp+48h] [rbp-89h] BYREF
  int v60; // [rsp+4Ch] [rbp-85h] BYREF
  float v61; // [rsp+50h] [rbp-81h] BYREF
  int v62; // [rsp+54h] [rbp-7Dh]
  int v63; // [rsp+58h] [rbp-79h]
  int v64; // [rsp+5Ch] [rbp-75h]
  int v65; // [rsp+60h] [rbp-71h]
  signed int v66; // [rsp+64h] [rbp-6Dh]
  __int64 v67; // [rsp+68h] [rbp-69h]
  __int64 v68; // [rsp+70h] [rbp-61h]
  __int128 v69; // [rsp+78h] [rbp-59h]
  float v70; // [rsp+88h] [rbp-49h] BYREF
  float v71; // [rsp+8Ch] [rbp-45h] BYREF
  int v72; // [rsp+90h] [rbp-41h] BYREF
  int v73; // [rsp+94h] [rbp-3Dh]
  BOOL v74; // [rsp+98h] [rbp-39h]
  _BOOL8 v75; // [rsp+A0h] [rbp-31h]
  float v76; // [rsp+138h] [rbp+67h] BYREF
  LONG v77; // [rsp+140h] [rbp+6Fh]

  v77 = a4;
  v6 = *(_QWORD *)a3;
  v7 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 652LL) )
  {
    v11 = *(_QWORD *)(v6 + 412);
    v12 = *(float *)(v6 + 448);
    v13 = *(float *)(v6 + 452);
    v14 = *(float *)(v6 + 440);
    v15 = *(float *)(v6 + 420);
    v67 = *(_QWORD *)(v6 + 432);
    v68 = v11;
    v70 = v12;
    v71 = v13;
    v76 = v14;
    v61 = v15;
    v16 = EFLOAT::bIs16((EFLOAT *)&v76);
    v17 = EFLOAT::bIs16((EFLOAT *)&v61);
    v18 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
    v19 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v74 = v17;
    v20 = 0;
    v63 = *(_DWORD *)(v21 + 308);
    p_ptl = &v18->ptl;
    v73 = *(_DWORD *)(v21 + 312);
    v18->ptl.y = a5;
    v18->ptl.x = a4;
    v23 = 0;
    v65 = 0x7FFFFFFF;
    LODWORD(v69) = 0x7FFFFFFF;
    v66 = 0x80000000;
    v64 = 0x80000000;
    *(_QWORD *)((char *)&v69 + 4) = 0x8000000080000000uLL;
    v24 = (struct RFONTOBJ *)*(unsigned int *)this;
    v62 = 0x7FFFFFFF;
    HIDWORD(v69) = 0x7FFFFFFF;
    v76 = 0.0;
    v61 = 0.0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(v25, v24, v18, v19, &v59, a2, this) )
    {
      if ( v59 )
      {
        *((_DWORD *)this + 16) |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 9);
      }
      if ( *(_DWORD *)this )
      {
        v75 = v16;
        do
        {
          v26 = (_DWORD *)p_ptl[-1];
          v27 = v26[3];
          vGenWidths(&v72, &v59, (struct EFLOAT *)&v71, (struct EFLOAT *)&v70, v27, v26[6], v26[7], v63);
          v60 = 0;
          bFToL((float)(v72 + v20) * v13, &v60, 0);
          v30 = v62;
          if ( v23 + v60 + v73 < v62 )
            v30 = v23 + v60 + v73;
          v31 = v64;
          v62 = v30;
          HIDWORD(v69) = v30;
          if ( v63 + v23 + v60 > v64 )
            v31 = v63 + v23 + v60;
          v60 &= v28;
          v64 = v31;
          DWORD1(v69) = v31;
          bFToL(v29 * v12, &v60, v28);
          v34 = v60 - v27 / (v32 + 2);
          v35 = v65;
          if ( v34 + v26[4] - 4 < v65 )
            v35 = v34 + v26[4] - 4;
          v36 = v26[5] + v34 + 4;
          v65 = v35;
          LODWORD(v69) = v35;
          v37 = v66;
          if ( v36 > v66 )
            v37 = v36;
          v59 = 0;
          v66 = v37;
          DWORD2(v69) = v37;
          bFToL(v33 * *(float *)&v67, &v59, v32);
          v60 = 0;
          bFToL((float)v23 * *(float *)&v68, &v60, v38);
          v41 = v40 * *((float *)&v67 + 1);
          v42 = v60 - v26[13] / v39;
          v60 = 0;
          p_ptl->x = v77 + v59 + v42;
          bFToL(v41, &v60, v43);
          v59 = 0;
          bFToL((float)v23 * *((float *)&v68 + 1), &v59, v44);
          v47 = v26[15] / v46;
          v48 = a6;
          v49 = v59 - v47;
          v50 = v61;
          p_ptl->y = a5 + v60 + v49;
          v51 = v48[1] + LODWORD(v76);
          v52 = *v48 + LODWORD(v50);
          v61 = *(float *)&v52;
          v76 = *(float *)&v51;
          if ( v75 )
          {
            v20 = 16 * v52;
          }
          else
          {
            v59 = 0;
            bFToL((float)v52 * v14, &v59, v45);
            *(float *)&v51 = v76;
            v20 = v59;
          }
          if ( v74 )
          {
            v23 = 16 * v51;
          }
          else
          {
            v59 = 0;
            bFToL((float)v51 * v15, &v59, 0);
            v23 = v59;
          }
          ++v7;
          p_ptl += 3;
          a6 = v48 + 2;
        }
        while ( v7 < *(_DWORD *)this );
      }
      v76 = 0.0;
      bFToL((float)v20 * *(float *)&v67, &v76, 0);
      v61 = 0.0;
      bFToL((float)v23 * *(float *)&v68, &v61, v53);
      v54 = (float)v20 * *((float *)&v67 + 1);
      *((_DWORD *)this + 22) = LODWORD(v76) + LODWORD(v61);
      v76 = 0.0;
      bFToL(v54, &v76, v55);
      v61 = 0.0;
      bFToL((float)v23 * *((float *)&v68 + 1), &v61, v56);
      v57 = LODWORD(v76) + LODWORD(v61);
      v58 = v69;
      *((_DWORD *)this + 16) |= 4u;
      *((_DWORD *)this + 23) = v57;
      *(_OWORD *)((char *)this + 104) = v58;
    }
  }
}
