/*
 * XREFs of EngTextOut @ 0x1C0032E10
 * Callers:
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02879D0 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C028C250 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C028EAF0 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02973D0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     NtGdiEngTextOut @ 0x1C02AF9F0 (NtGdiEngTextOut.c)
 * Callees:
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C000AC70 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C00337F0 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0033E1C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00418B4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0047FD0 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C006807C (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     STROBJ_bEnum @ 0x1C01288F0 (STROBJ_bEnum.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C0158BE8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C0158C3C (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?bInEngCall@UMPDOBJ@@QEAA_NXZ @ 0x1C0257EC0 (-bInEngCall@UMPDOBJ@@QEAA_NXZ.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C027FF58 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
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
  bool v10; // zf
  STROBJ *v11; // r12
  LONG bottom; // eax
  GLYPHPOS *pgp; // r12
  int v14; // r13d
  unsigned int cGlyphs; // r11d
  STROBJ *v16; // rax
  LONG v17; // ebx
  LONG right; // r14d
  LONG top; // esi
  LONG left; // r15d
  __int64 v21; // r8
  GLYPHPOS *v22; // r9
  GLYPHBITS *pgb; // rax
  LONG v24; // edi
  LONG v25; // edx
  LONG v26; // r10d
  LONG v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r13
  __int64 *ThreadWin32Thread; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // ecx
  FLONG flFontType; // eax
  int v37; // ecx
  FLONG v38; // eax
  int v39; // edx
  LONG v40; // ecx
  unsigned int v41; // ebx
  unsigned int v42; // edi
  unsigned int v43; // r15d
  unsigned int v44; // ebx
  int v45; // r14d
  _DWORD *v46; // rax
  _BOOL8 v47; // rdx
  __int64 v48; // r9
  _DWORD *v49; // r12
  STROBJ *v50; // r11
  FLONG flAccel; // ecx
  unsigned int v52; // r15d
  struct _BRUSHOBJ *v53; // rsi
  struct _FONTOBJ *v54; // rdi
  __int64 *v55; // rax
  struct _SURFOBJ *v56; // r9
  __int64 v57; // rax
  _QWORD *v58; // rax
  ULONG v59; // esi
  RECTL *v60; // r14
  LONG v61; // r8d
  LONG v62; // edx
  int v63; // eax
  LONG v64; // ecx
  struct _RECTL *v65; // r10
  LONG v66; // r9d
  LONG v67; // ecx
  LONG v68; // edi
  LONG v69; // ecx
  LONG v70; // edx
  void *v71; // r8
  unsigned __int64 v72; // rdx
  ULONG v73; // r15d
  struct _GLYPHPOS *v74; // rsi
  unsigned int v75; // r14d
  struct _GLYPHPOS *v76; // r8
  struct _FONTOBJ *v77; // rsi
  BOOL v78; // r14d
  bool v79; // sf
  int v80; // eax
  void *v82; // r8
  unsigned __int64 v83; // rdx
  LONG v84; // eax
  unsigned int v85; // ecx
  unsigned int v86; // ecx
  unsigned int v87; // eax
  BOOL v88; // eax
  ULONG v89; // eax
  UMPDOBJ *v90; // rcx
  unsigned int v91; // r14d
  LONG v92; // ecx
  int v93; // eax
  int v94; // eax
  __int64 v95; // rdi
  LONG v96; // ecx
  LONG v97; // r10d
  LONG v98; // edx
  LONG v99; // r9d
  LONG v100; // r8d
  int v101; // ecx
  LONG v102; // ecx
  LONG v103; // r10d
  int v104; // eax
  BOOL (__stdcall *v105)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  __int64 v106; // rcx
  CLIPOBJ *v107; // rdi
  unsigned __int8 *v108; // r12
  int v109; // ebx
  int v110; // eax
  struct _FONTOBJ *v111; // rdx
  int v112; // edi
  __int64 v113; // rdi
  int v114; // eax
  BOOL (__stdcall *v115)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  __int64 v116; // rdx
  int v117; // eax
  char *v118; // rbx
  int (*v119)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rsi
  _DWORD *i; // rdi
  unsigned __int8 *v121; // [rsp+20h] [rbp-100h]
  struct _XLATEOBJ *v122; // [rsp+30h] [rbp-F0h]
  struct _POINTL *v123; // [rsp+40h] [rbp-E0h]
  struct _RECTL *v124; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v125; // [rsp+50h] [rbp-D0h]
  unsigned int v126; // [rsp+60h] [rbp-C0h]
  unsigned int v127; // [rsp+80h] [rbp-A0h]
  int v128; // [rsp+A0h] [rbp-80h]
  ULONG pc; // [rsp+A4h] [rbp-7Ch] BYREF
  int v130; // [rsp+A8h] [rbp-78h]
  unsigned int v131; // [rsp+ACh] [rbp-74h]
  STROBJ *pstroa; // [rsp+B0h] [rbp-70h]
  struct _RECTL v133; // [rsp+C0h] [rbp-60h] BYREF
  struct _FONTOBJ *v134; // [rsp+D0h] [rbp-50h]
  ULONG v135; // [rsp+D8h] [rbp-48h] BYREF
  CLIPOBJ *v136; // [rsp+E0h] [rbp-40h]
  int iDComplexity; // [rsp+E8h] [rbp-38h]
  int iSolidColor; // [rsp+ECh] [rbp-34h]
  struct _BRUSHOBJ *v139; // [rsp+F0h] [rbp-30h]
  struct _RECTL v140; // [rsp+100h] [rbp-20h] BYREF
  RECTL *v141; // [rsp+110h] [rbp-10h]
  PGLYPHPOS v142; // [rsp+118h] [rbp-8h] BYREF
  struct SURFACE *v143; // [rsp+120h] [rbp+0h]
  struct _RECTL *p_rclBkGround; // [rsp+128h] [rbp+8h]
  struct _POINTL *v145; // [rsp+130h] [rbp+10h]
  struct _BRUSHOBJ *v146; // [rsp+138h] [rbp+18h]
  struct SURFACE *v147; // [rsp+140h] [rbp+20h]
  struct _RECTL v148; // [rsp+150h] [rbp+30h] BYREF
  unsigned int v149; // [rsp+160h] [rbp+40h]
  SURFOBJ *v150; // [rsp+168h] [rbp+48h]
  unsigned __int8 *v151; // [rsp+170h] [rbp+50h]
  PGLYPHPOS ppgpos; // [rsp+178h] [rbp+58h] BYREF
  _DWORD *v153; // [rsp+180h] [rbp+60h]
  struct _RECTL *v154; // [rsp+188h] [rbp+68h]
  int v155; // [rsp+190h] [rbp+70h] BYREF
  __int64 v156; // [rsp+194h] [rbp+74h]
  __int128 v157; // [rsp+19Ch] [rbp+7Ch]
  int v158; // [rsp+1ACh] [rbp+8Ch]
  int v159; // [rsp+1B0h] [rbp+90h] BYREF
  struct _RECTL v160[20]; // [rsp+1B4h] [rbp+94h] BYREF
  LONG v161; // [rsp+300h] [rbp+1E0h] BYREF
  LONG v162; // [rsp+304h] [rbp+1E4h]
  LONG v163; // [rsp+308h] [rbp+1E8h]
  LONG v164; // [rsp+30Ch] [rbp+1ECh]
  struct _RECTL v165; // [rsp+310h] [rbp+1F0h] BYREF
  SURFACE *v166; // [rsp+320h] [rbp+200h]
  __int64 v167; // [rsp+328h] [rbp+208h]
  struct _CLIPOBJ *v168; // [rsp+330h] [rbp+210h]
  struct _BRUSHOBJ *v169; // [rsp+338h] [rbp+218h]
  int v170; // [rsp+340h] [rbp+220h]
  _DWORD v171[17]; // [rsp+344h] [rbp+224h] BYREF
  struct _FONTOBJ *v172; // [rsp+388h] [rbp+268h]
  _BYTE v173[80]; // [rsp+390h] [rbp+270h] BYREF
  _BYTE v174[80]; // [rsp+3E0h] [rbp+2C0h] BYREF
  _BYTE v175[80]; // [rsp+430h] [rbp+310h] BYREF
  struct _RECTL si128; // [rsp+480h] [rbp+360h] BYREF
  int v177; // [rsp+49Ch] [rbp+37Ch]

  v10 = pstro->ulCharInc == 0;
  v11 = pstro;
  v154 = prclExtra;
  v141 = prclOpaque;
  v146 = pboFore;
  v139 = pboOpaque;
  v145 = pptlOrg;
  *(_QWORD *)&v140.left = *(_QWORD *)&pstro->rclBkGround.left;
  v140.right = pstro->rclBkGround.right;
  bottom = pstro->rclBkGround.bottom;
  v150 = pso;
  v140.bottom = bottom;
  v130 = 0;
  v143 = 0LL;
  v133 = v140;
  v136 = pco;
  v134 = pfo;
  pstroa = pstro;
  v142 = 0LL;
  v131 = 0;
  v128 = 0;
  p_rclBkGround = &pstro->rclBkGround;
  if ( v10 )
  {
    pgp = pstro->pgp;
    v14 = 0;
    cGlyphs = pstro->cGlyphs;
    v16 = pstro;
    ppgpos = pgp;
    pc = cGlyphs;
    if ( !pgp )
    {
      *(_QWORD *)&pstro[1].cGlyphs = 0LL;
      v14 = 1;
    }
    v17 = v133.bottom;
    right = v133.right;
    top = v133.top;
    left = v133.left;
    if ( v14 )
      goto LABEL_100;
    while ( 1 )
    {
      v21 = 0LL;
      if ( cGlyphs )
        break;
LABEL_18:
      v16 = pstroa;
      if ( !v14 )
      {
        v11 = pstroa;
        goto LABEL_20;
      }
LABEL_100:
      v88 = STROBJ_bEnum(v16, &pc, &ppgpos);
      cGlyphs = pc;
      v14 = v88;
      pgp = ppgpos;
    }
    while ( 1 )
    {
      v22 = &pgp[v21];
      pgb = v22->pgdf->pgb;
      if ( !pgb )
        break;
      v24 = v22->ptl.y + pgb->ptlOrigin.y;
      v25 = pgb->ptlOrigin.x + v22->ptl.x;
      v26 = v25 + pgb->sizlBitmap.cx;
      v27 = v24 + pgb->sizlBitmap.cy;
      v148.left = v25;
      *(_QWORD *)&v148.top = __PAIR64__(v26, v24);
      v148.bottom = v27;
      if ( left == right || top == v17 )
      {
        v133 = v148;
        v17 = v148.bottom;
        right = v148.right;
        top = v148.top;
        left = v148.left;
      }
      else
      {
        if ( v25 < left )
        {
          left = v25;
          v133.left = v25;
        }
        if ( v24 < top )
        {
          top = v24;
          v133.top = v24;
        }
        if ( v26 > right )
        {
          right = v26;
          v133.right = v26;
        }
        if ( v27 > v17 )
        {
          v17 = v27;
          v133.bottom = v27;
        }
      }
      v21 = (unsigned int)(v21 + 1);
      if ( (unsigned int)v21 >= cGlyphs )
        goto LABEL_18;
    }
    v11 = pstroa;
  }
  else
  {
    v17 = v133.bottom;
    right = v133.right;
    top = v133.top;
    left = v133.left;
  }
LABEL_20:
  v31 = SURFOBJ_TO_SURFACE(v150);
  v147 = (struct SURFACE *)v31;
  if ( (v134->flFontType & 0x10000) != 0 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v28, v29, v30);
    if ( ThreadWin32Thread && (v33 = *ThreadWin32Thread) != 0 )
      v34 = *(_QWORD *)(v33 + 304);
    else
      v34 = *(_QWORD *)(v31 + 104);
    v143 = v34 ? *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v34 + 48LL) + 2576LL) : (struct SURFACE *)v31;
    if ( *(_WORD *)(v31 + 100) )
    {
      v35 = 16;
      v128 = 16;
    }
    else
    {
      v35 = 0;
    }
    v17 = v133.bottom;
    right = v133.right;
    top = v133.top;
    left = v133.left;
    if ( (*(_WORD *)(v31 + 102) & 0x100) != 0 )
      v128 = v35 | 0x80;
  }
  flFontType = v134->flFontType;
  if ( (flFontType & 2) != 0 )
    return 0;
  if ( v136 )
    iDComplexity = v136->iDComplexity;
  else
    iDComplexity = 0;
  pc = -1;
  iSolidColor = v146->iSolidColor;
  if ( (flFontType & 0x10000) != 0 )
  {
    if ( *(_DWORD *)(v31 + 96) == 3 )
    {
      if ( (unsigned int)bUMPDSecurityGateEx() && !v139 )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 638);
        return 0;
      }
      if ( v139->iSolidColor == -1 )
        return 0;
    }
    v37 = v128 | 8;
    v128 |= 8u;
    v38 = v134->flFontType;
    if ( (v38 & 0x10000000) != 0 )
    {
      v39 = v11->rclBkGround.right;
      v130 = 8;
      v128 = v37 | 0x20;
      if ( v39 <= 2147483643 )
      {
        v40 = v11->rclBkGround.left;
        if ( (unsigned int)(v39 - v40 + 4) < 0x7FFFFFFF )
        {
          v131 = ((v39 + 4) & 0xFFFFFFFC) - (v40 & 0xFFFFFFFC);
          goto LABEL_39;
        }
      }
      return 0;
    }
    if ( (v38 & 0x20000000) == 0 )
    {
      v86 = ((v11->rclBkGround.right + 8) >> 1) & 0xFFFFFFFC;
      v87 = (v11->rclBkGround.left >> 1) & 0xFFFFFFFC;
      v130 = 4;
      v131 = v86 - v87;
    }
  }
  else
  {
    v84 = v11->rclBkGround.left;
    v85 = (v11->rclBkGround.right + 32) & 0xFFFFFFE0;
    v130 = 1;
    v131 = (int)(v85 - (v84 & 0xFFFFFFE0)) >> 3;
  }
LABEL_39:
  v41 = v17 - top;
  v42 = ((unsigned int)(v130 * (v11->rclBkGround.left - left) + 31) >> 3) & 0x1FFFFFFC;
  v43 = v42 + (((unsigned int)(v130 * (right - v11->rclBkGround.right) + 31) >> 3) & 0x1FFFFFFC) + v131;
  v131 = v43;
  if ( v43 > 0x7FFF || v41 > 0x7FFF )
    return 0;
  v44 = v43 * v41;
  v149 = v44;
  if ( v44 >= 0x10000 )
  {
    v45 = 0;
    v130 = 0;
    v46 = EngAllocUserMem(v44, 0x6F746547u);
  }
  else
  {
    v45 = 1;
    v130 = 1;
    v46 = (_DWORD *)AllocThreadBufferWithTag(v44, 1869899079LL, 32LL);
  }
  v153 = v46;
  v49 = v46;
  if ( !v46 )
    return 0;
  v50 = pstroa;
  v151 = (unsigned __int8 *)v46 + v131 * (pstroa->rclBkGround.top - top) + v42;
  flAccel = pstroa->flAccel;
  if ( (flAccel & 0xA) == 2 )
  {
    v47 = pstroa->ulCharInc != 0;
    v52 = v47 | (2 * (((flAccel & 0x11) != 17) | (2 * ((flAccel & 0x51) == 81)))) | v128;
    v128 = v52;
  }
  else
  {
    v52 = v128;
  }
  v166 = (SURFACE *)v31;
  if ( *(_WORD *)(v31 + 100) )
    v167 = 0LL;
  else
    v167 = *(_QWORD *)(v31 + 72);
  v53 = v139;
  v54 = v134;
  v168 = v136;
  v169 = v139;
  v172 = v134;
  v170 = 0;
  if ( v141 )
  {
    v55 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v47, 0LL, v48);
    if ( v55 )
    {
      v57 = *v55;
      if ( v57 )
      {
        v58 = (_QWORD *)(v57 + 40);
        if ( (_QWORD *)*v58 != v58 )
        {
          v90 = (UMPDOBJ *)(*v58 - 40LL);
          if ( *v58 != 40LL && (*((_DWORD *)v90 + 103) & 0x100) != 0 && UMPDOBJ::bInEngCall(v90) && !v53 )
          {
            if ( gfUMPDDebug )
              DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 858);
            if ( v45 )
              FreeThreadBufferWithTag(v49);
            else
              EngFreeUserMem(v49);
            v78 = 0;
            goto LABEL_82;
          }
        }
      }
    }
    v59 = v53->iSolidColor;
    pc = v59;
    if ( v59 == -1 || iSolidColor == -1 )
    {
      EngTextOutBitBlt(
        (struct SURFACE *)v31,
        v54,
        v52,
        v56,
        (struct _SURFOBJ *)v121,
        v136,
        v122,
        v141,
        v123,
        (struct _POINTL *)v124,
        v139,
        v145,
        v126);
      v50 = pstroa;
      v65 = p_rclBkGround;
    }
    else
    {
      v50 = pstroa;
      v60 = v141;
      v61 = pstroa->rclBkGround.top;
      v62 = v141->top;
      if ( v61 > v62 )
      {
        v171[4 * v170] = v141->left;
        v171[4 * v170 + 1] = v62;
        v171[4 * v170 + 2] = v60->right;
        v171[4 * v170 + 3] = v61;
        v63 = ++v170;
      }
      else
      {
        v63 = v170;
      }
      v64 = v50->rclBkGround.left;
      v65 = &v50->rclBkGround;
      v66 = v60->left;
      if ( v64 > v60->left )
      {
        v171[4 * v63] = v66;
        v171[4 * v170 + 1] = v61;
        v171[4 * v170 + 2] = v64;
        v171[4 * v170 + 3] = v50->rclBkGround.bottom;
        v63 = ++v170;
      }
      v67 = v50->rclBkGround.right;
      v68 = v60->right;
      if ( v67 < v68 )
      {
        v171[4 * v63] = v67;
        v171[4 * v170 + 1] = v61;
        v171[4 * v170 + 2] = v68;
        v171[4 * v170 + 3] = v50->rclBkGround.bottom;
        v63 = ++v170;
      }
      v69 = v50->rclBkGround.bottom;
      v70 = v60->bottom;
      if ( v69 < v70 )
      {
        v171[4 * v63] = v66;
        v171[4 * v170 + 1] = v69;
        v171[4 * v170 + 2] = v68;
        v171[4 * v170++ + 3] = v70;
      }
    }
  }
  else
  {
    v59 = pc;
    v65 = &pstroa->rclBkGround;
  }
  *(_QWORD *)&v140.left = 0LL;
  LOBYTE(v140.right) = 0;
  LODWORD(v139) = v52 & 0x10;
  v140.bottom = 0;
  v155 = 0;
  v156 = 0LL;
  v157 = 0uLL;
  v158 = 0;
  if ( (v52 & 0x10) != 0 )
  {
    v91 = v65->left & 0xFFFFFFF8;
    if ( (v128 & 0x20) != 0 )
      v91 = v65->left & 0xFFFFFFFC;
    v92 = v50->rclBkGround.top;
    v155 = *(_DWORD *)(v31 + 96);
    LODWORD(v156) = v50->rclBkGround.right - v91;
    v93 = v50->rclBkGround.bottom - v92;
    LODWORD(v141) = v92;
    HIDWORD(v156) = v93;
    v94 = 1;
    HIDWORD(v157) = 1;
    *(_QWORD *)((char *)&v157 + 4) = 0LL;
    if ( (*(_DWORD *)(v31 + 112) & 0x40000) != 0 )
      v94 = 262145;
    HIDWORD(v157) = v94;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v140, (struct _DEVBITMAPINFO *)&v155, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      if ( v130 )
        FreeThreadBufferWithTag(v49);
      else
        EngFreeUserMem(v49);
      v78 = 0;
      goto LABEL_81;
    }
    v95 = *(_QWORD *)(v31 + 48);
    v96 = 0;
    v97 = 0;
    v147 = *(struct SURFACE **)&v140.left;
    if ( v31 == *(_QWORD *)(v95 + 2576) && (*(_DWORD *)(v95 + 56) & 0x20000) != 0 )
    {
      v96 = *(_DWORD *)(v95 + 2608);
      v97 = *(_DWORD *)(v95 + 2612);
    }
    v50 = pstroa;
    v98 = p_rclBkGround->left;
    if ( v96 > p_rclBkGround->left )
      v98 = v96;
    v99 = pstroa->rclBkGround.top;
    v100 = pstroa->rclBkGround.right;
    if ( v97 > v99 )
      v99 = v97;
    v165 = *p_rclBkGround;
    v101 = v150->sizlBitmap.cx + v96;
    v161 = v98;
    if ( v101 < v100 )
      v100 = v101;
    v162 = v99;
    v163 = v100;
    v102 = v97 + v150->sizlBitmap.cy;
    v103 = pstroa->rclBkGround.bottom;
    if ( v102 < v103 )
      v103 = v102;
    v164 = v103;
    if ( iDComplexity )
    {
      if ( !(unsigned int)bIntersect(&v161, &v136->rclBounds) )
        goto LABEL_78;
      v103 = v164;
      v100 = v163;
      v99 = v162;
      v98 = v161;
      v50 = pstroa;
    }
    v165.right = v163 - v91;
    v165.left = v98 - v91;
    v165.top = v162 - (_DWORD)v141;
    v165.bottom = v164 - (_DWORD)v141;
    if ( v59 == -1 && v98 < v100 && v99 < v103 )
    {
      v104 = bUMPDSecurityGateEx();
      UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        (UMPDReleaseAcquireRFONTSem *)v173,
        (struct SURFACE *)v31,
        v134,
        v104);
      if ( (*(_DWORD *)(v31 + 112) & 0x400) != 0 )
        v105 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v95 + 2864);
      else
        v105 = EngCopyBits;
      if ( *(_QWORD *)&v140.left )
        v106 = *(_QWORD *)&v140.left + 24LL;
      else
        v106 = 0LL;
      ((void (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, LONG *))v105)(
        v106,
        v31 + 24,
        0LL,
        xloIdent,
        &v165,
        &v161);
      UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v173);
      v50 = pstroa;
    }
  }
  *(_QWORD *)&v50[1].cGlyphs = 0LL;
  if ( v59 == -1 )
    goto LABEL_68;
  v71 = v49;
  v72 = (unsigned __int64)v44 >> 2;
  if ( !v72 )
    goto LABEL_68;
  if ( ((unsigned __int8)v49 & 4) == 0 )
    goto LABEL_66;
  *v49 = 0;
  if ( --v72 )
  {
    v71 = v49 + 1;
LABEL_66:
    memset(v71, 0, 8 * (v72 >> 1));
    if ( (v72 & 1) != 0 )
      *((_DWORD *)v71 + v72 - 1) = 0;
  }
LABEL_68:
  v73 = pc;
  do
  {
    if ( v73 == -1 )
    {
      v82 = v49;
      v83 = (unsigned __int64)v44 >> 2;
      if ( v83 )
      {
        if ( ((unsigned __int8)v49 & 4) != 0 )
        {
          *v49 = 0;
          if ( !--v83 )
            goto LABEL_70;
          v82 = v49 + 1;
        }
        memset(v82, 0, 8 * (v83 >> 1));
        if ( (v83 & 1) != 0 )
          *((_DWORD *)v82 + v83 - 1) = 0;
      }
    }
LABEL_70:
    v74 = v50->pgp;
    if ( v74 )
    {
      v75 = v50->cGlyphs;
      v135 = v50->cGlyphs;
      v142 = v74;
      pc = 0;
    }
    else
    {
      if ( (v50[1].rclBkGround.top & 2) != 0 )
        v89 = STROBJ_bEnum(v50, &v135, &v142);
      else
        v89 = STROBJ_bEnumCheckBounds(v50, &v135, &v142, &v133);
      v50 = pstroa;
      v75 = v135;
      v74 = v142;
      pc = v89;
    }
    if ( v75 )
    {
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v177 = 0;
      switch ( iDComplexity )
      {
        case 1:
          v177 = 0;
          si128 = v136->rclBounds;
LABEL_75:
          v76 = v74;
          v77 = v134;
          vExpandAndCopyText(
            (struct SURFACE *)v31,
            v134,
            v76,
            v75,
            v151,
            v131,
            v50->ulCharInc,
            v147,
            v143,
            &v50->rclBkGround,
            v125,
            iSolidColor,
            v73,
            v128,
            &si128,
            v154,
            v127,
            v146,
            v145);
          goto LABEL_76;
        case 0:
          goto LABEL_75;
        case 3:
          v107 = v136;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v136, 0, 0, 4u, 0);
          v108 = v151;
          v109 = iSolidColor;
          do
          {
            v110 = XCLIPOBJ::bEnum((XCLIPOBJ *)v107, 0x134u, &v159, 0LL);
            v111 = v134;
            v112 = v110;
            v160[v159].bottom = 0;
            vExpandAndCopyText(
              (struct SURFACE *)v31,
              v111,
              v74,
              v75,
              v108,
              v131,
              pstroa->ulCharInc,
              v147,
              v143,
              p_rclBkGround,
              v125,
              v109,
              v73,
              v128,
              v160,
              v154,
              v127,
              v146,
              v145);
            v10 = v112 == 0;
            v107 = v136;
          }
          while ( !v10 );
          v44 = v149;
          v49 = v153;
          break;
      }
    }
    v77 = v134;
LABEL_76:
    v50 = pstroa;
  }
  while ( pc );
  if ( (_DWORD)v139 )
  {
    v113 = *(_QWORD *)(v31 + 48);
    v114 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v174,
      (struct SURFACE *)v31,
      v77,
      v114);
    if ( (*(_DWORD *)(v31 + 112) & 0x400) != 0 )
      v115 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v113 + 2864);
    else
      v115 = EngCopyBits;
    if ( *(_QWORD *)&v140.left )
      v116 = *(_QWORD *)&v140.left + 24LL;
    else
      v116 = 0LL;
    ((void (__fastcall *)(__int64, __int64, CLIPOBJ *, _QWORD, LONG *, struct _RECTL *))v115)(
      v31 + 24,
      v116,
      v136,
      0LL,
      &v161,
      &v165);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v174);
  }
LABEL_78:
  if ( v130 )
    FreeThreadBufferWithTag(v49);
  else
    EngFreeUserMem(v49);
  v78 = 1;
LABEL_81:
  SURFMEM::~SURFMEM((SURFMEM *)&v140);
LABEL_82:
  if ( v167 )
  {
    v79 = v170 - 1 < 0;
    v80 = --v170;
    if ( v79 )
      return v78;
    do
    {
      vDIBSolidBlt(v166, (struct _RECTL *)&v171[4 * v80], v168, v169->iSolidColor, 0);
      v79 = v170 - 1 < 0;
      v80 = --v170;
    }
    while ( !v79 );
    return v78;
  }
  else
  {
    v117 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v175, v166, v172, v117);
    *(_QWORD *)&v148.left = 0LL;
    if ( v166 )
      v118 = (char *)v166 + 24;
    else
      v118 = 0LL;
    v119 = SURFACE::pfnBitBlt(v166);
    for ( i = v171; i < &v171[4 * v170]; i += 4 )
      ((void (__fastcall *)(char *, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, _DWORD *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _RECTL *, int))v119)(
        v118,
        0LL,
        0LL,
        v168,
        0LL,
        i,
        0LL,
        0LL,
        v169,
        &v148,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v175);
    return v78;
  }
}
