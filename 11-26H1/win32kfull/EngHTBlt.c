/*
 * XREFs of EngHTBlt @ 0x14018174C
 * Callers:
 *     EngAlphaBlend @ 0x1400E4850 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140180DF0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x140266E6C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1400E38E4 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     HT_HalftoneBitmap @ 0x1401449FC (HT_HalftoneBitmap.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401807C4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x14018087C (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1401829CC (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x140182A8C (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140182AB8 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x140182B90 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140182BBC (--$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x140182C28 (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x140182D68 (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x140183148 (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1401831F8 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x140183578 (-bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1401F1CE0 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct XLATE *a5,
        struct tagCOLORADJUSTMENT *a6,
        Gre::Base *a7,
        Gre::Base *a8,
        POINTL a9,
        Gre::Base *a10,
        int a11,
        Gre::Base *a12)
{
  struct SURFACE *v15; // r8
  struct SURFACE *v16; // r13
  unsigned int v17; // r14d
  Gre::Base *v18; // rcx
  unsigned int v19; // r15d
  __int64 result; // rax
  bool v21; // zf
  int v22; // edi
  struct Gre::Base::SESSION_GLOBALS *v23; // rax
  int v24; // r12d
  void *v25; // rax
  Gre::Base *v26; // rcx
  struct tagCOLORADJUSTMENT *v27; // rbx
  struct Gre::Base::SESSION_GLOBALS *v28; // rax
  ULONG iBitmapFormat; // eax
  struct Gre::Base::SESSION_GLOBALS *v30; // rax
  struct SURFACE *v31; // rdx
  struct XLATE *v32; // r8
  struct PALETTE *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rsi
  int v36; // r12d
  __int16 v37; // dx
  __int16 v38; // r8
  __int128 v39; // xmm0
  int v40; // eax
  struct SURFACE *v41; // rcx
  BYTE iDComplexity; // bl
  CLIPOBJ *v43; // rdx
  LONG *v44; // r13
  int v45; // r11d
  XLATEOBJ *v46; // r12
  Gre::Base *v47; // r15
  HPALETTE *v48; // rax
  Gre::Base *v49; // rcx
  struct Gre::Base::SESSION_GLOBALS *v50; // rax
  SURFOBJ *v51; // rsi
  Gre::Base *v52; // rcx
  struct Gre::Base::SESSION_GLOBALS *v53; // rax
  SURFOBJ *v54; // r15
  int v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // r8
  LONG *v58; // rsi
  Gre::Base *v59; // rax
  _OWORD *v60; // r11
  __int16 v61; // dx
  unsigned int v62; // eax
  Gre::Base *v63; // rcx
  CLIPOBJ *v64; // r15
  struct Gre::Base::SESSION_GLOBALS *v65; // rax
  struct Gre::Base::SESSION_GLOBALS *v66; // rax
  int v67; // ebx
  __int64 v68; // rdx
  __int64 v69; // r8
  Gre::Base *v70; // rcx
  struct Gre::Base::SESSION_GLOBALS *v71; // rax
  Gre::Base *p_rclBounds; // r15
  POINTL v73; // rax
  LONG v74; // ecx
  LONG x; // r9d
  int v76; // edx
  LONG v77; // ecx
  int v78; // r10d
  Gre::Base *v79; // rcx
  struct Gre::Base::SESSION_GLOBALS *v80; // rax
  int v81; // eax
  LONG v82; // eax
  LONG y; // edx
  int v84; // ecx
  LONG v85; // eax
  int v86; // ecx
  int v87; // eax
  __int64 *v88; // r15
  Gre::Base *v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // r8
  struct Gre::Base::SESSION_GLOBALS *v92; // rax
  struct SURFACE *v93; // rax
  SURFOBJ *v94; // rcx
  int v95; // eax
  struct Gre::Base::SESSION_GLOBALS *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r8
  Gre::Base *v99; // rcx
  struct Gre::Base::SESSION_GLOBALS *v100; // rax
  CLIPOBJ *v101; // rax
  int v102; // eax
  int v103; // r9d
  char v104; // cl
  ULONG v105; // ecx
  int v106; // eax
  int v107; // r12d
  int v108; // r15d
  int v109; // ebx
  __int64 v110; // rdx
  __int64 v111; // r8
  int v112; // eax
  _DWORD *v113; // rax
  int v114; // eax
  BOOL (__stdcall *v115)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  SURFOBJ *v116; // rbx
  unsigned int cEntries; // ecx
  _BYTE *v118; // r8
  __int64 v119; // r10
  __int64 v120; // r9
  char v121; // cl
  __int64 v122; // rax
  char *v123; // rsi
  __int64 v124; // rdi
  CLIPOBJ *v125; // r13
  int v126; // r9d
  int v127; // r12d
  unsigned int v128; // r15d
  int v129; // r14d
  int v130; // r12d
  int v131; // r13d
  int v132; // [rsp+60h] [rbp-A0h]
  BYTE v133; // [rsp+64h] [rbp-9Ch]
  int v134; // [rsp+68h] [rbp-98h]
  __int64 v135; // [rsp+70h] [rbp-90h] BYREF
  Gre::Base *v136; // [rsp+78h] [rbp-88h] BYREF
  POINTL pptlSrc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v138; // [rsp+88h] [rbp-78h] BYREF
  Gre::Base *v139; // [rsp+90h] [rbp-70h] BYREF
  int v140; // [rsp+98h] [rbp-68h]
  _OWORD *v141; // [rsp+A0h] [rbp-60h] BYREF
  char v142; // [rsp+A8h] [rbp-58h]
  int v143; // [rsp+ACh] [rbp-54h]
  CLIPOBJ *pco; // [rsp+B0h] [rbp-50h]
  int v145; // [rsp+B8h] [rbp-48h] BYREF
  Gre::Base *v146; // [rsp+C0h] [rbp-40h]
  struct SURFACE *v147; // [rsp+C8h] [rbp-38h]
  __int64 v148; // [rsp+D0h] [rbp-30h] BYREF
  int v149; // [rsp+D8h] [rbp-28h]
  LONG *v150; // [rsp+E0h] [rbp-20h] BYREF
  char v151; // [rsp+E8h] [rbp-18h]
  int v152; // [rsp+ECh] [rbp-14h]
  struct tagCOLORADJUSTMENT *v153; // [rsp+F0h] [rbp-10h]
  _OWORD *v154; // [rsp+F8h] [rbp-8h]
  struct XLATE *v155; // [rsp+100h] [rbp+0h]
  Gre::Base *v156; // [rsp+108h] [rbp+8h]
  struct Gre::Base::SESSION_GLOBALS *v157; // [rsp+110h] [rbp+10h]
  struct SURFACE *v158; // [rsp+118h] [rbp+18h] BYREF
  int v159; // [rsp+120h] [rbp+20h]
  SURFOBJ *psoDest; // [rsp+128h] [rbp+28h]
  SURFOBJ *v161; // [rsp+130h] [rbp+30h]
  __int64 *v162; // [rsp+138h] [rbp+38h] BYREF
  __int128 v163; // [rsp+140h] [rbp+40h] BYREF
  __int128 v164; // [rsp+150h] [rbp+50h] BYREF
  _BYTE *v165; // [rsp+160h] [rbp+60h]
  _DWORD v166[4]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v167; // [rsp+178h] [rbp+78h]
  int v168; // [rsp+180h] [rbp+80h]
  int v169; // [rsp+184h] [rbp+84h]
  struct PALETTE *v170; // [rsp+188h] [rbp+88h]
  __int64 v171; // [rsp+190h] [rbp+90h]
  _DWORD v172[4]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v173; // [rsp+1A8h] [rbp+A8h]
  int v174; // [rsp+1B0h] [rbp+B0h]
  int v175; // [rsp+1B4h] [rbp+B4h]
  _OWORD v176[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v177; // [rsp+1D8h] [rbp+D8h]
  _OWORD v178[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 *v179; // [rsp+200h] [rbp+100h]
  _OWORD v180[2]; // [rsp+208h] [rbp+108h] BYREF
  __int64 v181; // [rsp+228h] [rbp+128h]
  __int16 v182; // [rsp+230h] [rbp+130h] BYREF
  char v183; // [rsp+233h] [rbp+133h]
  __int128 *v184; // [rsp+238h] [rbp+138h]
  __int128 v185; // [rsp+240h] [rbp+140h]
  __int128 v186; // [rsp+250h] [rbp+150h]
  RECTL rclBounds; // [rsp+260h] [rbp+160h]
  RECTL prclDest; // [rsp+270h] [rbp+170h] BYREF
  __int64 v189; // [rsp+280h] [rbp+180h]
  __int64 v190; // [rsp+288h] [rbp+188h]
  RECTL v191; // [rsp+2A0h] [rbp+1A0h] BYREF
  RECTL prclTrg; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v193[256]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v146 = a12;
  v155 = a5;
  v153 = a6;
  v139 = a7;
  v136 = a8;
  psoDest = a1;
  pptlSrc = a9;
  pco = a4;
  v171 = a3;
  v161 = a2;
  v162 = (__int64 *)a10;
  v157 = Gre::Base::Globals(a10);
  v15 = (struct SURFACE *)((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL));
  v147 = v15;
  v16 = (struct SURFACE *)((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL));
  memset(v178, 0, sizeof(v178));
  v17 = 0;
  v18 = (Gre::Base *)((a3 - 24) & -(__int64)(a3 != 0));
  v19 = 0;
  v156 = v18;
  v179 = 0LL;
  v177 = 0LL;
  v181 = 0LL;
  v165 = 0LL;
  memset(v176, 0, sizeof(v176));
  memset(v180, 0, sizeof(v180));
  v164 = 0LL;
  if ( !v15 )
    return 0xFFFFFFFFLL;
  result = *(_QWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x30);
  v135 = result;
  if ( !result )
    return result;
  v21 = (*(_DWORD *)(result + 40) & 1) == 0;
  v22 = *(_DWORD *)(result + 40) & 1;
  v159 = v22;
  v145 = v22;
  if ( !v21 )
  {
    v23 = Gre::Base::Globals(v18);
    GreAcquireSemaphore<10,>(v23);
    result = v135;
    v15 = v147;
  }
  if ( a1->iType )
  {
    v24 = *(_DWORD *)(result + 2360);
    switch ( v24 )
    {
      case 0:
LABEL_7:
        v134 = 1;
        v132 = 1;
        break;
      case 2:
        v132 = 2;
        v134 = 2;
        break;
      case 3:
        v134 = 255;
        v132 = 2;
        break;
      case 4:
        v134 = 254;
        v132 = 3;
        break;
      case 5:
        v134 = 253;
        v132 = 4;
        break;
      case 6:
        v134 = 5;
        v132 = 5;
        break;
      case 7:
        v134 = 6;
        v132 = 6;
        break;
      default:
        goto LABEL_108;
    }
  }
  else
  {
    switch ( *((_DWORD *)v15 + 24) )
    {
      case 1:
        v24 = 0;
        v19 = ((a1->sizlBitmap.cx + 31) >> 3) & 0xFFFFFFFC;
        goto LABEL_7;
      case 2:
        v107 = 0;
        v108 = a1->sizlBitmap.cx + 7;
        v132 = 2;
        v109 = 2;
        v19 = (v108 >> 1) & 0xFFFFFFFC;
        if ( *(_DWORD *)(result + 2360) != 2 )
          v109 = 255;
        LOBYTE(v107) = *(_DWORD *)(result + 2360) != 2;
        v134 = v109;
        v24 = v107 + 2;
        break;
      case 3:
        v24 = 4;
        v134 = 254;
        v19 = (a1->sizlBitmap.cx + 3) & 0xFFFFFFFC;
        v132 = 3;
        break;
      case 4:
        v24 = 5;
        v134 = 253;
        v132 = 4;
        v19 = (2 * a1->sizlBitmap.cx + 2) & 0xFFFFFFFC;
        break;
      case 5:
        v24 = 6;
        v134 = 5;
        v132 = 5;
        v19 = (3 * (a1->sizlBitmap.cx + 1)) & 0xFFFFFFFC;
        break;
      case 6:
        v24 = 7;
        v19 = 4 * a1->sizlBitmap.cx;
        v134 = 6;
        v132 = 6;
        break;
      default:
        goto LABEL_108;
    }
  }
  v191.right = a2->sizlBitmap.cx;
  v191.bottom = a2->sizlBitmap.cy;
  *(_QWORD *)&v191.left = 0LL;
  ((void (__fastcall *)(_QWORD, _QWORD))ERECTL::operator*=)(&v191, pptlSrc);
  if ( v191.left == v191.right || v191.top == v191.bottom )
  {
    v17 = 1;
LABEL_108:
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v145);
    return v17;
  }
  v25 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v135);
  v27 = v153;
  if ( !v25 && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v135, v153) )
    goto LABEL_164;
  v141 = 0LL;
  v142 = 0;
  v143 = 0;
  if ( v22 )
  {
    v28 = Gre::Base::Globals(v26);
    GreReleaseSemaphoreExclusive<10,>(v28);
  }
  if ( !v16 )
  {
LABEL_163:
    SURFMEM::~SURFMEM((SURFMEM *)&v141);
LABEL_164:
    v17 = -1;
    goto LABEL_108;
  }
  if ( (*(_DWORD *)(((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)) + 0x70) & 0x1000) != 0 )
  {
    v158 = *(struct SURFACE **)(((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)) + 0x30);
    if ( v158 )
      PDEVOBJ::vSync((PDEVOBJ *)&v158, a2, 0LL, 0);
  }
  if ( !a2->iType )
  {
    iBitmapFormat = a2->iBitmapFormat;
    if ( iBitmapFormat != 7 && iBitmapFormat != 8 )
    {
      v154 = (_OWORD *)((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL));
      goto LABEL_19;
    }
  }
  v105 = a2->iBitmapFormat;
  v166[1] = a2->sizlBitmap.cx;
  v166[2] = a2->sizlBitmap.cy;
  v106 = *(_DWORD *)(((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)) + 0x70) & 0x40000;
  v166[3] = 0;
  v168 = v106;
  v169 = 0;
  v167 = 0LL;
  if ( v105 == 7 )
  {
    v166[0] = 2;
  }
  else if ( v105 == 8 )
  {
    v166[0] = 3;
  }
  else
  {
    v166[0] = v105;
  }
  if ( !SURFMEM::bCreateDIB((SURFMEM *)&v141, (struct _DEVBITMAPINFO *)v166, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0)
    || !EngCopyBits(
          (SURFOBJ *)(-(__int64)(v141 != 0LL) & ((unsigned __int64)v141 + 24)),
          a2,
          0LL,
          (XLATEOBJ *)((char *)v157 + 4664),
          &v191,
          (POINTL *)&v191) )
  {
    HTSEMOBJ::vAcquire((HTSEMOBJ *)&v145);
    goto LABEL_163;
  }
  v154 = v141;
LABEL_19:
  if ( v22 )
  {
    v30 = Gre::Base::Globals(v26);
    GreAcquireSemaphore<10,>(v30);
  }
  if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v135) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v135, v27) )
    goto LABEL_163;
  v170 = ppalGetFromXlate(
           (struct SURFACE *)((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)),
           v147,
           v155,
           1u,
           1);
  if ( !v170 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v141);
    goto LABEL_108;
  }
  v33 = ppalGetFromXlate((struct SURFACE *)((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)), v31, v32, 2u, 1);
  v34 = v135;
  v35 = (__int64)v33;
  v149 = 0;
  v148 = 0LL;
  *(_QWORD *)&prclTrg.left = 0LL;
  if ( v24 == *(_DWORD *)(v135 + 2360) )
  {
    v36 = *(_DWORD *)(v135 + 40) & 0x200;
  }
  else
  {
    if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v148, v24, (struct _GDIINFO *)(v135 + 2120)) )
    {
LABEL_174:
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v148);
      goto LABEL_163;
    }
    *(_QWORD *)&prclTrg.left = &v148;
    v81 = XEPALOBJ::bEqualEntries(&v148, v35);
    v34 = v135;
    v36 = v81;
  }
  LODWORD(v138) = v36;
  memset_0(&v182, 0, 0x68uLL);
  v37 = a11;
  v163 = 0LL;
  if ( a11 == 512 )
  {
    v102 = *(_DWORD *)v146;
    if ( (unsigned __int8)*(_DWORD *)v146 )
    {
      v37 = 0;
      a11 = 0;
    }
    else
    {
      v103 = 255;
      BYTE1(v163) = BYTE2(*(_DWORD *)v146);
      if ( HIBYTE(v102) == 1 && BYTE2(v102) == 0xFF )
      {
        if ( !(unsigned int)bIsSourceBGRA(v16) )
        {
LABEL_115:
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v148);
          SURFMEM::~SURFMEM((SURFMEM *)&v141);
          if ( v22 )
          {
            v100 = Gre::Base::Globals(v99);
            GreReleaseSemaphoreExclusive<10,>(v100);
          }
          return 0xFFFFFFFFLL;
        }
        v37 = 512;
        v104 = 4;
      }
      else
      {
        v104 = 1;
      }
      LOBYTE(v163) = v104;
      if ( v35 )
      {
        *((_QWORD *)&v163 + 1) = *(_QWORD *)(v35 + 112);
        WORD1(v163) = *(_WORD *)(v35 + 28);
        v112 = *(_DWORD *)(v35 + 24);
        if ( (v112 & 8) != 0
          || (v112 & 2) != 0
          && (v113 = *(_DWORD **)(v35 + 112), *v113 == 16711680)
          && v113[1] == 65280
          && v113[2] == v103 )
        {
          LOBYTE(v163) = v104 | 2;
        }
      }
      v184 = &v163;
    }
  }
  v38 = v37;
  v182 = v37;
  v39 = *(_OWORD *)*(_QWORD *)&pptlSrc;
  v186 = *(_OWORD *)v136;
  v189 = *(_QWORD *)v139;
  v185 = v39;
  v183 = *(_BYTE *)(v34 + 2352);
  if ( v155 )
  {
    v40 = *((_DWORD *)v155 + 18);
    if ( (v40 & 4) != 0 || (v40 & 0x20) == 0 && (v40 & 3) != 0 )
    {
      v38 = v37 | 0x80;
      v182 = v37 | 0x80;
    }
  }
  v41 = v147;
  iDComplexity = 0;
  v43 = pco;
  v44 = (LONG *)v147;
  v158 = v147;
  v150 = 0LL;
  v151 = 0;
  v152 = 0;
  v140 = 0;
  if ( pco )
    iDComplexity = pco->iDComplexity;
  v45 = v132;
  v133 = iDComplexity;
  if ( !psoDest->iType && psoDest->lDelta == v19 && (v132 == 3 || v36) && iDComplexity != 3 )
  {
    if ( psoDest != v161 )
      goto LABEL_39;
    p_rclBounds = v136;
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))bIntersect)(pptlSrc, v136) )
      goto LABEL_39;
    v38 = v182;
    v41 = (struct SURFACE *)v44;
    v45 = v132;
    v43 = pco;
  }
  else
  {
    p_rclBounds = v136;
  }
  v140 = 1;
  if ( iDComplexity )
  {
    v133 = 0;
    v101 = 0LL;
    p_rclBounds = (Gre::Base *)&v43->rclBounds;
    if ( iDComplexity != 1 )
      v101 = v43;
    pco = v101;
  }
  v73 = (POINTL)*((_QWORD *)v41 + 7);
  v74 = *((_DWORD *)p_rclBounds + 2);
  x = v74;
  v76 = *(_DWORD *)p_rclBounds;
  pptlSrc = v73;
  if ( v74 <= v76 )
  {
    x = v76;
    v76 = v74;
  }
  v77 = 0;
  if ( v76 >= 0 )
    v77 = v76;
  if ( x > v73.x )
    x = v73.x;
  v78 = x - v77;
  if ( x - v77 <= 0 )
    goto LABEL_77;
  v82 = *((_DWORD *)p_rclBounds + 3);
  y = v82;
  prclDest.left = v77;
  v84 = *((_DWORD *)p_rclBounds + 1);
  prclDest.right = x;
  if ( v82 <= v84 )
  {
    y = v84;
    v84 = v82;
  }
  v85 = 0;
  if ( v84 >= 0 )
    v85 = v84;
  if ( y > pptlSrc.y )
    y = pptlSrc.y;
  v86 = y - v85;
  if ( y - v85 <= 0 )
  {
LABEL_77:
    SURFMEM::~SURFMEM((SURFMEM *)&v150);
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v148);
    SURFMEM::~SURFMEM((SURFMEM *)&v141);
    if ( v22 )
    {
      v80 = Gre::Base::Globals(v79);
      GreReleaseSemaphoreExclusive<10,>(v80);
    }
    return 1LL;
  }
  prclDest.top = v85;
  v87 = v44[28] & 0x40000;
  prclDest.bottom = y;
  v182 = v38 | 0x10;
  v172[2] = v86;
  v174 = v87;
  v172[3] = 0;
  v175 = 0;
  v172[1] = v78;
  v173 = 0LL;
  v172[0] = v45;
  if ( !SURFMEM::bCreateDIB((SURFMEM *)&v150, (struct _DEVBITMAPINFO *)v172, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
    goto LABEL_114;
  v44 = v150;
  v158 = (struct SURFACE *)v150;
LABEL_39:
  v136 = 0LL;
  v46 = (XLATEOBJ *)((char *)v157 + 4664);
  pptlSrc = (POINTL)((char *)v157 + 4664);
  v47 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v157 + 4664);
  v146 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v157 + 4664);
  v139 = 0LL;
  v48 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v135);
  if ( (_DWORD)v138 )
    goto LABEL_40;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v138, *v48);
  v88 = &v138;
  if ( *(_QWORD *)&prclTrg.left )
    v88 = *(__int64 **)&prclTrg.left;
  if ( !v155 || (v89 = (Gre::Base *)*((_QWORD *)v155 + 7)) == 0LL )
    v89 = (Gre::Base *)*((_QWORD *)v157 + 484);
  if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                        (Gre::Base *)&v136,
                        0LL,
                        0,
                        *v88,
                        v35,
                        (__int64)v89,
                        v89,
                        0,
                        0xFFFFFF,
                        0xFFFFFF,
                        0) )
  {
LABEL_111:
    if ( v138 )
    {
      v96 = Gre::Base::Globals(v49);
      DEC_SHARE_REF_CNT(v96, v138);
    }
LABEL_113:
    EXLATEOBJ::vAltUnlock(&v139, v90, v91);
    EXLATEOBJ::vAltUnlock(&v136, v97, v98);
LABEL_114:
    SURFMEM::~SURFMEM((SURFMEM *)&v150);
    goto LABEL_115;
  }
  v46 = (XLATEOBJ *)v136;
  pptlSrc = (POINTL)v136;
  if ( (a11 == 512 || v156) && v140 )
  {
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (Gre::Base *)&v139,
                          0LL,
                          0,
                          v35,
                          *v88,
                          (__int64)v89,
                          v89,
                          0,
                          0xFFFFFF,
                          0xFFFFFF,
                          0) )
      goto LABEL_111;
    v47 = v139;
  }
  else
  {
    v47 = v146;
  }
  if ( v138 )
  {
    v92 = Gre::Base::Globals(v49);
    DEC_SHARE_REF_CNT(v92, v138);
  }
LABEL_40:
  if ( v22 )
  {
    v50 = Gre::Base::Globals(v49);
    GreReleaseSemaphoreExclusive<10,>(v50);
  }
  v51 = psoDest;
  PDEVOBJ::vSync((PDEVOBJ *)&v135, psoDest, 0LL, 0);
  if ( v156 || a11 == 512 )
  {
    if ( v140 )
    {
      prclTrg.right = v44[14];
      prclTrg.bottom = v44[15];
      v114 = v44[23] + 1;
      *(_QWORD *)&prclTrg.left = 0LL;
      v44[23] = v114;
      v115 = (*((_DWORD *)v147 + 28) & 0x400) != 0
           ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v135 + 2832)
           : EngCopyBits;
      v116 = (SURFOBJ *)((unsigned __int64)(v44 + 6) & -(__int64)(v44 != 0LL));
      if ( !((unsigned int (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, Gre::Base *, RECTL *, RECTL *))v115)(
              v116,
              v51,
              0LL,
              v47,
              &prclTrg,
              &prclDest)
        && !EngBitBlt(v116, 0LL, 0LL, 0LL, 0LL, &prclTrg, 0LL, 0LL, 0LL, 0LL, 0xFFFFu) )
      {
        HTSEMOBJ::vAcquire((HTSEMOBJ *)&v145);
LABEL_173:
        EXLATEOBJ::vAltUnlock(&v139, v56, v57);
        EXLATEOBJ::vAltUnlock(&v136, v110, v111);
        SURFMEM::~SURFMEM((SURFMEM *)&v150);
        goto LABEL_174;
      }
    }
  }
  if ( v22 )
  {
    v53 = Gre::Base::Globals(v52);
    GreAcquireSemaphore<10,>(v53);
  }
  if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v135) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v135, v153) )
    goto LABEL_113;
  v54 = (SURFOBJ *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v135);
  v161 = v54;
  v55 = 0;
  if ( (unsigned int)bSetHTSrcSurfInfo(-(__int64)(v154 != 0LL) & ((unsigned __int64)v154 + 24), v170, v176, v155) )
  {
    v58 = v44 + 6;
    v146 = (Gre::Base *)(v44 + 6);
    if ( (unsigned int)bSetHTSurfInfo(
                         (struct _SURFOBJ *)((unsigned __int64)(v44 + 6) & -(__int64)(v44 != 0LL)),
                         (struct _HTSURFACEINFO *)v178,
                         v134) )
    {
      v59 = v156;
      if ( !v156 )
        goto LABEL_50;
      if ( (unsigned int)bSetHTSurfInfo(
                           (struct _SURFOBJ *)((char *)v156 + 24),
                           (struct _HTSURFACEINFO *)v180,
                           *(_DWORD *)(v171 + 72)) )
      {
        v59 = v156;
LABEL_50:
        v154 = 0LL;
        v60 = 0LL;
        if ( v59 )
        {
          if ( !v162 )
          {
            if ( v177 )
              FreeThreadBufferWithTag(v177, v56, v57);
            goto LABEL_173;
          }
          v60 = v180;
          v190 = *v162;
          v154 = v180;
        }
        v61 = v182;
        v62 = 256;
        if ( (*(_DWORD *)(v135 + 2364) & 0x100) == 0 )
        {
          v61 = v182 | 2;
          v182 |= 2u;
        }
        v55 = 1;
        if ( v132 == 3 )
        {
          *(_WORD *)((char *)&v164 + 1) = 257;
          v179 = &v164;
          v165 = v193;
          BYTE3(v164) = 0;
          *(_QWORD *)((char *)&v164 + 4) = 0x100000000FFLL;
          cEntries = v46->cEntries;
          if ( cEntries > 0x100 || (v62 = v46->cEntries, cEntries) )
          {
            v118 = v193;
            v119 = v62;
            v120 = 0LL;
            do
            {
              v121 = v46->pulXlate[v120++];
              *v118++ = v121;
              --v119;
            }
            while ( v119 );
          }
          v46 = (XLATEOBJ *)((char *)v157 + 4664);
          pptlSrc = (POINTL)((char *)v157 + 4664);
        }
        if ( v133 )
        {
          v182 = v61 | 1;
          if ( v133 != 1 )
          {
            v64 = pco;
            XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
            v122 = AllocFreeTmpBuffer(324LL);
            v123 = (char *)v122;
            if ( !v122 )
            {
              v58 = (LONG *)v146;
              v55 = 0;
              goto LABEL_57;
            }
            v124 = (__int64)v154;
            v125 = v64;
            v162 = (__int64 *)v122;
            do
            {
              v127 = XCLIPOBJ::bEnum((XCLIPOBJ *)v125, 0x144u, v123, 0LL);
              LODWORD(v138) = v127;
              v128 = 0;
              if ( *(_DWORD *)v123 )
              {
                v129 = (int)v161;
                v130 = v126 + 1;
                v131 = (int)v153;
                do
                {
                  rclBounds = *(RECTL *)&v123[16 * v128 + 4];
                  v128 += v130;
                  v55 = ((int)HT_HalftoneBitmap(v129, v131, (__int64)v176, v124, (__int64)v178, &v182) >= 0) & (unsigned __int8)v55;
                }
                while ( v128 < *(_DWORD *)v123 );
                v127 = v138;
                v125 = pco;
              }
            }
            while ( v127 && v55 );
            AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v162);
            v22 = v159;
            v44 = (LONG *)v158;
            v46 = (XLATEOBJ *)pptlSrc;
            v58 = (LONG *)v146;
LABEL_56:
            v64 = pco;
LABEL_57:
            if ( v22 )
            {
              v65 = Gre::Base::Globals(v63);
              GreReleaseSemaphoreExclusive<10,>(v65);
            }
            if ( v140 && v55 )
            {
              v93 = v147;
              v94 = psoDest;
              pptlSrc = 0LL;
              ++*((_DWORD *)v147 + 23);
              if ( v94->iType )
              {
                if ( (*((_DWORD *)v93 + 28) & 0x400) != 0 )
                  v95 = (*(__int64 (__fastcall **)(SURFOBJ *, unsigned __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v135 + 2832))(
                          v94,
                          (unsigned __int64)v58 & -(__int64)(v44 != 0LL),
                          v64,
                          v46,
                          &prclDest,
                          &pptlSrc);
                else
                  v95 = ((__int64 (__fastcall *)(SURFOBJ *, unsigned __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                          v94,
                          (unsigned __int64)v58 & -(__int64)(v44 != 0LL),
                          v64,
                          v46,
                          &prclDest,
                          &pptlSrc);
              }
              else
              {
                v95 = EngCopyBits(
                        v94,
                        (SURFOBJ *)((unsigned __int64)v58 & -(__int64)(v44 != 0LL)),
                        v64,
                        v46,
                        &prclDest,
                        &pptlSrc);
              }
              v55 = v95;
            }
            if ( v22 )
            {
              v66 = Gre::Base::Globals(v63);
              GreAcquireSemaphore<10,>(v66);
            }
            goto LABEL_62;
          }
          rclBounds = pco->rclBounds;
        }
        v55 = (int)HT_HalftoneBitmap((int)v54, (int)v153, (__int64)v176, (__int64)v60, (__int64)v178, &v182) >= 0;
        goto LABEL_56;
      }
    }
  }
LABEL_62:
  if ( v177 )
    FreeThreadBufferWithTag(v177, v56, v57);
  v67 = v55 != 0 ? 2 : 0;
  EXLATEOBJ::vAltUnlock(&v139, v56, v57);
  EXLATEOBJ::vAltUnlock(&v136, v68, v69);
  SURFMEM::~SURFMEM((SURFMEM *)&v150);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v148);
  SURFMEM::~SURFMEM((SURFMEM *)&v141);
  if ( v22 )
  {
    v71 = Gre::Base::Globals(v70);
    GreReleaseSemaphoreExclusive<10,>(v71);
  }
  return (unsigned int)(v67 - 1);
}
