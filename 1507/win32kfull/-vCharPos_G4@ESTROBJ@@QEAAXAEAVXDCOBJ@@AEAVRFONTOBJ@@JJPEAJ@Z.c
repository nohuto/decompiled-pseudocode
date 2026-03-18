/*
 * XREFs of ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02B6C50
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00225B0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002B178 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C00328E0 (-bIs16@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02B7068 (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
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
  __int64 v26; // rax
  _DWORD *v27; // rdi
  int v28; // ebx
  int v29; // r8d
  float v30; // xmm5_4
  int v31; // edx
  int v32; // eax
  char v33; // r8
  float v34; // xmm5_4
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  signed int v38; // eax
  char v39; // r8
  float v40; // xmm5_4
  float v41; // xmm5_4
  char v42; // r8
  char v43; // r8
  char v44; // r8
  int *v45; // r11
  float v46; // eax
  int v47; // ecx
  int v48; // eax
  char v49; // r8
  float v50; // xmm2_4
  char v51; // r8
  char v52; // r8
  int v53; // ecx
  __int128 v54; // xmm0
  int v55; // [rsp+48h] [rbp-89h] BYREF
  int v56; // [rsp+4Ch] [rbp-85h] BYREF
  float v57; // [rsp+50h] [rbp-81h] BYREF
  signed int v58; // [rsp+54h] [rbp-7Dh]
  int v59; // [rsp+58h] [rbp-79h]
  int v60; // [rsp+5Ch] [rbp-75h]
  int v61; // [rsp+60h] [rbp-71h]
  int v62; // [rsp+64h] [rbp-6Dh]
  __int64 v63; // [rsp+68h] [rbp-69h]
  __int64 v64; // [rsp+70h] [rbp-61h]
  __int128 v65; // [rsp+78h] [rbp-59h]
  float v66; // [rsp+88h] [rbp-49h] BYREF
  int v67; // [rsp+8Ch] [rbp-45h] BYREF
  BOOL v68; // [rsp+90h] [rbp-41h]
  int v69; // [rsp+94h] [rbp-3Dh]
  float v70; // [rsp+98h] [rbp-39h] BYREF
  _BOOL8 v71; // [rsp+A0h] [rbp-31h]
  float v72; // [rsp+138h] [rbp+67h] BYREF
  LONG v73; // [rsp+140h] [rbp+6Fh]

  v73 = a4;
  v6 = *(_QWORD *)a3;
  v7 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 652LL) )
  {
    v11 = *(_QWORD *)(v6 + 412);
    v12 = *(float *)(v6 + 448);
    v13 = *(float *)(v6 + 452);
    v14 = *(float *)(v6 + 440);
    v15 = *(float *)(v6 + 420);
    v63 = *(_QWORD *)(v6 + 432);
    v64 = v11;
    v66 = v12;
    v70 = v13;
    v72 = v14;
    v57 = v15;
    v16 = EFLOAT::bIs16((EFLOAT *)&v72);
    v17 = EFLOAT::bIs16((EFLOAT *)&v57);
    v18 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
    v19 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v68 = v17;
    v20 = 0;
    v59 = *(_DWORD *)(v21 + 308);
    p_ptl = &v18->ptl;
    v69 = *(_DWORD *)(v21 + 312);
    v18->ptl.y = a5;
    v18->ptl.x = a4;
    v23 = 0;
    v60 = 0x7FFFFFFF;
    LODWORD(v65) = 0x7FFFFFFF;
    v58 = 0x80000000;
    v61 = 0x80000000;
    *(_QWORD *)((char *)&v65 + 4) = 0x8000000080000000uLL;
    v24 = (struct RFONTOBJ *)*(unsigned int *)this;
    v62 = 0x7FFFFFFF;
    HIDWORD(v65) = 0x7FFFFFFF;
    v72 = 0.0;
    v57 = 0.0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(v25, v24, v18, v19, &v55, a2, this) )
    {
      if ( v55 )
      {
        v26 = *((_QWORD *)this + 9);
        *((_DWORD *)this + 16) |= 2u;
        *((_QWORD *)this + 4) = v26;
      }
      if ( *(_DWORD *)this )
      {
        v71 = v16;
        do
        {
          v27 = (_DWORD *)p_ptl[-1];
          v28 = v27[3];
          vGenWidths(&v67, &v55, (struct EFLOAT *)&v70, (struct EFLOAT *)&v66, v28, v27[6], v27[7], v59);
          v56 = 0;
          bFToL((float)(v67 + v20) * v13, &v56, 0);
          v31 = v62;
          if ( v23 + v56 + v69 < v62 )
            v31 = v23 + v56 + v69;
          v32 = v61;
          v62 = v31;
          HIDWORD(v65) = v31;
          if ( v59 + v23 + v56 > v61 )
            v32 = v59 + v23 + v56;
          v56 &= v29;
          v61 = v32;
          DWORD1(v65) = v32;
          bFToL(v30 * v12, &v56, v29);
          v35 = v56 - v28 / 2;
          v36 = v60;
          if ( v35 + v27[4] - 4 < v60 )
            v36 = v35 + v27[4] - 4;
          v37 = v27[5] + v35 + 4;
          v60 = v36;
          LODWORD(v65) = v36;
          v38 = v58;
          if ( v37 > v58 )
            v38 = v37;
          v55 = 0;
          v58 = v38;
          DWORD2(v65) = v38;
          bFToL(v34 * *(float *)&v63, &v55, v33);
          v56 = 0;
          bFToL((float)v23 * *(float *)&v64, &v56, v39);
          v41 = v40 * *((float *)&v63 + 1);
          p_ptl->x = v73 + v55 + v56 - v27[13] / 2;
          v56 = 0;
          bFToL(v41, &v56, v42);
          v55 = 0;
          bFToL((float)v23 * *((float *)&v64 + 1), &v55, v43);
          v45 = a6;
          v46 = v57;
          p_ptl->y = a5 + v56 + v55 - v27[15] / 2;
          v47 = v45[1] + LODWORD(v72);
          v48 = *v45 + LODWORD(v46);
          v57 = *(float *)&v48;
          v72 = *(float *)&v47;
          if ( v71 )
          {
            v20 = 16 * v48;
          }
          else
          {
            v55 = 0;
            bFToL((float)v48 * v14, &v55, v44);
            *(float *)&v47 = v72;
            v20 = v55;
          }
          if ( v68 )
          {
            v23 = 16 * v47;
          }
          else
          {
            v55 = 0;
            bFToL((float)v47 * v15, &v55, 0);
            v23 = v55;
          }
          ++v7;
          p_ptl += 3;
          a6 = v45 + 2;
        }
        while ( v7 < *(_DWORD *)this );
      }
      v72 = 0.0;
      bFToL((float)v20 * *(float *)&v63, &v72, 0);
      v57 = 0.0;
      bFToL((float)v23 * *(float *)&v64, &v57, v49);
      v50 = (float)v20 * *((float *)&v63 + 1);
      *((_DWORD *)this + 22) = LODWORD(v72) + LODWORD(v57);
      v72 = 0.0;
      bFToL(v50, &v72, v51);
      v57 = 0.0;
      bFToL((float)v23 * *((float *)&v64 + 1), &v57, v52);
      v53 = LODWORD(v72) + LODWORD(v57);
      v54 = v65;
      *((_DWORD *)this + 16) |= 4u;
      *((_DWORD *)this + 23) = v53;
      *(_OWORD *)((char *)this + 104) = v54;
    }
  }
}
