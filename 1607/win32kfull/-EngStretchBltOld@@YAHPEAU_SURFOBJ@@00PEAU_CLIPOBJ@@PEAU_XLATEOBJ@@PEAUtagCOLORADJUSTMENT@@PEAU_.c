/*
 * XREFs of ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C027E58C
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
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00FE914 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0294AA4 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall EngStretchBltOld(
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
        unsigned int a11,
        int *a12)
{
  struct _RECTL *v14; // r15
  struct _RECTL *v15; // r13
  __int64 v16; // rdi
  SIZEL v17; // r12
  unsigned int v18; // esi
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // r14d
  SURFOBJ *v24; // rcx
  struct XLATE *v25; // r11
  int v26; // edx
  SURFOBJ *v27; // rax
  __int64 v28; // r8
  unsigned int v29; // r9d
  int v30; // eax
  int v31; // r10d
  LONG bottom; // eax
  LONG top; // ecx
  LONG right; // eax
  LONG left; // ecx
  BOOL v36; // r8d
  int v37; // ecx
  struct _SURFOBJ *v38; // r9
  LONG v39; // ecx
  int v40; // eax
  LONG v41; // r8d
  LONG v42; // edx
  LONG v43; // edx
  SURFOBJ *v44; // rax
  LONG v45; // ecx
  LONG v46; // eax
  __int64 v47; // r10
  struct _SURFOBJ *v48; // r13
  XLATEOBJ *v49; // rax
  int v50; // ecx
  int v51; // eax
  int v52; // r8d
  int v53; // r9d
  int v54; // eax
  struct _RECTL *v55; // rdx
  int v56; // eax
  struct XLATE *v57; // rax
  struct _RECTL *v58; // rbx
  int dhpdev; // eax
  SIZEL v60; // r8
  int v61; // eax
  int v62; // ecx
  int v63; // r8d
  LONG v64; // r11d
  int v65; // r9d
  int v66; // ecx
  int v67; // edx
  int v68; // eax
  XCLIPOBJ *v69; // rdi
  unsigned int v70; // eax
  struct _RECTL *v71; // rcx
  LONG v72; // eax
  LONG v73; // ecx
  LONG v74; // edx
  LONG v75; // r8d
  unsigned int v76; // ecx
  void *v77; // r13
  unsigned int v78; // r8d
  __int64 v79; // rdx
  unsigned int v80; // eax
  unsigned int v81; // eax
  __int64 v82; // rcx
  HSURF v83; // rbx
  __int64 v84; // r11
  struct _SURFOBJ *v85; // r15
  int v86; // r10d
  unsigned int v87; // r8d
  LONG v88; // r8d
  int i; // r9d
  int v90; // edx
  __int64 v91; // rdx
  XCLIPOBJ *v92; // r15
  unsigned int v94; // [rsp+70h] [rbp-3B8h]
  LONG v95; // [rsp+70h] [rbp-3B8h]
  int v96; // [rsp+74h] [rbp-3B4h]
  int v97; // [rsp+74h] [rbp-3B4h]
  int v98; // [rsp+78h] [rbp-3B0h]
  int v99; // [rsp+7Ch] [rbp-3ACh]
  struct _SURFOBJ *v100; // [rsp+80h] [rbp-3A8h]
  struct _SURFOBJ *v101; // [rsp+80h] [rbp-3A8h]
  unsigned int v102; // [rsp+88h] [rbp-3A0h]
  int v103; // [rsp+88h] [rbp-3A0h]
  unsigned int v104; // [rsp+88h] [rbp-3A0h]
  struct _SURFOBJ *v105; // [rsp+90h] [rbp-398h] BYREF
  char v106; // [rsp+98h] [rbp-390h]
  int v107; // [rsp+9Ch] [rbp-38Ch]
  __int64 v108; // [rsp+A0h] [rbp-388h]
  SIZEL v109; // [rsp+A8h] [rbp-380h] BYREF
  char v110; // [rsp+B0h] [rbp-378h]
  int v111; // [rsp+B4h] [rbp-374h]
  struct REGION *v112[2]; // [rsp+B8h] [rbp-370h] BYREF
  struct _SURFOBJ *v113; // [rsp+C8h] [rbp-360h]
  struct _SURFOBJ *v114; // [rsp+D0h] [rbp-358h]
  __int64 v115; // [rsp+D8h] [rbp-350h]
  struct XLATE *v116; // [rsp+E0h] [rbp-348h]
  unsigned __int64 v117; // [rsp+E8h] [rbp-340h]
  XCLIPOBJ *v118; // [rsp+F0h] [rbp-338h]
  SURFOBJ *pso; // [rsp+F8h] [rbp-330h]
  int v120; // [rsp+100h] [rbp-328h]
  SIZEL sizl; // [rsp+108h] [rbp-320h]
  struct tagCOLORADJUSTMENT *v122; // [rsp+110h] [rbp-318h]
  struct REGION *v123[2]; // [rsp+118h] [rbp-310h] BYREF
  struct _RECTL v124; // [rsp+128h] [rbp-300h] BYREF
  __int64 *v125[2]; // [rsp+138h] [rbp-2F0h] BYREF
  __int64 v126; // [rsp+148h] [rbp-2E0h]
  __int64 v127; // [rsp+150h] [rbp-2D8h]
  SURFOBJ *v128; // [rsp+158h] [rbp-2D0h]
  HSURF hsurf; // [rsp+160h] [rbp-2C8h]
  int *v130; // [rsp+168h] [rbp-2C0h]
  __int64 v131; // [rsp+170h] [rbp-2B8h] BYREF
  char v132; // [rsp+178h] [rbp-2B0h]
  int v133; // [rsp+17Ch] [rbp-2ACh]
  struct _CLIPOBJ *v134; // [rsp+180h] [rbp-2A8h]
  __int64 v135; // [rsp+188h] [rbp-2A0h]
  _DWORD v136[4]; // [rsp+190h] [rbp-298h] BYREF
  __int64 v137; // [rsp+1A0h] [rbp-288h]
  int v138; // [rsp+1A8h] [rbp-280h]
  int v139; // [rsp+1ACh] [rbp-27Ch]
  _DWORD v140[4]; // [rsp+1B0h] [rbp-278h] BYREF
  __int64 v141; // [rsp+1C0h] [rbp-268h]
  int v142; // [rsp+1C8h] [rbp-260h]
  int v143; // [rsp+1CCh] [rbp-25Ch]
  __int64 v144; // [rsp+1D0h] [rbp-258h] BYREF
  int v145; // [rsp+1D8h] [rbp-250h]
  int v146; // [rsp+1DCh] [rbp-24Ch]
  __int64 v147; // [rsp+1E0h] [rbp-248h]
  __int64 v148; // [rsp+1E8h] [rbp-240h]
  __int64 v149; // [rsp+1F0h] [rbp-238h] BYREF
  __int64 v150; // [rsp+1F8h] [rbp-230h] BYREF
  PVOID pvBits; // [rsp+200h] [rbp-228h] BYREF
  struct _RECTL v152; // [rsp+208h] [rbp-220h] BYREF
  struct _RECTL v153; // [rsp+218h] [rbp-210h] BYREF
  struct _RECTL v154; // [rsp+228h] [rbp-200h] BYREF
  __int64 v155; // [rsp+238h] [rbp-1F0h] BYREF
  int v156; // [rsp+240h] [rbp-1E8h]
  int v157; // [rsp+244h] [rbp-1E4h]
  __m128i v158; // [rsp+248h] [rbp-1E0h] BYREF
  __int64 v159; // [rsp+258h] [rbp-1D0h]
  int v160; // [rsp+260h] [rbp-1C8h]
  unsigned int v161; // [rsp+264h] [rbp-1C4h]
  struct _RECTL v162; // [rsp+268h] [rbp-1C0h] BYREF
  struct _RECTL v163; // [rsp+278h] [rbp-1B0h] BYREF
  int v164; // [rsp+288h] [rbp-1A0h] BYREF
  struct _RECTL v165; // [rsp+28Ch] [rbp-19Ch] BYREF
  _BYTE v166[160]; // [rsp+2A0h] [rbp-188h] BYREF
  char v167[4]; // [rsp+340h] [rbp-E8h] BYREF
  char v168[156]; // [rsp+344h] [rbp-E4h] BYREF

  v118 = (XCLIPOBJ *)a4;
  v113 = a3;
  v100 = a2;
  v114 = a1;
  v134 = a4;
  v116 = (struct XLATE *)a5;
  v122 = a6;
  v117 = (unsigned __int64)a7;
  v14 = a8;
  v15 = a9;
  *(_QWORD *)&v124.left = a9;
  v125[0] = (__int64 *)a10;
  v94 = a11;
  v130 = a12;
  if ( a11 - 1 > 3 )
    return 0LL;
  v16 = SURFOBJ_TO_SURFACE(a1);
  v126 = v16;
  v17 = (SIZEL)SURFOBJ_TO_SURFACE(a2);
  v127 = SURFOBJ_TO_SURFACE(a3);
  v18 = 0;
  if ( !v16 )
    return 0LL;
  if ( !*(_QWORD *)&v17 )
    return 0LL;
  v19 = *(_DWORD *)(v16 + 96);
  switch ( v19 )
  {
    case 7:
      return 0LL;
    case 8:
      return 0LL;
    case 9:
      return 0LL;
  }
  v20 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
  if ( v20 == 9 || v19 == 10 || v20 == 10 )
    return 0LL;
  if ( a9->left != a9->right && a9->top != a9->bottom && a8->left != a8->right && a8->top != a8->bottom )
  {
    v21 = *(_QWORD *)(v16 + 48);
    v128 = (SURFOBJ *)v21;
    v135 = v21;
    v22 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
    v147 = v22;
    v131 = 0LL;
    v132 = 0;
    v133 = 0;
    v163 = *a9;
    v23 = 1;
    v24 = v100;
    if ( v100->iType == 1 && v22 && (*(_DWORD *)(v22 + 56) & 0x20000) != 0 )
    {
      if ( !(unsigned int)MulCopyDeviceToDIB(v100, (struct SURFMEM *)&v131, &v163) )
      {
LABEL_191:
        SURFMEM::~SURFMEM((SURFMEM *)&v131);
        return v18;
      }
      if ( !v131 )
      {
LABEL_19:
        v18 = v23;
        goto LABEL_191;
      }
      v15 = &v163;
      *(_QWORD *)&v124.left = &v163;
      v100 = (struct _SURFOBJ *)(v131 + 24);
      v17 = (SIZEL)SURFOBJ_TO_SURFACE(v131 + 24);
      v147 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
      v24 = v100;
    }
    v25 = v116;
    if ( v116 && (*((_DWORD *)v116 + 1) & 8) != 0 )
    {
      v26 = 1;
      v99 = 1;
      v120 = 1;
      if ( v24->iType )
        goto LABEL_191;
      v27 = v114;
      if ( v114->iType != 1 )
        goto LABEL_191;
      v28 = (__int64)v113;
      if ( v113 )
        goto LABEL_191;
    }
    else
    {
      v26 = 0;
      v99 = 0;
      v120 = 0;
      v27 = v114;
      v28 = (__int64)v113;
    }
    v29 = a11;
    if ( a11 == 4 )
    {
      if ( v26 )
        goto LABEL_191;
      v30 = EngHTBlt(
              v27,
              v24,
              v28,
              (CLIPOBJ *)v118,
              v116,
              v122,
              (XLATEOBJ *)v117,
              &a8->left,
              (XLATEOBJ *)v15,
              v125[0],
              0,
              0LL);
      if ( v30 == -1 )
        goto LABEL_191;
      if ( v30 )
      {
        if ( v30 == 1 )
          goto LABEL_19;
        v29 = 4;
        v25 = v116;
      }
      else
      {
        v29 = 3;
        v94 = 3;
        v25 = v116;
      }
    }
    v31 = 0;
    v96 = 0;
    bottom = a8->bottom;
    top = a8->top;
    if ( bottom < top )
    {
      a8->top = bottom;
      a8->bottom = top;
      v31 = 2;
      v96 = 2;
    }
    right = a8->right;
    left = a8->left;
    if ( right < a8->left )
    {
      a8->left = right;
      a8->right = left;
      v31 |= 1u;
      v96 = v31;
    }
    if ( v29 >= 3 || v127 )
    {
      v98 = 0;
    }
    else
    {
      v36 = 1;
      v98 = 1;
      if ( a8->right - a8->left >= v15->right - v15->left )
      {
        v36 = a8->bottom - a8->top < v15->bottom - v15->top;
        v98 = v36;
      }
      if ( v36 )
      {
LABEL_50:
        v37 = *(_DWORD *)(v126 + 112);
        if ( (v37 & 0x40000) == 0 )
        {
          if ( v25 && (*((_DWORD *)v25 + 1) & 1) == 0 )
          {
            v38 = v100;
LABEL_56:
            if ( *(_WORD *)(v126 + 100) )
            {
              if ( (v37 & 2) != 0 && !v31 && !v113 )
              {
                v39 = v15->left;
                if ( v15->left >= 0 )
                {
                  v40 = v15->top;
                  if ( v40 >= 0 )
                  {
                    v41 = v15->right;
                    if ( v41 <= v38->sizlBitmap.cx )
                    {
                      v42 = v15->bottom;
                      if ( v42 <= v38->sizlBitmap.cy )
                      {
                        LODWORD(v115) = v41 - v39;
                        sizl.cx = v41 - v39;
                        v43 = v42 - v40;
                        v102 = v43;
                        sizl.cy = v43;
                        if ( v41 - v39 <= a8->right - a8->left && v43 <= a8->bottom - a8->top )
                        {
                          hsurf = (HSURF)EngCreateBitmap(sizl, 0, v114->iBitmapFormat, 0, 0LL);
                          v44 = EngLockSurface(hsurf);
                          pso = v44;
                          if ( v44 )
                          {
                            v44->iUniq = 0;
                            v159 = 0LL;
                            v160 = v115;
                            v161 = v102;
                            if ( !(unsigned int)_guard_dispatch_icall_fptr()
                              || !*(_QWORD *)(v21 + 2872)
                              || !(unsigned int)_guard_dispatch_icall_fptr() )
                            {
                              v23 = 0;
                            }
                            EngUnlockSurface(pso);
                            EngDeleteSurface(hsurf);
                            goto LABEL_19;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_72;
          }
          v38 = v100;
          if ( v100->iType )
            goto LABEL_56;
        }
LABEL_72:
        v105 = 0LL;
        v106 = 0;
        v107 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v166);
        v45 = *(_DWORD *)(*(_QWORD *)&v17 + 60LL);
        v46 = *(_DWORD *)(*(_QWORD *)&v17 + 56LL);
        *(_QWORD *)&v152.left = 0LL;
        v152.right = v46;
        v152.bottom = v45;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v112);
        v47 = v126;
        if ( !*(_WORD *)(v126 + 100) && *(_QWORD *)(v126 + 32) != *(_QWORD *)(*(_QWORD *)&v17 + 32LL) )
          goto LABEL_74;
        v158 = *(__m128i *)a8;
        v153.left = _mm_cvtsi128_si32(v158) - 1;
        v153.top = v158.m128i_i32[1] - 1;
        v153.right = _mm_cvtsi128_si32(_mm_srli_si128(v158, 8)) + 1;
        v153.bottom = _mm_srli_si128(v158, 8).m128i_i32[1] + 1;
        v50 = *(_DWORD *)(v126 + 60);
        v51 = *(_DWORD *)(v126 + 56);
        v144 = 0LL;
        v145 = v51;
        v146 = v50;
        ERECTL::operator*=(&v153, &v144);
        if ( ERECTL::bEmpty((ERECTL *)&v153) )
          goto LABEL_76;
        if ( *(_WORD *)(v47 + 100)
          || v153.left <= v15->right && v153.right >= v15->left && v153.top <= v15->bottom && v153.bottom >= v15->top )
        {
          v158.m128i_i32[0] = v52 - v153.left;
          v158.m128i_i32[1] -= v153.top;
          v158.m128i_i32[2] = v53 - v153.left;
          v158.m128i_i32[3] -= v153.top;
          v136[3] = 0;
          v138 = 0;
          v139 = 0;
          v136[1] = v153.right - v153.left + 1;
          v136[2] = v153.bottom - v153.top + 1;
          v137 = 0LL;
          if ( v99 )
            v54 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
          else
            v54 = *(_DWORD *)(v47 + 96);
          v136[0] = v54;
          v138 = *(_DWORD *)(v47 + 112) & 0x40000;
          SURFMEM::bCreateDIB((SURFMEM *)&v105, (struct _DEVBITMAPINFO *)v136, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v105 )
            goto LABEL_190;
          v108 = *(_QWORD *)&v153.left;
          if ( !v112[0] )
            goto LABEL_190;
          *(_QWORD *)&v153.left = 0LL;
          v153.right -= v108;
          v153.bottom -= HIDWORD(v108);
          RGNOBJ::vSet((RGNOBJ *)v112, &v153);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v166, v112[0], (struct ERECTL *)&v153, 1);
          v149 = *(_QWORD *)(v126 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v149, (struct _SURFOBJ *)(v126 + 24), 0LL, 0);
          if ( v127 )
            _guard_dispatch_icall_fptr();
          v48 = v105;
          v114 = v105;
          v14 = (struct _RECTL *)&v158;
          v49 = (XLATEOBJ *)v166;
        }
        else
        {
LABEL_74:
          v48 = (struct _SURFOBJ *)v47;
          v114 = (struct _SURFOBJ *)v47;
          v49 = (XLATEOBJ *)v118;
        }
        v117 = (unsigned __int64)v49;
        v150 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
        PDEVOBJ::vSync((PDEVOBJ *)&v150, v100, 0LL, 0);
        ERECTL::operator*=(&v152, *(_DWORD **)&v124.left);
        if ( !ERECTL::bEmpty((ERECTL *)&v152) )
        {
          v109 = 0LL;
          v110 = 0;
          v111 = 0;
          if ( v96
            || *(_WORD *)(*(_QWORD *)&v17 + 100LL)
            || (v56 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL), v56 == 7)
            || v56 == 8 )
          {
            v140[3] = 0;
            v142 = 0;
            v143 = 0;
            v140[1] = v152.right - v152.left;
            v140[2] = v152.bottom - v152.top;
            v141 = 0LL;
            if ( v99 )
              dhpdev = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
            else
              dhpdev = (int)v48[1].dhpdev;
            v140[0] = dhpdev;
            v142 = *(_DWORD *)(*(_QWORD *)&v17 + 112LL) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v109, (struct _DEVBITMAPINFO *)v140, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( !*(_QWORD *)&v109 )
              goto LABEL_189;
            v155 = 0LL;
            v156 = v152.right - v152.left;
            v157 = v152.bottom - v152.top;
            _guard_dispatch_icall_fptr();
            LODWORD(v155) = **(_DWORD **)&v124.left - v152.left;
            HIDWORD(v155) = *(_DWORD *)(*(_QWORD *)&v124.left + 4LL) - v152.top;
            v156 = *(_DWORD *)(*(_QWORD *)&v124.left + 8LL) - v152.left;
            v157 = *(_DWORD *)(*(_QWORD *)&v124.left + 12LL) - v152.top;
            v60 = v109;
            v17 = v109;
            sizl = v109;
            v58 = (struct _RECTL *)&v155;
            *(_QWORD *)&v124.left = &v155;
            v101 = 0LL;
            v152.right -= v152.left;
            v61 = v152.bottom - v152.top;
            v152.bottom -= v152.top;
            *(_QWORD *)&v152.left = 0LL;
            if ( (v96 & 2) != 0 )
            {
              v62 = *(_DWORD *)(*(_QWORD *)&v109 + 88LL);
              if ( v62 <= 0 )
                *(_QWORD *)(*(_QWORD *)&v109 + 80LL) = *(_QWORD *)(*(_QWORD *)&v109 + 72LL);
              else
                *(_QWORD *)(*(_QWORD *)&v109 + 80LL) = *(_QWORD *)(*(_QWORD *)&v109 + 72LL) + v62 * (v61 - 1);
              *(_DWORD *)(*(_QWORD *)&v109 + 88LL) = -*(_DWORD *)(*(_QWORD *)&v109 + 88LL);
              v60 = v109;
            }
            if ( (v96 & 1) != 0 )
            {
              if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)&v60 + 96LL) - 1) > 5 )
              {
LABEL_189:
                SURFMEM::~SURFMEM((SURFMEM *)&v109);
LABEL_190:
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v112);
                SURFMEM::~SURFMEM((SURFMEM *)&v105);
                goto LABEL_191;
              }
              _guard_dispatch_icall_fptr();
            }
          }
          else
          {
            sizl = v17;
            v57 = v116;
            if ( v99 )
              v57 = 0LL;
            v101 = (struct _SURFOBJ *)v57;
            v58 = v55;
          }
          pvBits = v48->pvBits;
          PDEVOBJ::vSync((PDEVOBJ *)&pvBits, (struct _SURFOBJ *)&v48->hdev, 0LL, 0);
          LODWORD(v115) = v58->right;
          v103 = v58->left;
          v63 = v115 - v58->left;
          if ( v63 >= 128000000 )
            goto LABEL_189;
          v64 = v58->top;
          v65 = v58->bottom - v64;
          if ( v65 >= 128000000 )
            goto LABEL_189;
          v66 = v14->right - v14->left;
          if ( v66 >= 128000000 )
            goto LABEL_189;
          v67 = v14->bottom - v14->top;
          if ( v67 >= 128000000 || v66 <= -128000000 || v67 <= -128000000 )
            goto LABEL_189;
          if ( v94 == 3 && !v113 && (!v101 || (HIDWORD(v101->dhsurf) & 1) != 0) )
          {
            v68 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
            if ( LODWORD(v48[1].dhpdev) == v68 && (v68 == 3 || v68 == 4 || v68 == 6) )
            {
              if ( v117 && *(_BYTE *)(v117 + 20) == 3 )
              {
                *(_QWORD *)&v124.left = 0LL;
                *(_QWORD *)&v124.right = 0LL;
                *(_QWORD *)&v152.right = 0LL;
                *(_QWORD *)&v152.left = 0LL;
                v69 = v118;
                XCLIPOBJ::cEnumStart(v118, 0, 0, 4u, 0);
                do
                {
                  v70 = XCLIPOBJ::bEnum(v69, 0x14u, (char *)&v164, 0LL);
                  v104 = v70;
                  if ( v164 )
                  {
                    StretchDIBDirect(
                      v48[1].dhsurf,
                      LODWORD(v48[1].hsurf),
                      (int)v48->pvScan0,
                      HIDWORD(v48->pvScan0),
                      v14,
                      *(void **)(*(_QWORD *)&v17 + 80LL),
                      *(_DWORD *)(*(_QWORD *)&v17 + 88LL),
                      *(_DWORD *)(*(_QWORD *)&v17 + 56LL),
                      *(_DWORD *)(*(_QWORD *)&v17 + 60LL),
                      v58,
                      &v124,
                      &v165);
                    ERECTL::operator+=((unsigned int *)&v152, (unsigned int *)&v124);
                    v70 = v104;
                  }
                }
                while ( v70 );
              }
              else
              {
                v71 = v14;
                if ( v117 && *(_BYTE *)(v117 + 20) == 1 )
                  v71 = (struct _RECTL *)(v117 + 4);
                StretchDIBDirect(
                  v48[1].dhsurf,
                  LODWORD(v48[1].hsurf),
                  (int)v48->pvScan0,
                  HIDWORD(v48->pvScan0),
                  v14,
                  *(void **)(*(_QWORD *)&v17 + 80LL),
                  *(_DWORD *)(*(_QWORD *)&v17 + 88LL),
                  *(_DWORD *)(*(_QWORD *)&v17 + 56LL),
                  *(_DWORD *)(*(_QWORD *)&v17 + 60LL),
                  v58,
                  &v152,
                  v71);
              }
              v72 = v152.left;
              v154 = v152;
              v73 = v152.right;
              v74 = v152.top;
              v75 = v152.bottom;
              goto LABEL_173;
            }
          }
          if ( (int)v115 < v103 )
            goto LABEL_189;
          if ( v58->bottom < v64 )
            goto LABEL_189;
          v76 = v65 + v63;
          if ( v65 + v63 < (unsigned int)v63 )
            goto LABEL_189;
          if ( v76 >= 0x3FFFFFF5 )
            goto LABEL_189;
          v77 = PALLOCMEM2(4 * v76 + 40, 1752462151LL, 0);
          v122 = (struct tagCOLORADJUSTMENT *)v77;
          if ( !v77 )
            goto LABEL_189;
          *v130 = 1;
          vInitStrDDA((struct _STRDDA *)v77, &v152, v58, v14);
          v154 = *(struct _RECTL *)v77;
          if ( v117 )
            v117 &= -(__int64)(*(_BYTE *)(v117 + 20) != 0);
          v148 = qword_1C02E40B0[LODWORD(v114[1].dhpdev)];
          if ( v98 )
            *((_DWORD *)v77 + 5) = (v94 != 1) - 1;
          pso = (SURFOBJ *)qword_1C02E4110[3 * *(unsigned int *)(*(_QWORD *)&v17 + 96LL) - 1 + v94];
          v128 = pso;
          v78 = v154.right - v154.left;
          v79 = (unsigned int)(v14->right - v14->left);
          if ( v58->right - v58->left <= (int)v79 )
          {
            if ( v78 + 3 < v78 )
              goto LABEL_188;
            v81 = (v78 + 3) >> 1;
            if ( v81 >= 0x15555553 )
              goto LABEL_188;
            v80 = v81 + 2;
          }
          else
          {
            if ( v78 >= 0x15555553 )
              goto LABEL_188;
            v80 = v78 + 2;
          }
          v82 = 12 * v80;
          if ( v78 <= 0x5F5E100 && (unsigned int)v82 <= 0x2710000 )
          {
            v83 = (HSURF)AllocFreeTmpBuffer(v82);
            hsurf = v83;
            if ( v83 )
            {
              v84 = *(_QWORD *)(*(_QWORD *)&v17 + 80LL) + *(_DWORD *)(*(_QWORD *)&v17 + 88LL) * v152.top;
              v115 = v84;
              if ( v113 )
              {
                LODWORD(v130) = v152.left + *(_DWORD *)v125[0] - **(_DWORD **)&v124.left;
                v85 = (struct _SURFOBJ *)(*(_QWORD *)(v127 + 80)
                                        + *(_DWORD *)(v127 + 88)
                                        * (v152.top + *((_DWORD *)v125[0] + 1)
                                                    - *(_DWORD *)(*(_QWORD *)&v124.left + 4LL)));
              }
              else
              {
                v85 = 0LL;
              }
              v113 = v85;
              v86 = v98;
              if ( v98 )
              {
                v87 = 0;
                if ( v94 == 1 )
                  v87 = -1;
                v103 = v87;
                vInitBuffer((struct _STRRUN *)v83, &v154, v87);
                v86 = v98;
              }
              *(_DWORD *)v83 = *(_DWORD *)(HSURF)((int)v77 + 4);
              v88 = v152.top;
              for ( i = 0; ; ++i )
              {
                v97 = i;
                v95 = v88;
                if ( v88 >= v152.bottom )
                  break;
                v90 = *(_DWORD *)(*((_QWORD *)v77 + 3) + 4LL * i);
                *((_DWORD *)v83 + 1) = v90;
                if ( v90 )
                {
                  _guard_dispatch_icall_fptr();
                  _guard_dispatch_icall_fptr();
                  v84 = v115;
                  v88 = v95;
                  v86 = v98;
                  if ( v98 )
                  {
                    vInitBuffer((struct _STRRUN *)v83, &v154, v103);
                    v88 = v95;
                    v86 = v98;
                  }
                  i = v97;
                }
                else if ( v86 )
                {
                  _guard_dispatch_icall_fptr();
                  v84 = v115;
                  v88 = v95;
                  i = v97;
                  v86 = v98;
                }
                v84 += *(int *)(*(_QWORD *)&v17 + 88LL);
                v115 = v84;
                *(_DWORD *)v83 += *((_DWORD *)v83 + 1);
                if ( v85 )
                {
                  v85 = (struct _SURFOBJ *)((char *)v85 + *(int *)(v127 + 88));
                  v113 = v85;
                }
                ++v88;
              }
              FreeTmpBuffer(v83);
              Win32FreePool(v77, v91);
              v75 = v154.bottom;
              v73 = v154.right;
              v74 = v154.top;
              v72 = v154.left;
              v48 = v114;
LABEL_173:
              if ( v48 == (struct _SURFOBJ *)v126 )
              {
LABEL_174:
                SURFMEM::~SURFMEM((SURFMEM *)&v109);
                goto LABEL_76;
              }
              v154.left = v108 + v72;
              v154.top = HIDWORD(v108) + v74;
              v154.right = v108 + v73;
              v154.bottom = HIDWORD(v108) + v75;
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v123);
              if ( !v123[0] )
                goto LABEL_176;
              v92 = v118;
              if ( v118 )
              {
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v125);
                if ( !v125[0]
                  || (RGNOBJ::vSet((RGNOBJ *)v125, &v154),
                      !RGNOBJ::bMerge(
                         (RGNOBJ *)v123,
                         (struct RGNOBJ *)v125,
                         (XCLIPOBJ *)((char *)v92 + 56),
                         BYTE1(gafjRgnOp))) )
                {
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v125);
LABEL_176:
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v123);
                  goto LABEL_189;
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v125);
              }
              else
              {
                RGNOBJ::vSet((RGNOBJ *)v123, &v154);
              }
              v162 = *(struct _RECTL *)((char *)v123[0] + 88);
              if ( !v92 || bIntersect(&v162, (const struct _RECTL *)((char *)v92 + 4), &v162) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v167, v123[0], (struct ERECTL *)&v162, 1);
                if ( !ERECTL::bEmpty((ERECTL *)v168) )
                {
                  v153.left += v108;
                  v153.top += HIDWORD(v108);
                  v153.right += v108;
                  v153.bottom += HIDWORD(v108);
                  v108 = 0LL;
                  _guard_dispatch_icall_fptr();
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v123);
                  SURFMEM::~SURFMEM((SURFMEM *)&v109);
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v112);
                  SURFMEM::~SURFMEM((SURFMEM *)&v105);
                  SURFMEM::~SURFMEM((SURFMEM *)&v131);
                  return 1LL;
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v123);
              goto LABEL_174;
            }
          }
LABEL_188:
          Win32FreePool(v77, v79);
          goto LABEL_189;
        }
LABEL_76:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v112);
        SURFMEM::~SURFMEM((SURFMEM *)&v105);
        goto LABEL_19;
      }
    }
    if ( v29 < 3 )
      v29 = 3;
    v94 = v29;
    goto LABEL_50;
  }
  return 1LL;
}
