/*
 * XREFs of EngTextOut @ 0x1C0037A40
 * Callers:
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0289080 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C028D600 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C028FE90 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0297C30 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     NtGdiEngTextOut @ 0x1C02AD4E0 (NtGdiEngTextOut.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C00387E0 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x1C0038E48 (--1FRINGERECT@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00DFB54 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     STROBJ_bEnum @ 0x1C0107280 (STROBJ_bEnum.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C01511E8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015123C (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0282108 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C02B4DC4 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
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
  __int64 v10; // r15
  struct SURFACE *pgp; // rax
  ULONG v13; // ecx
  ULONG cGlyphs; // r13d
  LONG bottom; // r14d
  LONG right; // edi
  LONG top; // ebx
  LONG left; // esi
  BOOL v19; // eax
  unsigned int v20; // r9d
  char *v21; // r10
  _DWORD *v22; // rax
  int v23; // r8d
  int v24; // edx
  int v25; // r11d
  LONG v26; // eax
  __int64 v27; // r13
  __int64 *ThreadWin32Thread; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r8d
  FLONG flFontType; // eax
  int v33; // r8d
  FLONG v34; // eax
  LONG v35; // edx
  int v36; // r9d
  LONG v37; // ecx
  int v38; // edx
  unsigned int v39; // r14d
  unsigned int v40; // edi
  unsigned int v41; // edx
  unsigned int v42; // r14d
  _DWORD *v43; // rax
  _DWORD *v44; // r13
  FLONG flAccel; // edi
  unsigned int v46; // esi
  struct SURFACE *v47; // rbx
  RECTL *v48; // rdi
  __int64 *v49; // rax
  __int64 v50; // rdx
  struct _SURFOBJ *v51; // r9
  __int64 v52; // rcx
  struct _BRUSHOBJ *v53; // rax
  _QWORD *v54; // rcx
  __int64 v55; // rcx
  LONG v56; // edx
  RECTL *v57; // r9
  LONG v58; // edi
  int v59; // eax
  LONG v60; // ecx
  RECTL *p_rclBkGround; // r10
  LONG v62; // r8d
  LONG v63; // ecx
  LONG v64; // edi
  LONG v65; // ecx
  LONG v66; // edx
  unsigned int v67; // esi
  LONG v68; // ecx
  int v69; // eax
  int v70; // ecx
  __int64 v71; // rdx
  __int64 v72; // rdi
  LONG v73; // ecx
  LONG v74; // r10d
  LONG v75; // edx
  LONG v76; // r9d
  LONG v77; // r8d
  RECTL v78; // xmm0
  LONG v79; // ecx
  LONG v80; // ecx
  LONG v81; // r10d
  unsigned __int64 v82; // rdx
  void *v83; // rcx
  int v84; // eax
  BOOL (__stdcall *v85)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  __int64 v86; // rcx
  int v87; // edi
  void *v88; // r8
  void *v89; // r8
  GLYPHPOS *v90; // rbx
  ULONG v91; // esi
  ULONG v92; // eax
  CLIPOBJ *v93; // rdi
  struct SURFACE *v94; // r13
  int v95; // r14d
  int v96; // edi
  struct _FONTOBJ *v97; // rdx
  unsigned __int8 *v98; // rax
  bool v99; // zf
  struct SURFACE *v100; // rbx
  struct _FONTOBJ *v101; // rsi
  __int64 v102; // rdi
  int v103; // eax
  BOOL (__stdcall *v104)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  unsigned int v105; // r9d
  struct _GLYPHPOS *v106; // r8
  unsigned __int8 *v108; // [rsp+20h] [rbp-100h]
  unsigned int pcoa; // [rsp+28h] [rbp-F8h]
  struct _XLATEOBJ *v110; // [rsp+30h] [rbp-F0h]
  ULONG ulCharInc; // [rsp+30h] [rbp-F0h]
  struct SURFACE *v112; // [rsp+38h] [rbp-E8h]
  struct _POINTL *v113; // [rsp+40h] [rbp-E0h]
  struct SURFACE *v114; // [rsp+40h] [rbp-E0h]
  struct _POINTL *v115; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v116; // [rsp+50h] [rbp-D0h]
  int v117; // [rsp+58h] [rbp-C8h]
  unsigned int v118; // [rsp+60h] [rbp-C0h]
  struct _RECTL *v119; // [rsp+78h] [rbp-A8h]
  unsigned int v120; // [rsp+80h] [rbp-A0h]
  struct _BRUSHOBJ *v121; // [rsp+88h] [rbp-98h]
  struct _POINTL *v122; // [rsp+90h] [rbp-90h]
  int v123; // [rsp+A0h] [rbp-80h]
  ULONG pc; // [rsp+A4h] [rbp-7Ch] BYREF
  ULONG v125; // [rsp+A8h] [rbp-78h] BYREF
  int v126; // [rsp+ACh] [rbp-74h]
  struct _BRUSHOBJ *v127; // [rsp+B0h] [rbp-70h]
  struct _RECTL v128; // [rsp+C0h] [rbp-60h] BYREF
  PGLYPHPOS ppgpos; // [rsp+D0h] [rbp-50h] BYREF
  struct _FONTOBJ *v130; // [rsp+D8h] [rbp-48h]
  unsigned int v131; // [rsp+E0h] [rbp-40h]
  struct SURFACE *v132; // [rsp+E8h] [rbp-38h]
  CLIPOBJ *v133; // [rsp+F0h] [rbp-30h]
  int v134; // [rsp+F8h] [rbp-28h]
  int iSolidColor; // [rsp+FCh] [rbp-24h]
  RECTL rclBkGround; // [rsp+100h] [rbp-20h] BYREF
  PGLYPHPOS v137; // [rsp+110h] [rbp-10h] BYREF
  struct SURFACE *v138; // [rsp+118h] [rbp-8h]
  struct _BRUSHOBJ *v139; // [rsp+120h] [rbp+0h]
  unsigned __int8 *v140[2]; // [rsp+130h] [rbp+10h]
  struct _POINTL *v141; // [rsp+140h] [rbp+20h]
  unsigned int v142; // [rsp+148h] [rbp+28h]
  struct SURFACE *v143; // [rsp+150h] [rbp+30h]
  struct _RECTL *v144; // [rsp+158h] [rbp+38h]
  _DWORD *v145; // [rsp+160h] [rbp+40h]
  RECTL *v146; // [rsp+168h] [rbp+48h]
  int v147; // [rsp+170h] [rbp+50h] BYREF
  __int64 v148; // [rsp+174h] [rbp+54h]
  __int128 v149; // [rsp+17Ch] [rbp+5Ch]
  int v150; // [rsp+18Ch] [rbp+6Ch]
  SURFOBJ *v151; // [rsp+190h] [rbp+70h]
  int v152; // [rsp+1A0h] [rbp+80h] BYREF
  struct _RECTL v153[20]; // [rsp+1A4h] [rbp+84h] BYREF
  LONG v154; // [rsp+2F0h] [rbp+1D0h] BYREF
  LONG v155; // [rsp+2F4h] [rbp+1D4h]
  LONG v156; // [rsp+2F8h] [rbp+1D8h]
  LONG v157; // [rsp+2FCh] [rbp+1DCh]
  RECTL v158; // [rsp+300h] [rbp+1E0h] BYREF
  struct SURFACE *v159; // [rsp+310h] [rbp+1F0h] BYREF
  __int64 v160; // [rsp+318h] [rbp+1F8h]
  CLIPOBJ *v161; // [rsp+320h] [rbp+200h]
  struct _BRUSHOBJ *v162; // [rsp+328h] [rbp+208h]
  int v163; // [rsp+330h] [rbp+210h]
  _DWORD v164[17]; // [rsp+334h] [rbp+214h]
  struct _FONTOBJ *v165; // [rsp+378h] [rbp+258h]
  _BYTE v166[80]; // [rsp+380h] [rbp+260h] BYREF
  _BYTE v167[80]; // [rsp+3D0h] [rbp+2B0h] BYREF
  struct _RECTL si128; // [rsp+420h] [rbp+300h] BYREF
  int v169; // [rsp+43Ch] [rbp+31Ch]

  v10 = 0LL;
  v144 = prclExtra;
  v146 = prclOpaque;
  v139 = pboFore;
  v127 = pboOpaque;
  v141 = pptlOrg;
  rclBkGround = pstro->rclBkGround;
  v128 = rclBkGround;
  v133 = pco;
  v130 = pfo;
  v151 = pso;
  v137 = 0LL;
  v123 = 0;
  v138 = 0LL;
  if ( pstro->ulCharInc )
  {
    bottom = v128.bottom;
    right = v128.right;
    top = v128.top;
    left = v128.left;
  }
  else
  {
    pgp = (struct SURFACE *)pstro->pgp;
    v13 = 0;
    cGlyphs = pstro->cGlyphs;
    v132 = pgp;
    ppgpos = (PGLYPHPOS)pgp;
    pc = cGlyphs;
    v125 = 0;
    if ( !pgp )
    {
      v13 = 1;
      *(_QWORD *)&pstro[1].cGlyphs = 0LL;
      v125 = 1;
    }
    bottom = v128.bottom;
    right = v128.right;
    top = v128.top;
    left = v128.left;
    if ( !v13 )
      goto LABEL_6;
    while ( 1 )
    {
      v19 = STROBJ_bEnum(pstro, &pc, &ppgpos);
      cGlyphs = pc;
      v13 = v19;
      v125 = v19;
      pgp = (struct SURFACE *)ppgpos;
      v132 = (struct SURFACE *)ppgpos;
LABEL_6:
      v20 = 0;
      if ( cGlyphs )
        break;
LABEL_21:
      if ( !v13 )
        goto LABEL_24;
    }
    while ( 1 )
    {
      v21 = (char *)pgp + 24 * v20;
      v22 = (_DWORD *)**((_QWORD **)v21 + 1);
      if ( !v22 )
        break;
      v23 = *((_DWORD *)v21 + 5) + v22[1];
      v24 = *v22 + *((_DWORD *)v21 + 4);
      v25 = v24 + v22[2];
      v26 = v23 + v22[3];
      v140[0] = (unsigned __int8 *)__PAIR64__(v23, v24);
      v140[1] = (unsigned __int8 *)__PAIR64__(v26, v25);
      if ( left == right || top == bottom )
      {
        v128 = *(struct _RECTL *)v140;
        bottom = HIDWORD(v140[1]);
        right = (LONG)v140[1];
        top = HIDWORD(v140[0]);
        left = (LONG)v140[0];
      }
      else
      {
        if ( v24 < left )
          left = v24;
        v128.left = left;
        if ( v23 < top )
          top = v23;
        v128.top = top;
        if ( v25 > right )
          right = v25;
        v128.right = right;
        if ( v26 > bottom )
        {
          bottom = v26;
          v128.bottom = v26;
        }
      }
      pgp = v132;
      if ( ++v20 >= cGlyphs )
      {
        v13 = v125;
        goto LABEL_21;
      }
    }
  }
LABEL_24:
  v27 = SURFOBJ_TO_SURFACE(v151);
  v132 = (struct SURFACE *)v27;
  v143 = (struct SURFACE *)v27;
  if ( (v130->flFontType & 0x10000) != 0 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v29 = *ThreadWin32Thread) != 0 )
      v30 = *(_QWORD *)(v29 + 304);
    else
      v30 = *(_QWORD *)(v27 + 104);
    if ( v30 )
      v138 = *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v30 + 48LL) + 2576LL);
    else
      v138 = (struct SURFACE *)v27;
    v31 = 0;
    bottom = v128.bottom;
    if ( *(_WORD *)(v27 + 100) )
      v31 = 16;
    right = v128.right;
    top = v128.top;
    left = v128.left;
    v123 = v31;
    if ( (*(_WORD *)(v27 + 102) & 0x100) != 0 )
    {
      v31 |= 0x80u;
      v123 = v31;
    }
  }
  else
  {
    v31 = 0;
  }
  flFontType = v130->flFontType;
  if ( (flFontType & 2) == 0 )
  {
    v134 = v133 ? v133->iDComplexity : 0;
    LODWORD(ppgpos) = -1;
    iSolidColor = v139->iSolidColor;
    if ( (flFontType & 0x10000) != 0 )
    {
      if ( *(_DWORD *)(v27 + 96) == 3 )
      {
        if ( (unsigned int)bUMPDSecurityGateEx() && !v127 )
        {
          if ( gfUMPDDebug )
            DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 638);
          return v10;
        }
        if ( v127->iSolidColor == -1 )
          return v10;
        v31 = v123;
      }
      v33 = v31 | 8;
      v123 = v33;
      v34 = v130->flFontType;
      if ( (v34 & 0x10000000) != 0 )
      {
        v35 = pstro->rclBkGround.right;
        v123 = v33 | 0x20;
        v36 = 8;
        if ( v35 > 2147483643 )
          return v10;
        v37 = pstro->rclBkGround.left;
        if ( (unsigned int)(v35 - v37 + 4) >= 0x7FFFFFFF )
          return v10;
        v38 = ((v35 + 4) & 0xFFFFFFFC) - (v37 & 0xFFFFFFFC);
      }
      else if ( (v34 & 0x20000000) != 0 )
      {
        v38 = 0;
        v36 = 0;
      }
      else
      {
        v36 = 4;
        v38 = (((pstro->rclBkGround.right + 8) >> 1) & 0xFFFFFFFC) - ((pstro->rclBkGround.left >> 1) & 0xFFFFFFFC);
      }
    }
    else
    {
      v36 = 1;
      v38 = (int)(((pstro->rclBkGround.right + 32) & 0xFFFFFFE0) - (pstro->rclBkGround.left & 0xFFFFFFE0)) >> 3;
    }
    v39 = bottom - top;
    v40 = (((unsigned int)(v36 * (pstro->rclBkGround.left - left) + 31) >> 3) & 0x1FFFFFFC)
        + (((unsigned int)(v36 * (right - pstro->rclBkGround.right) + 31) >> 3) & 0x1FFFFFFC);
    pc = ((unsigned int)(v36 * (pstro->rclBkGround.left - left) + 31) >> 3) & 0x1FFFFFFC;
    v41 = v40 + v38;
    v131 = v41;
    if ( v41 <= 0x7FFF && v39 <= 0x7FFF )
    {
      v42 = v41 * v39;
      v142 = v42;
      if ( v42 >= 0x10000 )
      {
        v126 = 0;
        v43 = EngAllocUserMem(v42, 0x6F746547u);
      }
      else
      {
        v126 = 1;
        v43 = (_DWORD *)AllocThreadBufferWithTag(v42, 1869899079LL, 32LL);
      }
      v145 = v43;
      v44 = v43;
      if ( v43 )
      {
        flAccel = pstro->flAccel;
        v46 = v123;
        v140[0] = (unsigned __int8 *)v43 + v131 * (pstro->rclBkGround.top - top) + pc;
        if ( (flAccel & 0xA) == 2 )
        {
          v46 = (pstro->ulCharInc != 0) | (2 * (((flAccel & 0x11) != 17) | (2 * ((flAccel & 0x51) == 81)))) | v123;
          v123 = v46;
        }
        v47 = v132;
        v159 = v132;
        if ( *((_WORD *)v132 + 50) )
          v160 = 0LL;
        else
          v160 = *((_QWORD *)v132 + 9);
        v48 = v146;
        v161 = v133;
        v162 = v127;
        v165 = v130;
        v163 = 0;
        if ( v146 )
        {
          v49 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v49 )
          {
            v52 = *v49;
            v53 = v127;
            if ( v52 )
            {
              v54 = (_QWORD *)(v52 + 40);
              if ( (_QWORD *)*v54 != v54 )
              {
                v55 = *v54 - 40LL;
                if ( v55 )
                {
                  if ( (*(_DWORD *)(v55 + 412) & 0x100) != 0 && *(_DWORD *)(v55 + 432) && !v127 )
                  {
                    if ( gfUMPDDebug )
                      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 858);
                    if ( v126 )
                      FreeThreadBufferWithTag(v44, v50);
                    else
                      EngFreeUserMem(v44);
                    goto LABEL_171;
                  }
                }
              }
            }
          }
          else
          {
            v53 = v127;
          }
          LODWORD(ppgpos) = v53->iSolidColor;
          if ( (_DWORD)ppgpos != -1 && iSolidColor != -1 )
          {
            v56 = pstro->rclBkGround.top;
            v57 = v48;
            v58 = v48->top;
            if ( v56 <= v58 )
            {
              v59 = v163;
            }
            else
            {
              v164[4 * v163] = v57->left;
              v164[4 * v163 + 1] = v58;
              v164[4 * v163 + 2] = v57->right;
              v164[4 * v163 + 3] = v56;
              v59 = ++v163;
            }
            v60 = pstro->rclBkGround.left;
            p_rclBkGround = &pstro->rclBkGround;
            v62 = v57->left;
            if ( v60 > v57->left )
            {
              v164[4 * v59] = v62;
              v164[4 * v163 + 1] = v56;
              v164[4 * v163 + 2] = v60;
              v164[4 * v163 + 3] = pstro->rclBkGround.bottom;
              v59 = ++v163;
            }
            v63 = pstro->rclBkGround.right;
            v64 = v57->right;
            if ( v63 < v64 )
            {
              v164[4 * v59] = v63;
              v164[4 * v163 + 1] = v56;
              v164[4 * v163 + 2] = v64;
              v164[4 * v163 + 3] = pstro->rclBkGround.bottom;
              v59 = ++v163;
            }
            v65 = pstro->rclBkGround.bottom;
            v66 = v57->bottom;
            if ( v65 < v66 )
            {
              v164[4 * v59] = v62;
              v164[4 * v163 + 1] = v65;
              v164[4 * v163 + 2] = v64;
              v164[4 * v163++ + 3] = v66;
            }
            goto LABEL_95;
          }
          EngTextOutBitBlt(v47, v130, v46, v51, (struct _SURFOBJ *)v108, v133, v110, v48, v113, v115, v127, v141, v118);
        }
        p_rclBkGround = &pstro->rclBkGround;
LABEL_95:
        *(_QWORD *)&rclBkGround.left = 0LL;
        v148 = 0LL;
        v149 = 0uLL;
        v150 = 0;
        LOBYTE(rclBkGround.right) = 0;
        LODWORD(v127) = v46 & 0x10;
        rclBkGround.bottom = 0;
        v147 = 0;
        if ( (v46 & 0x10) != 0 )
        {
          v67 = p_rclBkGround->left & 0xFFFFFFF8;
          if ( (v123 & 0x20) != 0 )
            v67 = p_rclBkGround->left & 0xFFFFFFFC;
          v68 = pstro->rclBkGround.top;
          v147 = *((_DWORD *)v47 + 24);
          LODWORD(v148) = pstro->rclBkGround.right - v67;
          v69 = pstro->rclBkGround.bottom - v68;
          pc = v68;
          v70 = 1;
          HIDWORD(v148) = v69;
          HIDWORD(v149) = 1;
          *(_QWORD *)((char *)&v149 + 4) = 0LL;
          if ( (*((_DWORD *)v47 + 28) & 0x40000) != 0 )
            v70 = 262145;
          HIDWORD(v149) = v70;
          if ( !SURFMEM::bCreateDIB(
                  (SURFMEM *)&rclBkGround,
                  (struct _DEVBITMAPINFO *)&v147,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  0,
                  1,
                  0,
                  0) )
          {
            if ( v126 )
              FreeThreadBufferWithTag(v44, v71);
            else
              EngFreeUserMem(v44);
            goto LABEL_170;
          }
          v72 = *((_QWORD *)v47 + 6);
          v73 = 0;
          v74 = 0;
          v143 = *(struct SURFACE **)&rclBkGround.left;
          if ( v47 == *(struct SURFACE **)(v72 + 2576) && (*(_DWORD *)(v72 + 56) & 0x20000) != 0 )
          {
            v73 = *(_DWORD *)(v72 + 2608);
            v74 = *(_DWORD *)(v72 + 2612);
          }
          v75 = pstro->rclBkGround.left;
          v76 = pstro->rclBkGround.top;
          if ( v73 > v75 )
            v75 = v73;
          v77 = pstro->rclBkGround.right;
          v78 = pstro->rclBkGround;
          if ( v74 > v76 )
            v76 = v74;
          v154 = v75;
          v79 = v151->sizlBitmap.cx + v73;
          v158 = v78;
          v155 = v76;
          if ( v79 < v77 )
            v77 = v79;
          v80 = v74 + v151->sizlBitmap.cy;
          v156 = v77;
          v81 = pstro->rclBkGround.bottom;
          if ( v80 < v81 )
            v81 = v80;
          v157 = v81;
          if ( v134 )
          {
            if ( !(unsigned int)bIntersect(&v154, &v133->rclBounds) )
            {
              v83 = v44;
              if ( !v126 )
                goto LABEL_168;
              goto LABEL_118;
            }
            v81 = v157;
            v77 = v156;
            v76 = v155;
            v75 = v154;
          }
          v158.right = v156 - v67;
          v158.left = v75 - v67;
          v158.top = v155 - pc;
          v158.bottom = v157 - pc;
          if ( (_DWORD)ppgpos == -1 && v75 < v77 && v76 < v81 )
          {
            v84 = bUMPDSecurityGateEx();
            UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v167, v47, v130, v84);
            if ( (*((_DWORD *)v47 + 28) & 0x400) != 0 )
              v85 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v72 + 2872);
            else
              v85 = EngCopyBits;
            v86 = 0LL;
            if ( *(_QWORD *)&rclBkGround.left )
              v86 = *(_QWORD *)&rclBkGround.left + 24LL;
            ((void (__fastcall *)(__int64, char *, _QWORD, XLATEOBJ *const, RECTL *, LONG *))v85)(
              v86,
              (char *)v47 + 24,
              0LL,
              xloIdent,
              &v158,
              &v154);
            UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v167);
          }
        }
        v87 = (int)ppgpos;
        *(_QWORD *)&pstro[1].cGlyphs = 0LL;
        if ( v87 == -1 )
          goto LABEL_137;
        v88 = v44;
        v82 = (unsigned __int64)v42 >> 2;
        if ( v82 )
        {
          if ( ((unsigned __int8)v44 & 4) != 0 )
          {
            *v44 = 0;
            if ( !--v82 )
              goto LABEL_136;
            v88 = v44 + 1;
          }
          memset(v88, 0, 8 * (v82 >> 1));
          v87 = (int)ppgpos;
          if ( (v82 & 1) != 0 )
            *((_DWORD *)v88 + v82 - 1) = 0;
        }
        while ( 1 )
        {
LABEL_136:
          if ( v87 != -1 )
            goto LABEL_143;
LABEL_137:
          v89 = v44;
          v82 = (unsigned __int64)v42 >> 2;
          if ( v82 )
          {
            if ( ((unsigned __int8)v44 & 4) != 0 )
            {
              *v44 = 0;
              if ( !--v82 )
                goto LABEL_143;
              v89 = v44 + 1;
            }
            memset(v89, 0, 8 * (v82 >> 1));
            v87 = (int)ppgpos;
            if ( (v82 & 1) != 0 )
              *((_DWORD *)v89 + v82 - 1) = 0;
          }
LABEL_143:
          v90 = pstro->pgp;
          if ( v90 )
          {
            v91 = pstro->cGlyphs;
            v125 = pstro->cGlyphs;
            v137 = v90;
            pc = 0;
          }
          else
          {
            if ( (pstro[1].rclBkGround.top & 2) != 0 )
              v92 = STROBJ_bEnum(pstro, &v125, &v137);
            else
              v92 = STROBJ_bEnumCheckBounds(pstro, &v125, &v137, &v128);
            v91 = v125;
            v90 = v137;
            pc = v92;
          }
          if ( v91 )
          {
            si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
            v169 = 0;
            switch ( v134 )
            {
              case 0:
                goto LABEL_162;
              case 1:
                v169 = 0;
                si128 = v133->rclBounds;
LABEL_162:
                v105 = v91;
                v101 = v130;
                v106 = v90;
                v100 = v132;
                vExpandAndCopyText(
                  v132,
                  v130,
                  v106,
                  v105,
                  v140[0],
                  v131,
                  pstro->ulCharInc,
                  v143,
                  v138,
                  &pstro->rclBkGround,
                  v116,
                  iSolidColor,
                  v87,
                  v123,
                  &si128,
                  v144,
                  v120,
                  v139,
                  v141);
                goto LABEL_157;
              case 3:
                v93 = v133;
                XCLIPOBJ::cEnumStart((XCLIPOBJ *)v133, 0, 0, 4u, 0);
                v94 = v132;
                v95 = (int)ppgpos;
                do
                {
                  v96 = XCLIPOBJ::bEnum((XCLIPOBJ *)v93, 0x134u, (char *)&v152, 0LL);
                  v97 = v130;
                  v122 = v141;
                  v121 = v139;
                  v119 = v144;
                  v117 = iSolidColor;
                  v114 = v138;
                  v112 = v143;
                  ulCharInc = pstro->ulCharInc;
                  pcoa = v131;
                  v98 = v140[0];
                  v153[v152].bottom = 0;
                  vExpandAndCopyText(
                    v94,
                    v97,
                    v90,
                    v91,
                    v98,
                    pcoa,
                    ulCharInc,
                    v112,
                    v114,
                    &pstro->rclBkGround,
                    v116,
                    v117,
                    v95,
                    v123,
                    v153,
                    v119,
                    v120,
                    v121,
                    v122);
                  v99 = v96 == 0;
                  v93 = v133;
                }
                while ( !v99 );
                v42 = v142;
                v44 = v145;
                break;
            }
          }
          v100 = v132;
          v101 = v130;
LABEL_157:
          v87 = (int)ppgpos;
          if ( !pc )
          {
            if ( (_DWORD)v127 )
            {
              v102 = *((_QWORD *)v100 + 6);
              v103 = bUMPDSecurityGateEx();
              UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
                (UMPDReleaseAcquireRFONTSem *)v166,
                v100,
                v101,
                v103);
              if ( (*((_DWORD *)v100 + 28) & 0x400) != 0 )
                v104 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v102 + 2872);
              else
                v104 = EngCopyBits;
              if ( *(_QWORD *)&rclBkGround.left )
                v10 = *(_QWORD *)&rclBkGround.left + 24LL;
              ((void (__fastcall *)(char *, __int64, CLIPOBJ *, _QWORD, LONG *, RECTL *))v104)(
                (char *)v100 + 24,
                v10,
                v133,
                0LL,
                &v154,
                &v158);
              UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v166);
            }
            v83 = v44;
            if ( !v126 )
            {
LABEL_168:
              EngFreeUserMem(v83);
LABEL_169:
              LODWORD(v10) = 1;
LABEL_170:
              SURFMEM::~SURFMEM((SURFMEM *)&rclBkGround);
LABEL_171:
              FRINGERECT::~FRINGERECT((FRINGERECT *)&v159);
              return v10;
            }
LABEL_118:
            FreeThreadBufferWithTag(v83, v82);
            goto LABEL_169;
          }
        }
      }
    }
  }
  return v10;
}
