/*
 * XREFs of ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C003E6F4
 * Callers:
 *     EngStretchBlt @ 0x1C003E600 (EngStretchBlt.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C002DC90 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C003CAAC (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C003DD8C (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0041CE8 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     EngHTBlt @ 0x1C00BAC98 (EngHTBlt.c)
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00E0030 (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00E0328 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00FF8FC (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0295304 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
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
  char *v20; // rdi
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
  int v40; // eax
  struct _XLATEOBJ *v41; // rax
  __int64 v42; // rbx
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  struct _RECTL *v46; // rcx
  LONG v47; // eax
  LONG v48; // ecx
  LONG v49; // edx
  LONG v50; // r8d
  BOOL v52; // r10d
  __int64 v53; // rax
  char *v54; // r8
  XCLIPOBJ *v55; // rcx
  struct _RECTL v56; // xmm0
  __int64 i; // rax
  LONG v58; // eax
  LONG v59; // ecx
  LONG v60; // edx
  unsigned int v61; // eax
  unsigned int v62; // ecx
  struct _STRDDA *v63; // rax
  struct _SURFOBJ *v64; // r8
  struct _SURFOBJ *v65; // rcx
  unsigned int v66; // r9d
  unsigned int v67; // eax
  unsigned int v68; // eax
  __int64 v69; // rcx
  struct _STRRUN *v70; // r11
  XCLIPOBJ *v71; // rax
  LONG v72; // r8d
  int j; // r9d
  int v74; // edx
  struct _STRRUN *v75; // rbx
  unsigned int v76; // r8d
  int v77; // eax
  __int64 v78; // r8
  int v79; // eax
  char v80; // dl
  XCLIPOBJ *v81; // rdi
  int v82; // eax
  int v83; // eax
  int v84; // ecx
  int v85; // ecx
  int v86; // eax
  int v87; // r8d
  int v88; // r9d
  int v89; // eax
  XCLIPOBJ *v90; // rbx
  LONG v91; // r9d
  int v92; // ecx
  LONG v93; // r8d
  LONG v94; // edx
  LONG v95; // edx
  SURFOBJ *v96; // rax
  int v97; // [rsp+70h] [rbp-4E8h]
  unsigned int v98; // [rsp+78h] [rbp-4E0h]
  int v99; // [rsp+80h] [rbp-4D8h]
  int v100; // [rsp+84h] [rbp-4D4h]
  struct _SURFOBJ *v101; // [rsp+88h] [rbp-4D0h]
  struct _SURFOBJ *v102; // [rsp+88h] [rbp-4D0h]
  LONG v103; // [rsp+90h] [rbp-4C8h]
  int v104; // [rsp+94h] [rbp-4C4h]
  int v105; // [rsp+94h] [rbp-4C4h]
  int v106; // [rsp+94h] [rbp-4C4h]
  __int64 v107; // [rsp+98h] [rbp-4C0h]
  int v108; // [rsp+A0h] [rbp-4B8h]
  __int64 v109; // [rsp+A8h] [rbp-4B0h] BYREF
  char v110; // [rsp+B0h] [rbp-4A8h]
  int v111; // [rsp+B4h] [rbp-4A4h]
  struct _SURFOBJ *v112; // [rsp+B8h] [rbp-4A0h]
  struct _XLATEOBJ *v113; // [rsp+C0h] [rbp-498h]
  int v114; // [rsp+C8h] [rbp-490h]
  struct REGION *v115[2]; // [rsp+D0h] [rbp-488h] BYREF
  __int64 v116; // [rsp+E0h] [rbp-478h] BYREF
  char v117; // [rsp+E8h] [rbp-470h]
  int v118; // [rsp+ECh] [rbp-46Ch]
  XCLIPOBJ *v119; // [rsp+F0h] [rbp-468h]
  SURFOBJ *pso; // [rsp+F8h] [rbp-460h]
  XCLIPOBJ *v121; // [rsp+100h] [rbp-458h]
  struct tagCOLORADJUSTMENT *v122; // [rsp+108h] [rbp-450h]
  int v123; // [rsp+110h] [rbp-448h]
  struct _SURFOBJ *v124; // [rsp+118h] [rbp-440h]
  __int64 v125; // [rsp+120h] [rbp-438h]
  SIZEL sizl; // [rsp+128h] [rbp-430h]
  __int64 v127; // [rsp+130h] [rbp-428h]
  struct _POINTL *v128; // [rsp+138h] [rbp-420h]
  __int64 v129; // [rsp+140h] [rbp-418h]
  struct _RECTL *v130; // [rsp+148h] [rbp-410h]
  struct REGION *v131[2]; // [rsp+150h] [rbp-408h] BYREF
  struct _POINTL *v132; // [rsp+160h] [rbp-3F8h]
  __int64 v133; // [rsp+168h] [rbp-3F0h]
  struct _STRRUN *v134; // [rsp+170h] [rbp-3E8h]
  char *v135; // [rsp+178h] [rbp-3E0h]
  HSURF hsurf; // [rsp+180h] [rbp-3D8h]
  __int64 v137; // [rsp+188h] [rbp-3D0h]
  unsigned int v138; // [rsp+190h] [rbp-3C8h]
  __int64 v139; // [rsp+198h] [rbp-3C0h] BYREF
  char v140; // [rsp+1A0h] [rbp-3B8h]
  int v141; // [rsp+1A4h] [rbp-3B4h]
  _QWORD v142[3]; // [rsp+1A8h] [rbp-3B0h] BYREF
  struct _RECTL v143; // [rsp+1C0h] [rbp-398h] BYREF
  struct _CLIPOBJ *v144; // [rsp+1D0h] [rbp-388h]
  struct REGION *v145[3]; // [rsp+1D8h] [rbp-380h] BYREF
  _DWORD v146[4]; // [rsp+1F0h] [rbp-368h] BYREF
  __int64 v147; // [rsp+200h] [rbp-358h]
  int v148; // [rsp+208h] [rbp-350h]
  int v149; // [rsp+20Ch] [rbp-34Ch]
  _DWORD v150[4]; // [rsp+210h] [rbp-348h] BYREF
  __int64 v151; // [rsp+220h] [rbp-338h]
  int v152; // [rsp+228h] [rbp-330h]
  int v153; // [rsp+22Ch] [rbp-32Ch]
  __int64 v154; // [rsp+230h] [rbp-328h] BYREF
  int v155; // [rsp+238h] [rbp-320h]
  int v156; // [rsp+23Ch] [rbp-31Ch]
  __int64 v157; // [rsp+240h] [rbp-318h] BYREF
  __int64 v158; // [rsp+248h] [rbp-310h] BYREF
  struct _RECTL v159; // [rsp+250h] [rbp-308h] BYREF
  __int64 v160; // [rsp+260h] [rbp-2F8h] BYREF
  int v161; // [rsp+268h] [rbp-2F0h]
  __int64 v162; // [rsp+270h] [rbp-2E8h]
  _QWORD v163[2]; // [rsp+278h] [rbp-2E0h] BYREF
  struct _RECTL v164; // [rsp+288h] [rbp-2D0h] BYREF
  struct _RECTL v165; // [rsp+298h] [rbp-2C0h] BYREF
  struct _RECTL v166; // [rsp+2A8h] [rbp-2B0h] BYREF
  struct _RECTL v167; // [rsp+2B8h] [rbp-2A0h] BYREF
  __int64 v168; // [rsp+2C8h] [rbp-290h] BYREF
  int v169; // [rsp+2D0h] [rbp-288h]
  int v170; // [rsp+2D4h] [rbp-284h]
  __m128i v171; // [rsp+2D8h] [rbp-280h] BYREF
  __int64 v172; // [rsp+2E8h] [rbp-270h]
  int v173; // [rsp+2F0h] [rbp-268h]
  int v174; // [rsp+2F4h] [rbp-264h]
  struct _RECTL v175; // [rsp+2F8h] [rbp-260h] BYREF
  struct _RECTL v176; // [rsp+308h] [rbp-250h] BYREF
  int v177; // [rsp+318h] [rbp-240h] BYREF
  struct _RECTL v178; // [rsp+31Ch] [rbp-23Ch] BYREF
  _BYTE v179[160]; // [rsp+330h] [rbp-228h] BYREF
  _BYTE v180[160]; // [rsp+3D0h] [rbp-188h] BYREF
  char v181[4]; // [rsp+470h] [rbp-E8h] BYREF
  char v182[156]; // [rsp+474h] [rbp-E4h] BYREF

  v121 = (XCLIPOBJ *)a4;
  v124 = a3;
  v101 = a2;
  v112 = a1;
  v142[2] = a3;
  v144 = a4;
  v113 = a5;
  v122 = a6;
  v128 = a7;
  v13 = a8;
  v14 = a9;
  v132 = a10;
  v98 = a11;
  if ( a11 - 1 > 3 )
    return 0LL;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v133 = v15;
  v16 = SURFOBJ_TO_SURFACE(a2);
  v137 = SURFOBJ_TO_SURFACE(a3);
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
  v20 = *(char **)(v15 + 48);
  v135 = v20;
  v145[2] = (struct REGION *)v20;
  v21 = *(_QWORD *)(v16 + 48);
  v162 = v21;
  v139 = 0LL;
  v140 = 0;
  v141 = 0;
  v176 = *a9;
  v22 = 1;
  v23 = v101;
  if ( v101->iType == 1 && v21 && (*(_DWORD *)(v21 + 56) & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(v101, (struct SURFMEM *)&v139, &v176) )
      goto LABEL_63;
    if ( !v139 )
      goto LABEL_62;
    v14 = &v176;
    v101 = (struct _SURFOBJ *)(v139 + 24);
    v16 = SURFOBJ_TO_SURFACE(v139 + 24);
    v162 = *(_QWORD *)(v16 + 48);
    v23 = v101;
  }
  v24 = v113;
  if ( v113 && (v113->flXlate & 8) != 0 )
  {
    v25 = 1;
    v99 = 1;
    v123 = 1;
    if ( v23->iType )
      goto LABEL_63;
    v26 = v112;
    if ( v112->iType != 1 )
      goto LABEL_63;
    v27 = v124;
    if ( v124 )
      goto LABEL_63;
  }
  else
  {
    v25 = 0;
    v99 = 0;
    v123 = 0;
    v26 = v112;
    v27 = v124;
  }
  v28 = a11;
  if ( a11 == 4 )
  {
    if ( v25 )
      goto LABEL_63;
    v83 = EngHTBlt(v26, v23, v27, v121, v113, v122, v128, a8, v14, v132, 0, 0LL);
    if ( v83 == -1 )
      goto LABEL_63;
    if ( v83 )
    {
      if ( v83 == 1 )
        goto LABEL_62;
      v28 = 4;
      v24 = v113;
    }
    else
    {
      v28 = 3;
      v98 = 3;
      v24 = v113;
    }
  }
  v29 = 0;
  v97 = 0;
  bottom = a8->bottom;
  top = a8->top;
  if ( bottom < top )
  {
    a8->top = bottom;
    a8->bottom = top;
    v29 = 2;
    v97 = 2;
  }
  right = a8->right;
  left = a8->left;
  if ( right < a8->left )
  {
    a8->left = right;
    a8->right = left;
    v29 |= 1u;
    v97 = v29;
  }
  if ( v28 >= 3 || v137 )
  {
    v100 = 0;
LABEL_25:
    if ( v28 < 3 )
      v28 = 3;
    v98 = v28;
    goto LABEL_28;
  }
  v52 = 1;
  v100 = 1;
  if ( a8->right - a8->left >= v14->right - v14->left )
  {
    v52 = a8->bottom - a8->top < v14->bottom - v14->top;
    v100 = v52;
  }
  if ( !v52 )
    goto LABEL_25;
LABEL_28:
  v34 = *(_DWORD *)(v133 + 112);
  if ( (v34 & 0x40000) != 0 )
    goto LABEL_32;
  if ( v24 && (v24->flXlate & 1) == 0 )
  {
    v35 = v101;
    goto LABEL_174;
  }
  v35 = v101;
  if ( v101->iType )
  {
LABEL_174:
    if ( *(_WORD *)(v133 + 100) )
    {
      if ( (v34 & 2) != 0 && !v29 && !v124 )
      {
        v91 = v14->left;
        if ( v14->left >= 0 )
        {
          v92 = v14->top;
          if ( v92 >= 0 )
          {
            v93 = v14->right;
            if ( v93 <= v35->sizlBitmap.cx )
            {
              v94 = v14->bottom;
              if ( v94 <= v35->sizlBitmap.cy )
              {
                v106 = v93 - v91;
                sizl.cx = v93 - v91;
                v95 = v94 - v92;
                v114 = v95;
                sizl.cy = v95;
                if ( v93 - v91 <= a8->right - a8->left && v95 <= a8->bottom - a8->top )
                {
                  hsurf = (HSURF)EngCreateBitmap(sizl, 0, v112->iBitmapFormat, 0, 0LL);
                  v96 = EngLockSurface(hsurf);
                  pso = v96;
                  if ( v96 )
                  {
                    v96->iUniq = 0;
                    v172 = 0LL;
                    v173 = v106;
                    v174 = v114;
                    if ( !(unsigned int)_guard_dispatch_icall_fptr()
                      || !*((_QWORD *)v20 + 360)
                      || !(unsigned int)_guard_dispatch_icall_fptr() )
                    {
                      v22 = 0;
                    }
                    EngUnlockSurface(pso);
                    EngDeleteSurface(hsurf);
                    goto LABEL_62;
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
  v109 = 0LL;
  v110 = 0;
  v111 = 0;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v180);
  v36 = *(_DWORD *)(v16 + 60);
  v37 = *(_DWORD *)(v16 + 56);
  *(_QWORD *)&v164.left = 0LL;
  v164.right = v37;
  v164.bottom = v36;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v115);
  v38 = v133;
  if ( !*(_WORD *)(v133 + 100) && *(_QWORD *)(v133 + 32) != *(_QWORD *)(v16 + 32) )
    goto LABEL_34;
  v171 = *(__m128i *)a8;
  v166.left = _mm_cvtsi128_si32(v171) - 1;
  v166.top = v171.m128i_i32[1] - 1;
  v166.right = _mm_cvtsi128_si32(_mm_srli_si128(v171, 8)) + 1;
  v166.bottom = _mm_srli_si128(v171, 8).m128i_i32[1] + 1;
  v85 = *(_DWORD *)(v133 + 60);
  v86 = *(_DWORD *)(v133 + 56);
  v154 = 0LL;
  v155 = v86;
  v156 = v85;
  ERECTL::operator*=(&v166, &v154);
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v166) )
    goto LABEL_61;
  if ( *(_WORD *)(v38 + 100)
    || v166.left <= v14->right && v166.right >= v14->left && v166.top <= v14->bottom && v166.bottom >= v14->top )
  {
    v171.m128i_i32[0] = v87 - v166.left;
    v171.m128i_i32[1] -= v166.top;
    v171.m128i_i32[2] = v88 - v166.left;
    v171.m128i_i32[3] -= v166.top;
    v150[3] = 0;
    v152 = 0;
    v153 = 0;
    v150[1] = v166.right - v166.left + 1;
    v150[2] = v166.bottom - v166.top + 1;
    v151 = 0LL;
    if ( v99 )
      v89 = *(_DWORD *)(v16 + 96);
    else
      v89 = *(_DWORD *)(v38 + 96);
    v150[0] = v89;
    v152 = *(_DWORD *)(v38 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v109, (struct _DEVBITMAPINFO *)v150, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v109 )
      goto LABEL_164;
    v107 = *(_QWORD *)&v166.left;
    if ( !v115[0] )
      goto LABEL_164;
    *(_QWORD *)&v166.left = 0LL;
    v166.right -= v107;
    v166.bottom -= HIDWORD(v107);
    RGNOBJ::vSet((RGNOBJ *)v115, &v166);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v180, v115[0], (struct ERECTL *)&v166, 1);
    v163[0] = *(_QWORD *)(v133 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)v163, (struct _SURFOBJ *)(v133 + 24), 0LL, 0);
    if ( v137 )
      _guard_dispatch_icall_fptr();
    v129 = v109;
    v13 = (struct _RECTL *)&v171;
    v39 = (XCLIPOBJ *)v180;
  }
  else
  {
LABEL_34:
    v129 = v38;
    v39 = v121;
  }
  v122 = (struct tagCOLORADJUSTMENT *)v13;
  v119 = v39;
  v157 = *(_QWORD *)(v16 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v157, v101, 0LL, 0);
  ERECTL::operator*=(&v164, v14);
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v164) )
  {
LABEL_61:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v115);
    SURFMEM::~SURFMEM((SURFMEM *)&v109);
LABEL_62:
    v17 = v22;
LABEL_63:
    SURFMEM::~SURFMEM((SURFMEM *)&v139);
    return v17;
  }
  v116 = 0LL;
  v117 = 0;
  v118 = 0;
  if ( v97 || *(_WORD *)(v16 + 100) || (v40 = *(_DWORD *)(v16 + 96), v40 == 7) || v40 == 8 )
  {
    v146[3] = 0;
    v148 = 0;
    v149 = 0;
    v146[1] = v164.right - v164.left;
    v146[2] = v164.bottom - v164.top;
    v147 = 0LL;
    if ( v99 )
      v77 = *(_DWORD *)(v16 + 96);
    else
      v77 = *(_DWORD *)(v129 + 96);
    v146[0] = v77;
    v148 = *(_DWORD *)(v16 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v116, (struct _DEVBITMAPINFO *)v146, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v116 )
      goto LABEL_163;
    v168 = 0LL;
    v169 = v164.right - v164.left;
    v170 = v164.bottom - v164.top;
    _guard_dispatch_icall_fptr();
    LODWORD(v168) = v14->left - v164.left;
    HIDWORD(v168) = v14->top - v164.top;
    v169 = v14->right - v164.left;
    v170 = v14->bottom - v164.top;
    v78 = v116;
    v16 = v116;
    v128 = (struct _POINTL *)v116;
    v14 = (struct _RECTL *)&v168;
    sizl = (SIZEL)&v168;
    v102 = 0LL;
    v164.right -= v164.left;
    v79 = v164.bottom - v164.top;
    v164.bottom -= v164.top;
    *(_QWORD *)&v164.left = 0LL;
    v80 = v97;
    if ( (v97 & 2) != 0 )
    {
      v84 = *(_DWORD *)(v116 + 88);
      if ( v84 > 0 )
      {
        *(_QWORD *)(v116 + 80) = *(_QWORD *)(v116 + 72) + v84 * (v79 - 1);
        v80 = v97;
      }
      else
      {
        *(_QWORD *)(v116 + 80) = *(_QWORD *)(v116 + 72);
      }
      *(_DWORD *)(v116 + 88) = -*(_DWORD *)(v116 + 88);
      v78 = v116;
    }
    if ( (v80 & 1) != 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v78 + 96) - 1) > 5 )
      {
LABEL_163:
        SURFMEM::~SURFMEM((SURFMEM *)&v116);
LABEL_164:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v115);
        SURFMEM::~SURFMEM((SURFMEM *)&v109);
        goto LABEL_63;
      }
      _guard_dispatch_icall_fptr();
    }
  }
  else
  {
    v128 = (struct _POINTL *)v16;
    v41 = v113;
    if ( v99 )
      v41 = 0LL;
    v102 = (struct _SURFOBJ *)v41;
    sizl = (SIZEL)v14;
  }
  v42 = v129;
  v158 = *(_QWORD *)(v129 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v158, (struct _SURFOBJ *)(v129 + 24), 0LL, 0);
  if ( v14->right - v14->left >= 128000000 )
    goto LABEL_163;
  if ( v14->bottom - v14->top >= 128000000 )
    goto LABEL_163;
  v43 = v13->right - v13->left;
  if ( v43 >= 128000000 )
    goto LABEL_163;
  v44 = v13->bottom - v13->top;
  if ( v44 >= 128000000 || v43 <= -128000000 || v44 <= -128000000 )
    goto LABEL_163;
  if ( v98 != 3
    || v124
    || v102 && (HIDWORD(v102->dhsurf) & 1) == 0
    || (v45 = *(_DWORD *)(v16 + 96), *(_DWORD *)(v42 + 96) != v45)
    || v45 != 6 && v45 != 3 && v45 != 4 )
  {
    v53 = AllocFreeTmpBuffer(324LL);
    v54 = (char *)v53;
    v135 = (char *)v53;
    if ( v53 )
    {
      v160 = v53;
      v55 = v119;
      if ( v119 && *((_BYTE *)v119 + 20) )
      {
        if ( *((_BYTE *)v119 + 20) != 1 )
        {
          if ( *((_BYTE *)v119 + 20) == 3 )
          {
            v97 = 1;
            XCLIPOBJ::cEnumStart(v119, 0, 0, 4u, 0x14u);
            v55 = v119;
            v54 = v135;
          }
LABEL_79:
          *(_QWORD *)&v167.right = 0LL;
          *(_QWORD *)&v167.left = 0LL;
          if ( v97 )
            goto LABEL_214;
          while ( 1 )
          {
            for ( i = 0LL; ; i = (unsigned int)(v104 + 1) )
            {
              v104 = i;
              v54 = v135;
              if ( (unsigned int)i >= *(_DWORD *)v135 )
                break;
              v130 = (struct _RECTL *)&v135[16 * i + 4];
              v165 = 0LL;
              vInitStrDDAClip(&v164, v14, v13, v130, &v165);
              if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v165) )
              {
                --v165.left;
                --v165.top;
                ++v165.right;
                ++v165.bottom;
                ERECTL::operator*=(&v165, &v164);
                v58 = v14->right;
                if ( v58 >= v14->left )
                {
                  v59 = v14->bottom;
                  v60 = v14->top;
                  if ( v59 >= v60 )
                  {
                    v61 = v58 - v14->left;
                    v62 = v61 + v59 - v60;
                    if ( v62 >= v61 && v62 < 0x3FFFFFF5 )
                    {
                      v63 = (struct _STRDDA *)PALLOCMEM2(4 * v62 + 40, 1752462151LL, 0);
                      v112 = (struct _SURFOBJ *)v63;
                      if ( v63 )
                      {
                        vInitStrDDA(v63, &v165, v14, v13);
                        v64 = v112;
                        v143 = *(struct _RECTL *)&v112->dhsurf;
                        v65 = v102;
                        if ( v102 )
                        {
                          if ( (BYTE4(v102->dhsurf) & 1) != 0 )
                            v65 = 0LL;
                          v102 = v65;
                        }
                        v163[1] = qword_1C02E4010[*(unsigned int *)(v42 + 96)];
                        if ( v100 )
                          HIDWORD(v112->dhpdev) = (v98 != 1) - 1;
                        pso = (SURFOBJ *)qword_1C02E4070[3 * *(unsigned int *)(v16 + 96) - 1 + v98];
                        hsurf = (HSURF)pso;
                        v66 = v143.right - v143.left;
                        if ( v14->right - v14->left > v13->right - v13->left )
                        {
                          if ( v66 >= 0x15555553 )
                            goto LABEL_217;
                          v68 = v66 + 2;
                        }
                        else
                        {
                          if ( v66 + 3 < v66 )
                            goto LABEL_217;
                          v67 = (v66 + 3) >> 1;
                          if ( v67 >= 0x15555553 )
                            goto LABEL_217;
                          v68 = v67 + 2;
                        }
                        v69 = 12 * v68;
                        if ( v66 > 0x5F5E100 || (unsigned int)v69 > 0x2710000 )
                          goto LABEL_217;
                        v70 = (struct _STRRUN *)AllocFreeTmpBuffer(v69);
                        v134 = v70;
                        if ( !v70 )
                        {
                          v64 = v112;
LABEL_217:
                          Win32FreePool(v64);
                          continue;
                        }
                        v103 = v165.top;
                        v127 = *(_QWORD *)(v16 + 80) + *(_DWORD *)(v16 + 88) * v165.top;
                        if ( v124 )
                        {
                          v161 = v165.left + v132->x - v14->left;
                          v125 = *(_QWORD *)(v137 + 80) + (v165.top + v132->y - v14->top) * *(_DWORD *)(v137 + 88);
                        }
                        else
                        {
                          v125 = 0LL;
                        }
                        if ( v100 )
                        {
                          v76 = 0;
                          if ( v98 == 1 )
                            v76 = -1;
                          v138 = v76;
                          vInitBuffer(v70, &v143, v76);
                        }
                        *(_DWORD *)v70 = HIDWORD(v112->dhsurf);
                        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v145);
                        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v179);
                        v114 = 0;
                        v71 = v119;
                        if ( !v119 )
                          goto LABEL_102;
                        if ( v145[0] )
                        {
                          RGNOBJ::vSet((RGNOBJ *)v145, v130);
                          XCLIPOBJ::vSetup((XCLIPOBJ *)v179, v145[0], (struct ERECTL *)v130, 1);
                          v114 = 1;
                          v71 = v119;
                        }
                        if ( !v71 || v145[0] )
                        {
LABEL_102:
                          v72 = v103;
                          for ( j = 0; ; ++j )
                          {
                            v108 = j;
                            LODWORD(v130) = v72;
                            if ( v72 >= v165.bottom )
                              break;
                            v74 = *((_DWORD *)v112->hdev + j);
                            *((_DWORD *)v134 + 1) = v74;
                            if ( v74 )
                            {
                              _guard_dispatch_icall_fptr();
                              v75 = v134;
                              _guard_dispatch_icall_fptr();
                              v72 = v103;
                              if ( v100 )
                              {
                                vInitBuffer(v75, &v143, v138);
                                v72 = v103;
                              }
                              j = v108;
                            }
                            else if ( v100 )
                            {
                              _guard_dispatch_icall_fptr();
                              v72 = v103;
                              j = v108;
                            }
                            v127 += *(int *)(v16 + 88);
                            *(_DWORD *)v134 += *((_DWORD *)v134 + 1);
                            if ( v125 )
                              v125 += *(int *)(v137 + 88);
                            v103 = ++v72;
                          }
                          v42 = v129;
                        }
                        FreeTmpBuffer(v134);
                        Win32FreePool(v112);
                        ERECTL::operator+=(&v167);
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v145);
                      }
                    }
                  }
                }
              }
            }
            v55 = v119;
            if ( !v97 )
            {
              AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v160);
              v50 = v167.bottom;
              v48 = v167.right;
              v49 = v167.top;
              v47 = v167.left;
              goto LABEL_59;
            }
LABEL_214:
            v97 = XCLIPOBJ::bEnum(v55, 0x144u, v54, 0LL);
          }
        }
        *(_DWORD *)v53 = 1;
        v56 = *(struct _RECTL *)((char *)v55 + 4);
      }
      else
      {
        *(_DWORD *)v53 = 1;
        v56 = *v13;
      }
      v97 = 0;
      *(struct _RECTL *)(v53 + 4) = v56;
      goto LABEL_79;
    }
    goto LABEL_163;
  }
  if ( v119 && *((_BYTE *)v119 + 20) == 3 )
  {
    *(_QWORD *)&v159.left = 0LL;
    *(_QWORD *)&v159.right = 0LL;
    *(_QWORD *)&v164.right = 0LL;
    *(_QWORD *)&v164.left = 0LL;
    v81 = v121;
    XCLIPOBJ::cEnumStart(v121, 0, 0, 4u, 0);
    do
    {
      v82 = XCLIPOBJ::bEnum(v81, 0x14u, (char *)&v177, 0LL);
      v105 = v82;
      if ( v177 )
      {
        StretchDIBDirect(
          *(void **)(v42 + 80),
          *(unsigned int *)(v42 + 88),
          *(_DWORD *)(v42 + 56),
          *(_DWORD *)(v42 + 60),
          v13,
          *(void **)(v16 + 80),
          *(_DWORD *)(v16 + 88),
          *(_DWORD *)(v16 + 56),
          *(_DWORD *)(v16 + 60),
          v14,
          &v159,
          &v178);
        ERECTL::operator+=(&v164);
        v82 = v105;
      }
    }
    while ( v82 );
  }
  else
  {
    v46 = v13;
    if ( v119 && *((_BYTE *)v119 + 20) == 1 )
      v46 = (struct _RECTL *)((char *)v119 + 4);
    StretchDIBDirect(
      *(void **)(v42 + 80),
      *(unsigned int *)(v42 + 88),
      *(_DWORD *)(v42 + 56),
      *(_DWORD *)(v42 + 60),
      v13,
      *(void **)(v16 + 80),
      *(_DWORD *)(v16 + 88),
      *(_DWORD *)(v16 + 56),
      *(_DWORD *)(v16 + 60),
      v14,
      &v164,
      v46);
  }
  v47 = v164.left;
  v167 = v164;
  v48 = v164.right;
  v49 = v164.top;
  v50 = v164.bottom;
LABEL_59:
  if ( v42 == v133 )
    goto LABEL_60;
  v167.left = v107 + v47;
  v167.top = HIDWORD(v107) + v49;
  v167.right = v107 + v48;
  v167.bottom = HIDWORD(v107) + v50;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v131);
  if ( !v131[0] )
  {
LABEL_162:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v131);
    goto LABEL_163;
  }
  v90 = v121;
  if ( !v121 )
  {
    RGNOBJ::vSet((RGNOBJ *)v131, &v167);
    goto LABEL_170;
  }
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v142);
  if ( !v142[0]
    || (RGNOBJ::vSet((RGNOBJ *)v142, &v167),
        !RGNOBJ::bMerge((RGNOBJ *)v131, (struct RGNOBJ *)v142, (XCLIPOBJ *)((char *)v90 + 56), BYTE1(gafjRgnOp))) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v142);
    goto LABEL_162;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v142);
LABEL_170:
  v175 = *(struct _RECTL *)((char *)v131[0] + 88);
  if ( v90 && !bIntersect(&v175, (const struct _RECTL *)((char *)v90 + 4), &v175)
    || (ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v181, v131[0], (struct ERECTL *)&v175, 1),
        (unsigned int)ERECTL::bEmpty((ERECTL *)v182)) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v131);
LABEL_60:
    SURFMEM::~SURFMEM((SURFMEM *)&v116);
    goto LABEL_61;
  }
  v166.left += v107;
  v166.top += HIDWORD(v107);
  v166.right += v107;
  v166.bottom += HIDWORD(v107);
  _guard_dispatch_icall_fptr();
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v131);
  SURFMEM::~SURFMEM((SURFMEM *)&v116);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v115);
  SURFMEM::~SURFMEM((SURFMEM *)&v109);
  SURFMEM::~SURFMEM((SURFMEM *)&v139);
  return 1LL;
}
