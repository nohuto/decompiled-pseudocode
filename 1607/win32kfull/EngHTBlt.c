/*
 * XREFs of EngHTBlt @ 0x1C00F2408
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C003718C (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     EngAlphaBlend @ 0x1C003F5B0 (EngAlphaBlend.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00F1C10 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C027E58C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C000D3C8 (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0029594 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C002962C (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00418B4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     EngBitBlt @ 0x1C00477E0 (EngBitBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C006807C (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C00F0020 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00F0E34 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00F0E60 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00F0FD8 (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1C00F1210 (-bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00F32A0 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1C00F32D8 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1C00F32F8 (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 *     HT_HalftoneBitmap @ 0x1C00F3410 (HT_HalftoneBitmap.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C01091DC (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C01210DC (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01BF500 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C01BF57C (--1HTSEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct XLATE *a5,
        struct tagCOLORADJUSTMENT *a6,
        XLATEOBJ *a7,
        LONG *a8,
        XLATEOBJ *a9,
        __int64 *a10,
        int a11,
        __int64 a12)
{
  struct SURFACE *v15; // r15
  __int64 v16; // r13
  unsigned int v17; // esi
  unsigned int v18; // ebx
  __int64 v20; // rax
  int v21; // r14d
  int v22; // r15d
  void *v23; // rax
  struct tagCOLORADJUSTMENT *v24; // rdi
  ULONG iBitmapFormat; // ecx
  int v26; // eax
  SURFOBJ *v27; // rcx
  struct SURFACE *v28; // rdx
  struct XLATE *v29; // r8
  struct PALETTE *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdi
  int v33; // eax
  int v34; // r10d
  __int16 v35; // dx
  int v36; // eax
  char v37; // cl
  int v38; // eax
  _DWORD *v39; // rax
  __int16 v40; // r9
  __int128 v41; // xmm0
  int v42; // eax
  struct SURFACE *v43; // rdx
  CLIPOBJ *v44; // r8
  struct SURFACE *v45; // r13
  BYTE iDComplexity; // r15
  int v47; // r11d
  LONG *p_left; // rbx
  LONG v49; // ecx
  unsigned __int64 v50; // rax
  LONG v51; // edx
  int v52; // r10d
  LONG v53; // edx
  LONG v54; // ecx
  LONG v55; // r8d
  unsigned __int64 v56; // rax
  int v57; // eax
  XLATEOBJ *v58; // r12
  XLATEOBJ *v59; // r15
  HPALETTE *v60; // rax
  __int64 *v61; // r15
  struct PALETTE *v62; // rbx
  SURFOBJ *v63; // rdi
  LONG v64; // eax
  int v65; // eax
  void *v66; // rdi
  int v67; // ebx
  __int64 v68; // rcx
  struct _SURFOBJ *v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  _BYTE *v74; // r11
  __int16 v75; // dx
  unsigned int v76; // eax
  unsigned int cEntries; // ecx
  _BYTE *v78; // r8
  __int64 v79; // r10
  __int64 v80; // r9
  char v81; // cl
  CLIPOBJ *v82; // r15
  __int64 v83; // rax
  char *v84; // rdi
  int v85; // r13d
  int v86; // r12d
  unsigned int v87; // r15d
  LONG left; // r12d
  struct SURFACE *v89; // rax
  SURFOBJ *v90; // rcx
  BOOL (__stdcall *v91)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v92; // rdx
  int v93; // eax
  SURFOBJ *v94; // rdx
  int v95; // [rsp+60h] [rbp-A0h]
  BYTE v96; // [rsp+64h] [rbp-9Ch]
  __int8 v97; // [rsp+68h] [rbp-98h]
  int v98; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v99; // [rsp+70h] [rbp-90h] BYREF
  LONG *v100; // [rsp+78h] [rbp-88h] BYREF
  int v101; // [rsp+80h] [rbp-80h]
  int v102; // [rsp+84h] [rbp-7Ch]
  CLIPOBJ *pco; // [rsp+88h] [rbp-78h]
  POINTL pptlSrc; // [rsp+90h] [rbp-70h] BYREF
  struct SURFACE *v105; // [rsp+98h] [rbp-68h]
  XLATEOBJ *v106; // [rsp+A0h] [rbp-60h] BYREF
  struct tagCOLORADJUSTMENT *v107; // [rsp+A8h] [rbp-58h]
  XLATEOBJ *v108; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v109; // [rsp+B8h] [rbp-48h]
  struct XLATE *v110; // [rsp+C0h] [rbp-40h]
  struct SURFACE *v111; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v112[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v113; // [rsp+D2h] [rbp-2Eh]
  __int64 v114; // [rsp+D8h] [rbp-28h]
  __int64 v115; // [rsp+E0h] [rbp-20h]
  SURFOBJ *psoDest; // [rsp+E8h] [rbp-18h]
  __int64 v117; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v118; // [rsp+F8h] [rbp-8h] BYREF
  char v119; // [rsp+100h] [rbp+0h]
  int v120; // [rsp+104h] [rbp+4h]
  __int64 *v121; // [rsp+108h] [rbp+8h]
  __int64 *v122; // [rsp+110h] [rbp+10h]
  struct SURFACE *v123; // [rsp+118h] [rbp+18h] BYREF
  char v124; // [rsp+120h] [rbp+20h]
  int v125; // [rsp+124h] [rbp+24h]
  __int64 v126; // [rsp+128h] [rbp+28h] BYREF
  int v127; // [rsp+130h] [rbp+30h]
  int v128; // [rsp+138h] [rbp+38h] BYREF
  SIZEL sizlBitmap; // [rsp+13Ch] [rbp+3Ch]
  __int128 v130; // [rsp+144h] [rbp+44h]
  int v131; // [rsp+154h] [rbp+54h]
  _DWORD v132[4]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE *v133; // [rsp+168h] [rbp+68h]
  int v134; // [rsp+170h] [rbp+70h] BYREF
  int v135; // [rsp+174h] [rbp+74h]
  int v136; // [rsp+178h] [rbp+78h]
  int v137; // [rsp+17Ch] [rbp+7Ch]
  _BYTE v138[12]; // [rsp+180h] [rbp+80h]
  int v139; // [rsp+18Ch] [rbp+8Ch]
  struct PALETTE *v140; // [rsp+190h] [rbp+90h]
  _BYTE v141[32]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v142; // [rsp+1B8h] [rbp+B8h]
  _BYTE v143[32]; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD *v144; // [rsp+1E0h] [rbp+E0h]
  _BYTE v145[40]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int16 v146; // [rsp+210h] [rbp+110h] BYREF
  char v147; // [rsp+213h] [rbp+113h]
  _BYTE *v148; // [rsp+218h] [rbp+118h]
  __int128 v149; // [rsp+220h] [rbp+120h]
  __int128 v150; // [rsp+230h] [rbp+130h]
  RECTL rclBounds; // [rsp+240h] [rbp+140h]
  RECTL v152; // [rsp+250h] [rbp+150h] BYREF
  __int64 v153; // [rsp+260h] [rbp+160h]
  __int64 v154; // [rsp+268h] [rbp+168h]
  RECTL prclTrg; // [rsp+280h] [rbp+180h] BYREF
  RECTL prclDest; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v157[256]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v110 = a5;
  v107 = a6;
  v108 = a7;
  v100 = a8;
  v106 = a9;
  v122 = a10;
  *(_QWORD *)&prclTrg.left = a12;
  pco = a4;
  v117 = a3;
  psoDest = a1;
  v105 = (struct SURFACE *)SURFOBJ_TO_SURFACE(a1);
  v15 = v105;
  v16 = SURFOBJ_TO_SURFACE(a2);
  v17 = 0;
  v115 = SURFOBJ_TO_SURFACE(a3);
  v18 = 0;
  if ( !v105 )
    return 0xFFFFFFFFLL;
  v20 = *((_QWORD *)v105 + 6);
  v99 = v20;
  if ( v20 )
  {
    v21 = 1;
    v98 = *(_DWORD *)(v20 + 56) & 1;
    HTSEMOBJ::vAcquire((HTSEMOBJ *)&v98);
    if ( a1->iType )
    {
      v22 = *(_DWORD *)(v99 + 2400);
      if ( v22 )
      {
        switch ( v22 )
        {
          case 2:
            v95 = 2;
            v97 = 2;
            break;
          case 3:
            v97 = -1;
            v95 = 2;
            break;
          case 4:
            v97 = -2;
            v95 = 3;
            break;
          case 5:
            v97 = -3;
            v95 = 4;
            break;
          case 6:
            v97 = 5;
            v95 = 5;
            break;
          case 7:
            v97 = 6;
            v95 = 6;
            break;
          default:
            goto LABEL_56;
        }
        goto LABEL_20;
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
            v95 = 2;
            if ( *(_DWORD *)(v99 + 2400) == 2 )
            {
              v97 = 2;
              v22 = 2;
            }
            else
            {
              v97 = -1;
              v22 = 3;
            }
            break;
          case 3:
            v22 = 4;
            v97 = -2;
            v18 = (a1->sizlBitmap.cx + 3) & 0xFFFFFFFC;
            v95 = 3;
            break;
          case 4:
            v22 = 5;
            v97 = -3;
            v95 = 4;
            v18 = (2 * a1->sizlBitmap.cx + 2) & 0xFFFFFFFC;
            break;
          case 5:
            v22 = 6;
            v97 = 5;
            v95 = 5;
            v18 = (3 * (a1->sizlBitmap.cx + 1)) & 0xFFFFFFFC;
            break;
          case 6:
            v22 = 7;
            v18 = 4 * a1->sizlBitmap.cx;
            v97 = 6;
            v95 = 6;
            break;
          default:
LABEL_56:
            HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v98);
            return v17;
        }
LABEL_20:
        prclDest.right = a2->sizlBitmap.cx;
        prclDest.bottom = a2->sizlBitmap.cy;
        *(_QWORD *)&prclDest.left = 0LL;
        ERECTL::operator*=(&prclDest, v106);
        if ( ERECTL::bEmpty((ERECTL *)&prclDest) )
        {
LABEL_24:
          v17 = v21;
          goto LABEL_56;
        }
        v23 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v99);
        v24 = v107;
        if ( !v23 && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v99, v107) )
        {
          v21 = -1;
          goto LABEL_24;
        }
        v118 = 0LL;
        v119 = 0;
        v120 = 0;
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v98);
        if ( !v16 )
          goto LABEL_54;
        if ( (*(_DWORD *)(v16 + 112) & 0x1000) != 0 )
        {
          v111 = *(struct SURFACE **)(v16 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v111, a2, 0LL, 0);
        }
        if ( a2->iType || a2->iBitmapFormat - 7 <= 1 )
        {
          iBitmapFormat = a2->iBitmapFormat;
          sizlBitmap = 0LL;
          v130 = 0uLL;
          v131 = 0;
          sizlBitmap = a2->sizlBitmap;
          v26 = *(_DWORD *)(v16 + 112) & 0x40000;
          *(_QWORD *)((char *)&v130 + 4) = 0LL;
          HIDWORD(v130) = v26;
          if ( iBitmapFormat == 7 )
          {
            v128 = 2;
          }
          else if ( iBitmapFormat == 8 )
          {
            v128 = 3;
          }
          else
          {
            v128 = iBitmapFormat;
          }
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v118, (struct _DEVBITMAPINFO *)&v128, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            goto LABEL_53;
          v27 = 0LL;
          if ( v118 )
            v27 = (SURFOBJ *)(v118 + 24);
          if ( !EngCopyBits(v27, a2, 0LL, xloIdent, &prclDest, (POINTL *)&prclDest) )
          {
LABEL_53:
            HTSEMOBJ::vAcquire((HTSEMOBJ *)&v98);
            goto LABEL_54;
          }
          v109 = (_BYTE *)v118;
        }
        else
        {
          v109 = (_BYTE *)v16;
        }
        HTSEMOBJ::vAcquire((HTSEMOBJ *)&v98);
        if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v99) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v99, v24) )
        {
          v140 = ppalGetFromXlate((struct SURFACE *)v16, v105, v110, 1u, 1);
          if ( v140 )
          {
            v30 = ppalGetFromXlate((struct SURFACE *)v16, v28, v29, 2u, 1);
            v31 = v99;
            v32 = (__int64)v30;
            v127 = 0;
            v126 = 0LL;
            v121 = 0LL;
            if ( v22 == *(_DWORD *)(v99 + 2400) )
            {
              v34 = *(_DWORD *)(v99 + 56) & 0x200;
            }
            else
            {
              if ( !PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v126, v22, (struct _GDIINFO *)(v99 + 2160)) )
              {
LABEL_71:
                v17 = -1;
LABEL_126:
                PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v126);
                goto LABEL_55;
              }
              v121 = &v126;
              v33 = XEPALOBJ::bEqualEntries(&v126, v32);
              v31 = v99;
              v34 = v33;
            }
            v35 = a11;
            v102 = v34;
            if ( a11 == 512 )
            {
              v36 = **(_DWORD **)&prclTrg.left;
              if ( (unsigned __int8)**(_DWORD **)&prclTrg.left )
              {
                v35 = 0;
                a11 = 0;
              }
              else
              {
                v112[0] = 0;
                v114 = 0LL;
                v113 = 0;
                v112[1] = BYTE2(v36);
                if ( HIBYTE(v36) == 1 && BYTE2(v36) == 0xFF )
                {
                  if ( !(unsigned int)bIsSourceBGRA((struct SURFACE *)v16) )
                    goto LABEL_71;
                  v35 = 512;
                  v37 = 4;
                }
                else
                {
                  v37 = 1;
                }
                v112[0] = v37;
                if ( v32 )
                {
                  v114 = *(_QWORD *)(v32 + 120);
                  v113 = *(_WORD *)(v32 + 28);
                  v38 = *(_DWORD *)(v32 + 24);
                  if ( (v38 & 8) != 0
                    || (v38 & 2) != 0
                    && (v39 = *(_DWORD **)(v32 + 120), *v39 == 16711680)
                    && v39[1] == 65280
                    && v39[2] == 255 )
                  {
                    v112[0] = v37 | 2;
                  }
                }
                v148 = v112;
              }
            }
            v40 = v35;
            v146 = v35;
            v41 = *(_OWORD *)&v106->iUniq;
            v150 = *(_OWORD *)v100;
            v153 = *(_QWORD *)&v108->iUniq;
            v149 = v41;
            v147 = *(_BYTE *)(v31 + 2392);
            if ( v110 )
              v42 = *((_DWORD *)v110 + 18);
            else
              LOBYTE(v42) = 0;
            if ( (v42 & 4) != 0 || (v42 & 0x20) == 0 && (v42 & 3) != 0 )
            {
              v40 = v35 | 0x80;
              v146 = v35 | 0x80;
            }
            v43 = v105;
            v44 = pco;
            v45 = v105;
            v111 = v105;
            v123 = 0LL;
            v124 = 0;
            v125 = 0;
            v101 = 0;
            if ( pco )
            {
              iDComplexity = pco->iDComplexity;
              v96 = iDComplexity;
            }
            else
            {
              iDComplexity = 0;
              v96 = 0;
            }
            v47 = v95;
            if ( !psoDest->iType && psoDest->lDelta == v18 && (v95 == 3 || v34) && iDComplexity != 3 )
            {
              if ( psoDest != a2 )
                goto LABEL_128;
              p_left = v100;
              if ( !(unsigned int)bIntersect(v106, v100) )
                goto LABEL_128;
              v40 = v146;
              v43 = v45;
              v47 = v95;
              v44 = pco;
            }
            else
            {
              p_left = v100;
            }
            v101 = 1;
            if ( iDComplexity )
            {
              v96 = 0;
              p_left = &v44->rclBounds.left;
              if ( iDComplexity == 1 )
                v44 = 0LL;
              pco = v44;
            }
            v49 = p_left[2];
            v50 = *((_QWORD *)v43 + 7);
            if ( v49 <= *p_left )
            {
              v51 = p_left[2];
              v49 = *p_left;
            }
            else
            {
              v51 = *p_left;
            }
            if ( v51 < 0 )
              v51 = 0;
            if ( v49 > (int)v50 )
              v49 = v50;
            v52 = v49 - v51;
            if ( v49 - v51 <= 0 )
              goto LABEL_124;
            v152.left = v51;
            v53 = p_left[1];
            v152.right = v49;
            v54 = p_left[3];
            if ( v54 <= v53 )
            {
              v55 = p_left[3];
              v54 = v53;
            }
            else
            {
              v55 = v53;
            }
            if ( v55 < 0 )
              v55 = 0;
            v56 = HIDWORD(v50);
            if ( v54 > (int)v56 )
              v54 = v56;
            if ( v54 - v55 <= 0 )
              goto LABEL_124;
            v152.bottom = v54;
            v135 = 0;
            *(_QWORD *)&v138[4] = 0LL;
            v136 = v54 - v55;
            v152.top = v55;
            v146 = v40 | 0x10;
            v57 = *((_DWORD *)v45 + 28) & 0x40000;
            v137 = 0;
            v139 = 0;
            *(_DWORD *)&v138[8] = v57;
            v135 = v52;
            *(_QWORD *)v138 = 0LL;
            v134 = v47;
            if ( !SURFMEM::bCreateDIB(
                    (SURFMEM *)&v123,
                    (struct _DEVBITMAPINFO *)&v134,
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
              v21 = -1;
LABEL_124:
              v17 = v21;
LABEL_125:
              SURFMEM::~SURFMEM((SURFMEM *)&v123);
              goto LABEL_126;
            }
            v45 = v123;
            v111 = v123;
LABEL_128:
            v58 = xloIdent;
            pptlSrc = (POINTL)xloIdent;
            v59 = xloIdent;
            *(_QWORD *)&prclTrg.left = xloIdent;
            v106 = 0LL;
            v108 = 0LL;
            v60 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v99);
            if ( v102 )
              goto LABEL_142;
            EPALOBJ::EPALOBJ((EPALOBJ *)&v100, *v60);
            v61 = (__int64 *)&v100;
            if ( v121 )
              v61 = v121;
            if ( !v110 || (v62 = (struct PALETTE *)*((_QWORD *)v110 + 7)) == 0LL )
              v62 = ppalDefault;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 (__int64 *)&v106,
                                 0LL,
                                 0,
                                 *v61,
                                 v32,
                                 (__int64)v62,
                                 (__int64)v62,
                                 0,
                                 0xFFFFFF,
                                 0xFFFFFF,
                                 0) )
            {
              v58 = v106;
              pptlSrc = (POINTL)v106;
              if ( !v115 && a11 != 512 || !v101 )
              {
                v59 = *(XLATEOBJ **)&prclTrg.left;
                goto LABEL_141;
              }
              if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                   (__int64 *)&v108,
                                   0LL,
                                   0,
                                   v32,
                                   *v61,
                                   (__int64)v62,
                                   (__int64)v62,
                                   0,
                                   0xFFFFFF,
                                   0xFFFFFF,
                                   0) )
              {
                v59 = v108;
LABEL_141:
                EPALOBJ::~EPALOBJ((EPALOBJ *)&v100);
LABEL_142:
                HTSEMOBJ::vRelease((HTSEMOBJ *)&v98);
                v63 = psoDest;
                PDEVOBJ::vSync((PDEVOBJ *)&v99, psoDest, 0LL, 0);
                if ( v115 || a11 == 512 )
                {
                  if ( v101 )
                  {
                    v64 = *((_DWORD *)v45 + 14);
                    ++*((_DWORD *)v45 + 23);
                    prclTrg.right = v64;
                    prclTrg.bottom = *((_DWORD *)v45 + 15);
                    *(_QWORD *)&prclTrg.left = 0LL;
                    v65 = (*((_DWORD *)v105 + 28) & 0x400) != 0
                        ? (*(__int64 (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))(v99 + 2864))(
                            (__int64)v45 + 24,
                            v63,
                            0LL,
                            v59,
                            &prclTrg,
                            &v152)
                        : ((__int64 (__fastcall *)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                            (char *)v45 + 24,
                            v63,
                            0LL,
                            v59,
                            &prclTrg,
                            &v152);
                    if ( !v65
                      && !EngBitBlt(
                            (SURFOBJ *)((char *)v45 + 24),
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
                      HTSEMOBJ::vAcquire((HTSEMOBJ *)&v98);
                      goto LABEL_169;
                    }
                  }
                }
                HTSEMOBJ::vAcquire((HTSEMOBJ *)&v98);
                if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v99)
                  && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v99, v107) )
                {
                  goto LABEL_169;
                }
                v66 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v99);
                *(_QWORD *)&prclTrg.left = v66;
                v67 = 0;
                v142 = 0LL;
                v68 = 0LL;
                if ( v109 )
                  v68 = (__int64)(v109 + 24);
                if ( !(unsigned int)bSetHTSrcSurfInfo(v68, (__int64)v140, (__int64)v141, (__int64)v110) )
                  goto LABEL_207;
                v69 = 0LL;
                if ( v45 )
                  v69 = (struct _SURFOBJ *)((char *)v45 + 24);
                if ( !(unsigned int)bSetHTSurfInfo(v69, (struct _HTSURFACEINFO *)v143, v97)
                  || (v73 = v115) != 0
                  && !(unsigned int)bSetHTSurfInfo(
                                      (struct _SURFOBJ *)(v115 + 24),
                                      (struct _HTSURFACEINFO *)v145,
                                      *(_DWORD *)(v117 + 72)) )
                {
LABEL_207:
                  if ( v142 )
                    FreeThreadBufferWithTag(v142);
                  v17 = v67 != 0 ? 1 : -1;
                  goto LABEL_210;
                }
                v109 = 0LL;
                LODWORD(v74) = 0;
                if ( v73 )
                {
                  if ( bUMPDSecurityGateEx(v71, v70, v72, v73) && !v122 )
                  {
                    if ( gfUMPDDebug )
                      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\htblt.cxx:%d:EngHTBlt:pptlMask == NULL\n", 1063);
                    if ( v142 )
                      FreeThreadBufferWithTag(v142);
                    goto LABEL_169;
                  }
                  v74 = v145;
                  v154 = *v122;
                  v109 = v145;
                }
                v75 = v146;
                v76 = 256;
                if ( (*(_DWORD *)(v99 + 2404) & 0x100) == 0 )
                {
                  v75 = v146 | 2;
                  v146 |= 2u;
                }
                if ( v95 == 3 )
                {
                  v132[0] = 65792;
                  v144 = v132;
                  v133 = v157;
                  v132[1] = 255;
                  v132[2] = 256;
                  cEntries = v58->cEntries;
                  if ( cEntries > 0x100 || (v76 = v58->cEntries, cEntries) )
                  {
                    v78 = v157;
                    v79 = v76;
                    v80 = 0LL;
                    do
                    {
                      v81 = v58->pulXlate[v80++];
                      *v78++ = v81;
                      --v79;
                    }
                    while ( v79 );
                  }
                  v58 = xloIdent;
                  pptlSrc = (POINTL)xloIdent;
                }
                v82 = pco;
                if ( v96 )
                {
                  v146 = v75 | 1;
                  if ( v96 != 1 )
                  {
                    XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
                    v67 = 1;
                    v83 = AllocFreeTmpBuffer(324LL);
                    v84 = (char *)v83;
                    if ( v83 )
                    {
                      v85 = (int)v109;
                      v117 = v83;
                      do
                      {
                        v86 = XCLIPOBJ::bEnum((XCLIPOBJ *)v82, 0x144u, v84, 0LL);
                        v102 = v86;
                        v87 = 0;
                        if ( *(_DWORD *)v84 )
                        {
                          left = prclTrg.left;
                          do
                          {
                            rclBounds = *(RECTL *)&v84[16 * v87++ + 4];
                            v67 = ((int)HT_HalftoneBitmap(
                                          left,
                                          (_DWORD)v107,
                                          (unsigned int)v141,
                                          v85,
                                          (__int64)v143,
                                          (__int64)&v146) >= 0) & (unsigned __int8)v67;
                          }
                          while ( v87 < *(_DWORD *)v84 );
                          v86 = v102;
                        }
                        if ( !v86 )
                          break;
                        v82 = pco;
                      }
                      while ( v67 );
                      AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v117);
                      v45 = v111;
                      v58 = (XLATEOBJ *)pptlSrc;
                      v82 = pco;
                    }
                    else
                    {
                      v67 = 0;
                    }
                    goto LABEL_193;
                  }
                  rclBounds = pco->rclBounds;
                }
                LOBYTE(v67) = (int)HT_HalftoneBitmap(
                                     (_DWORD)v66,
                                     (_DWORD)v107,
                                     (unsigned int)v141,
                                     (_DWORD)v74,
                                     (__int64)v143,
                                     (__int64)&v146) >= 0;
LABEL_193:
                HTSEMOBJ::vRelease((HTSEMOBJ *)&v98);
                if ( v101 && v67 )
                {
                  v89 = v105;
                  v90 = psoDest;
                  pptlSrc = 0LL;
                  ++*((_DWORD *)v105 + 23);
                  if ( v90->iType )
                  {
                    if ( (*((_DWORD *)v89 + 28) & 0x400) != 0 )
                      v91 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v99 + 2864);
                    else
                      v91 = EngCopyBits;
                    v92 = 0LL;
                    if ( v45 )
                      v92 = (char *)v45 + 24;
                    v93 = ((__int64 (__fastcall *)(SURFOBJ *, char *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v91)(
                            v90,
                            v92,
                            v82,
                            v58,
                            &v152,
                            &pptlSrc);
                  }
                  else
                  {
                    v94 = 0LL;
                    if ( v45 )
                      v94 = (SURFOBJ *)((char *)v45 + 24);
                    v93 = EngCopyBits(v90, v94, v82, v58, &v152, &pptlSrc);
                  }
                  v67 = v93;
                }
                HTSEMOBJ::vAcquire((HTSEMOBJ *)&v98);
                goto LABEL_207;
              }
            }
            EPALOBJ::~EPALOBJ((EPALOBJ *)&v100);
LABEL_169:
            v17 = -1;
LABEL_210:
            EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v108);
            EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v106);
            goto LABEL_125;
          }
LABEL_55:
          SURFMEM::~SURFMEM((SURFMEM *)&v118);
          goto LABEL_56;
        }
LABEL_54:
        v17 = -1;
        goto LABEL_55;
      }
      v22 = 0;
      v18 = ((a1->sizlBitmap.cx + 31) >> 3) & 0xFFFFFFFC;
    }
    v97 = 1;
    v95 = 1;
    goto LABEL_20;
  }
  return v17;
}
