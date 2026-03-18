/*
 * XREFs of EngHTBlt @ 0x1C00BAC98
 * Callers:
 *     EngAlphaBlend @ 0x1C003CDC0 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C003E6F4 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BB4A0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028077C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001BFE0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C001C078 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     EngBitBlt @ 0x1C0038EE0 (EngBitBlt.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C003CD90 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C00415B4 (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007F5A0 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C00BA8A4 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00BA9F4 (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1C00BAC2C (-bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00BCB9C (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1C00BCBD4 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1C00BCC68 (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 *     HT_HalftoneBitmap @ 0x1C00BD0EC (HT_HalftoneBitmap.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00DFB54 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00FF8FC (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct XLATE *a5,
        POINTL a6,
        __int64 a7,
        XLATEOBJ *a8,
        XLATEOBJ *a9,
        __int64 *a10,
        int a11,
        struct SURFACE *a12)
{
  struct SURFACE *v15; // r12
  __int64 v16; // r13
  unsigned int v17; // esi
  unsigned int v18; // ebx
  __int64 v19; // rax
  int v20; // r14d
  int v21; // r12d
  int v22; // r15d
  struct SURFACE *v23; // rdx
  struct XLATE *v24; // r8
  struct PALETTE *v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdi
  int v28; // r10d
  __int16 v29; // dx
  __int16 v30; // r9
  LONG *p_left; // r11
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  int v34; // eax
  struct SURFACE *v35; // rdx
  CLIPOBJ *v36; // r8
  struct SURFACE *v37; // r13
  BYTE iDComplexity; // r15
  LONG v39; // ecx
  unsigned __int64 v40; // rax
  LONG v41; // edx
  int v42; // r10d
  LONG v43; // edx
  LONG v44; // ecx
  LONG v45; // r8d
  unsigned __int64 v46; // rax
  int v47; // eax
  XLATEOBJ *v48; // r12
  XLATEOBJ *v49; // r15
  HPALETTE *v50; // rax
  __int64 *v51; // r15
  struct PALETTE *v52; // rbx
  BOOL (__stdcall *v53)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  int v54; // ebx
  __int64 v55; // rcx
  __int64 v56; // rdx
  struct _SURFOBJ *v57; // rcx
  __int64 v58; // r9
  _BYTE *v59; // r11
  __int16 v60; // dx
  unsigned int v61; // eax
  CLIPOBJ *v62; // r15
  struct SURFACE *v63; // rax
  SURFOBJ *v64; // rcx
  SURFOBJ *v65; // rdx
  int v66; // eax
  __int64 v67; // rdx
  LONG cx; // ebx
  int v70; // eax
  int v71; // eax
  ULONG iBitmapFormat; // ecx
  int v73; // eax
  SURFOBJ *v74; // rcx
  int v75; // eax
  char v76; // cl
  int v77; // eax
  _DWORD *v78; // rax
  int v79; // eax
  LONG v80; // eax
  int v81; // eax
  unsigned int cEntries; // ecx
  _BYTE *v83; // r8
  __int64 v84; // r10
  __int64 v85; // r9
  char v86; // cl
  __int64 v87; // rax
  char *v88; // rdi
  int v89; // r13d
  int v90; // r12d
  unsigned int v91; // r15d
  int v92; // r12d
  char *v93; // rdx
  BYTE v94; // [rsp+60h] [rbp-A0h]
  __int8 v95; // [rsp+64h] [rbp-9Ch]
  int v96; // [rsp+68h] [rbp-98h]
  int v97; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v98; // [rsp+70h] [rbp-90h] BYREF
  int v99; // [rsp+78h] [rbp-88h]
  int v100; // [rsp+80h] [rbp-80h] BYREF
  CLIPOBJ *pco; // [rsp+88h] [rbp-78h]
  POINTL pptlSrc; // [rsp+90h] [rbp-70h] BYREF
  XLATEOBJ *v103; // [rsp+98h] [rbp-68h] BYREF
  struct SURFACE *v104; // [rsp+A0h] [rbp-60h]
  XLATEOBJ *v105; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE *v106; // [rsp+B0h] [rbp-50h]
  SURFOBJ *v107; // [rsp+B8h] [rbp-48h]
  _BYTE v108[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v109; // [rsp+C2h] [rbp-3Eh]
  __int64 v110; // [rsp+C8h] [rbp-38h]
  struct XLATE *v111; // [rsp+D0h] [rbp-30h]
  SURFOBJ *psoDest; // [rsp+D8h] [rbp-28h]
  HPALETTE *v113; // [rsp+E0h] [rbp-20h] BYREF
  struct SURFACE *v114; // [rsp+E8h] [rbp-18h]
  __int64 v115; // [rsp+F0h] [rbp-10h]
  __int64 v116; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v117; // [rsp+100h] [rbp+0h] BYREF
  char v118; // [rsp+108h] [rbp+8h]
  int v119; // [rsp+10Ch] [rbp+Ch]
  struct SURFACE *v120; // [rsp+110h] [rbp+10h] BYREF
  char v121; // [rsp+118h] [rbp+18h]
  int v122; // [rsp+11Ch] [rbp+1Ch]
  __int64 v123; // [rsp+120h] [rbp+20h] BYREF
  int v124; // [rsp+128h] [rbp+28h]
  __int64 *v125; // [rsp+130h] [rbp+30h]
  int v126; // [rsp+138h] [rbp+38h] BYREF
  SIZEL sizlBitmap; // [rsp+13Ch] [rbp+3Ch]
  __int128 v128; // [rsp+144h] [rbp+44h]
  int v129; // [rsp+154h] [rbp+54h]
  __int64 *v130; // [rsp+158h] [rbp+58h]
  _DWORD v131[4]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE *v132; // [rsp+170h] [rbp+70h]
  int v133; // [rsp+178h] [rbp+78h] BYREF
  int v134; // [rsp+17Ch] [rbp+7Ch]
  int v135; // [rsp+180h] [rbp+80h]
  int v136; // [rsp+184h] [rbp+84h]
  _BYTE v137[12]; // [rsp+188h] [rbp+88h]
  int v138; // [rsp+194h] [rbp+94h]
  struct PALETTE *v139; // [rsp+198h] [rbp+98h]
  _BYTE v140[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v141; // [rsp+1C0h] [rbp+C0h]
  _BYTE v142[32]; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD *v143; // [rsp+1E8h] [rbp+E8h]
  _BYTE v144[48]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v145; // [rsp+220h] [rbp+120h] BYREF
  char v146; // [rsp+223h] [rbp+123h]
  _BYTE *v147; // [rsp+228h] [rbp+128h]
  __int128 v148; // [rsp+230h] [rbp+130h]
  __int128 v149; // [rsp+240h] [rbp+140h]
  RECTL rclBounds; // [rsp+250h] [rbp+150h]
  RECTL prclDest; // [rsp+260h] [rbp+160h] BYREF
  __int64 v152; // [rsp+270h] [rbp+170h]
  __int64 v153; // [rsp+278h] [rbp+178h]
  RECTL prclTrg; // [rsp+290h] [rbp+190h] BYREF
  RECTL v155; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v156[256]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v111 = a5;
  pptlSrc = a6;
  *(_QWORD *)&prclTrg.left = a7;
  v105 = a9;
  psoDest = a1;
  v130 = a10;
  v103 = a8;
  v114 = a12;
  pco = a4;
  v116 = a3;
  v107 = a2;
  v104 = (struct SURFACE *)SURFOBJ_TO_SURFACE(a1);
  v15 = v104;
  v16 = SURFOBJ_TO_SURFACE(a2);
  v17 = 0;
  v115 = SURFOBJ_TO_SURFACE(a3);
  v18 = 0;
  if ( v104 )
  {
    v19 = *((_QWORD *)v104 + 6);
    v98 = v19;
    if ( !v19 )
      return v17;
    v20 = 1;
    v97 = *(_DWORD *)(v19 + 56) & 1;
    HTSEMOBJ::vAcquire((HTSEMOBJ *)&v97);
    if ( a1->iType )
    {
      v22 = *(_DWORD *)(v98 + 2400);
      if ( v22 )
      {
        switch ( v22 )
        {
          case 2:
            v21 = 2;
            v96 = 2;
            v95 = 2;
            break;
          case 3:
            v95 = -1;
            v21 = 2;
            v96 = 2;
            break;
          case 4:
            v95 = -2;
            v21 = 3;
            v96 = 3;
            break;
          default:
            switch ( v22 )
            {
              case 5:
                v95 = -3;
                v21 = 4;
                break;
              case 6:
                v95 = 5;
                v21 = 5;
                break;
              case 7:
                v95 = 6;
                v21 = 6;
                break;
              default:
                goto LABEL_92;
            }
            v96 = v21;
            break;
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
            v21 = 2;
            v18 = ((a1->sizlBitmap.cx + 7) >> 1) & 0xFFFFFFFC;
            v96 = 2;
            if ( *(_DWORD *)(v98 + 2400) == 2 )
            {
              v95 = 2;
              v22 = 2;
            }
            else
            {
              v95 = -1;
              v22 = 3;
            }
            break;
          case 3:
            v21 = 3;
            v95 = -2;
            v18 = (a1->sizlBitmap.cx + 3) & 0xFFFFFFFC;
            v96 = 3;
            v22 = 4;
            break;
          case 4:
            v21 = 4;
            v95 = -3;
            v96 = 4;
            v18 = (2 * a1->sizlBitmap.cx + 2) & 0xFFFFFFFC;
            v22 = 5;
            break;
          case 5:
            v21 = 5;
            v71 = a1->sizlBitmap.cx + 1;
            v95 = 5;
            v96 = 5;
            v22 = 6;
            v18 = (3 * v71) & 0xFFFFFFFC;
            break;
          case 6:
            v21 = 6;
            v18 = 4 * a1->sizlBitmap.cx;
            v22 = 7;
            v96 = 6;
            v95 = 6;
            break;
          default:
LABEL_92:
            HTSEMOBJ::vRelease((HTSEMOBJ *)&v97);
            return v17;
        }
LABEL_11:
        v155.right = a2->sizlBitmap.cx;
        v155.bottom = a2->sizlBitmap.cy;
        *(_QWORD *)&v155.left = 0LL;
        ERECTL::operator*=(&v155, v105);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v155) )
        {
LABEL_126:
          v17 = v20;
          goto LABEL_92;
        }
        if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v98)
          && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v98, *(struct tagCOLORADJUSTMENT **)&pptlSrc) )
        {
          v20 = -1;
          goto LABEL_126;
        }
        v117 = 0LL;
        v118 = 0;
        v119 = 0;
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v97);
        if ( v16 )
        {
          if ( (*(_DWORD *)(v16 + 112) & 0x1000) != 0 )
          {
            v113 = *(HPALETTE **)(v16 + 48);
            PDEVOBJ::vSync((PDEVOBJ *)&v113, a2, 0LL, 0);
          }
          if ( !a2->iType && a2->iBitmapFormat - 7 > 1 )
          {
            v106 = (_BYTE *)v16;
            goto LABEL_19;
          }
          iBitmapFormat = a2->iBitmapFormat;
          sizlBitmap = 0LL;
          v128 = 0uLL;
          v129 = 0;
          sizlBitmap = a2->sizlBitmap;
          v73 = *(_DWORD *)(v16 + 112) & 0x40000;
          *(_QWORD *)((char *)&v128 + 4) = 0LL;
          HIDWORD(v128) = v73;
          if ( iBitmapFormat == 7 )
          {
            v126 = 2;
          }
          else if ( iBitmapFormat == 8 )
          {
            v126 = 3;
          }
          else
          {
            v126 = iBitmapFormat;
          }
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v117, (struct _DEVBITMAPINFO *)&v126, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          {
            v74 = 0LL;
            if ( v117 )
              v74 = (SURFOBJ *)(v117 + 24);
            if ( EngCopyBits(v74, a2, 0LL, xloIdent, &v155, (POINTL *)&v155) )
            {
              v106 = (_BYTE *)v117;
LABEL_19:
              HTSEMOBJ::vAcquire((HTSEMOBJ *)&v97);
              v139 = ppalGetFromXlate((struct SURFACE *)v16, v104, v111, 1u, 1);
              if ( !v139 )
              {
LABEL_91:
                SURFMEM::~SURFMEM((SURFMEM *)&v117);
                goto LABEL_92;
              }
              v25 = ppalGetFromXlate((struct SURFACE *)v16, v23, v24, 2u, 1);
              v26 = v98;
              v27 = (__int64)v25;
              v124 = 0;
              v123 = 0LL;
              v125 = 0LL;
              if ( v22 == *(_DWORD *)(v98 + 2400) )
              {
                v28 = *(_DWORD *)(v98 + 56) & 0x200;
              }
              else
              {
                if ( !PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v123, v22, (struct _GDIINFO *)(v98 + 2160)) )
                  goto LABEL_104;
                v125 = &v123;
                v70 = XEPALOBJ::bEqualEntries(&v123, v27);
                v26 = v98;
                v28 = v70;
              }
              v29 = a11;
              v100 = v28;
              if ( a11 != 512 )
                goto LABEL_23;
              v75 = *(_DWORD *)v114;
              if ( (unsigned __int8)*(_DWORD *)v114 )
              {
                v29 = 0;
                a11 = 0;
                goto LABEL_23;
              }
              v108[0] = 0;
              v110 = 0LL;
              v109 = 0;
              v108[1] = BYTE2(v75);
              if ( HIBYTE(v75) != 1 || BYTE2(v75) != 0xFF )
              {
                v76 = 1;
LABEL_145:
                v108[0] = v76;
                if ( v27 )
                {
                  v110 = *(_QWORD *)(v27 + 128);
                  v109 = *(_WORD *)(v27 + 28);
                  v77 = *(_DWORD *)(v27 + 24);
                  if ( (v77 & 8) != 0
                    || (v77 & 2) != 0
                    && (v78 = *(_DWORD **)(v27 + 128), *v78 == 16711680)
                    && v78[1] == 65280
                    && v78[2] == 255 )
                  {
                    v108[0] = v76 | 2;
                  }
                }
                v147 = v108;
LABEL_23:
                v30 = v29;
                p_left = (LONG *)v103;
                v145 = v29;
                v32 = *(_OWORD *)&v105->iUniq;
                v33 = *(_OWORD *)&v103->iUniq;
                v152 = **(_QWORD **)&prclTrg.left;
                v148 = v32;
                v149 = v33;
                v146 = *(_BYTE *)(v26 + 2392);
                if ( v111 )
                  v34 = *((_DWORD *)v111 + 18);
                else
                  LOBYTE(v34) = 0;
                if ( (v34 & 4) != 0 || (v34 & 0x20) == 0 && (v34 & 3) != 0 )
                {
                  v30 = v29 | 0x80;
                  v145 = v29 | 0x80;
                }
                v35 = v104;
                v36 = pco;
                v37 = v104;
                v114 = v104;
                v120 = 0LL;
                v121 = 0;
                v122 = 0;
                v99 = 0;
                if ( pco )
                {
                  iDComplexity = pco->iDComplexity;
                  v94 = iDComplexity;
                }
                else
                {
                  iDComplexity = 0;
                  v94 = 0;
                }
                if ( !psoDest->iType && psoDest->lDelta == v18 && (v21 == 3 || v28) && iDComplexity != 3 )
                {
                  if ( psoDest != v107 || (v79 = bIntersect(v105, v103)) == 0 )
                  {
LABEL_52:
                    v48 = xloIdent;
                    v107 = (SURFOBJ *)xloIdent;
                    v49 = xloIdent;
                    *(_QWORD *)&prclTrg.left = xloIdent;
                    v105 = 0LL;
                    v103 = 0LL;
                    v50 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v98);
                    v113 = v50;
                    if ( v100 )
                      goto LABEL_62;
                    EPALOBJ::EPALOBJ((EPALOBJ *)&v100, *v50);
                    v51 = (__int64 *)&v100;
                    if ( v125 )
                      v51 = v125;
                    if ( !v111 || (v52 = (struct PALETTE *)*((_QWORD *)v111 + 7)) == 0LL )
                      v52 = ppalDefault;
                    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                         (__int64 *)&v105,
                                         0LL,
                                         0,
                                         *v51,
                                         v27,
                                         (__int64)v52,
                                         (__int64)v52,
                                         0,
                                         0xFFFFFF,
                                         0xFFFFFF,
                                         0) )
                    {
                      v48 = v105;
                      v107 = (SURFOBJ *)v105;
                      if ( !v115 && a11 != 512 || !v99 )
                      {
                        v49 = *(XLATEOBJ **)&prclTrg.left;
LABEL_61:
                        EPALOBJ::~EPALOBJ((EPALOBJ *)&v100);
LABEL_62:
                        HTSEMOBJ::vRelease((HTSEMOBJ *)&v97);
                        PDEVOBJ::vSync((PDEVOBJ *)&v98, psoDest, 0LL, 0);
                        v53 = EngCopyBits;
                        if ( v115 || a11 == 512 )
                        {
                          if ( v99 )
                          {
                            v80 = *((_DWORD *)v37 + 14);
                            ++*((_DWORD *)v37 + 23);
                            prclTrg.right = v80;
                            prclTrg.bottom = *((_DWORD *)v37 + 15);
                            *(_QWORD *)&prclTrg.left = 0LL;
                            v81 = (*((_DWORD *)v104 + 28) & 0x400) != 0
                                ? (*(__int64 (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))(v98 + 2872))(
                                    (__int64)v37 + 24,
                                    psoDest,
                                    0LL,
                                    v49,
                                    &prclTrg,
                                    &prclDest)
                                : ((__int64 (__fastcall *)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                                    (char *)v37 + 24,
                                    psoDest,
                                    0LL,
                                    v49,
                                    &prclTrg,
                                    &prclDest);
                            if ( !v81
                              && !EngBitBlt(
                                    (SURFOBJ *)((char *)v37 + 24),
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
                              HTSEMOBJ::vAcquire((HTSEMOBJ *)&v97);
                              goto LABEL_184;
                            }
                          }
                        }
                        HTSEMOBJ::vAcquire((HTSEMOBJ *)&v97);
                        v54 = 0;
                        v141 = 0LL;
                        v55 = 0LL;
                        if ( v106 )
                          v55 = (__int64)(v106 + 24);
                        if ( !(unsigned int)bSetHTSrcSurfInfo(v55, (__int64)v139, (__int64)v140, (__int64)v111) )
                          goto LABEL_85;
                        v57 = 0LL;
                        if ( v37 )
                          v57 = (struct _SURFOBJ *)((char *)v37 + 24);
                        if ( !(unsigned int)bSetHTSurfInfo(v57, (struct _HTSURFACEINFO *)v142, v95)
                          || (v58 = v115) != 0
                          && !(unsigned int)bSetHTSurfInfo(
                                              (struct _SURFOBJ *)(v115 + 24),
                                              (struct _HTSURFACEINFO *)v144,
                                              *(_DWORD *)(v116 + 72)) )
                        {
LABEL_85:
                          if ( v141 )
                            FreeThreadBufferWithTag(v141, v56);
                          v17 = v54 != 0 ? 1 : -1;
                          goto LABEL_88;
                        }
                        v106 = 0LL;
                        LODWORD(v59) = 0;
                        if ( v58 )
                        {
                          if ( (unsigned int)bUMPDSecurityGateEx() && !v130 )
                          {
                            if ( gfUMPDDebug )
                              DbgPrint(
                                "windows\\core\\ntgdi\\gre\\windows\\htblt.cxx:%d:EngHTBlt:pptlMask == NULL\n",
                                1043);
                            if ( v141 )
                              FreeThreadBufferWithTag(v141, v56);
                            goto LABEL_184;
                          }
                          v59 = v144;
                          v153 = *v130;
                          v106 = v144;
                        }
                        v60 = v145;
                        v61 = 256;
                        if ( (*(_DWORD *)(v98 + 2404) & 0x100) == 0 )
                        {
                          v60 = v145 | 2;
                          v145 |= 2u;
                        }
                        if ( v96 == 3 )
                        {
                          v131[0] = 65792;
                          v143 = v131;
                          v132 = v156;
                          v131[1] = 255;
                          v131[2] = 256;
                          cEntries = v48->cEntries;
                          if ( cEntries > 0x100 || (v61 = v48->cEntries, cEntries) )
                          {
                            v83 = v156;
                            v84 = v61;
                            v85 = 0LL;
                            do
                            {
                              v86 = v48->pulXlate[v85++];
                              *v83++ = v86;
                              --v84;
                            }
                            while ( v84 );
                          }
                          v48 = xloIdent;
                          v107 = (SURFOBJ *)xloIdent;
                        }
                        v62 = pco;
                        if ( v94 )
                        {
                          v145 = v60 | 1;
                          if ( v94 != 1 )
                          {
                            XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
                            v54 = 1;
                            v87 = AllocFreeTmpBuffer(324LL);
                            v88 = (char *)v87;
                            if ( v87 )
                            {
                              v89 = (int)v106;
                              v116 = v87;
                              do
                              {
                                v90 = XCLIPOBJ::bEnum((XCLIPOBJ *)v62, 0x144u, v88, 0LL);
                                v100 = v90;
                                v91 = 0;
                                if ( *(_DWORD *)v88 )
                                {
                                  v92 = (int)v113;
                                  do
                                  {
                                    rclBounds = *(RECTL *)&v88[16 * v91++ + 4];
                                    v54 = ((int)HT_HalftoneBitmap(
                                                  v92,
                                                  pptlSrc.x,
                                                  (unsigned int)v140,
                                                  v89,
                                                  (__int64)v142,
                                                  (__int64)&v145) >= 0) & (unsigned __int8)v54;
                                  }
                                  while ( v91 < *(_DWORD *)v88 );
                                  v90 = v100;
                                }
                                if ( !v90 )
                                  break;
                                v62 = pco;
                              }
                              while ( v54 );
                              AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v116);
                              v37 = v114;
                              v53 = EngCopyBits;
                              v48 = (XLATEOBJ *)v107;
                              v62 = pco;
                            }
                            else
                            {
                              v54 = 0;
                              v53 = EngCopyBits;
                            }
                            goto LABEL_77;
                          }
                          rclBounds = pco->rclBounds;
                        }
                        LOBYTE(v54) = (int)HT_HalftoneBitmap(
                                             (_DWORD)v113,
                                             pptlSrc.x,
                                             (unsigned int)v140,
                                             (_DWORD)v59,
                                             (__int64)v142,
                                             (__int64)&v145) >= 0;
LABEL_77:
                        HTSEMOBJ::vRelease((HTSEMOBJ *)&v97);
                        if ( v99 && v54 )
                        {
                          v63 = v104;
                          v64 = psoDest;
                          pptlSrc = 0LL;
                          ++*((_DWORD *)v104 + 23);
                          if ( v64->iType )
                          {
                            if ( (*((_DWORD *)v63 + 28) & 0x400) != 0 )
                              v53 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v98 + 2872);
                            v93 = 0LL;
                            if ( v37 )
                              v93 = (char *)v37 + 24;
                            v66 = ((__int64 (__fastcall *)(SURFOBJ *, char *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v53)(
                                    v64,
                                    v93,
                                    v62,
                                    v48,
                                    &prclDest,
                                    &pptlSrc);
                          }
                          else
                          {
                            v65 = 0LL;
                            if ( v37 )
                              v65 = (SURFOBJ *)((char *)v37 + 24);
                            v66 = EngCopyBits(v64, v65, v62, v48, &prclDest, &pptlSrc);
                          }
                          v54 = v66;
                        }
                        HTSEMOBJ::vAcquire((HTSEMOBJ *)&v97);
                        goto LABEL_85;
                      }
                      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                           (__int64 *)&v103,
                                           0LL,
                                           0,
                                           v27,
                                           *v51,
                                           (__int64)v52,
                                           (__int64)v52,
                                           0,
                                           0xFFFFFF,
                                           0xFFFFFF,
                                           0) )
                      {
                        v49 = v103;
                        goto LABEL_61;
                      }
                    }
                    EPALOBJ::~EPALOBJ((EPALOBJ *)&v100);
LABEL_184:
                    v17 = -1;
LABEL_88:
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v103, v56);
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v105, v67);
LABEL_89:
                    SURFMEM::~SURFMEM((SURFMEM *)&v120);
LABEL_90:
                    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v123);
                    goto LABEL_91;
                  }
                  v30 = v145;
                  v35 = v37;
                  p_left = (LONG *)v103;
                  v36 = pco;
                }
                v99 = 1;
                if ( iDComplexity )
                {
                  v94 = 0;
                  p_left = &v36->rclBounds.left;
                  if ( iDComplexity == 1 )
                    v36 = 0LL;
                  pco = v36;
                }
                v39 = p_left[2];
                v40 = *((_QWORD *)v35 + 7);
                if ( v39 <= *p_left )
                {
                  v41 = p_left[2];
                  v39 = *p_left;
                }
                else
                {
                  v41 = *p_left;
                }
                if ( v41 < 0 )
                  v41 = 0;
                if ( v39 > (int)v40 )
                  v39 = v40;
                v42 = v39 - v41;
                if ( v39 - v41 > 0 )
                {
                  prclDest.left = v41;
                  v43 = p_left[1];
                  prclDest.right = v39;
                  v44 = p_left[3];
                  if ( v44 <= v43 )
                  {
                    v45 = p_left[3];
                    v44 = v43;
                  }
                  else
                  {
                    v45 = v43;
                  }
                  if ( v45 < 0 )
                    v45 = 0;
                  v46 = HIDWORD(v40);
                  if ( v44 > (int)v46 )
                    v44 = v46;
                  if ( v44 - v45 > 0 )
                  {
                    prclDest.bottom = v44;
                    v134 = 0;
                    v135 = v44 - v45;
                    *(_QWORD *)&v137[4] = 0LL;
                    prclDest.top = v45;
                    v145 = v30 | 0x10;
                    v47 = *((_DWORD *)v37 + 28) & 0x40000;
                    v136 = 0;
                    v138 = 0;
                    *(_DWORD *)&v137[8] = v47;
                    v134 = v42;
                    *(_QWORD *)v137 = 0LL;
                    v133 = v21;
                    if ( SURFMEM::bCreateDIB(
                           (SURFMEM *)&v120,
                           (struct _DEVBITMAPINFO *)&v133,
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
                      v37 = v120;
                      v114 = v120;
                      goto LABEL_52;
                    }
                    v20 = -1;
                  }
                }
                v17 = v20;
                goto LABEL_89;
              }
              if ( (unsigned int)bIsSourceBGRA((struct SURFACE *)v16) )
              {
                v29 = 512;
                v76 = 4;
                goto LABEL_145;
              }
LABEL_104:
              v17 = -1;
              goto LABEL_90;
            }
          }
          HTSEMOBJ::vAcquire((HTSEMOBJ *)&v97);
        }
        v17 = -1;
        goto LABEL_91;
      }
      cx = a1->sizlBitmap.cx;
      v22 = 0;
      v18 = ((cx + 31) >> 3) & 0xFFFFFFFC;
    }
    v95 = 1;
    v21 = 1;
    v96 = 1;
    goto LABEL_11;
  }
  return 0xFFFFFFFFLL;
}
