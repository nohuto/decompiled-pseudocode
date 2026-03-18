/*
 * XREFs of EngTextOut @ 0x1400DA230
 * Callers:
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x140066E90 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x14030C4C0 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x14030E9F0 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1403224B0 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     NtGdiEngTextOut @ 0x14032EF00 (NtGdiEngTextOut.c)
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     vGetPosInfo @ 0x1400D9EC8 (vGetPosInfo.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1400D9F98 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400DA118 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     STROBJ_bEnum @ 0x1400DA160 (STROBJ_bEnum.c)
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1400DB1C4 (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x1400DB344 (--1FRINGERECT@@QEAA@XZ.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1400DBE60 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x14026BA50 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

BOOL __stdcall EngTextOut(
        SURFOBJ *pso,
        STROBJ *pstro,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *pboOpaque,
        POINTL *pptlOrg,
        MIX mix)
{
  BRUSHOBJ *v11; // rdi
  SURFOBJ *v12; // r14
  CLIPOBJ *v13; // rsi
  RFONTOBJ *v14; // rcx
  LONG left; // r10d
  int v16; // r11d
  LONG top; // eax
  LONG bottom; // r9d
  int v19; // r12d
  LONG right; // r15d
  unsigned int v21; // r13d
  struct _GLYPHPOS *pgp; // rsi
  int v23; // edx
  ULONG cGlyphs; // edi
  int pwszOrg; // eax
  int v26; // eax
  ULONG i; // r8d
  GLYPHBITS *pgb; // r9
  int v29; // r10d
  LONG v30; // r11d
  int v31; // r14d
  LONG v32; // eax
  int v33; // r13d
  signed __int16 *p_pvScan0; // r14
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  bool v40; // cf
  FLONG flFontType; // eax
  LONG v42; // ecx
  int v43; // r8d
  LONG v44; // edx
  unsigned int v45; // edi
  unsigned int v46; // r12d
  int v47; // r15d
  unsigned __int64 v48; // rcx
  _DWORD *v50; // rax
  _DWORD *v51; // rsi
  unsigned __int64 v52; // r8
  __int64 v53; // rcx
  FLONG flAccel; // edi
  int v55; // edx
  int v56; // ecx
  RECTL *v57; // r9
  int v58; // eax
  unsigned int iSolidColor; // r15d
  unsigned int v60; // eax
  unsigned __int64 v61; // rdx
  struct _RECTL si128; // xmm6
  RECTL *p_rclBkGround; // r9
  unsigned __int64 v64; // rdx
  struct _GLYPHPOS *v65; // r12
  ULONG v66; // r15d
  int v67; // r13d
  struct _GLYPHPOS *v68; // r8
  char v69; // di
  struct _FONTOBJ *v70; // r12
  __int64 v71; // rdx
  int v72; // edi
  LONG v73; // r12d
  unsigned int v74; // r15d
  bool v75; // zf
  int v76; // eax
  __int64 v77; // r8
  __int64 v78; // rdi
  LONG v79; // ecx
  LONG v80; // r11d
  LONG v81; // edx
  LONG v82; // r9d
  LONG v83; // r10d
  RECTL rclBkGround; // xmm0
  int v85; // ecx
  Gre::Base *v86; // rcx
  unsigned int v87; // eax
  __int64 v88; // rax
  struct Gre::Base::SESSION_GLOBALS *v89; // rax
  BOOL (__stdcall *v90)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  LONG v91; // ecx
  LONG v92; // edi
  LONG v93; // edx
  LONG v94; // edx
  LONG v95; // ecx
  LONG v96; // ecx
  __int64 v97; // rdi
  int v98; // eax
  __int64 v99; // rax
  unsigned int v100; // edi
  struct _GLYPHPOS *v101; // r14
  unsigned int GlyphData; // eax
  ULONG v103; // edx
  CLIPOBJ *v104; // rdi
  unsigned int v105; // esi
  unsigned int v106; // r13d
  int v107; // eax
  struct _FONTOBJ *v108; // rdx
  int v109; // edi
  LONG v110; // r9d
  __int64 v111; // rdx
  __int64 v112; // r8
  struct _GLYPHPOS **p_iDComplexity; // rcx
  struct _SURFOBJ *v114; // [rsp+28h] [rbp-100h]
  struct _XLATEOBJ *v115; // [rsp+38h] [rbp-F0h]
  struct _POINTL *v116; // [rsp+48h] [rbp-E0h]
  struct _RECTL *v117; // [rsp+50h] [rbp-D8h]
  struct _RECTL *v118; // [rsp+58h] [rbp-D0h]
  unsigned int v119; // [rsp+68h] [rbp-C0h]
  unsigned int v120; // [rsp+88h] [rbp-A0h]
  char v121; // [rsp+A8h] [rbp-80h]
  unsigned int v122; // [rsp+ACh] [rbp-7Ch] BYREF
  unsigned int v123; // [rsp+B0h] [rbp-78h]
  unsigned int v124; // [rsp+B4h] [rbp-74h]
  int v125; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v126; // [rsp+C0h] [rbp-68h] BYREF
  ULONG pc; // [rsp+C8h] [rbp-60h] BYREF
  int iDComplexity; // [rsp+CCh] [rbp-5Ch] BYREF
  struct _GLYPHPOS *v129; // [rsp+D0h] [rbp-58h] BYREF
  struct _FONTOBJ *v130; // [rsp+D8h] [rbp-50h]
  _DWORD *v131; // [rsp+E0h] [rbp-48h]
  CLIPOBJ *v132; // [rsp+E8h] [rbp-40h]
  struct _RECTL v133; // [rsp+F0h] [rbp-38h] BYREF
  PGLYPHPOS ppgpos; // [rsp+100h] [rbp-28h] BYREF
  struct _BRUSHOBJ *v135; // [rsp+108h] [rbp-20h]
  struct SURFACE *v136; // [rsp+110h] [rbp-18h]
  struct SURFACE *v137; // [rsp+118h] [rbp-10h] BYREF
  char v138; // [rsp+120h] [rbp-8h]
  int v139; // [rsp+124h] [rbp-4h]
  struct _POINTL *v140; // [rsp+128h] [rbp+0h]
  struct _BRUSHOBJ *v141; // [rsp+130h] [rbp+8h]
  struct SURFACE *v142; // [rsp+138h] [rbp+10h]
  RECTL *v143; // [rsp+140h] [rbp+18h]
  SURFOBJ *v144; // [rsp+148h] [rbp+20h]
  struct _RECTL *v145; // [rsp+150h] [rbp+28h]
  unsigned __int8 *v146; // [rsp+158h] [rbp+30h]
  __int128 v147; // [rsp+160h] [rbp+38h] BYREF
  __int128 v148; // [rsp+170h] [rbp+48h]
  int v149; // [rsp+188h] [rbp+60h] BYREF
  struct _RECTL v150[20]; // [rsp+18Ch] [rbp+64h] BYREF
  __int128 v151; // [rsp+2D8h] [rbp+1B0h] BYREF
  RECTL v152; // [rsp+2E8h] [rbp+1C0h] BYREF
  struct _RECTL rclBounds; // [rsp+2F8h] [rbp+1D0h] BYREF
  int v154; // [rsp+314h] [rbp+1ECh]
  int *p_bottom; // [rsp+330h] [rbp+208h] BYREF
  _QWORD v156[2]; // [rsp+338h] [rbp+210h] BYREF
  signed __int16 *v157; // [rsp+348h] [rbp+220h] BYREF
  __int64 v158; // [rsp+350h] [rbp+228h]
  CLIPOBJ *v159; // [rsp+358h] [rbp+230h]
  struct _BRUSHOBJ *v160; // [rsp+360h] [rbp+238h]
  int v161; // [rsp+368h] [rbp+240h]
  LONG v162; // [rsp+36Ch] [rbp+244h]
  LONG v163; // [rsp+370h] [rbp+248h]
  LONG v164; // [rsp+374h] [rbp+24Ch]
  _DWORD v165[14]; // [rsp+378h] [rbp+250h]
  struct _FONTOBJ *v166; // [rsp+3B0h] [rbp+288h]

  v11 = pboOpaque;
  v12 = pso;
  v143 = prclOpaque;
  v13 = pco;
  v141 = pboFore;
  v145 = prclExtra;
  v130 = pfo;
  v144 = pso;
  v140 = pptlOrg;
  v132 = pco;
  v135 = pboOpaque;
  memset_0(&v149, 0, 0x144uLL);
  left = pstro->rclBkGround.left;
  v16 = 0;
  top = pstro->rclBkGround.top;
  bottom = pstro->rclBkGround.bottom;
  v19 = 0;
  right = pstro->rclBkGround.right;
  v21 = 0;
  ppgpos = 0LL;
  pc = 0;
  v123 = 0;
  v151 = 0LL;
  v136 = 0LL;
  v152 = 0LL;
  v124 = left;
  v133.left = left;
  LODWORD(v131) = top;
  v133.top = top;
  v133.right = right;
  v125 = bottom;
  v133.bottom = bottom;
  if ( pstro->ulCharInc )
    goto LABEL_23;
  pgp = pstro->pgp;
  v23 = 0;
  cGlyphs = pstro->cGlyphs;
  v129 = pgp;
  v122 = cGlyphs;
  if ( !pgp )
  {
    *(_QWORD *)&pstro[1].cGlyphs = 0LL;
    v23 = 1;
  }
  if ( !v23 )
    goto LABEL_7;
  do
  {
    pwszOrg = (int)pstro[4].pwszOrg;
    if ( (pwszOrg & 0x1400) != 0 )
    {
      v26 = STROBJ_bEnumLinked((struct ESTROBJ *)pstro, &v122, &v129);
      pgp = v129;
      v23 = v26;
      cGlyphs = v122;
      v16 = 0;
    }
    else
    {
      cGlyphs = pstro->cGlyphs;
      if ( (pwszOrg & 2) != 0 )
      {
        pgp = *(struct _GLYPHPOS **)&pstro[1].rclBkGround.top;
        v23 = 0;
        v129 = pgp;
      }
      else
      {
        v99 = pstro[1].cGlyphs;
        v100 = cGlyphs - v99;
        if ( !v100
          || (v101 = (struct _GLYPHPOS *)(*(_QWORD *)&pstro[1].rclBkGround.top + 24 * v99),
              (v14 = *(RFONTOBJ **)&pstro[1].ulCharInc) == 0LL)
          || (GlyphData = RFONTOBJ::cGetGlyphData(v14, v100, v101), v16 = 0, (cGlyphs = GlyphData) == 0) )
        {
          cGlyphs = 0;
          v122 = 0;
          v23 = 0;
          goto LABEL_7;
        }
        v103 = pstro[1].cGlyphs;
        if ( v103 && pstro->ulCharInc )
          vGetPosInfo((__int64)pstro, v103, &v101->ptl);
        pstro[1].cGlyphs += cGlyphs;
        v23 = v16;
        pgp = v101;
        v40 = pstro[1].cGlyphs < pstro->cGlyphs;
        v129 = v101;
        LOBYTE(v23) = v40;
      }
      v122 = cGlyphs;
    }
LABEL_7:
    for ( i = v16; i < cGlyphs; ++i )
    {
      pgb = pgp[i].pgdf->pgb;
      if ( !pgb )
        goto LABEL_22;
      v29 = pgb->ptlOrigin.x + pgp[i].ptl.x;
      v30 = pgb->ptlOrigin.y + pgp[i].ptl.y;
      v31 = v29 + pgb->sizlBitmap.cx;
      v14 = (RFONTOBJ *)(unsigned int)(v30 + pgb->sizlBitmap.cy);
      if ( v124 == right || (v32 = (int)v131, (_DWORD)v131 == v125) )
      {
        v133.right = v29 + pgb->sizlBitmap.cx;
        v124 = v29;
        right = v31;
        v133.left = v29;
        LODWORD(v131) = v30;
        v133.top = v30;
LABEL_19:
        v133.bottom = (int)v14;
        v125 = (int)v14;
        continue;
      }
      v33 = v124;
      if ( v29 < (int)v124 )
        v33 = pgb->ptlOrigin.x + pgp[i].ptl.x;
      v124 = v33;
      if ( v30 < (int)v131 )
        v32 = v30;
      v124 = v33;
      v133.left = v33;
      v21 = v123;
      if ( v31 > right )
        right = v31;
      LODWORD(v131) = v32;
      v133.right = right;
      v133.top = v32;
      if ( (int)v14 > v125 )
        goto LABEL_19;
    }
    v16 = 0;
  }
  while ( v23 );
LABEL_22:
  v11 = v135;
  v13 = v132;
  v12 = v144;
LABEL_23:
  if ( v12 )
    p_pvScan0 = (signed __int16 *)&v12[-1].pvScan0;
  else
    p_pvScan0 = 0LL;
  v142 = (struct SURFACE *)p_pvScan0;
  if ( (v130->flFontType & 0x10000) != 0 )
  {
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v14);
    v36 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
    v37 = v36 + 8;
    v38 = -v36;
    v39 = (v37 & -(__int64)(v38 != 0)) != 0
        ? *(_QWORD *)((v37 & -(__int64)(v38 != 0)) + 0x120)
        : *((_QWORD *)p_pvScan0 + 13);
    v136 = v39 ? *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v39 + 48LL) + 2544LL) : (struct SURFACE *)p_pvScan0;
    v21 = p_pvScan0[50] != 0 ? 0x10 : 0;
    v40 = _bittest16(p_pvScan0 + 51, 8u);
    v123 = v21;
    if ( v40 )
    {
      v21 |= 0x80u;
      v123 = v21;
    }
  }
  flFontType = v130->flFontType;
  if ( (flFontType & 2) != 0 )
    return *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0);
  if ( v13 )
    iDComplexity = v13->iDComplexity;
  else
    iDComplexity = 0;
  v122 = -1;
  LODWORD(v129) = v141->iSolidColor;
  if ( (flFontType & 0x10000) == 0 )
  {
    v43 = 1;
    v19 = (int)(((pstro->rclBkGround.right + 32) & 0xFFFFFFE0) - (pstro->rclBkGround.left & 0xFFFFFFE0)) >> 3;
    goto LABEL_43;
  }
  if ( *((_DWORD *)p_pvScan0 + 24) == 3 && (!v11 || v11->iSolidColor == -1) )
    return *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0);
  v21 |= 8u;
  v123 = v21;
  if ( (flFontType & 0x10000000) == 0 )
  {
    if ( (flFontType & 0x20000000) != 0 )
    {
      v43 = 0;
    }
    else
    {
      v43 = 4;
      v19 = (((pstro->rclBkGround.right + 8) >> 1) & 0xFFFFFFFC) - ((pstro->rclBkGround.left >> 1) & 0xFFFFFFFC);
    }
    goto LABEL_43;
  }
  v42 = pstro->rclBkGround.right;
  v21 |= 0x20u;
  v123 = v21;
  v43 = 8;
  if ( v42 > 2147483643 )
    return *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0);
  v44 = pstro->rclBkGround.left;
  if ( (unsigned int)(v42 - v44 + 4) >= 0x7FFFFFFF )
    return *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0);
  v19 = ((v42 + 4) & 0xFFFFFFFC) - (v44 & 0xFFFFFFFC);
LABEL_43:
  v45 = ((v43 * (pstro->rclBkGround.left - v124) + 31) >> 3) & 0x1FFFFFFC;
  v46 = v45 + (((unsigned int)(v43 * (right - pstro->rclBkGround.right) + 31) >> 3) & 0x1FFFFFFC) + v19;
  v47 = (int)v131;
  v48 = v46 * (unsigned __int64)(unsigned int)(v125 - (_DWORD)v131);
  v124 = v46;
  v126 = v48;
  if ( v48 > 0xFFFFFFFF )
    return *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0);
  if ( (unsigned int)v48 >= 0x10000 )
  {
    v121 = 0;
    v50 = EngAllocUserMem((unsigned int)v48, 0x6F746547u);
  }
  else
  {
    v121 = 1;
    v50 = (_DWORD *)AllocThreadBufferWithTag(v48, 1869899079LL, 32LL);
  }
  v131 = v50;
  v51 = v50;
  if ( !v50 )
    return *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0);
  v52 = (unsigned int)pstro->rclBkGround.top;
  v53 = v45;
  flAccel = pstro->flAccel;
  v146 = (unsigned __int8 *)v50 + v46 * (pstro->rclBkGround.top - v47) + v53;
  if ( (flAccel & 0xA) == 2 )
  {
    v55 = 0;
    v56 = 0;
    if ( (flAccel & 0x51) == 0x51 )
      v56 = 4;
    LOBYTE(v55) = pstro->ulCharInc != 0;
    v21 |= ((flAccel & 0x11) != 17 ? 2 : 0) | v56 | v55;
    v123 = v21;
  }
  v157 = p_pvScan0;
  if ( p_pvScan0[50] )
    v158 = 0LL;
  else
    v158 = *((_QWORD *)p_pvScan0 + 9);
  v57 = v143;
  v58 = 0;
  v159 = v132;
  v160 = v135;
  v161 = 0;
  v166 = v130;
  if ( !v143 )
  {
    iSolidColor = v122;
    goto LABEL_58;
  }
  if ( !v135 )
  {
    if ( v121 )
      FreeThreadBufferWithTag(v51, v132, v52);
    else
      EngFreeUserMem(v51);
    v72 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v126, 0);
    goto LABEL_87;
  }
  iSolidColor = v135->iSolidColor;
  v122 = iSolidColor;
  if ( iSolidColor == -1 || (_DWORD)v129 == -1 )
  {
    EngTextOutBitBlt(
      (struct SURFACE *)p_pvScan0,
      v130,
      v21,
      (struct _SURFOBJ *)v143,
      v114,
      v132,
      v115,
      v143,
      v116,
      (struct _POINTL *)v117,
      v135,
      v140,
      v119);
  }
  else
  {
    v91 = v143->top;
    v92 = v143->right;
    if ( (int)v52 > v91 )
    {
      v162 = v143->left;
      v58 = 1;
      v161 = 1;
      v163 = v91;
      v164 = v92;
      v165[0] = v52;
    }
    v52 = (unsigned int)v143->left;
    v93 = pstro->rclBkGround.left;
    if ( v93 <= (int)v52 )
    {
      v94 = pstro->rclBkGround.bottom;
    }
    else
    {
      *(&v162 + 4 * v58) = v52;
      *(&v163 + 4 * v161) = pstro->rclBkGround.top;
      v165[4 * v161 - 1] = v93;
      v94 = pstro->rclBkGround.bottom;
      v165[4 * v161] = v94;
      v58 = ++v161;
    }
    v95 = pstro->rclBkGround.right;
    if ( v95 < v92 )
    {
      *(&v162 + 4 * v58) = v95;
      *(&v163 + 4 * v161) = pstro->rclBkGround.top;
      v165[4 * v161 - 1] = v92;
      v165[4 * v161] = v94;
      v58 = ++v161;
    }
    v96 = v57->bottom;
    if ( v94 < v96 )
    {
      *(&v162 + 4 * v58) = v52;
      *(&v163 + 4 * v161) = v94;
      v165[4 * v161 - 1] = v92;
      v165[4 * v161++] = v96;
    }
  }
LABEL_58:
  v137 = 0LL;
  v138 = 0;
  v135 = (struct _BRUSHOBJ *)EngCopyBits;
  v139 = 0;
  v147 = 0LL;
  v148 = 0LL;
  if ( (v21 & 0x10) != 0 )
  {
    v73 = pstro->rclBkGround.top;
    LODWORD(v147) = *((_DWORD *)p_pvScan0 + 24);
    v74 = pstro->rclBkGround.left & ((v21 >> 3) & 4 | 0xFFFFFFF8);
    DWORD1(v147) = pstro->rclBkGround.right - v74;
    v75 = (*((_DWORD *)p_pvScan0 + 28) & 0x40000) == 0;
    DWORD2(v147) = pstro->rclBkGround.bottom - v73;
    v76 = 1;
    if ( !v75 )
      v76 = 262145;
    *(_QWORD *)&v148 = 0LL;
    DWORD2(v148) = v76;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v137, (struct _DEVBITMAPINFO *)&v147, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
    {
      v78 = *((_QWORD *)p_pvScan0 + 6);
      v79 = 0;
      v80 = 0;
      v142 = v137;
      if ( p_pvScan0 == *(signed __int16 **)(v78 + 2544) && (*(_DWORD *)(v78 + 40) & 0x20000) != 0 )
      {
        v79 = *(_DWORD *)(v78 + 2576);
        v80 = *(_DWORD *)(v78 + 2580);
      }
      v81 = pstro->rclBkGround.left;
      v82 = pstro->rclBkGround.top;
      if ( v79 > v81 )
        v81 = v79;
      v52 = (unsigned int)pstro->rclBkGround.right;
      v83 = pstro->rclBkGround.bottom;
      rclBkGround = pstro->rclBkGround;
      if ( v80 > v82 )
        v82 = v80;
      *(_QWORD *)&v151 = __PAIR64__(v82, v81);
      v85 = v144->sizlBitmap.cx + v79;
      v152 = rclBkGround;
      if ( v85 < (int)v52 )
        v52 = (unsigned int)v85;
      v86 = (Gre::Base *)(unsigned int)(v80 + v144->sizlBitmap.cy);
      DWORD2(v151) = v52;
      if ( (int)v86 < v83 )
        v83 = (int)v86;
      HIDWORD(v151) = v83;
      if ( !iDComplexity )
        goto LABEL_106;
      if ( (unsigned int)bIntersect(&v151, &v132->rclBounds) )
      {
        v83 = HIDWORD(v151);
        v52 = DWORD2(v151);
        v82 = DWORD1(v151);
        v81 = v151;
LABEL_106:
        v87 = v81 - v74;
        v152.right = DWORD2(v151) - v74;
        v152.top = DWORD1(v151) - v73;
        v152.bottom = HIDWORD(v151) - v73;
        iSolidColor = v122;
        v152.left = v87;
        if ( v122 == -1 && v81 < (int)v52 && v82 < v83 )
        {
          *(_QWORD *)&rclBounds.left = 0LL;
          p_bottom = &rclBounds.bottom;
          v156[0] = v130;
          v88 = *((_QWORD *)p_pvScan0 + 6);
          rclBounds.right = 0;
          if ( v88 && (*(_DWORD *)(v88 + 40) & 0x8000) != 0 )
            rclBounds.left = UMPDReleaseRFONTSem(
                               (struct RFONTOBJ *)v156,
                               0LL,
                               (unsigned int *)&rclBounds.top,
                               (unsigned int *)&rclBounds.right,
                               (void **)&p_bottom);
          v89 = Gre::Base::Globals(v86);
          if ( (*((_DWORD *)p_pvScan0 + 28) & 0x400) != 0 )
            v90 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v78 + 2832);
          else
            v90 = EngCopyBits;
          ((void (__fastcall *)(unsigned __int64, signed __int16 *, _QWORD, char *, RECTL *, __int128 *))v90)(
            ((unsigned __int64)v137 + 24) & -(__int64)(v137 != 0LL),
            p_pvScan0 + 12,
            0LL,
            (char *)v89 + 4664,
            &v152,
            &v151);
          UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)&rclBounds);
        }
        goto LABEL_59;
      }
      if ( v121 )
        FreeThreadBufferWithTag(v51, v111, v112);
      else
        EngFreeUserMem(v51);
      p_iDComplexity = (struct _GLYPHPOS **)&iDComplexity;
    }
    else
    {
      if ( v121 )
        FreeThreadBufferWithTag(v51, 0LL, v77);
      else
        EngFreeUserMem(v51);
      p_iDComplexity = &v129;
    }
    v72 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(p_iDComplexity, 0);
    SURFMEM::~SURFMEM((SURFMEM *)&v137);
LABEL_87:
    FRINGERECT::~FRINGERECT((FRINGERECT *)&v157);
    return v72;
  }
LABEL_59:
  v60 = v126;
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
  if ( iSolidColor != -1 )
  {
    v52 = (unsigned __int64)v51;
    v61 = (unsigned __int64)v60 >> 2;
    if ( v61 )
    {
      if ( ((unsigned __int8)v51 & 4) != 0 )
      {
        *v51 = 0;
        if ( --v61 )
        {
          v52 = (unsigned __int64)(v51 + 1);
          goto LABEL_62;
        }
      }
      else
      {
LABEL_62:
        memset((void *)v52, 0, 8 * (v61 >> 1));
        v60 = v126;
        if ( (v61 & 1) != 0 )
          *(_DWORD *)(v52 + 4 * v61 - 4) = 0;
      }
    }
  }
  si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  p_rclBkGround = &pstro->rclBkGround;
  while ( 2 )
  {
    if ( iSolidColor == -1 )
    {
      v52 = (unsigned __int64)v51;
      v64 = (unsigned __int64)v60 >> 2;
      if ( v64 )
      {
        if ( ((unsigned __int8)v51 & 4) != 0 )
        {
          *v51 = 0;
          if ( --v64 )
          {
            v52 = (unsigned __int64)(v51 + 1);
            goto LABEL_68;
          }
        }
        else
        {
LABEL_68:
          memset((void *)v52, 0, 8 * (v64 >> 1));
          if ( (v64 & 1) != 0 )
            *(_DWORD *)(v52 + 4 * v64 - 4) = 0;
        }
      }
    }
    v65 = pstro->pgp;
    if ( v65 )
    {
      v66 = pstro->cGlyphs;
      v67 = 0;
      pc = pstro->cGlyphs;
      ppgpos = v65;
      v125 = 0;
    }
    else
    {
      if ( ((__int64)pstro[4].pwszOrg & 2) != 0 )
        v98 = STROBJ_bEnum(pstro, &pc, &ppgpos);
      else
        v98 = STROBJ_bEnumCheckBounds(pstro, &pc, &ppgpos, &v133);
      v66 = pc;
      p_rclBkGround = &pstro->rclBkGround;
      v65 = ppgpos;
      v125 = v98;
      v67 = v98;
    }
    if ( !v66 )
      goto LABEL_157;
    rclBounds = si128;
    v154 = 0;
    if ( !iDComplexity )
      goto LABEL_74;
    if ( iDComplexity != 1 )
    {
      if ( iDComplexity == 3 )
      {
        v104 = v132;
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)v132, 0, 0, 4u, 0);
        v105 = v124;
        v106 = v123;
        do
        {
          v107 = XCLIPOBJ::bEnum((XCLIPOBJ *)v104, 0x134u, &v149, 0LL);
          v108 = v130;
          v109 = v107;
          v150[v149].bottom = v110;
          vExpandAndCopyText(
            (struct SURFACE *)p_pvScan0,
            v108,
            v65,
            v66,
            v146,
            v105,
            pstro->ulCharInc,
            v142,
            v136,
            &pstro->rclBkGround,
            v118,
            (int)v129,
            v122,
            v106,
            v150,
            v145,
            v120,
            v141,
            v140);
          v75 = v109 == 0;
          v104 = v132;
        }
        while ( !v75 );
        v51 = v131;
        v67 = v125;
      }
LABEL_157:
      v69 = v123;
      v70 = v130;
      goto LABEL_75;
    }
    rclBounds = v132->rclBounds;
LABEL_74:
    v68 = v65;
    v69 = v123;
    v70 = v130;
    vExpandAndCopyText(
      (struct SURFACE *)p_pvScan0,
      v130,
      v68,
      v66,
      v146,
      v124,
      pstro->ulCharInc,
      v142,
      v136,
      p_rclBkGround,
      v118,
      (int)v129,
      v122,
      v123,
      &rclBounds,
      v145,
      v120,
      v141,
      v140);
LABEL_75:
    v60 = v126;
    p_rclBkGround = &pstro->rclBkGround;
    iSolidColor = v122;
    v71 = 0xFFFFFFFFLL;
    if ( v67 )
      continue;
    break;
  }
  if ( (v69 & 0x10) != 0 )
  {
    v97 = *((_QWORD *)p_pvScan0 + 6);
    *(_QWORD *)&rclBounds.left = 0LL;
    rclBounds.right = 0;
    p_bottom = &rclBounds.bottom;
    v156[0] = v70;
    if ( v97 && (*(_DWORD *)(v97 + 40) & 0x8000) != 0 )
      rclBounds.left = UMPDReleaseRFONTSem(
                         (struct RFONTOBJ *)v156,
                         0LL,
                         (unsigned int *)&rclBounds.top,
                         (unsigned int *)&rclBounds.right,
                         (void **)&p_bottom);
    if ( (*((_DWORD *)p_pvScan0 + 28) & 0x400) != 0 )
      v135 = *(struct _BRUSHOBJ **)(v97 + 2832);
    ((void (__fastcall *)(signed __int16 *, unsigned __int64, CLIPOBJ *, _QWORD, __int128 *, RECTL *))v135)(
      p_pvScan0 + 12,
      ((unsigned __int64)v137 + 24) & -(__int64)(v137 != 0LL),
      v132,
      0LL,
      &v151,
      &v152);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)&rclBounds);
  }
  if ( v121 )
    FreeThreadBufferWithTag(v51, v71, v52);
  else
    EngFreeUserMem(v51);
  SURFMEM::~SURFMEM((SURFMEM *)&v137);
  FRINGERECT::~FRINGERECT((FRINGERECT *)&v157);
  return 1;
}
