/*
 * XREFs of ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0035314
 * Callers:
 *     EngStretchBlt @ 0x1C0035220 (EngStretchBlt.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C0021614 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0021750 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002193C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C0036AAC (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0036FC0 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C0036FE4 (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00372DC (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C0037894 (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C009DAE4 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     EngHTBlt @ 0x1C00A30B4 (EngHTBlt.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02957E0 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
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
  struct _RECTL *v13; // r12
  struct _RECTL *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rsi
  unsigned int v17; // r14d
  int v18; // ecx
  int v19; // eax
  char *v20; // rbx
  __int64 v21; // rdi
  int v22; // r15d
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
  __int64 v42; // rdi
  int v43; // ecx
  int v44; // edx
  unsigned int v45; // edx
  int v46; // eax
  struct _RECTL *v47; // rcx
  LONG v48; // eax
  LONG v49; // ecx
  LONG v50; // edx
  LONG v51; // r8d
  __int64 v53; // rax
  char *v54; // rdx
  XCLIPOBJ *v55; // r10
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
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  XCLIPOBJ *v74; // rdi
  struct _STRRUN *v75; // rdi
  unsigned int v76; // r10d
  struct _STRRUN *v77; // rcx
  int v78; // eax
  unsigned int *v79; // r9
  unsigned __int64 v80; // r8
  BOOL v81; // r10d
  unsigned int v82; // eax
  int v83; // eax
  __int64 v84; // rdi
  int v85; // eax
  char v86; // dl
  XCLIPOBJ *v87; // rbx
  int v88; // eax
  int v89; // eax
  int v90; // ecx
  int v91; // ecx
  int v92; // eax
  int v93; // r8d
  int v94; // r9d
  int v95; // eax
  XCLIPOBJ *v96; // rdi
  LONG v97; // r9d
  int v98; // ecx
  LONG v99; // r8d
  LONG v100; // edx
  LONG v101; // edx
  SURFOBJ *v102; // rax
  __int64 v103; // rax
  SURFOBJ *v104; // rbx
  int v105; // [rsp+70h] [rbp-4F8h]
  unsigned int v106; // [rsp+78h] [rbp-4F0h]
  unsigned int v107; // [rsp+80h] [rbp-4E8h]
  int v108; // [rsp+84h] [rbp-4E4h]
  unsigned int v109; // [rsp+88h] [rbp-4E0h]
  int v110; // [rsp+8Ch] [rbp-4DCh]
  struct _SURFOBJ *v111; // [rsp+90h] [rbp-4D8h]
  struct _SURFOBJ *v112; // [rsp+90h] [rbp-4D8h]
  int v113; // [rsp+98h] [rbp-4D0h]
  int v114; // [rsp+98h] [rbp-4D0h]
  int v115; // [rsp+98h] [rbp-4D0h]
  __int64 v116; // [rsp+A0h] [rbp-4C8h]
  __int64 v117; // [rsp+A8h] [rbp-4C0h] BYREF
  char v118; // [rsp+B0h] [rbp-4B8h]
  int v119; // [rsp+B4h] [rbp-4B4h]
  struct _SURFOBJ *v120; // [rsp+B8h] [rbp-4B0h]
  unsigned int v121; // [rsp+C0h] [rbp-4A8h]
  struct REGION *v122[2]; // [rsp+C8h] [rbp-4A0h] BYREF
  __int64 v123; // [rsp+D8h] [rbp-490h] BYREF
  char v124; // [rsp+E0h] [rbp-488h]
  int v125; // [rsp+E4h] [rbp-484h]
  struct _XLATEOBJ *v126; // [rsp+E8h] [rbp-480h]
  int v127; // [rsp+F0h] [rbp-478h]
  SURFOBJ *pso; // [rsp+F8h] [rbp-470h]
  XCLIPOBJ *v129; // [rsp+100h] [rbp-468h]
  XCLIPOBJ *v130; // [rsp+108h] [rbp-460h]
  struct tagCOLORADJUSTMENT *v131; // [rsp+110h] [rbp-458h]
  struct _SURFOBJ *v132; // [rsp+118h] [rbp-450h]
  int v133; // [rsp+120h] [rbp-448h]
  struct _STRRUN *v134; // [rsp+128h] [rbp-440h]
  struct _POINTL *v135; // [rsp+130h] [rbp-438h]
  SIZEL sizl; // [rsp+138h] [rbp-430h]
  __int64 v137; // [rsp+140h] [rbp-428h]
  __int64 v138; // [rsp+148h] [rbp-420h]
  __int64 v139; // [rsp+150h] [rbp-418h]
  struct _RECTL *v140; // [rsp+158h] [rbp-410h]
  __int64 v141; // [rsp+160h] [rbp-408h]
  __int64 v142; // [rsp+168h] [rbp-400h]
  struct REGION *v143[2]; // [rsp+170h] [rbp-3F8h] BYREF
  struct _POINTL *v144; // [rsp+180h] [rbp-3E8h]
  char *v145; // [rsp+188h] [rbp-3E0h]
  __int64 v146; // [rsp+190h] [rbp-3D8h]
  HSURF hsurf; // [rsp+198h] [rbp-3D0h]
  struct _RECTL v148; // [rsp+1A0h] [rbp-3C8h] BYREF
  __int64 v149; // [rsp+1B0h] [rbp-3B8h] BYREF
  char v150; // [rsp+1B8h] [rbp-3B0h]
  int v151; // [rsp+1BCh] [rbp-3ACh]
  _QWORD v152[4]; // [rsp+1C0h] [rbp-3A8h] BYREF
  struct REGION *v153[3]; // [rsp+1E0h] [rbp-388h] BYREF
  _DWORD v154[4]; // [rsp+1F8h] [rbp-370h] BYREF
  __int64 v155; // [rsp+208h] [rbp-360h]
  int v156; // [rsp+210h] [rbp-358h]
  int v157; // [rsp+214h] [rbp-354h]
  _DWORD v158[4]; // [rsp+218h] [rbp-350h] BYREF
  __int64 v159; // [rsp+228h] [rbp-340h]
  int v160; // [rsp+230h] [rbp-338h]
  int v161; // [rsp+234h] [rbp-334h]
  __int64 v162; // [rsp+238h] [rbp-330h]
  int v163; // [rsp+240h] [rbp-328h]
  int v164; // [rsp+244h] [rbp-324h]
  __int64 v165; // [rsp+248h] [rbp-320h] BYREF
  int v166; // [rsp+250h] [rbp-318h]
  __int64 v167; // [rsp+258h] [rbp-310h]
  __int64 v168; // [rsp+260h] [rbp-308h] BYREF
  __int64 v169; // [rsp+268h] [rbp-300h] BYREF
  __int64 v170; // [rsp+270h] [rbp-2F8h]
  struct _RECTL v171; // [rsp+278h] [rbp-2F0h] BYREF
  __int64 v172; // [rsp+288h] [rbp-2E0h] BYREF
  struct _RECTL v173; // [rsp+290h] [rbp-2D8h] BYREF
  struct _RECTL v174; // [rsp+2A0h] [rbp-2C8h] BYREF
  struct _RECTL v175; // [rsp+2B0h] [rbp-2B8h] BYREF
  struct _RECTL v176; // [rsp+2C0h] [rbp-2A8h] BYREF
  __int64 v177; // [rsp+2D0h] [rbp-298h] BYREF
  int v178; // [rsp+2D8h] [rbp-290h]
  int v179; // [rsp+2DCh] [rbp-28Ch]
  __m128i v180; // [rsp+2E0h] [rbp-288h] BYREF
  __int64 v181; // [rsp+2F0h] [rbp-278h]
  int v182; // [rsp+2F8h] [rbp-270h]
  int v183; // [rsp+2FCh] [rbp-26Ch]
  struct _RECTL v184; // [rsp+300h] [rbp-268h] BYREF
  struct _RECTL v185; // [rsp+310h] [rbp-258h] BYREF
  int v186; // [rsp+320h] [rbp-248h] BYREF
  struct _RECTL v187; // [rsp+324h] [rbp-244h] BYREF
  _BYTE v188[160]; // [rsp+340h] [rbp-228h] BYREF
  _BYTE v189[160]; // [rsp+3E0h] [rbp-188h] BYREF
  char v190[4]; // [rsp+480h] [rbp-E8h] BYREF
  char v191[156]; // [rsp+484h] [rbp-E4h] BYREF

  v129 = (XCLIPOBJ *)a4;
  v132 = a3;
  v111 = a2;
  v120 = a1;
  v152[2] = a3;
  v152[3] = a4;
  v126 = a5;
  v131 = a6;
  v135 = a7;
  v13 = a8;
  v14 = a9;
  v144 = a10;
  v106 = a11;
  if ( a11 - 1 > 3 )
    return 0LL;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v141 = v15;
  v16 = SURFOBJ_TO_SURFACE(a2);
  v142 = v16;
  v146 = SURFOBJ_TO_SURFACE(a3);
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
  v145 = v20;
  v153[2] = (struct REGION *)v20;
  v21 = *(_QWORD *)(v16 + 48);
  v170 = v21;
  v149 = 0LL;
  v150 = 0;
  v151 = 0;
  v185 = *a9;
  v22 = 1;
  v23 = v111;
  if ( v111->iType == 1 && v21 && (*(_DWORD *)(v21 + 56) & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(v111, (struct SURFMEM *)&v149, &v185) )
      goto LABEL_63;
    if ( !v149 )
      goto LABEL_62;
    v14 = &v185;
    v111 = (struct _SURFOBJ *)(v149 + 24);
    v16 = SURFOBJ_TO_SURFACE(v149 + 24);
    v142 = v16;
    v170 = *(_QWORD *)(v16 + 48);
    v23 = v111;
  }
  v24 = v126;
  if ( v126 && (v126->flXlate & 8) != 0 )
  {
    v25 = 1;
    v108 = 1;
    v133 = 1;
    if ( v23->iType )
      goto LABEL_63;
    v26 = v120;
    if ( v120->iType != 1 )
      goto LABEL_63;
    v27 = v132;
    if ( v132 )
      goto LABEL_63;
  }
  else
  {
    v25 = 0;
    v108 = 0;
    v133 = 0;
    v26 = v120;
    v27 = v132;
  }
  v28 = a11;
  if ( a11 == 4 )
  {
    if ( v25 )
      goto LABEL_63;
    v89 = EngHTBlt(v26, v23, v27, v129, v126, v131, v135, a8, v14, v144, 0, 0LL);
    if ( v89 == -1 )
      goto LABEL_63;
    if ( v89 )
    {
      if ( v89 == 1 )
        goto LABEL_62;
      v28 = 4;
      v24 = v126;
    }
    else
    {
      v28 = 3;
      v106 = 3;
      v24 = v126;
    }
  }
  v29 = 0;
  v105 = 0;
  bottom = a8->bottom;
  top = a8->top;
  if ( bottom < top )
  {
    a8->top = bottom;
    a8->bottom = top;
    v29 = 2;
    v105 = 2;
  }
  right = a8->right;
  left = a8->left;
  if ( right < a8->left )
  {
    a8->left = right;
    a8->right = left;
    v29 |= 1u;
    v105 = v29;
  }
  if ( v28 >= 3 || v146 )
  {
    v109 = 0;
  }
  else
  {
    v81 = 1;
    v109 = 1;
    if ( a8->right - a8->left >= v14->right - v14->left )
    {
      v81 = a8->bottom - a8->top < v14->bottom - v14->top;
      v109 = v81;
    }
    if ( v81 )
      goto LABEL_28;
  }
  if ( v28 < 3 )
    v28 = 3;
  v106 = v28;
LABEL_28:
  v34 = *(_DWORD *)(v141 + 112);
  if ( (v34 & 0x40000) == 0 )
  {
    if ( v24 && (v24->flXlate & 1) == 0 )
    {
      v35 = v111;
    }
    else
    {
      v35 = v111;
      if ( !v111->iType )
        goto LABEL_32;
    }
    if ( *(_WORD *)(v141 + 100) )
    {
      if ( (v34 & 2) != 0 && !v29 && !v132 )
      {
        v97 = v14->left;
        if ( v14->left >= 0 )
        {
          v98 = v14->top;
          if ( v98 >= 0 )
          {
            v99 = v14->right;
            if ( v99 <= v35->sizlBitmap.cx )
            {
              v100 = v14->bottom;
              if ( v100 <= v35->sizlBitmap.cy )
              {
                v115 = v99 - v97;
                sizl.cx = v99 - v97;
                v101 = v100 - v98;
                v127 = v101;
                sizl.cy = v101;
                if ( v99 - v97 <= a8->right - a8->left && v101 <= a8->bottom - a8->top )
                {
                  hsurf = (HSURF)EngCreateBitmap(sizl, 0, v120->iBitmapFormat, 0, 0LL);
                  v102 = EngLockSurface(hsurf);
                  pso = v102;
                  if ( v102 )
                  {
                    v102->iUniq = 0;
                    v181 = 0LL;
                    v182 = v115;
                    v183 = v127;
                    if ( (unsigned int)_guard_dispatch_icall_fptr() )
                    {
                      v103 = *((_QWORD *)v20 + 360);
                      v104 = pso;
                      if ( v103 && (unsigned int)_guard_dispatch_icall_fptr() )
                        goto LABEL_208;
                    }
                    else
                    {
                      v104 = pso;
                    }
                    v22 = 0;
LABEL_208:
                    EngUnlockSurface(v104);
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
  v117 = 0LL;
  v118 = 0;
  v119 = 0;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v189);
  v36 = *(_DWORD *)(v16 + 60);
  v37 = *(_DWORD *)(v16 + 56);
  *(_QWORD *)&v173.left = 0LL;
  v173.right = v37;
  v173.bottom = v36;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
  v38 = v141;
  if ( !*(_WORD *)(v141 + 100) && *(_QWORD *)(v141 + 32) != *(_QWORD *)(v16 + 32) )
    goto LABEL_34;
  v180 = *(__m128i *)a8;
  v175.left = _mm_cvtsi128_si32(v180) - 1;
  v175.top = v180.m128i_i32[1] - 1;
  v175.right = _mm_cvtsi128_si32(_mm_srli_si128(v180, 8)) + 1;
  v175.bottom = _mm_srli_si128(v180, 8).m128i_i32[1] + 1;
  v91 = *(_DWORD *)(v141 + 60);
  v92 = *(_DWORD *)(v141 + 56);
  v162 = 0LL;
  v163 = v92;
  v164 = v91;
  ERECTL::operator*=(&v175);
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v175) )
  {
LABEL_61:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
    SURFMEM::~SURFMEM((SURFMEM *)&v117);
LABEL_62:
    v17 = v22;
LABEL_63:
    SURFMEM::~SURFMEM((SURFMEM *)&v149);
    return v17;
  }
  if ( !*(_WORD *)(v38 + 100)
    && (v175.left > v14->right || v175.right < v14->left || v175.top > v14->bottom || v175.bottom < v14->top) )
  {
LABEL_34:
    v139 = v38;
    v39 = v129;
    goto LABEL_35;
  }
  v180.m128i_i32[0] = v93 - v175.left;
  v180.m128i_i32[1] -= v175.top;
  v180.m128i_i32[2] = v94 - v175.left;
  v180.m128i_i32[3] -= v175.top;
  v154[3] = 0;
  v156 = 0;
  v157 = 0;
  v154[1] = v175.right - v175.left + 1;
  v154[2] = v175.bottom - v175.top + 1;
  v155 = 0LL;
  if ( v108 )
    v95 = *(_DWORD *)(v16 + 96);
  else
    v95 = *(_DWORD *)(v38 + 96);
  v154[0] = v95;
  v156 = *(_DWORD *)(v38 + 112) & 0x40000;
  SURFMEM::bCreateDIB((SURFMEM *)&v117, (struct _DEVBITMAPINFO *)v154, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !v117 )
    goto LABEL_146;
  v116 = *(_QWORD *)&v175.left;
  if ( !v122[0] )
    goto LABEL_146;
  *(_QWORD *)&v175.left = 0LL;
  v175.right -= v116;
  v175.bottom -= HIDWORD(v116);
  RGNOBJ::vSet((RGNOBJ *)v122, &v175);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v189, v122[0], (struct ERECTL *)&v175, 1);
  v168 = *(_QWORD *)(v141 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v168, (struct _SURFOBJ *)(v141 + 24), 0LL, 0);
  if ( v146 )
    _guard_dispatch_icall_fptr();
  v139 = v117;
  v13 = (struct _RECTL *)&v180;
  v39 = (XCLIPOBJ *)v189;
LABEL_35:
  v131 = (struct tagCOLORADJUSTMENT *)v13;
  v130 = v39;
  v169 = *(_QWORD *)(v16 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v169, v111, 0LL, 0);
  ERECTL::operator*=(&v173);
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v173) )
    goto LABEL_61;
  v123 = 0LL;
  v124 = 0;
  v125 = 0;
  if ( v105 || *(_WORD *)(v16 + 100) || (v40 = *(_DWORD *)(v16 + 96), v40 == 7) || v40 == 8 )
  {
    v158[3] = 0;
    v160 = 0;
    v161 = 0;
    v158[1] = v173.right - v173.left;
    v158[2] = v173.bottom - v173.top;
    v159 = 0LL;
    if ( v108 )
      v83 = *(_DWORD *)(v16 + 96);
    else
      v83 = *(_DWORD *)(v139 + 96);
    v158[0] = v83;
    v160 = *(_DWORD *)(v16 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v123, (struct _DEVBITMAPINFO *)v158, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v123 )
      goto LABEL_145;
    v177 = 0LL;
    v178 = v173.right - v173.left;
    v179 = v173.bottom - v173.top;
    _guard_dispatch_icall_fptr();
    LODWORD(v177) = v14->left - v173.left;
    HIDWORD(v177) = v14->top - v173.top;
    v178 = v14->right - v173.left;
    v179 = v14->bottom - v173.top;
    v84 = v123;
    v16 = v123;
    v142 = v123;
    v135 = (struct _POINTL *)v123;
    v14 = (struct _RECTL *)&v177;
    sizl = (SIZEL)&v177;
    v112 = 0LL;
    v173.right -= v173.left;
    v85 = v173.bottom - v173.top;
    v173.bottom -= v173.top;
    *(_QWORD *)&v173.left = 0LL;
    v86 = v105;
    if ( (v105 & 2) != 0 )
    {
      v90 = *(_DWORD *)(v123 + 88);
      if ( v90 > 0 )
      {
        *(_QWORD *)(v123 + 80) = *(_QWORD *)(v123 + 72) + v90 * (v85 - 1);
        v86 = v105;
      }
      else
      {
        *(_QWORD *)(v123 + 80) = *(_QWORD *)(v123 + 72);
      }
      *(_DWORD *)(v123 + 88) = -*(_DWORD *)(v123 + 88);
      v84 = v123;
    }
    if ( (v86 & 1) != 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v84 + 96) - 1) > 5 )
        goto LABEL_145;
      _guard_dispatch_icall_fptr();
    }
  }
  else
  {
    v135 = (struct _POINTL *)v16;
    v41 = v126;
    if ( v108 )
      v41 = 0LL;
    v112 = (struct _SURFOBJ *)v41;
    sizl = (SIZEL)v14;
  }
  v42 = v139;
  v165 = *(_QWORD *)(v139 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v165, (struct _SURFOBJ *)(v139 + 24), 0LL, 0);
  if ( v14->right - v14->left >= 128000000 )
    goto LABEL_145;
  if ( v14->bottom - v14->top >= 128000000 )
    goto LABEL_145;
  v43 = v13->right - v13->left;
  if ( v43 >= 128000000 )
    goto LABEL_145;
  v44 = v13->bottom - v13->top;
  if ( v44 >= 128000000 || v43 <= -128000000 || v44 <= -128000000 )
    goto LABEL_145;
  if ( v106 == 3 && !v132 && (!v112 || (HIDWORD(v112->dhsurf) & 1) != 0) )
  {
    v45 = *(_DWORD *)(v42 + 96);
    v46 = *(_DWORD *)(v16 + 96);
    if ( v45 == v46 && (v46 == 6 || v46 == 3 || v46 == 4) )
    {
      if ( v130 && *((_BYTE *)v130 + 20) == 3 )
      {
        *(_QWORD *)&v171.left = 0LL;
        *(_QWORD *)&v171.right = 0LL;
        *(_QWORD *)&v173.right = 0LL;
        *(_QWORD *)&v173.left = 0LL;
        v87 = v129;
        XCLIPOBJ::cEnumStart(v129, 0, 0, 4u, 0);
        do
        {
          v88 = XCLIPOBJ::bEnum(v87, 0x14u, (char *)&v186, 0LL);
          v114 = v88;
          if ( v186 )
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
              &v171,
              &v187,
              *(_DWORD *)(v42 + 96));
            ERECTL::operator+=(&v173);
            v88 = v114;
          }
        }
        while ( v88 );
      }
      else
      {
        v47 = v13;
        if ( v130 && *((_BYTE *)v130 + 20) == 1 )
          v47 = (struct _RECTL *)((char *)v130 + 4);
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
          &v173,
          v47,
          v45);
      }
      v48 = v173.left;
      v176 = v173;
      v49 = v173.right;
      v50 = v173.top;
      v51 = v173.bottom;
      goto LABEL_59;
    }
  }
  v53 = AllocFreeTmpBuffer(324LL);
  v54 = (char *)v53;
  v145 = (char *)v53;
  if ( !v53 )
  {
LABEL_145:
    SURFMEM::~SURFMEM((SURFMEM *)&v123);
LABEL_146:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
    SURFMEM::~SURFMEM((SURFMEM *)&v117);
    goto LABEL_63;
  }
  v172 = v53;
  v55 = v130;
  if ( v130 && *((_BYTE *)v130 + 20) )
  {
    if ( *((_BYTE *)v130 + 20) != 1 )
    {
      if ( *((_BYTE *)v130 + 20) == 3 )
      {
        v105 = 1;
        XCLIPOBJ::cEnumStart(v130, 0, 0, 4u, 0x14u);
        v55 = v130;
        v54 = v145;
      }
      goto LABEL_70;
    }
    *(_DWORD *)v53 = 1;
    v56 = *(struct _RECTL *)((char *)v55 + 4);
  }
  else
  {
    *(_DWORD *)v53 = 1;
    v56 = *v13;
  }
  v105 = 0;
  *(struct _RECTL *)(v53 + 4) = v56;
LABEL_70:
  *(_QWORD *)&v176.right = 0LL;
  *(_QWORD *)&v176.left = 0LL;
  if ( v105 )
    goto LABEL_219;
  while ( 2 )
  {
    for ( i = 0LL; ; i = (unsigned int)(v113 + 1) )
    {
      v113 = i;
      v54 = v145;
      if ( (unsigned int)i >= *(_DWORD *)v145 )
        break;
      v140 = (struct _RECTL *)&v145[16 * i + 4];
      v174 = 0LL;
      vInitStrDDAClip(&v173, v14, v13, v140, &v174);
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v174) )
      {
        --v174.left;
        --v174.top;
        ++v174.right;
        ++v174.bottom;
        ERECTL::operator*=(&v174);
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
              v120 = (struct _SURFOBJ *)v63;
              if ( v63 )
              {
                vInitStrDDA(v63, &v174, v14, v13);
                v64 = v120;
                v148 = *(struct _RECTL *)&v120->dhsurf;
                v65 = v112;
                if ( v112 )
                {
                  if ( (BYTE4(v112->dhsurf) & 1) != 0 )
                    v65 = 0LL;
                  v112 = v65;
                }
                v167 = qword_1C02E4290[*(unsigned int *)(v42 + 96)];
                if ( v109 )
                  HIDWORD(v120->dhpdev) = (v106 != 1) - 1;
                pso = (SURFOBJ *)qword_1C02E42F0[3 * *(unsigned int *)(v16 + 96) - 1 + v106];
                hsurf = (HSURF)pso;
                v66 = v148.right - v148.left;
                if ( v14->right - v14->left > v13->right - v13->left )
                {
                  if ( v66 < 0x15555553 )
                  {
                    v68 = v66 + 2;
LABEL_86:
                    v69 = 12 * v68;
                    if ( v66 <= 0x5F5E100 && (unsigned int)v69 <= 0x2710000 )
                    {
                      v70 = (struct _STRRUN *)AllocFreeTmpBuffer(v69);
                      v134 = v70;
                      if ( v70 )
                      {
                        v107 = v174.top;
                        v138 = *(_QWORD *)(v16 + 80) + *(_DWORD *)(v16 + 88) * v174.top;
                        if ( v132 )
                        {
                          v166 = v144->x + v174.left - v14->left;
                          v137 = *(_QWORD *)(v146 + 80) + (v174.top + v144->y - v14->top) * *(_DWORD *)(v146 + 88);
                        }
                        else
                        {
                          v137 = 0LL;
                        }
                        if ( v109 )
                        {
                          v82 = 0;
                          if ( v106 == 1 )
                            v82 = -1;
                          v121 = v82;
                          vInitBuffer(v70, &v148, v82);
                        }
                        *(_DWORD *)v70 = HIDWORD(v120->dhsurf);
                        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v153);
                        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v188);
                        v127 = 0;
                        v74 = v130;
                        if ( v130 )
                        {
                          if ( v153[0] )
                          {
                            RGNOBJ::vSet((RGNOBJ *)v153, v140);
                            XCLIPOBJ::vSetup((XCLIPOBJ *)v188, v153[0], (struct ERECTL *)v140, 1);
                            v127 = 1;
                          }
                          if ( v74 && !v153[0] )
                          {
LABEL_108:
                            FreeTmpBuffer(v134, v71, v72, v73);
                            Win32FreePool(v120);
                            ERECTL::operator+=(&v176);
                            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v153);
                            v42 = v139;
                            continue;
                          }
                        }
                        v72 = v107;
                        v73 = 0LL;
                        v110 = 0;
                        v75 = v134;
                        while ( 2 )
                        {
                          LODWORD(v140) = v72;
                          if ( (int)v72 >= v174.bottom )
                            goto LABEL_108;
                          v71 = *((unsigned int *)v120->hdev + (int)v73);
                          *((_DWORD *)v75 + 1) = v71;
                          if ( (_DWORD)v71 )
                          {
                            _guard_dispatch_icall_fptr();
                            _guard_dispatch_icall_fptr();
                            v16 = v142;
                            LODWORD(v72) = v107;
                            v76 = v121;
                            v71 = v109;
                            if ( !v109 )
                              goto LABEL_97;
                            v77 = v134;
                            v71 = (unsigned int)v148.left;
                            *((_DWORD *)v134 + 2) = v148.left;
                            v78 = v148.right - v71;
                            *((_DWORD *)v77 + 3) = v148.right - v71;
                            v79 = (unsigned int *)((char *)v77 + 16);
                            v80 = (unsigned __int64)(4 * v78) >> 2;
                            if ( v80 )
                            {
                              if ( ((unsigned __int8)v79 & 4) != 0 )
                              {
                                *v79 = v76;
                                if ( --v80 )
                                {
                                  v79 = (unsigned int *)((char *)v77 + 20);
                                  goto LABEL_103;
                                }
                              }
                              else
                              {
LABEL_103:
                                v71 = v76;
                                memset64(v79, v76 | ((unsigned __int64)v76 << 32), v80 >> 1);
                                if ( (v80 & 1) != 0 )
                                  v79[v80 - 1] = v76;
                              }
                            }
                            LODWORD(v72) = v107;
LABEL_97:
                            LODWORD(v73) = v110;
                          }
                          else if ( v109 )
                          {
                            _guard_dispatch_icall_fptr();
                            LODWORD(v72) = v107;
                            LODWORD(v73) = v110;
                          }
                          v138 += *(int *)(v16 + 88);
                          v75 = v134;
                          *(_DWORD *)v134 += *((_DWORD *)v134 + 1);
                          if ( v137 )
                            v137 += *(int *)(v146 + 88);
                          v72 = (unsigned int)(v72 + 1);
                          v107 = v72;
                          v73 = (unsigned int)(v73 + 1);
                          v110 = v73;
                          continue;
                        }
                      }
                      v64 = v120;
                    }
                  }
                }
                else if ( v66 + 3 >= v66 )
                {
                  v67 = (v66 + 3) >> 1;
                  if ( v67 < 0x15555553 )
                  {
                    v68 = v67 + 2;
                    goto LABEL_86;
                  }
                }
                Win32FreePool(v64);
                continue;
              }
            }
          }
        }
      }
    }
    v55 = v130;
    if ( v105 )
    {
LABEL_219:
      v105 = XCLIPOBJ::bEnum(v55, 0x144u, v54, 0LL);
      continue;
    }
    break;
  }
  AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v172);
  v51 = v176.bottom;
  v49 = v176.right;
  v50 = v176.top;
  v48 = v176.left;
LABEL_59:
  if ( v42 == v141 )
  {
LABEL_60:
    SURFMEM::~SURFMEM((SURFMEM *)&v123);
    goto LABEL_61;
  }
  v176.left = v116 + v48;
  v176.top = HIDWORD(v116) + v50;
  v176.right = v116 + v49;
  v176.bottom = HIDWORD(v116) + v51;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v143);
  if ( !v143[0] )
    goto LABEL_144;
  v96 = v129;
  if ( v129 )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v152);
    if ( v152[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)v152, &v176);
      if ( RGNOBJ::bMerge((RGNOBJ *)v143, (struct RGNOBJ *)v152, (XCLIPOBJ *)((char *)v96 + 56), BYTE1(gafjRgnOp)) )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v152);
        goto LABEL_173;
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v152);
LABEL_144:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v143);
    goto LABEL_145;
  }
  RGNOBJ::vSet((RGNOBJ *)v143, &v176);
LABEL_173:
  v184 = *(struct _RECTL *)((char *)v143[0] + 88);
  if ( v96 && !bIntersect(&v184, (const struct _RECTL *)((char *)v96 + 4), &v184)
    || (ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v190, v143[0], (struct ERECTL *)&v184, 1),
        (unsigned int)ERECTL::bEmpty((ERECTL *)v191)) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v143);
    goto LABEL_60;
  }
  v175.left += v116;
  v175.top += HIDWORD(v116);
  v175.right += v116;
  v175.bottom += HIDWORD(v116);
  _guard_dispatch_icall_fptr();
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v143);
  SURFMEM::~SURFMEM((SURFMEM *)&v123);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
  SURFMEM::~SURFMEM((SURFMEM *)&v117);
  SURFMEM::~SURFMEM((SURFMEM *)&v149);
  return 1LL;
}
