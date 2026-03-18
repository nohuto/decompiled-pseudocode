/*
 * XREFs of EngHTBlt @ 0x1C00A30B4
 * Callers:
 *     EngAlphaBlend @ 0x1C0034230 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0035314 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00A1510 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028040C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     EngCopyBits @ 0x1C00131B0 (EngCopyBits.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C0013B9C (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0021750 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002193C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0030758 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00307F0 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C0036F98 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0036FC0 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     EngBitBlt @ 0x1C009CF40 (EngBitBlt.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00A1D0C (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1C00A1D44 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1C00A38C4 (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 *     HT_HalftoneBitmap @ 0x1C00A3910 (HT_HalftoneBitmap.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D3304 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EB1E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00FCA5C (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C00FED38 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1C00FFB70 (-bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct XLATE *a5,
        POINTL a6,
        __int64 a7,
        LONG *a8,
        XLATEOBJ *a9,
        __int64 *a10,
        int a11,
        struct SURFACE *a12)
{
  struct SURFACE *v15; // r15
  __int64 v16; // r13
  unsigned int v17; // esi
  unsigned int v18; // ebx
  __int64 v19; // rax
  int v20; // r14d
  int v21; // r15d
  struct SURFACE *v22; // rdx
  struct XLATE *v23; // r8
  struct PALETTE *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdi
  int v27; // r10d
  __int16 v28; // dx
  __int16 v29; // r9
  __int128 v30; // xmm0
  int v31; // eax
  struct SURFACE *v32; // rdx
  CLIPOBJ *v33; // r8
  struct SURFACE *v34; // r13
  BYTE iDComplexity; // r15
  int v36; // r11d
  LONG *p_left; // rbx
  LONG v38; // ecx
  unsigned __int64 v39; // rax
  LONG v40; // edx
  int v41; // r10d
  LONG v42; // edx
  LONG v43; // ecx
  LONG v44; // r8d
  unsigned __int64 v45; // rax
  int v46; // eax
  XLATEOBJ *v47; // r12
  XLATEOBJ *v48; // r15
  HPALETTE *v49; // rax
  __int64 *v50; // r15
  struct PALETTE *v51; // rbx
  BOOL (__stdcall *v52)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  int v53; // ebx
  _BYTE *v54; // rcx
  struct _SURFOBJ *v55; // rcx
  __int64 v56; // r9
  _BYTE *v57; // r11
  __int16 v58; // dx
  unsigned int v59; // eax
  CLIPOBJ *v60; // r15
  struct SURFACE *v61; // rax
  SURFOBJ *v62; // rcx
  SURFOBJ *v63; // rdx
  int v64; // eax
  int v66; // eax
  ULONG iBitmapFormat; // ecx
  int v68; // eax
  SURFOBJ *v69; // rcx
  int v70; // eax
  char v71; // cl
  int v72; // eax
  _DWORD *v73; // rax
  int v74; // eax
  LONG v75; // eax
  int v76; // eax
  unsigned int cEntries; // ecx
  _BYTE *v78; // r8
  __int64 v79; // r10
  __int64 v80; // r9
  char v81; // cl
  __int64 v82; // rax
  char *v83; // rdi
  int v84; // r13d
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  int v88; // r12d
  unsigned int v89; // r15d
  int v90; // r12d
  char *v91; // rdx
  int v92; // [rsp+60h] [rbp-A0h]
  BYTE v93; // [rsp+64h] [rbp-9Ch]
  int v94; // [rsp+68h] [rbp-98h]
  int v95; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v96; // [rsp+70h] [rbp-90h] BYREF
  LONG *v97; // [rsp+78h] [rbp-88h] BYREF
  int v98; // [rsp+80h] [rbp-80h]
  int v99; // [rsp+84h] [rbp-7Ch]
  CLIPOBJ *pco; // [rsp+88h] [rbp-78h]
  POINTL pptlSrc; // [rsp+90h] [rbp-70h] BYREF
  struct SURFACE *v102; // [rsp+98h] [rbp-68h]
  XLATEOBJ *v103; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE *v104; // [rsp+A8h] [rbp-58h]
  SURFOBJ *psoDest; // [rsp+B0h] [rbp-50h]
  struct XLATE *v106; // [rsp+B8h] [rbp-48h]
  struct SURFACE *v107; // [rsp+C0h] [rbp-40h]
  _BYTE v108[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int16 v109; // [rsp+CAh] [rbp-36h]
  __int64 v110; // [rsp+D0h] [rbp-30h]
  HPALETTE *v111; // [rsp+D8h] [rbp-28h] BYREF
  XLATEOBJ *v112; // [rsp+E0h] [rbp-20h]
  __int64 v113; // [rsp+E8h] [rbp-18h]
  __int64 v114; // [rsp+F0h] [rbp-10h] BYREF
  XLATEOBJ *v115; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v116; // [rsp+100h] [rbp+0h] BYREF
  char v117; // [rsp+108h] [rbp+8h]
  int v118; // [rsp+10Ch] [rbp+Ch]
  __int64 *v119; // [rsp+110h] [rbp+10h]
  __int64 *v120; // [rsp+118h] [rbp+18h]
  struct SURFACE *v121; // [rsp+120h] [rbp+20h] BYREF
  char v122; // [rsp+128h] [rbp+28h]
  int v123; // [rsp+12Ch] [rbp+2Ch]
  int v124; // [rsp+130h] [rbp+30h] BYREF
  SIZEL sizlBitmap; // [rsp+134h] [rbp+34h]
  __int128 v126; // [rsp+13Ch] [rbp+3Ch]
  int v127; // [rsp+14Ch] [rbp+4Ch]
  __int64 v128; // [rsp+150h] [rbp+50h] BYREF
  int v129; // [rsp+158h] [rbp+58h]
  _DWORD v130[4]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE *v131; // [rsp+170h] [rbp+70h]
  int v132; // [rsp+178h] [rbp+78h] BYREF
  int v133; // [rsp+17Ch] [rbp+7Ch]
  int v134; // [rsp+180h] [rbp+80h]
  int v135; // [rsp+184h] [rbp+84h]
  _BYTE v136[12]; // [rsp+188h] [rbp+88h]
  int v137; // [rsp+194h] [rbp+94h]
  struct PALETTE *v138; // [rsp+198h] [rbp+98h]
  _BYTE v139[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v140; // [rsp+1C0h] [rbp+C0h]
  _BYTE v141[32]; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD *v142; // [rsp+1E8h] [rbp+E8h]
  _BYTE v143[48]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v144; // [rsp+220h] [rbp+120h] BYREF
  char v145; // [rsp+223h] [rbp+123h]
  _BYTE *v146; // [rsp+228h] [rbp+128h]
  __int128 v147; // [rsp+230h] [rbp+130h]
  __int128 v148; // [rsp+240h] [rbp+140h]
  RECTL rclBounds; // [rsp+250h] [rbp+150h]
  RECTL prclDest; // [rsp+260h] [rbp+160h] BYREF
  __int64 v151; // [rsp+270h] [rbp+170h]
  __int64 v152; // [rsp+278h] [rbp+178h]
  RECTL prclTrg; // [rsp+290h] [rbp+190h] BYREF
  RECTL v154; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v155[256]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v106 = a5;
  pptlSrc = a6;
  *(_QWORD *)&prclTrg.left = a7;
  v97 = a8;
  v103 = a9;
  v120 = a10;
  v107 = a12;
  pco = a4;
  v114 = a3;
  psoDest = a1;
  v102 = (struct SURFACE *)SURFOBJ_TO_SURFACE(a1);
  v15 = v102;
  v16 = SURFOBJ_TO_SURFACE(a2);
  v17 = 0;
  v113 = SURFOBJ_TO_SURFACE(a3);
  v18 = 0;
  if ( v102 )
  {
    v19 = *((_QWORD *)v102 + 6);
    v96 = v19;
    if ( !v19 )
      return v17;
    v20 = 1;
    v95 = *(_DWORD *)(v19 + 56) & 1;
    HTSEMOBJ::vAcquire((HTSEMOBJ *)&v95);
    if ( a1->iType )
    {
      v21 = *(_DWORD *)(v96 + 2400);
      if ( v21 )
      {
        switch ( v21 )
        {
          case 2:
            v92 = 2;
            v94 = 2;
            break;
          case 3:
            v94 = 255;
            v92 = 2;
            break;
          case 4:
            v94 = 254;
            v92 = 3;
            break;
          case 5:
            v94 = 253;
            v92 = 4;
            break;
          case 6:
            v94 = 5;
            v92 = 5;
            break;
          case 7:
            v94 = 6;
            v92 = 6;
            break;
          default:
            goto LABEL_94;
        }
        goto LABEL_11;
      }
    }
    else
    {
      if ( *((_DWORD *)v15 + 24) != 1 )
      {
        switch ( *((_DWORD *)v15 + 24) )
        {
          case 2:
            v18 = ((a1->sizlBitmap.cx + 7) >> 1) & 0xFFFFFFFC;
            v92 = 2;
            if ( *(_DWORD *)(v96 + 2400) == 2 )
            {
              v94 = 2;
              v21 = 2;
            }
            else
            {
              v94 = 255;
              v21 = 3;
            }
            break;
          case 3:
            v21 = 4;
            v94 = 254;
            v18 = (a1->sizlBitmap.cx + 3) & 0xFFFFFFFC;
            v92 = 3;
            break;
          case 4:
            v21 = 5;
            v94 = 253;
            v92 = 4;
            v18 = (2 * a1->sizlBitmap.cx + 2) & 0xFFFFFFFC;
            break;
          case 5:
            v21 = 6;
            v94 = 5;
            v92 = 5;
            v18 = (3 * (a1->sizlBitmap.cx + 1)) & 0xFFFFFFFC;
            break;
          case 6:
            v21 = 7;
            v18 = 4 * a1->sizlBitmap.cx;
            v94 = 6;
            v92 = 6;
            break;
          default:
LABEL_94:
            HTSEMOBJ::vRelease((HTSEMOBJ *)&v95);
            return v17;
        }
LABEL_11:
        v154.right = a2->sizlBitmap.cx;
        v154.bottom = a2->sizlBitmap.cy;
        *(_QWORD *)&v154.left = 0LL;
        ERECTL::operator*=(&v154);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v154) )
        {
LABEL_127:
          v17 = v20;
          goto LABEL_94;
        }
        if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v96)
          && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v96, *(struct tagCOLORADJUSTMENT **)&pptlSrc) )
        {
          v20 = -1;
          goto LABEL_127;
        }
        v116 = 0LL;
        v117 = 0;
        v118 = 0;
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v95);
        if ( v16 )
        {
          if ( (*(_DWORD *)(v16 + 112) & 0x1000) != 0 )
          {
            v111 = *(HPALETTE **)(v16 + 48);
            PDEVOBJ::vSync((PDEVOBJ *)&v111, a2, 0LL, 0);
          }
          if ( !a2->iType && a2->iBitmapFormat - 7 > 1 )
          {
            v104 = (_BYTE *)v16;
            goto LABEL_19;
          }
          iBitmapFormat = a2->iBitmapFormat;
          sizlBitmap = 0LL;
          v126 = 0uLL;
          v127 = 0;
          sizlBitmap = a2->sizlBitmap;
          v68 = *(_DWORD *)(v16 + 112) & 0x40000;
          *(_QWORD *)((char *)&v126 + 4) = 0LL;
          HIDWORD(v126) = v68;
          if ( iBitmapFormat == 7 )
          {
            v124 = 2;
          }
          else if ( iBitmapFormat == 8 )
          {
            v124 = 3;
          }
          else
          {
            v124 = iBitmapFormat;
          }
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v116, (struct _DEVBITMAPINFO *)&v124, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          {
            v69 = 0LL;
            if ( v116 )
              v69 = (SURFOBJ *)(v116 + 24);
            if ( EngCopyBits(v69, a2, 0LL, xloIdent, &v154, (POINTL *)&v154) )
            {
              v104 = (_BYTE *)v116;
LABEL_19:
              HTSEMOBJ::vAcquire((HTSEMOBJ *)&v95);
              v138 = ppalGetFromXlate((struct SURFACE *)v16, v102, v106, 1u, 1);
              if ( !v138 )
              {
LABEL_93:
                SURFMEM::~SURFMEM((SURFMEM *)&v116);
                goto LABEL_94;
              }
              v24 = ppalGetFromXlate((struct SURFACE *)v16, v22, v23, 2u, 1);
              v25 = v96;
              v26 = (__int64)v24;
              v129 = 0;
              v128 = 0LL;
              v119 = 0LL;
              if ( v21 == *(_DWORD *)(v96 + 2400) )
              {
                v27 = *(_DWORD *)(v96 + 56) & 0x200;
              }
              else
              {
                if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette(
                                      (PALMEMOBJ *)&v128,
                                      v21,
                                      (struct _GDIINFO *)(v96 + 2160)) )
                  goto LABEL_106;
                v119 = &v128;
                v66 = XEPALOBJ::bEqualEntries(&v128, v26);
                v25 = v96;
                v27 = v66;
              }
              v28 = a11;
              v98 = v27;
              if ( a11 != 512 )
                goto LABEL_23;
              v70 = *(_DWORD *)v107;
              if ( (unsigned __int8)*(_DWORD *)v107 )
              {
                v28 = 0;
                a11 = 0;
                goto LABEL_23;
              }
              v108[0] = 0;
              v110 = 0LL;
              v109 = 0;
              v108[1] = BYTE2(v70);
              if ( HIBYTE(v70) != 1 || BYTE2(v70) != 0xFF )
              {
                v71 = 1;
LABEL_146:
                v108[0] = v71;
                if ( v26 )
                {
                  v110 = *(_QWORD *)(v26 + 128);
                  v109 = *(_WORD *)(v26 + 28);
                  v72 = *(_DWORD *)(v26 + 24);
                  if ( (v72 & 8) != 0
                    || (v72 & 2) != 0
                    && (v73 = *(_DWORD **)(v26 + 128), *v73 == 16711680)
                    && v73[1] == 65280
                    && v73[2] == 255 )
                  {
                    v108[0] = v71 | 2;
                  }
                }
                v146 = v108;
LABEL_23:
                v29 = v28;
                v144 = v28;
                v30 = *(_OWORD *)&v103->iUniq;
                v148 = *(_OWORD *)v97;
                v151 = **(_QWORD **)&prclTrg.left;
                v147 = v30;
                v145 = *(_BYTE *)(v25 + 2392);
                if ( v106 )
                  v31 = *((_DWORD *)v106 + 18);
                else
                  LOBYTE(v31) = 0;
                if ( (v31 & 4) != 0 || (v31 & 0x20) == 0 && (v31 & 3) != 0 )
                {
                  v29 = v28 | 0x80;
                  v144 = v28 | 0x80;
                }
                v32 = v102;
                v33 = pco;
                v34 = v102;
                v107 = v102;
                v121 = 0LL;
                v122 = 0;
                v123 = 0;
                v99 = 0;
                if ( pco )
                {
                  iDComplexity = pco->iDComplexity;
                  v93 = iDComplexity;
                }
                else
                {
                  iDComplexity = 0;
                  v93 = 0;
                }
                v36 = v92;
                if ( !psoDest->iType && psoDest->lDelta == v18 && (v92 == 3 || v27) && iDComplexity != 3 )
                {
                  if ( psoDest != a2 || (p_left = v97, v74 = bIntersect(v103, v97), !v74) )
                  {
LABEL_53:
                    v47 = xloIdent;
                    v112 = xloIdent;
                    v48 = xloIdent;
                    *(_QWORD *)&prclTrg.left = xloIdent;
                    v103 = 0LL;
                    v115 = 0LL;
                    v49 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v96);
                    v111 = v49;
                    if ( v98 )
                      goto LABEL_64;
                    EPALOBJ::EPALOBJ((EPALOBJ *)&v97, *v49);
                    v50 = (__int64 *)&v97;
                    if ( v119 )
                      v50 = v119;
                    if ( !v106 || (v51 = (struct PALETTE *)*((_QWORD *)v106 + 7)) == 0LL )
                      v51 = ppalDefault;
                    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                         (__int64 *)&v103,
                                         0LL,
                                         0,
                                         *v50,
                                         v26,
                                         (__int64)v51,
                                         (__int64)v51,
                                         0,
                                         0xFFFFFF,
                                         0xFFFFFF,
                                         0) )
                    {
                      v47 = v103;
                      v112 = v103;
                      if ( !v113 && a11 != 512 || !v99 )
                      {
                        v48 = *(XLATEOBJ **)&prclTrg.left;
                        goto LABEL_62;
                      }
                      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                           (__int64 *)&v115,
                                           0LL,
                                           0,
                                           v26,
                                           *v50,
                                           (__int64)v51,
                                           (__int64)v51,
                                           0,
                                           0xFFFFFF,
                                           0xFFFFFF,
                                           0) )
                      {
                        v48 = v115;
LABEL_62:
                        if ( v97 )
                          DEC_SHARE_REF_CNT(v97);
LABEL_64:
                        HTSEMOBJ::vRelease((HTSEMOBJ *)&v95);
                        PDEVOBJ::vSync((PDEVOBJ *)&v96, psoDest, 0LL, 0);
                        v52 = EngCopyBits;
                        if ( v113 || a11 == 512 )
                        {
                          if ( v99 )
                          {
                            v75 = *((_DWORD *)v34 + 14);
                            ++*((_DWORD *)v34 + 23);
                            prclTrg.right = v75;
                            prclTrg.bottom = *((_DWORD *)v34 + 15);
                            *(_QWORD *)&prclTrg.left = 0LL;
                            v76 = (*((_DWORD *)v102 + 28) & 0x400) != 0
                                ? (*(__int64 (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))(v96 + 2872))(
                                    (__int64)v34 + 24,
                                    psoDest,
                                    0LL,
                                    v48,
                                    &prclTrg,
                                    &prclDest)
                                : ((__int64 (__fastcall *)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                                    (char *)v34 + 24,
                                    psoDest,
                                    0LL,
                                    v48,
                                    &prclTrg,
                                    &prclDest);
                            if ( !v76
                              && !EngBitBlt(
                                    (SURFOBJ *)((char *)v34 + 24),
                                    0LL,
                                    0LL,
                                    0LL,
                                    0LL,
                                    &prclTrg,
                                    0LL,
                                    0LL,
                                    0LL,
                                    0LL,
                                    0xFFFFu) )
                            {
                              HTSEMOBJ::vAcquire((HTSEMOBJ *)&v95);
LABEL_186:
                              v17 = -1;
LABEL_90:
                              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v115);
                              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v103);
LABEL_91:
                              SURFMEM::~SURFMEM((SURFMEM *)&v121);
LABEL_92:
                              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v128);
                              goto LABEL_93;
                            }
                          }
                        }
                        HTSEMOBJ::vAcquire((HTSEMOBJ *)&v95);
                        v53 = 0;
                        v140 = 0LL;
                        v54 = 0LL;
                        if ( v104 )
                          v54 = v104 + 24;
                        if ( !(unsigned int)bSetHTSrcSurfInfo(v54, v138, v139, v106) )
                          goto LABEL_87;
                        v55 = 0LL;
                        if ( v34 )
                          v55 = (struct _SURFOBJ *)((char *)v34 + 24);
                        if ( !(unsigned int)bSetHTSurfInfo(v55, (struct _HTSURFACEINFO *)v141, v94)
                          || (v56 = v113) != 0
                          && !(unsigned int)bSetHTSurfInfo(
                                              (struct _SURFOBJ *)(v113 + 24),
                                              (struct _HTSURFACEINFO *)v143,
                                              *(_DWORD *)(v114 + 72)) )
                        {
LABEL_87:
                          if ( v140 )
                            FreeThreadBufferWithTag(v140);
                          v17 = v53 != 0 ? 1 : -1;
                          goto LABEL_90;
                        }
                        v104 = 0LL;
                        LODWORD(v57) = 0;
                        if ( v56 )
                        {
                          if ( (unsigned int)bUMPDSecurityGateEx() && !v120 )
                          {
                            if ( gfUMPDDebug )
                              DbgPrint(
                                "windows\\core\\ntgdi\\gre\\windows\\htblt.cxx:%d:EngHTBlt:pptlMask == NULL\n",
                                1043);
                            if ( v140 )
                              FreeThreadBufferWithTag(v140);
                            goto LABEL_186;
                          }
                          v57 = v143;
                          v152 = *v120;
                          v104 = v143;
                        }
                        v58 = v144;
                        v59 = 256;
                        if ( (*(_DWORD *)(v96 + 2404) & 0x100) == 0 )
                        {
                          v58 = v144 | 2;
                          v144 |= 2u;
                        }
                        if ( v92 == 3 )
                        {
                          v130[0] = 65792;
                          v142 = v130;
                          v131 = v155;
                          v130[1] = 255;
                          v130[2] = 256;
                          cEntries = v47->cEntries;
                          if ( cEntries > 0x100 || (v59 = v47->cEntries, cEntries) )
                          {
                            v78 = v155;
                            v79 = v59;
                            v80 = 0LL;
                            do
                            {
                              v81 = v47->pulXlate[v80++];
                              *v78++ = v81;
                              --v79;
                            }
                            while ( v79 );
                          }
                          v47 = xloIdent;
                          v112 = xloIdent;
                        }
                        v60 = pco;
                        if ( v93 )
                        {
                          v144 = v58 | 1;
                          if ( v93 != 1 )
                          {
                            XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
                            v53 = 1;
                            v82 = AllocFreeTmpBuffer(324LL);
                            v83 = (char *)v82;
                            if ( v82 )
                            {
                              v84 = (int)v104;
                              v114 = v82;
                              do
                              {
                                v88 = XCLIPOBJ::bEnum((XCLIPOBJ *)v60, 0x144u, v83, 0LL);
                                v98 = v88;
                                v89 = 0;
                                if ( *(_DWORD *)v83 )
                                {
                                  v90 = (int)v111;
                                  do
                                  {
                                    rclBounds = *(RECTL *)&v83[16 * v89++ + 4];
                                    v53 = ((int)HT_HalftoneBitmap(
                                                  v90,
                                                  pptlSrc.x,
                                                  (unsigned int)v139,
                                                  v84,
                                                  (__int64)v141,
                                                  (__int64)&v144) >= 0) & (unsigned __int8)v53;
                                  }
                                  while ( v89 < *(_DWORD *)v83 );
                                  v88 = v98;
                                }
                                if ( !v88 )
                                  break;
                                v60 = pco;
                              }
                              while ( v53 );
                              AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(
                                &v114,
                                v85,
                                v86,
                                v87);
                              v34 = v107;
                              v52 = EngCopyBits;
                              v47 = v112;
                              v60 = pco;
                            }
                            else
                            {
                              v53 = 0;
                              v52 = EngCopyBits;
                            }
                            goto LABEL_79;
                          }
                          rclBounds = pco->rclBounds;
                        }
                        LOBYTE(v53) = (int)HT_HalftoneBitmap(
                                             (_DWORD)v111,
                                             pptlSrc.x,
                                             (unsigned int)v139,
                                             (_DWORD)v57,
                                             (__int64)v141,
                                             (__int64)&v144) >= 0;
LABEL_79:
                        HTSEMOBJ::vRelease((HTSEMOBJ *)&v95);
                        if ( v99 && v53 )
                        {
                          v61 = v102;
                          v62 = psoDest;
                          pptlSrc = 0LL;
                          ++*((_DWORD *)v102 + 23);
                          if ( v62->iType )
                          {
                            if ( (*((_DWORD *)v61 + 28) & 0x400) != 0 )
                              v52 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v96 + 2872);
                            v91 = 0LL;
                            if ( v34 )
                              v91 = (char *)v34 + 24;
                            v64 = ((__int64 (__fastcall *)(SURFOBJ *, char *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v52)(
                                    v62,
                                    v91,
                                    v60,
                                    v47,
                                    &prclDest,
                                    &pptlSrc);
                          }
                          else
                          {
                            v63 = 0LL;
                            if ( v34 )
                              v63 = (SURFOBJ *)((char *)v34 + 24);
                            v64 = EngCopyBits(v62, v63, v60, v47, &prclDest, &pptlSrc);
                          }
                          v53 = v64;
                        }
                        HTSEMOBJ::vAcquire((HTSEMOBJ *)&v95);
                        goto LABEL_87;
                      }
                    }
                    if ( v97 )
                      DEC_SHARE_REF_CNT(v97);
                    goto LABEL_186;
                  }
                  v29 = v144;
                  v32 = v34;
                  v36 = v92;
                  v33 = pco;
                }
                else
                {
                  p_left = v97;
                }
                v99 = 1;
                if ( iDComplexity )
                {
                  v93 = 0;
                  p_left = &v33->rclBounds.left;
                  if ( iDComplexity == 1 )
                    v33 = 0LL;
                  pco = v33;
                }
                v38 = p_left[2];
                v39 = *((_QWORD *)v32 + 7);
                if ( v38 <= *p_left )
                {
                  v40 = p_left[2];
                  v38 = *p_left;
                }
                else
                {
                  v40 = *p_left;
                }
                if ( v40 < 0 )
                  v40 = 0;
                if ( v38 > (int)v39 )
                  v38 = v39;
                v41 = v38 - v40;
                if ( v38 - v40 > 0 )
                {
                  prclDest.left = v40;
                  v42 = p_left[1];
                  prclDest.right = v38;
                  v43 = p_left[3];
                  if ( v43 <= v42 )
                  {
                    v44 = p_left[3];
                    v43 = v42;
                  }
                  else
                  {
                    v44 = v42;
                  }
                  if ( v44 < 0 )
                    v44 = 0;
                  v45 = HIDWORD(v39);
                  if ( v43 > (int)v45 )
                    v43 = v45;
                  if ( v43 - v44 > 0 )
                  {
                    prclDest.bottom = v43;
                    v133 = 0;
                    v134 = v43 - v44;
                    *(_QWORD *)&v136[4] = 0LL;
                    prclDest.top = v44;
                    v144 = v29 | 0x10;
                    v46 = *((_DWORD *)v34 + 28) & 0x40000;
                    v135 = 0;
                    v137 = 0;
                    *(_DWORD *)&v136[8] = v46;
                    v133 = v41;
                    *(_QWORD *)v136 = 0LL;
                    v132 = v36;
                    if ( SURFMEM::bCreateDIB(
                           (SURFMEM *)&v121,
                           (struct _DEVBITMAPINFO *)&v132,
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
                      v34 = v121;
                      v107 = v121;
                      goto LABEL_53;
                    }
                    v20 = -1;
                  }
                }
                v17 = v20;
                goto LABEL_91;
              }
              if ( (unsigned int)bIsSourceBGRA((struct SURFACE *)v16) )
              {
                v28 = 512;
                v71 = 4;
                goto LABEL_146;
              }
LABEL_106:
              v17 = -1;
              goto LABEL_92;
            }
          }
          HTSEMOBJ::vAcquire((HTSEMOBJ *)&v95);
        }
        v17 = -1;
        goto LABEL_93;
      }
      v21 = 0;
      v18 = ((a1->sizlBitmap.cx + 31) >> 3) & 0xFFFFFFFC;
    }
    v94 = 1;
    v92 = 1;
    goto LABEL_11;
  }
  return 0xFFFFFFFFLL;
}
