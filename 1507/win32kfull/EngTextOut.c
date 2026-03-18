/*
 * XREFs of EngTextOut @ 0x1C009BA80
 * Callers:
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0288FB0 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C028D7E0 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0290090 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0298130 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     NtGdiEngTextOut @ 0x1C02AE1D0 (NtGdiEngTextOut.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0021750 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002193C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C009C820 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x1C009CEA8 (--1FRINGERECT@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D3304 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     STROBJ_bEnum @ 0x1C01002D0 (STROBJ_bEnum.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C015BAA0 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015BAF4 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0281D98 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C02B5904 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
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
  struct _SURFOBJ *v50; // r9
  __int64 v51; // rcx
  struct _BRUSHOBJ *v52; // rax
  _QWORD *v53; // rcx
  __int64 v54; // rcx
  LONG v55; // edx
  RECTL *v56; // r9
  LONG v57; // edi
  int v58; // eax
  LONG v59; // ecx
  RECTL *p_rclBkGround; // r10
  LONG v61; // r8d
  LONG v62; // ecx
  LONG v63; // edi
  LONG v64; // ecx
  LONG v65; // edx
  unsigned int v66; // esi
  LONG v67; // ecx
  int v68; // eax
  int v69; // ecx
  __int64 v70; // rdi
  LONG v71; // ecx
  LONG v72; // r10d
  LONG v73; // edx
  LONG v74; // r9d
  LONG v75; // r8d
  RECTL v76; // xmm0
  LONG v77; // ecx
  LONG v78; // ecx
  LONG v79; // r10d
  void *v80; // rcx
  int v81; // eax
  BOOL (__stdcall *v82)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  __int64 v83; // rcx
  int v84; // edi
  void *v85; // r8
  unsigned __int64 v86; // rdx
  void *v87; // r8
  unsigned __int64 v88; // rdx
  GLYPHPOS *v89; // rbx
  ULONG v90; // esi
  ULONG v91; // eax
  CLIPOBJ *v92; // rdi
  struct SURFACE *v93; // r13
  int v94; // r14d
  int v95; // edi
  struct _FONTOBJ *v96; // rdx
  unsigned __int8 *v97; // rax
  bool v98; // zf
  struct SURFACE *v99; // rbx
  struct _FONTOBJ *v100; // rsi
  __int64 v101; // rdi
  int v102; // eax
  BOOL (__stdcall *v103)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  unsigned int v104; // r9d
  struct _GLYPHPOS *v105; // r8
  unsigned __int8 *v107; // [rsp+20h] [rbp-100h]
  unsigned int pcoa; // [rsp+28h] [rbp-F8h]
  struct _XLATEOBJ *v109; // [rsp+30h] [rbp-F0h]
  ULONG ulCharInc; // [rsp+30h] [rbp-F0h]
  struct SURFACE *v111; // [rsp+38h] [rbp-E8h]
  struct _POINTL *v112; // [rsp+40h] [rbp-E0h]
  struct SURFACE *v113; // [rsp+40h] [rbp-E0h]
  struct _POINTL *v114; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v115; // [rsp+50h] [rbp-D0h]
  int v116; // [rsp+58h] [rbp-C8h]
  unsigned int v117; // [rsp+60h] [rbp-C0h]
  struct _RECTL *v118; // [rsp+78h] [rbp-A8h]
  unsigned int v119; // [rsp+80h] [rbp-A0h]
  struct _BRUSHOBJ *v120; // [rsp+88h] [rbp-98h]
  struct _POINTL *v121; // [rsp+90h] [rbp-90h]
  int v122; // [rsp+A0h] [rbp-80h]
  ULONG pc; // [rsp+A4h] [rbp-7Ch] BYREF
  ULONG v124; // [rsp+A8h] [rbp-78h] BYREF
  int v125; // [rsp+ACh] [rbp-74h]
  struct _BRUSHOBJ *v126; // [rsp+B0h] [rbp-70h]
  struct _RECTL v127; // [rsp+C0h] [rbp-60h] BYREF
  PGLYPHPOS ppgpos; // [rsp+D0h] [rbp-50h] BYREF
  struct _FONTOBJ *v129; // [rsp+D8h] [rbp-48h]
  unsigned int v130; // [rsp+E0h] [rbp-40h]
  struct SURFACE *v131; // [rsp+E8h] [rbp-38h]
  CLIPOBJ *v132; // [rsp+F0h] [rbp-30h]
  int v133; // [rsp+F8h] [rbp-28h]
  int iSolidColor; // [rsp+FCh] [rbp-24h]
  RECTL rclBkGround; // [rsp+100h] [rbp-20h] BYREF
  PGLYPHPOS v136; // [rsp+110h] [rbp-10h] BYREF
  struct SURFACE *v137; // [rsp+118h] [rbp-8h]
  struct _BRUSHOBJ *v138; // [rsp+120h] [rbp+0h]
  unsigned __int8 *v139[2]; // [rsp+130h] [rbp+10h]
  struct _POINTL *v140; // [rsp+140h] [rbp+20h]
  unsigned int v141; // [rsp+148h] [rbp+28h]
  struct SURFACE *v142; // [rsp+150h] [rbp+30h]
  struct _RECTL *v143; // [rsp+158h] [rbp+38h]
  _DWORD *v144; // [rsp+160h] [rbp+40h]
  RECTL *v145; // [rsp+168h] [rbp+48h]
  int v146; // [rsp+170h] [rbp+50h] BYREF
  __int64 v147; // [rsp+174h] [rbp+54h]
  __int128 v148; // [rsp+17Ch] [rbp+5Ch]
  int v149; // [rsp+18Ch] [rbp+6Ch]
  SURFOBJ *v150; // [rsp+190h] [rbp+70h]
  int v151; // [rsp+1A0h] [rbp+80h] BYREF
  struct _RECTL v152[20]; // [rsp+1A4h] [rbp+84h] BYREF
  LONG v153; // [rsp+2F0h] [rbp+1D0h] BYREF
  LONG v154; // [rsp+2F4h] [rbp+1D4h]
  LONG v155; // [rsp+2F8h] [rbp+1D8h]
  LONG v156; // [rsp+2FCh] [rbp+1DCh]
  RECTL v157; // [rsp+300h] [rbp+1E0h] BYREF
  struct SURFACE *v158; // [rsp+310h] [rbp+1F0h] BYREF
  __int64 v159; // [rsp+318h] [rbp+1F8h]
  CLIPOBJ *v160; // [rsp+320h] [rbp+200h]
  struct _BRUSHOBJ *v161; // [rsp+328h] [rbp+208h]
  int v162; // [rsp+330h] [rbp+210h]
  _DWORD v163[17]; // [rsp+334h] [rbp+214h]
  struct _FONTOBJ *v164; // [rsp+378h] [rbp+258h]
  _BYTE v165[80]; // [rsp+380h] [rbp+260h] BYREF
  _BYTE v166[80]; // [rsp+3D0h] [rbp+2B0h] BYREF
  struct _RECTL si128; // [rsp+420h] [rbp+300h] BYREF
  int v168; // [rsp+43Ch] [rbp+31Ch]

  v10 = 0LL;
  v143 = prclExtra;
  v145 = prclOpaque;
  v138 = pboFore;
  v126 = pboOpaque;
  v140 = pptlOrg;
  rclBkGround = pstro->rclBkGround;
  v127 = rclBkGround;
  v132 = pco;
  v129 = pfo;
  v150 = pso;
  v136 = 0LL;
  v122 = 0;
  v137 = 0LL;
  if ( pstro->ulCharInc )
  {
    bottom = v127.bottom;
    right = v127.right;
    top = v127.top;
    left = v127.left;
  }
  else
  {
    pgp = (struct SURFACE *)pstro->pgp;
    v13 = 0;
    cGlyphs = pstro->cGlyphs;
    v131 = pgp;
    ppgpos = (PGLYPHPOS)pgp;
    pc = cGlyphs;
    v124 = 0;
    if ( !pgp )
    {
      v13 = 1;
      *(_QWORD *)&pstro[1].cGlyphs = 0LL;
      v124 = 1;
    }
    bottom = v127.bottom;
    right = v127.right;
    top = v127.top;
    left = v127.left;
    if ( !v13 )
      goto LABEL_6;
    while ( 1 )
    {
      v19 = STROBJ_bEnum(pstro, &pc, &ppgpos);
      cGlyphs = pc;
      v13 = v19;
      v124 = v19;
      pgp = (struct SURFACE *)ppgpos;
      v131 = (struct SURFACE *)ppgpos;
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
      v139[0] = (unsigned __int8 *)__PAIR64__(v23, v24);
      v139[1] = (unsigned __int8 *)__PAIR64__(v26, v25);
      if ( left == right || top == bottom )
      {
        v127 = *(struct _RECTL *)v139;
        bottom = HIDWORD(v139[1]);
        right = (LONG)v139[1];
        top = HIDWORD(v139[0]);
        left = (LONG)v139[0];
      }
      else
      {
        if ( v24 < left )
          left = v24;
        v127.left = left;
        if ( v23 < top )
          top = v23;
        v127.top = top;
        if ( v25 > right )
          right = v25;
        v127.right = right;
        if ( v26 > bottom )
        {
          bottom = v26;
          v127.bottom = v26;
        }
      }
      pgp = v131;
      if ( ++v20 >= cGlyphs )
      {
        v13 = v124;
        goto LABEL_21;
      }
    }
  }
LABEL_24:
  v27 = SURFOBJ_TO_SURFACE(v150);
  v131 = (struct SURFACE *)v27;
  v142 = (struct SURFACE *)v27;
  if ( (v129->flFontType & 0x10000) != 0 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v29 = *ThreadWin32Thread) != 0 )
      v30 = *(_QWORD *)(v29 + 304);
    else
      v30 = *(_QWORD *)(v27 + 104);
    if ( v30 )
      v137 = *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v30 + 48LL) + 2576LL);
    else
      v137 = (struct SURFACE *)v27;
    v31 = 0;
    bottom = v127.bottom;
    if ( *(_WORD *)(v27 + 100) )
      v31 = 16;
    right = v127.right;
    top = v127.top;
    left = v127.left;
    v122 = v31;
    if ( (*(_WORD *)(v27 + 102) & 0x100) != 0 )
    {
      v31 |= 0x80u;
      v122 = v31;
    }
  }
  else
  {
    v31 = 0;
  }
  flFontType = v129->flFontType;
  if ( (flFontType & 2) == 0 )
  {
    v133 = v132 ? v132->iDComplexity : 0;
    LODWORD(ppgpos) = -1;
    iSolidColor = v138->iSolidColor;
    if ( (flFontType & 0x10000) != 0 )
    {
      if ( *(_DWORD *)(v27 + 96) == 3 )
      {
        if ( (unsigned int)bUMPDSecurityGateEx() && !v126 )
        {
          if ( gfUMPDDebug )
            DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 638);
          return v10;
        }
        if ( v126->iSolidColor == -1 )
          return v10;
        v31 = v122;
      }
      v33 = v31 | 8;
      v122 = v33;
      v34 = v129->flFontType;
      if ( (v34 & 0x10000000) != 0 )
      {
        v35 = pstro->rclBkGround.right;
        v122 = v33 | 0x20;
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
    v130 = v41;
    if ( v41 <= 0x7FFF && v39 <= 0x7FFF )
    {
      v42 = v41 * v39;
      v141 = v42;
      if ( v42 >= 0x10000 )
      {
        v125 = 0;
        v43 = EngAllocUserMem(v42, 0x6F746547u);
      }
      else
      {
        v125 = 1;
        v43 = (_DWORD *)AllocThreadBufferWithTag(v42, 1869899079LL, 32LL);
      }
      v144 = v43;
      v44 = v43;
      if ( v43 )
      {
        flAccel = pstro->flAccel;
        v46 = v122;
        v139[0] = (unsigned __int8 *)v43 + v130 * (pstro->rclBkGround.top - top) + pc;
        if ( (flAccel & 0xA) == 2 )
        {
          v46 = (pstro->ulCharInc != 0) | (2 * (((flAccel & 0x11) != 17) | (2 * ((flAccel & 0x51) == 81)))) | v122;
          v122 = v46;
        }
        v47 = v131;
        v158 = v131;
        if ( *((_WORD *)v131 + 50) )
          v159 = 0LL;
        else
          v159 = *((_QWORD *)v131 + 9);
        v48 = v145;
        v160 = v132;
        v161 = v126;
        v164 = v129;
        v162 = 0;
        if ( v145 )
        {
          v49 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v49 )
          {
            v51 = *v49;
            v52 = v126;
            if ( v51 )
            {
              v53 = (_QWORD *)(v51 + 40);
              if ( (_QWORD *)*v53 != v53 )
              {
                v54 = *v53 - 40LL;
                if ( v54 )
                {
                  if ( (*(_DWORD *)(v54 + 412) & 0x100) != 0 && *(_DWORD *)(v54 + 432) && !v126 )
                  {
                    if ( gfUMPDDebug )
                      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 858);
                    if ( v125 )
                      FreeThreadBufferWithTag(v44);
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
            v52 = v126;
          }
          LODWORD(ppgpos) = v52->iSolidColor;
          if ( (_DWORD)ppgpos != -1 && iSolidColor != -1 )
          {
            v55 = pstro->rclBkGround.top;
            v56 = v48;
            v57 = v48->top;
            if ( v55 <= v57 )
            {
              v58 = v162;
            }
            else
            {
              v163[4 * v162] = v56->left;
              v163[4 * v162 + 1] = v57;
              v163[4 * v162 + 2] = v56->right;
              v163[4 * v162 + 3] = v55;
              v58 = ++v162;
            }
            v59 = pstro->rclBkGround.left;
            p_rclBkGround = &pstro->rclBkGround;
            v61 = v56->left;
            if ( v59 > v56->left )
            {
              v163[4 * v58] = v61;
              v163[4 * v162 + 1] = v55;
              v163[4 * v162 + 2] = v59;
              v163[4 * v162 + 3] = pstro->rclBkGround.bottom;
              v58 = ++v162;
            }
            v62 = pstro->rclBkGround.right;
            v63 = v56->right;
            if ( v62 < v63 )
            {
              v163[4 * v58] = v62;
              v163[4 * v162 + 1] = v55;
              v163[4 * v162 + 2] = v63;
              v163[4 * v162 + 3] = pstro->rclBkGround.bottom;
              v58 = ++v162;
            }
            v64 = pstro->rclBkGround.bottom;
            v65 = v56->bottom;
            if ( v64 < v65 )
            {
              v163[4 * v58] = v61;
              v163[4 * v162 + 1] = v64;
              v163[4 * v162 + 2] = v63;
              v163[4 * v162++ + 3] = v65;
            }
            goto LABEL_95;
          }
          EngTextOutBitBlt(v47, v129, v46, v50, (struct _SURFOBJ *)v107, v132, v109, v48, v112, v114, v126, v140, v117);
        }
        p_rclBkGround = &pstro->rclBkGround;
LABEL_95:
        *(_QWORD *)&rclBkGround.left = 0LL;
        v147 = 0LL;
        v148 = 0uLL;
        v149 = 0;
        LOBYTE(rclBkGround.right) = 0;
        LODWORD(v126) = v46 & 0x10;
        rclBkGround.bottom = 0;
        v146 = 0;
        if ( (v46 & 0x10) != 0 )
        {
          v66 = p_rclBkGround->left & 0xFFFFFFF8;
          if ( (v122 & 0x20) != 0 )
            v66 = p_rclBkGround->left & 0xFFFFFFFC;
          v67 = pstro->rclBkGround.top;
          v146 = *((_DWORD *)v47 + 24);
          LODWORD(v147) = pstro->rclBkGround.right - v66;
          v68 = pstro->rclBkGround.bottom - v67;
          pc = v67;
          v69 = 1;
          HIDWORD(v147) = v68;
          HIDWORD(v148) = 1;
          *(_QWORD *)((char *)&v148 + 4) = 0LL;
          if ( (*((_DWORD *)v47 + 28) & 0x40000) != 0 )
            v69 = 262145;
          HIDWORD(v148) = v69;
          if ( !SURFMEM::bCreateDIB(
                  (SURFMEM *)&rclBkGround,
                  (struct _DEVBITMAPINFO *)&v146,
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
            if ( v125 )
              FreeThreadBufferWithTag(v44);
            else
              EngFreeUserMem(v44);
            goto LABEL_170;
          }
          v70 = *((_QWORD *)v47 + 6);
          v71 = 0;
          v72 = 0;
          v142 = *(struct SURFACE **)&rclBkGround.left;
          if ( v47 == *(struct SURFACE **)(v70 + 2576) && (*(_DWORD *)(v70 + 56) & 0x20000) != 0 )
          {
            v71 = *(_DWORD *)(v70 + 2608);
            v72 = *(_DWORD *)(v70 + 2612);
          }
          v73 = pstro->rclBkGround.left;
          v74 = pstro->rclBkGround.top;
          if ( v71 > v73 )
            v73 = v71;
          v75 = pstro->rclBkGround.right;
          v76 = pstro->rclBkGround;
          if ( v72 > v74 )
            v74 = v72;
          v153 = v73;
          v77 = v150->sizlBitmap.cx + v71;
          v157 = v76;
          v154 = v74;
          if ( v77 < v75 )
            v75 = v77;
          v78 = v72 + v150->sizlBitmap.cy;
          v155 = v75;
          v79 = pstro->rclBkGround.bottom;
          if ( v78 < v79 )
            v79 = v78;
          v156 = v79;
          if ( v133 )
          {
            if ( !(unsigned int)bIntersect(&v153, &v132->rclBounds) )
            {
              v80 = v44;
              if ( !v125 )
                goto LABEL_168;
              goto LABEL_118;
            }
            v79 = v156;
            v75 = v155;
            v74 = v154;
            v73 = v153;
          }
          v157.right = v155 - v66;
          v157.left = v73 - v66;
          v157.top = v154 - pc;
          v157.bottom = v156 - pc;
          if ( (_DWORD)ppgpos == -1 && v73 < v75 && v74 < v79 )
          {
            v81 = bUMPDSecurityGateEx();
            UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v166, v47, v129, v81);
            if ( (*((_DWORD *)v47 + 28) & 0x400) != 0 )
              v82 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v70 + 2872);
            else
              v82 = EngCopyBits;
            v83 = 0LL;
            if ( *(_QWORD *)&rclBkGround.left )
              v83 = *(_QWORD *)&rclBkGround.left + 24LL;
            ((void (__fastcall *)(__int64, char *, _QWORD, XLATEOBJ *const, RECTL *, LONG *))v82)(
              v83,
              (char *)v47 + 24,
              0LL,
              xloIdent,
              &v157,
              &v153);
            UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v166);
          }
        }
        v84 = (int)ppgpos;
        *(_QWORD *)&pstro[1].cGlyphs = 0LL;
        if ( v84 == -1 )
          goto LABEL_137;
        v85 = v44;
        v86 = (unsigned __int64)v42 >> 2;
        if ( v86 )
        {
          if ( ((unsigned __int8)v44 & 4) != 0 )
          {
            *v44 = 0;
            if ( !--v86 )
              goto LABEL_136;
            v85 = v44 + 1;
          }
          memset(v85, 0, 8 * (v86 >> 1));
          v84 = (int)ppgpos;
          if ( (v86 & 1) != 0 )
            *((_DWORD *)v85 + v86 - 1) = 0;
        }
        while ( 1 )
        {
LABEL_136:
          if ( v84 != -1 )
            goto LABEL_143;
LABEL_137:
          v87 = v44;
          v88 = (unsigned __int64)v42 >> 2;
          if ( v88 )
          {
            if ( ((unsigned __int8)v44 & 4) != 0 )
            {
              *v44 = 0;
              if ( !--v88 )
                goto LABEL_143;
              v87 = v44 + 1;
            }
            memset(v87, 0, 8 * (v88 >> 1));
            v84 = (int)ppgpos;
            if ( (v88 & 1) != 0 )
              *((_DWORD *)v87 + v88 - 1) = 0;
          }
LABEL_143:
          v89 = pstro->pgp;
          if ( v89 )
          {
            v90 = pstro->cGlyphs;
            v124 = pstro->cGlyphs;
            v136 = v89;
            pc = 0;
          }
          else
          {
            if ( (pstro[1].rclBkGround.top & 2) != 0 )
              v91 = STROBJ_bEnum(pstro, &v124, &v136);
            else
              v91 = STROBJ_bEnumCheckBounds(pstro, &v124, &v136, &v127);
            v90 = v124;
            v89 = v136;
            pc = v91;
          }
          if ( v90 )
          {
            si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
            v168 = 0;
            switch ( v133 )
            {
              case 0:
                goto LABEL_162;
              case 1:
                v168 = 0;
                si128 = v132->rclBounds;
LABEL_162:
                v104 = v90;
                v100 = v129;
                v105 = v89;
                v99 = v131;
                vExpandAndCopyText(
                  v131,
                  v129,
                  v105,
                  v104,
                  v139[0],
                  v130,
                  pstro->ulCharInc,
                  v142,
                  v137,
                  &pstro->rclBkGround,
                  v115,
                  iSolidColor,
                  v84,
                  v122,
                  &si128,
                  v143,
                  v119,
                  v138,
                  v140);
                goto LABEL_157;
              case 3:
                v92 = v132;
                XCLIPOBJ::cEnumStart((XCLIPOBJ *)v132, 0, 0, 4u, 0);
                v93 = v131;
                v94 = (int)ppgpos;
                do
                {
                  v95 = XCLIPOBJ::bEnum((XCLIPOBJ *)v92, 0x134u, (char *)&v151, 0LL);
                  v96 = v129;
                  v121 = v140;
                  v120 = v138;
                  v118 = v143;
                  v116 = iSolidColor;
                  v113 = v137;
                  v111 = v142;
                  ulCharInc = pstro->ulCharInc;
                  pcoa = v130;
                  v97 = v139[0];
                  v152[v151].bottom = 0;
                  vExpandAndCopyText(
                    v93,
                    v96,
                    v89,
                    v90,
                    v97,
                    pcoa,
                    ulCharInc,
                    v111,
                    v113,
                    &pstro->rclBkGround,
                    v115,
                    v116,
                    v94,
                    v122,
                    v152,
                    v118,
                    v119,
                    v120,
                    v121);
                  v98 = v95 == 0;
                  v92 = v132;
                }
                while ( !v98 );
                v42 = v141;
                v44 = v144;
                break;
            }
          }
          v99 = v131;
          v100 = v129;
LABEL_157:
          v84 = (int)ppgpos;
          if ( !pc )
          {
            if ( (_DWORD)v126 )
            {
              v101 = *((_QWORD *)v99 + 6);
              v102 = bUMPDSecurityGateEx();
              UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
                (UMPDReleaseAcquireRFONTSem *)v165,
                v99,
                v100,
                v102);
              if ( (*((_DWORD *)v99 + 28) & 0x400) != 0 )
                v103 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v101 + 2872);
              else
                v103 = EngCopyBits;
              if ( *(_QWORD *)&rclBkGround.left )
                v10 = *(_QWORD *)&rclBkGround.left + 24LL;
              ((void (__fastcall *)(char *, __int64, CLIPOBJ *, _QWORD, LONG *, RECTL *))v103)(
                (char *)v99 + 24,
                v10,
                v132,
                0LL,
                &v153,
                &v157);
              UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v165);
            }
            v80 = v44;
            if ( !v125 )
            {
LABEL_168:
              EngFreeUserMem(v80);
LABEL_169:
              LODWORD(v10) = 1;
LABEL_170:
              SURFMEM::~SURFMEM((SURFMEM *)&rclBkGround);
LABEL_171:
              FRINGERECT::~FRINGERECT((FRINGERECT *)&v158);
              return v10;
            }
LABEL_118:
            FreeThreadBufferWithTag(v80);
            goto LABEL_169;
          }
        }
      }
    }
  }
  return v10;
}
