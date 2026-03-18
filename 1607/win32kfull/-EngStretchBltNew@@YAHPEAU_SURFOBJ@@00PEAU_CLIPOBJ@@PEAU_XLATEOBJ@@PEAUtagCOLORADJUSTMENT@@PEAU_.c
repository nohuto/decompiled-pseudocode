/*
 * XREFs of ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C003718C
 * Callers:
 *     EngStretchBlt @ 0x1C0038960 (EngStretchBlt.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C00355B8 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C0038A54 (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C0039B48 (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C0041780 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00418B4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     EngHTBlt @ 0x1C00F2408 (EngHTBlt.c)
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00FE5DC (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00FE914 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C01210DC (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0294AA4 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall EngStretchBltNew(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _RECTL *v13; // r15
  struct _RECTL *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // r13
  unsigned int v17; // esi
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rbx
  int v22; // r14d
  struct _SURFOBJ *v23; // rcx
  struct _XLATEOBJ *v24; // r11
  int v25; // edx
  struct _SURFOBJ *v26; // rax
  struct _SURFOBJ *v27; // r8
  unsigned int v28; // r9d
  int v29; // r8d
  LONG bottom; // eax
  LONG top; // ecx
  LONG right; // eax
  LONG left; // ecx
  int v34; // ecx
  struct _SURFOBJ *v35; // rax
  LONG v36; // ecx
  LONG v37; // eax
  __int64 v38; // r10
  XCLIPOBJ *v39; // rax
  int v40; // edx
  struct _XLATEOBJ *v41; // rax
  __int64 v42; // rbx
  int v43; // ecx
  int v44; // edx
  unsigned int v45; // edx
  int v46; // eax
  struct _RECTL *v47; // rcx
  LONG v48; // eax
  LONG v49; // ecx
  LONG v50; // edx
  LONG v51; // r8d
  BOOL v53; // r10d
  __int64 v54; // rax
  void *v55; // r8
  XCLIPOBJ *v56; // rcx
  struct _RECTL v57; // xmm0
  __int64 i; // rax
  LONG v59; // eax
  LONG v60; // ecx
  LONG v61; // edx
  unsigned int v62; // eax
  unsigned int v63; // ecx
  struct _STRDDA *v64; // rax
  struct _SURFOBJ *v65; // r8
  struct _SURFOBJ *v66; // rcx
  unsigned int v67; // r9d
  __int64 v68; // rdx
  unsigned int v69; // eax
  unsigned int v70; // eax
  __int64 v71; // rcx
  struct _STRRUN *v72; // r11
  XCLIPOBJ *v73; // rax
  LONG v74; // r8d
  int j; // r9d
  int v76; // edx
  struct _STRRUN *v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // r8
  unsigned int v80; // r8d
  int v81; // eax
  XCLIPOBJ *v82; // rdi
  int v83; // eax
  __int64 v84; // r8
  int v85; // eax
  char v86; // dl
  int v87; // eax
  int v88; // ecx
  LONG v89; // r9d
  int v90; // ecx
  LONG v91; // r8d
  LONG v92; // edx
  LONG v93; // edx
  SURFOBJ *v94; // rax
  int v95; // ecx
  int v96; // eax
  int v97; // r8d
  int v98; // r9d
  int v99; // eax
  XCLIPOBJ *v100; // rbx
  int v101; // [rsp+70h] [rbp-4E8h]
  unsigned int v102; // [rsp+78h] [rbp-4E0h]
  int v103; // [rsp+80h] [rbp-4D8h]
  int v104; // [rsp+84h] [rbp-4D4h]
  struct _SURFOBJ *v105; // [rsp+88h] [rbp-4D0h]
  struct _SURFOBJ *v106; // [rsp+88h] [rbp-4D0h]
  LONG v107; // [rsp+90h] [rbp-4C8h]
  int v108; // [rsp+94h] [rbp-4C4h]
  int v109; // [rsp+94h] [rbp-4C4h]
  int v110; // [rsp+94h] [rbp-4C4h]
  __int64 v111; // [rsp+98h] [rbp-4C0h]
  int v112; // [rsp+A0h] [rbp-4B8h]
  __int64 v113; // [rsp+A8h] [rbp-4B0h] BYREF
  char v114; // [rsp+B0h] [rbp-4A8h]
  int v115; // [rsp+B4h] [rbp-4A4h]
  struct _SURFOBJ *v116; // [rsp+B8h] [rbp-4A0h]
  int v117; // [rsp+C0h] [rbp-498h]
  struct _XLATEOBJ *v118; // [rsp+C8h] [rbp-490h]
  __int64 v119; // [rsp+D0h] [rbp-488h] BYREF
  char v120; // [rsp+D8h] [rbp-480h]
  int v121; // [rsp+DCh] [rbp-47Ch]
  struct REGION *v122[2]; // [rsp+E0h] [rbp-478h] BYREF
  XCLIPOBJ *v123; // [rsp+F0h] [rbp-468h]
  XCLIPOBJ *v124; // [rsp+F8h] [rbp-460h]
  SURFOBJ *pso; // [rsp+100h] [rbp-458h]
  int v126; // [rsp+108h] [rbp-450h]
  struct _SURFOBJ *v127; // [rsp+110h] [rbp-448h]
  struct tagCOLORADJUSTMENT *v128; // [rsp+118h] [rbp-440h]
  __int64 v129; // [rsp+120h] [rbp-438h]
  struct _POINTL *v130; // [rsp+128h] [rbp-430h]
  SIZEL sizl; // [rsp+130h] [rbp-428h]
  __int64 v132; // [rsp+138h] [rbp-420h]
  __int64 v133; // [rsp+140h] [rbp-418h]
  struct _RECTL *v134; // [rsp+148h] [rbp-410h]
  __int64 v135; // [rsp+150h] [rbp-408h]
  struct _POINTL *v136; // [rsp+158h] [rbp-400h]
  struct _STRRUN *v137; // [rsp+160h] [rbp-3F8h]
  struct REGION *v138[2]; // [rsp+168h] [rbp-3F0h] BYREF
  _DWORD *v139; // [rsp+178h] [rbp-3E0h]
  HSURF hsurf; // [rsp+180h] [rbp-3D8h]
  __int64 v141; // [rsp+188h] [rbp-3D0h]
  unsigned int v142; // [rsp+190h] [rbp-3C8h]
  _QWORD v143[2]; // [rsp+198h] [rbp-3C0h] BYREF
  __int64 v144; // [rsp+1A8h] [rbp-3B0h] BYREF
  char v145; // [rsp+1B0h] [rbp-3A8h]
  int v146; // [rsp+1B4h] [rbp-3A4h]
  __int64 v147; // [rsp+1B8h] [rbp-3A0h]
  struct _SURFOBJ *v148; // [rsp+1C0h] [rbp-398h]
  struct _CLIPOBJ *v149; // [rsp+1C8h] [rbp-390h]
  struct _RECTL v150; // [rsp+1D0h] [rbp-388h] BYREF
  struct REGION *v151[2]; // [rsp+1E0h] [rbp-378h] BYREF
  _DWORD v152[4]; // [rsp+1F0h] [rbp-368h] BYREF
  __int64 v153; // [rsp+200h] [rbp-358h]
  int v154; // [rsp+208h] [rbp-350h]
  int v155; // [rsp+20Ch] [rbp-34Ch]
  _DWORD v156[4]; // [rsp+210h] [rbp-348h] BYREF
  __int64 v157; // [rsp+220h] [rbp-338h]
  int v158; // [rsp+228h] [rbp-330h]
  int v159; // [rsp+22Ch] [rbp-32Ch]
  __int64 v160; // [rsp+230h] [rbp-328h] BYREF
  int v161; // [rsp+238h] [rbp-320h]
  int v162; // [rsp+23Ch] [rbp-31Ch]
  __int64 v163; // [rsp+240h] [rbp-318h]
  __int64 v164; // [rsp+248h] [rbp-310h] BYREF
  __int64 v165; // [rsp+250h] [rbp-308h] BYREF
  __int64 v166; // [rsp+258h] [rbp-300h] BYREF
  struct _RECTL v167; // [rsp+260h] [rbp-2F8h] BYREF
  int v168; // [rsp+270h] [rbp-2E8h]
  __int64 v169; // [rsp+278h] [rbp-2E0h]
  __int64 v170; // [rsp+280h] [rbp-2D8h] BYREF
  struct _RECTL v171; // [rsp+288h] [rbp-2D0h] BYREF
  struct _RECTL v172; // [rsp+298h] [rbp-2C0h] BYREF
  struct _RECTL v173; // [rsp+2A8h] [rbp-2B0h] BYREF
  struct _RECTL v174; // [rsp+2B8h] [rbp-2A0h] BYREF
  __int64 v175; // [rsp+2C8h] [rbp-290h] BYREF
  int v176; // [rsp+2D0h] [rbp-288h]
  int v177; // [rsp+2D4h] [rbp-284h]
  __m128i v178; // [rsp+2D8h] [rbp-280h] BYREF
  __int64 v179; // [rsp+2E8h] [rbp-270h]
  int v180; // [rsp+2F0h] [rbp-268h]
  int v181; // [rsp+2F4h] [rbp-264h]
  struct _RECTL v182; // [rsp+2F8h] [rbp-260h] BYREF
  struct _RECTL v183; // [rsp+308h] [rbp-250h] BYREF
  int v184; // [rsp+318h] [rbp-240h] BYREF
  struct _RECTL v185; // [rsp+31Ch] [rbp-23Ch] BYREF
  _BYTE v186[160]; // [rsp+330h] [rbp-228h] BYREF
  _BYTE v187[160]; // [rsp+3D0h] [rbp-188h] BYREF
  char v188[4]; // [rsp+470h] [rbp-E8h] BYREF
  char v189[156]; // [rsp+474h] [rbp-E4h] BYREF

  v124 = (XCLIPOBJ *)a4;
  v127 = a3;
  v105 = a2;
  v116 = a1;
  v148 = a3;
  v149 = a4;
  v118 = a5;
  v128 = a6;
  v130 = a7;
  v13 = a8;
  v14 = a9;
  v136 = a10;
  v102 = a11;
  if ( a11 - 1 > 3 )
    return 0LL;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v135 = v15;
  v16 = SURFOBJ_TO_SURFACE(a2);
  v141 = SURFOBJ_TO_SURFACE(a3);
  v17 = 0;
  if ( !v15 )
    return 0LL;
  if ( !v16 )
    return 0LL;
  v18 = *(_DWORD *)(v15 + 96);
  switch ( v18 )
  {
    case 7:
      return 0LL;
    case 8:
      return 0LL;
    case 9:
      return 0LL;
  }
  v19 = *(_DWORD *)(v16 + 96);
  if ( v19 == 9 || v18 == 10 || v19 == 10 )
    return 0LL;
  if ( a9->left == a9->right || a9->top == a9->bottom || a8->left == a8->right || a8->top == a8->bottom )
    return 1LL;
  v20 = *(_QWORD *)(v15 + 48);
  v139 = (_DWORD *)v20;
  v147 = v20;
  v21 = *(_QWORD *)(v16 + 48);
  v163 = v21;
  v144 = 0LL;
  v145 = 0;
  v146 = 0;
  v183 = *a9;
  v22 = 1;
  v23 = v105;
  if ( v105->iType == 1 && v21 && (*(_DWORD *)(v21 + 56) & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(v105, (struct SURFMEM *)&v144, &v183) )
      goto LABEL_64;
    if ( !v144 )
      goto LABEL_63;
    v14 = &v183;
    v105 = (struct _SURFOBJ *)(v144 + 24);
    v16 = SURFOBJ_TO_SURFACE(v144 + 24);
    v163 = *(_QWORD *)(v16 + 48);
    v23 = v105;
  }
  v24 = v118;
  if ( v118 && (v118->flXlate & 8) != 0 )
  {
    v25 = 1;
    v103 = 1;
    v126 = 1;
    if ( v23->iType )
      goto LABEL_64;
    v26 = v116;
    if ( v116->iType != 1 )
      goto LABEL_64;
    v27 = v127;
    if ( v127 )
      goto LABEL_64;
  }
  else
  {
    v25 = 0;
    v103 = 0;
    v126 = 0;
    v26 = v116;
    v27 = v127;
  }
  v28 = a11;
  if ( a11 == 4 )
  {
    if ( v25 )
      goto LABEL_64;
    v87 = EngHTBlt(v26, v23, v27, v124, v118, v128, v130, a8, v14, v136, 0, 0LL);
    if ( v87 == -1 )
      goto LABEL_64;
    if ( v87 )
    {
      if ( v87 == 1 )
        goto LABEL_63;
      v28 = 4;
      v24 = v118;
    }
    else
    {
      v28 = 3;
      v102 = 3;
      v24 = v118;
    }
  }
  v29 = 0;
  v101 = 0;
  bottom = a8->bottom;
  top = a8->top;
  if ( bottom < top )
  {
    a8->top = bottom;
    a8->bottom = top;
    v29 = 2;
    v101 = 2;
  }
  right = a8->right;
  left = a8->left;
  if ( right < a8->left )
  {
    a8->left = right;
    a8->right = left;
    v29 |= 1u;
    v101 = v29;
  }
  if ( v28 >= 3 || v141 )
  {
    v104 = 0;
LABEL_25:
    if ( v28 < 3 )
      v28 = 3;
    v102 = v28;
    goto LABEL_28;
  }
  v53 = 1;
  v104 = 1;
  if ( a8->right - a8->left >= v14->right - v14->left )
  {
    v53 = a8->bottom - a8->top < v14->bottom - v14->top;
    v104 = v53;
  }
  if ( !v53 )
    goto LABEL_25;
LABEL_28:
  v34 = *(_DWORD *)(v135 + 112);
  if ( (v34 & 0x40000) != 0 )
    goto LABEL_32;
  if ( v24 && (v24->flXlate & 1) == 0 )
  {
    v35 = v105;
    goto LABEL_144;
  }
  v35 = v105;
  if ( v105->iType )
  {
LABEL_144:
    if ( *(_WORD *)(v135 + 100) )
    {
      if ( (v34 & 2) != 0 && !v29 && !v127 )
      {
        v89 = v14->left;
        if ( v14->left >= 0 )
        {
          v90 = v14->top;
          if ( v90 >= 0 )
          {
            v91 = v14->right;
            if ( v91 <= v35->sizlBitmap.cx )
            {
              v92 = v14->bottom;
              if ( v92 <= v35->sizlBitmap.cy )
              {
                v110 = v91 - v89;
                sizl.cx = v91 - v89;
                v93 = v92 - v90;
                v117 = v93;
                sizl.cy = v93;
                if ( v91 - v89 <= a8->right - a8->left && v93 <= a8->bottom - a8->top )
                {
                  hsurf = (HSURF)EngCreateBitmap(sizl, 0, v116->iBitmapFormat, 0, 0LL);
                  v94 = EngLockSurface(hsurf);
                  pso = v94;
                  if ( v94 )
                  {
                    v94->iUniq = 0;
                    v179 = 0LL;
                    v180 = v110;
                    v181 = v117;
                    if ( !(unsigned int)_guard_dispatch_icall_fptr()
                      || !*(_QWORD *)(v20 + 2872)
                      || !(unsigned int)_guard_dispatch_icall_fptr() )
                    {
                      v22 = 0;
                    }
                    EngUnlockSurface(pso);
                    EngDeleteSurface(hsurf);
                    goto LABEL_63;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_32:
  v113 = 0LL;
  v114 = 0;
  v115 = 0;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v186);
  v36 = *(_DWORD *)(v16 + 60);
  v37 = *(_DWORD *)(v16 + 56);
  *(_QWORD *)&v171.left = 0LL;
  v171.right = v37;
  v171.bottom = v36;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
  v38 = v135;
  if ( !*(_WORD *)(v135 + 100) && *(_QWORD *)(v135 + 32) != *(_QWORD *)(v16 + 32) )
    goto LABEL_34;
  v178 = *(__m128i *)a8;
  v173.left = _mm_cvtsi128_si32(v178) - 1;
  v173.top = v178.m128i_i32[1] - 1;
  v173.right = _mm_cvtsi128_si32(_mm_srli_si128(v178, 8)) + 1;
  v173.bottom = _mm_srli_si128(v178, 8).m128i_i32[1] + 1;
  v95 = *(_DWORD *)(v135 + 60);
  v96 = *(_DWORD *)(v135 + 56);
  v160 = 0LL;
  v161 = v96;
  v162 = v95;
  ERECTL::operator*=(&v173, &v160);
  if ( ERECTL::bEmpty((ERECTL *)&v173) )
    goto LABEL_62;
  if ( *(_WORD *)(v38 + 100)
    || v173.left <= v14->right && v173.right >= v14->left && v173.top <= v14->bottom && v173.bottom >= v14->top )
  {
    v178.m128i_i32[0] = v97 - v173.left;
    v178.m128i_i32[1] -= v173.top;
    v178.m128i_i32[2] = v98 - v173.left;
    v178.m128i_i32[3] -= v173.top;
    v152[3] = 0;
    v154 = 0;
    v155 = 0;
    v152[1] = v173.right - v173.left + 1;
    v152[2] = v173.bottom - v173.top + 1;
    v153 = 0LL;
    if ( v103 )
      v99 = *(_DWORD *)(v16 + 96);
    else
      v99 = *(_DWORD *)(v38 + 96);
    v152[0] = v99;
    v154 = *(_DWORD *)(v38 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v113, (struct _DEVBITMAPINFO *)v152, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v113 )
      goto LABEL_138;
    v111 = *(_QWORD *)&v173.left;
    if ( !v122[0] )
      goto LABEL_138;
    *(_QWORD *)&v173.left = 0LL;
    v173.right -= v111;
    v173.bottom -= HIDWORD(v111);
    RGNOBJ::vSet((RGNOBJ *)v122, &v173);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v186, v122[0], (struct ERECTL *)&v173, 1);
    v164 = *(_QWORD *)(v135 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v164, (struct _SURFOBJ *)(v135 + 24), 0LL, 0);
    if ( v141 )
      _guard_dispatch_icall_fptr();
    v133 = v113;
    v13 = (struct _RECTL *)&v178;
    v39 = (XCLIPOBJ *)v186;
  }
  else
  {
LABEL_34:
    v133 = v38;
    v39 = v124;
  }
  v128 = (struct tagCOLORADJUSTMENT *)v13;
  v123 = v39;
  v165 = *(_QWORD *)(v16 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v165, v105, 0LL, 0);
  ERECTL::operator*=(&v171, v14);
  if ( v171.left == v171.right || v171.top == v171.bottom )
    goto LABEL_62;
  v119 = 0LL;
  v120 = 0;
  v121 = 0;
  if ( v101 || *(_WORD *)(v16 + 100) || (v40 = *(_DWORD *)(v16 + 96), v40 == 7) || v40 == 8 )
  {
    v156[3] = 0;
    v158 = 0;
    v159 = 0;
    v156[1] = v171.right - v171.left;
    v156[2] = v171.bottom - v171.top;
    v157 = 0LL;
    if ( v103 )
      v81 = *(_DWORD *)(v16 + 96);
    else
      v81 = *(_DWORD *)(v133 + 96);
    v156[0] = v81;
    v158 = *(_DWORD *)(v16 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v119, (struct _DEVBITMAPINFO *)v156, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v119 )
      goto LABEL_137;
    v175 = 0LL;
    v176 = v171.right - v171.left;
    v177 = v171.bottom - v171.top;
    _guard_dispatch_icall_fptr();
    LODWORD(v175) = v14->left - v171.left;
    HIDWORD(v175) = v14->top - v171.top;
    v176 = v14->right - v171.left;
    v177 = v14->bottom - v171.top;
    v84 = v119;
    v16 = v119;
    v130 = (struct _POINTL *)v119;
    v14 = (struct _RECTL *)&v175;
    sizl = (SIZEL)&v175;
    v106 = 0LL;
    v171.right -= v171.left;
    v85 = v171.bottom - v171.top;
    v171.bottom -= v171.top;
    *(_QWORD *)&v171.left = 0LL;
    v86 = v101;
    if ( (v101 & 2) != 0 )
    {
      v88 = *(_DWORD *)(v119 + 88);
      if ( v88 > 0 )
      {
        *(_QWORD *)(v119 + 80) = *(_QWORD *)(v119 + 72) + v88 * (v85 - 1);
        v86 = v101;
      }
      else
      {
        *(_QWORD *)(v119 + 80) = *(_QWORD *)(v119 + 72);
      }
      *(_DWORD *)(v119 + 88) = -*(_DWORD *)(v119 + 88);
      v84 = v119;
    }
    if ( (v86 & 1) != 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v84 + 96) - 1) > 5 )
      {
LABEL_137:
        SURFMEM::~SURFMEM((SURFMEM *)&v119);
LABEL_138:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
        SURFMEM::~SURFMEM((SURFMEM *)&v113);
        goto LABEL_64;
      }
      _guard_dispatch_icall_fptr();
    }
  }
  else
  {
    v130 = (struct _POINTL *)v16;
    v41 = v118;
    if ( v103 )
      v41 = 0LL;
    v106 = (struct _SURFOBJ *)v41;
    sizl = (SIZEL)v14;
  }
  v42 = v133;
  v166 = *(_QWORD *)(v133 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v166, (struct _SURFOBJ *)(v133 + 24), 0LL, 0);
  if ( v14->right - v14->left >= 128000000 )
    goto LABEL_137;
  if ( v14->bottom - v14->top >= 128000000 )
    goto LABEL_137;
  v43 = v13->right - v13->left;
  if ( v43 >= 128000000 )
    goto LABEL_137;
  v44 = v13->bottom - v13->top;
  if ( v44 >= 128000000 || v43 <= -128000000 || v44 <= -128000000 )
    goto LABEL_137;
  if ( v102 != 3
    || v127
    || v106 && (HIDWORD(v106->dhsurf) & 1) == 0
    || (v45 = *(_DWORD *)(v42 + 96), v46 = *(_DWORD *)(v16 + 96), v45 != v46)
    || v46 != 6 && v46 != 3 && v46 != 4 )
  {
    v54 = AllocFreeTmpBuffer(324LL);
    v55 = (void *)v54;
    v139 = (_DWORD *)v54;
    if ( v54 )
    {
      v170 = v54;
      v56 = v123;
      if ( v123 && *((_BYTE *)v123 + 20) )
      {
        if ( *((_BYTE *)v123 + 20) != 1 )
        {
          if ( *((_BYTE *)v123 + 20) == 3 )
          {
            v101 = 1;
            XCLIPOBJ::cEnumStart(v123, 0, 0, 4u, 0x14u);
            v56 = v123;
            v55 = v139;
          }
LABEL_80:
          *(_QWORD *)&v174.right = 0LL;
          *(_QWORD *)&v174.left = 0LL;
          if ( v101 )
            goto LABEL_203;
          while ( 1 )
          {
            for ( i = 0LL; ; i = (unsigned int)(v108 + 1) )
            {
              v108 = i;
              v55 = v139;
              if ( (unsigned int)i >= *v139 )
                break;
              v134 = (struct _RECTL *)&v139[4 * i + 1];
              v172 = 0LL;
              vInitStrDDAClip(&v171, v14, v13, v134, &v172);
              if ( !ERECTL::bEmpty((ERECTL *)&v172) )
              {
                --v172.left;
                --v172.top;
                ++v172.right;
                ++v172.bottom;
                ERECTL::operator*=(&v172, &v171);
                v59 = v14->right;
                if ( v59 >= v14->left )
                {
                  v60 = v14->bottom;
                  v61 = v14->top;
                  if ( v60 >= v61 )
                  {
                    v62 = v59 - v14->left;
                    v63 = v62 + v60 - v61;
                    if ( v63 >= v62 && v63 < 0x3FFFFFF5 )
                    {
                      v64 = (struct _STRDDA *)PALLOCMEM2(4 * v63 + 40);
                      v116 = (struct _SURFOBJ *)v64;
                      if ( v64 )
                      {
                        vInitStrDDA(v64, &v172, v14, v13);
                        v65 = v116;
                        v150 = *(struct _RECTL *)&v116->dhsurf;
                        v66 = v106;
                        if ( v106 )
                        {
                          if ( (BYTE4(v106->dhsurf) & 1) != 0 )
                            v66 = 0LL;
                          v106 = v66;
                        }
                        v169 = qword_1C02E40B0[*(unsigned int *)(v42 + 96)];
                        if ( v104 )
                          HIDWORD(v116->dhpdev) = (v102 != 1) - 1;
                        pso = (SURFOBJ *)qword_1C02E4110[3 * *(unsigned int *)(v16 + 96) - 1 + v102];
                        hsurf = (HSURF)pso;
                        v67 = v150.right - v150.left;
                        v68 = (unsigned int)(v13->right - v13->left);
                        if ( v14->right - v14->left > (int)v68 )
                        {
                          if ( v67 >= 0x15555553 )
                            goto LABEL_206;
                          v70 = v67 + 2;
                        }
                        else
                        {
                          if ( v67 + 3 < v67 )
                            goto LABEL_206;
                          v69 = (v67 + 3) >> 1;
                          if ( v69 >= 0x15555553 )
                            goto LABEL_206;
                          v70 = v69 + 2;
                        }
                        v71 = 12 * v70;
                        if ( v67 > 0x5F5E100 || (unsigned int)v71 > 0x2710000 )
                          goto LABEL_206;
                        v72 = (struct _STRRUN *)AllocFreeTmpBuffer(v71);
                        v137 = v72;
                        if ( !v72 )
                        {
                          v65 = v116;
LABEL_206:
                          Win32FreePool(v65, v68, v65);
                          continue;
                        }
                        v107 = v172.top;
                        v129 = *(_QWORD *)(v16 + 80) + *(_DWORD *)(v16 + 88) * v172.top;
                        if ( v127 )
                        {
                          v168 = v172.left + v136->x - v14->left;
                          v132 = *(_QWORD *)(v141 + 80) + (v172.top + v136->y - v14->top) * *(_DWORD *)(v141 + 88);
                        }
                        else
                        {
                          v132 = 0LL;
                        }
                        if ( v104 )
                        {
                          v80 = 0;
                          if ( v102 == 1 )
                            v80 = -1;
                          v142 = v80;
                          vInitBuffer(v72, &v150, v80);
                        }
                        *(_DWORD *)v72 = HIDWORD(v116->dhsurf);
                        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v151);
                        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v187);
                        v117 = 0;
                        v73 = v123;
                        if ( !v123 )
                          goto LABEL_103;
                        if ( v151[0] )
                        {
                          RGNOBJ::vSet((RGNOBJ *)v151, v134);
                          XCLIPOBJ::vSetup((XCLIPOBJ *)v187, v151[0], (struct ERECTL *)v134, 1);
                          v117 = 1;
                          v73 = v123;
                        }
                        if ( !v73 || v151[0] )
                        {
LABEL_103:
                          v74 = v107;
                          for ( j = 0; ; ++j )
                          {
                            v112 = j;
                            LODWORD(v134) = v74;
                            if ( v74 >= v172.bottom )
                              break;
                            v76 = *((_DWORD *)v116->hdev + j);
                            *((_DWORD *)v137 + 1) = v76;
                            if ( v76 )
                            {
                              _guard_dispatch_icall_fptr();
                              v77 = v137;
                              _guard_dispatch_icall_fptr();
                              v74 = v107;
                              if ( v104 )
                              {
                                vInitBuffer(v77, &v150, v142);
                                v74 = v107;
                              }
                              j = v112;
                            }
                            else if ( v104 )
                            {
                              _guard_dispatch_icall_fptr();
                              v74 = v107;
                              j = v112;
                            }
                            v129 += *(int *)(v16 + 88);
                            *(_DWORD *)v137 += *((_DWORD *)v137 + 1);
                            if ( v132 )
                              v132 += *(int *)(v141 + 88);
                            v107 = ++v74;
                          }
                          v42 = v133;
                        }
                        FreeTmpBuffer(v137);
                        Win32FreePool(v116, v78, v79);
                        ERECTL::operator+=((unsigned int *)&v174, (unsigned int *)&v150);
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v151);
                      }
                    }
                  }
                }
              }
            }
            v56 = v123;
            if ( !v101 )
            {
              AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v170);
              v51 = v174.bottom;
              v49 = v174.right;
              v50 = v174.top;
              v48 = v174.left;
              goto LABEL_60;
            }
LABEL_203:
            v101 = XCLIPOBJ::bEnum(v56, 0x144u, v55, 0LL);
          }
        }
        *(_DWORD *)v54 = 1;
        v57 = *(struct _RECTL *)((char *)v56 + 4);
      }
      else
      {
        *(_DWORD *)v54 = 1;
        v57 = *v13;
      }
      v101 = 0;
      *(struct _RECTL *)(v54 + 4) = v57;
      goto LABEL_80;
    }
    goto LABEL_137;
  }
  if ( v123 && *((_BYTE *)v123 + 20) == 3 )
  {
    *(_QWORD *)&v167.left = 0LL;
    *(_QWORD *)&v167.right = 0LL;
    *(_QWORD *)&v171.right = 0LL;
    *(_QWORD *)&v171.left = 0LL;
    v82 = v124;
    XCLIPOBJ::cEnumStart(v124, 0, 0, 4u, 0);
    do
    {
      v83 = XCLIPOBJ::bEnum(v82, 0x14u, &v184, 0LL);
      v109 = v83;
      if ( v184 )
      {
        StretchDIBDirect(
          *(void **)(v42 + 80),
          *(_DWORD *)(v42 + 88),
          *(_DWORD *)(v42 + 56),
          *(_DWORD *)(v42 + 60),
          v13,
          *(void **)(v16 + 80),
          *(_DWORD *)(v16 + 88),
          *(_DWORD *)(v16 + 56),
          *(_DWORD *)(v16 + 60),
          v14,
          &v167,
          &v185,
          *(_DWORD *)(v42 + 96));
        ERECTL::operator+=((unsigned int *)&v171, (unsigned int *)&v167);
        v83 = v109;
      }
    }
    while ( v83 );
  }
  else
  {
    v47 = v13;
    if ( v123 && *((_BYTE *)v123 + 20) == 1 )
      v47 = (struct _RECTL *)((char *)v123 + 4);
    StretchDIBDirect(
      *(void **)(v42 + 80),
      *(_DWORD *)(v42 + 88),
      *(_DWORD *)(v42 + 56),
      *(_DWORD *)(v42 + 60),
      v13,
      *(void **)(v16 + 80),
      *(_DWORD *)(v16 + 88),
      *(_DWORD *)(v16 + 56),
      *(_DWORD *)(v16 + 60),
      v14,
      &v171,
      v47,
      v45);
  }
  v48 = v171.left;
  v174 = v171;
  v49 = v171.right;
  v50 = v171.top;
  v51 = v171.bottom;
LABEL_60:
  if ( v42 == v135 )
    goto LABEL_61;
  v174.left = v111 + v48;
  v174.top = HIDWORD(v111) + v50;
  v174.right = v111 + v49;
  v174.bottom = HIDWORD(v111) + v51;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v138);
  if ( !v138[0] )
  {
LABEL_211:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v138);
    goto LABEL_137;
  }
  v100 = v124;
  if ( v124 )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v143);
    if ( v143[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)v143, &v174);
      if ( RGNOBJ::bMerge((RGNOBJ *)v138, (struct RGNOBJ *)v143, (XCLIPOBJ *)((char *)v100 + 56), BYTE1(gafjRgnOp)) )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v143);
        goto LABEL_215;
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v143);
    goto LABEL_211;
  }
  RGNOBJ::vSet((RGNOBJ *)v138, &v174);
LABEL_215:
  v182 = *(struct _RECTL *)((char *)v138[0] + 88);
  if ( v100 && !bIntersect(&v182, (const struct _RECTL *)((char *)v100 + 4), &v182)
    || (ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v188, v138[0], (struct ERECTL *)&v182, 1), ERECTL::bEmpty((ERECTL *)v189)) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v138);
LABEL_61:
    SURFMEM::~SURFMEM((SURFMEM *)&v119);
LABEL_62:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
    SURFMEM::~SURFMEM((SURFMEM *)&v113);
LABEL_63:
    v17 = v22;
LABEL_64:
    SURFMEM::~SURFMEM((SURFMEM *)&v144);
    return v17;
  }
  v173.left += v111;
  v173.top += HIDWORD(v111);
  v173.right += v111;
  v173.bottom += HIDWORD(v111);
  _guard_dispatch_icall_fptr();
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v138);
  SURFMEM::~SURFMEM((SURFMEM *)&v119);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
  SURFMEM::~SURFMEM((SURFMEM *)&v113);
  SURFMEM::~SURFMEM((SURFMEM *)&v144);
  return 1LL;
}
