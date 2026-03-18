/*
 * XREFs of ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028077C
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
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00E0328 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0295304 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
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
  SURFOBJ *v21; // rdi
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
  XCLIPOBJ *v49; // rax
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
  struct tagCOLORADJUSTMENT *v77; // r13
  unsigned int v78; // r8d
  unsigned int v79; // eax
  unsigned int v80; // eax
  __int64 v81; // rcx
  HSURF v82; // rbx
  __int64 v83; // r11
  struct _SURFOBJ *v84; // r15
  int v85; // r10d
  unsigned int v86; // r8d
  LONG v87; // r8d
  int i; // r9d
  int v89; // edx
  XCLIPOBJ *v90; // r15
  unsigned int v92; // [rsp+70h] [rbp-3B8h]
  LONG v93; // [rsp+70h] [rbp-3B8h]
  int v94; // [rsp+74h] [rbp-3B4h]
  int v95; // [rsp+74h] [rbp-3B4h]
  int v96; // [rsp+78h] [rbp-3B0h]
  int v97; // [rsp+7Ch] [rbp-3ACh]
  struct _SURFOBJ *v98; // [rsp+80h] [rbp-3A8h]
  struct _SURFOBJ *v99; // [rsp+80h] [rbp-3A8h]
  unsigned int v100; // [rsp+88h] [rbp-3A0h]
  int v101; // [rsp+88h] [rbp-3A0h]
  unsigned int v102; // [rsp+88h] [rbp-3A0h]
  struct _SURFOBJ *v103; // [rsp+90h] [rbp-398h] BYREF
  char v104; // [rsp+98h] [rbp-390h]
  int v105; // [rsp+9Ch] [rbp-38Ch]
  __int64 v106; // [rsp+A0h] [rbp-388h]
  struct REGION *v107[2]; // [rsp+A8h] [rbp-380h] BYREF
  SIZEL v108; // [rsp+B8h] [rbp-370h] BYREF
  char v109; // [rsp+C0h] [rbp-368h]
  int v110; // [rsp+C4h] [rbp-364h]
  struct _SURFOBJ *v111; // [rsp+C8h] [rbp-360h]
  struct _SURFOBJ *v112; // [rsp+D0h] [rbp-358h]
  __int64 v113; // [rsp+D8h] [rbp-350h]
  struct XLATE *v114; // [rsp+E0h] [rbp-348h]
  __int64 v115; // [rsp+E8h] [rbp-340h]
  SURFOBJ *pso; // [rsp+F0h] [rbp-338h]
  XCLIPOBJ *v117; // [rsp+F8h] [rbp-330h]
  int v118; // [rsp+100h] [rbp-328h]
  SIZEL sizl; // [rsp+108h] [rbp-320h]
  struct REGION *v120[2]; // [rsp+110h] [rbp-318h] BYREF
  struct tagCOLORADJUSTMENT *v121; // [rsp+120h] [rbp-308h]
  struct _RECTL v122; // [rsp+128h] [rbp-300h] BYREF
  __int64 *v123[2]; // [rsp+138h] [rbp-2F0h] BYREF
  HSURF hsurf; // [rsp+148h] [rbp-2E0h]
  __int64 v125; // [rsp+150h] [rbp-2D8h]
  SURFOBJ *v126; // [rsp+158h] [rbp-2D0h]
  __int64 v127; // [rsp+160h] [rbp-2C8h]
  int *v128; // [rsp+168h] [rbp-2C0h]
  __int64 v129; // [rsp+170h] [rbp-2B8h] BYREF
  char v130; // [rsp+178h] [rbp-2B0h]
  int v131; // [rsp+17Ch] [rbp-2ACh]
  struct _CLIPOBJ *v132; // [rsp+180h] [rbp-2A8h]
  SURFOBJ *v133; // [rsp+188h] [rbp-2A0h]
  _DWORD v134[4]; // [rsp+190h] [rbp-298h] BYREF
  __int64 v135; // [rsp+1A0h] [rbp-288h]
  int v136; // [rsp+1A8h] [rbp-280h]
  int v137; // [rsp+1ACh] [rbp-27Ch]
  _DWORD v138[4]; // [rsp+1B0h] [rbp-278h] BYREF
  __int64 v139; // [rsp+1C0h] [rbp-268h]
  int v140; // [rsp+1C8h] [rbp-260h]
  int v141; // [rsp+1CCh] [rbp-25Ch]
  __int64 v142; // [rsp+1D0h] [rbp-258h] BYREF
  int v143; // [rsp+1D8h] [rbp-250h]
  int v144; // [rsp+1DCh] [rbp-24Ch]
  __int64 v145; // [rsp+1E0h] [rbp-248h] BYREF
  _QWORD v146[2]; // [rsp+1E8h] [rbp-240h] BYREF
  __int64 v147; // [rsp+1F8h] [rbp-230h]
  __int64 v148; // [rsp+200h] [rbp-228h] BYREF
  struct _RECTL v149; // [rsp+208h] [rbp-220h] BYREF
  struct _RECTL v150; // [rsp+218h] [rbp-210h] BYREF
  struct _RECTL v151; // [rsp+228h] [rbp-200h] BYREF
  __int64 v152; // [rsp+238h] [rbp-1F0h] BYREF
  int v153; // [rsp+240h] [rbp-1E8h]
  int v154; // [rsp+244h] [rbp-1E4h]
  __m128i v155; // [rsp+248h] [rbp-1E0h] BYREF
  __int64 v156; // [rsp+258h] [rbp-1D0h]
  int v157; // [rsp+260h] [rbp-1C8h]
  unsigned int v158; // [rsp+264h] [rbp-1C4h]
  struct _RECTL v159; // [rsp+268h] [rbp-1C0h] BYREF
  struct _RECTL v160; // [rsp+278h] [rbp-1B0h] BYREF
  int v161; // [rsp+288h] [rbp-1A0h] BYREF
  struct _RECTL v162; // [rsp+28Ch] [rbp-19Ch] BYREF
  _BYTE v163[160]; // [rsp+2A0h] [rbp-188h] BYREF
  char v164[4]; // [rsp+340h] [rbp-E8h] BYREF
  char v165[156]; // [rsp+344h] [rbp-E4h] BYREF

  v117 = (XCLIPOBJ *)a4;
  v112 = a3;
  v98 = a2;
  v111 = a1;
  v132 = a4;
  v114 = (struct XLATE *)a5;
  v121 = a6;
  v113 = (__int64)a7;
  v14 = a8;
  v15 = a9;
  *(_QWORD *)&v122.left = a9;
  v123[0] = (__int64 *)a10;
  v92 = a11;
  v128 = a12;
  if ( a11 - 1 > 3 )
    return 0LL;
  v16 = SURFOBJ_TO_SURFACE(a1);
  v127 = v16;
  v17 = (SIZEL)SURFOBJ_TO_SURFACE(a2);
  v125 = SURFOBJ_TO_SURFACE(a3);
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
    v21 = *(SURFOBJ **)(v16 + 48);
    v126 = v21;
    v133 = v21;
    v22 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
    v147 = v22;
    v129 = 0LL;
    v130 = 0;
    v131 = 0;
    v160 = *a9;
    v23 = 1;
    v24 = v98;
    if ( v98->iType == 1 && v22 && (*(_DWORD *)(v22 + 56) & 0x20000) != 0 )
    {
      if ( !(unsigned int)MulCopyDeviceToDIB(v98, (struct SURFMEM *)&v129, &v160) )
      {
LABEL_191:
        SURFMEM::~SURFMEM((SURFMEM *)&v129);
        return v18;
      }
      if ( !v129 )
      {
LABEL_19:
        v18 = v23;
        goto LABEL_191;
      }
      v15 = &v160;
      *(_QWORD *)&v122.left = &v160;
      v98 = (struct _SURFOBJ *)(v129 + 24);
      v17 = (SIZEL)SURFOBJ_TO_SURFACE(v129 + 24);
      v147 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
      v24 = v98;
    }
    v25 = v114;
    if ( v114 && (*((_DWORD *)v114 + 1) & 8) != 0 )
    {
      v26 = 1;
      v97 = 1;
      v118 = 1;
      if ( v24->iType )
        goto LABEL_191;
      v27 = v111;
      if ( v111->iType != 1 )
        goto LABEL_191;
      v28 = (__int64)v112;
      if ( v112 )
        goto LABEL_191;
    }
    else
    {
      v26 = 0;
      v97 = 0;
      v118 = 0;
      v27 = v111;
      v28 = (__int64)v112;
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
              (CLIPOBJ *)v117,
              v114,
              (POINTL)v121,
              v113,
              (XLATEOBJ *)a8,
              (XLATEOBJ *)v15,
              v123[0],
              0,
              0LL);
      if ( v30 == -1 )
        goto LABEL_191;
      if ( v30 )
      {
        if ( v30 == 1 )
          goto LABEL_19;
        v29 = 4;
        v25 = v114;
      }
      else
      {
        v29 = 3;
        v92 = 3;
        v25 = v114;
      }
    }
    v31 = 0;
    v94 = 0;
    bottom = a8->bottom;
    top = a8->top;
    if ( bottom < top )
    {
      a8->top = bottom;
      a8->bottom = top;
      v31 = 2;
      v94 = 2;
    }
    right = a8->right;
    left = a8->left;
    if ( right < a8->left )
    {
      a8->left = right;
      a8->right = left;
      v31 |= 1u;
      v94 = v31;
    }
    if ( v29 >= 3 || v125 )
    {
      v96 = 0;
    }
    else
    {
      v36 = 1;
      v96 = 1;
      if ( a8->right - a8->left >= v15->right - v15->left )
      {
        v36 = a8->bottom - a8->top < v15->bottom - v15->top;
        v96 = v36;
      }
      if ( v36 )
      {
LABEL_50:
        v37 = *(_DWORD *)(v127 + 112);
        if ( (v37 & 0x40000) == 0 )
        {
          if ( v25 && (*((_DWORD *)v25 + 1) & 1) == 0 )
          {
            v38 = v98;
LABEL_56:
            if ( *(_WORD *)(v127 + 100) )
            {
              if ( (v37 & 2) != 0 && !v31 && !v112 )
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
                        v100 = v43;
                        sizl.cy = v43;
                        if ( v41 - v39 <= a8->right - a8->left && v43 <= a8->bottom - a8->top )
                        {
                          hsurf = (HSURF)EngCreateBitmap(sizl, 0, v111->iBitmapFormat, 0, 0LL);
                          v44 = EngLockSurface(hsurf);
                          pso = v44;
                          if ( v44 )
                          {
                            v44->iUniq = 0;
                            v156 = 0LL;
                            v157 = v115;
                            v158 = v100;
                            if ( !(unsigned int)_guard_dispatch_icall_fptr()
                              || !v21[36].dhsurf
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
          v38 = v98;
          if ( v98->iType )
            goto LABEL_56;
        }
LABEL_72:
        v103 = 0LL;
        v104 = 0;
        v105 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v163);
        v45 = *(_DWORD *)(*(_QWORD *)&v17 + 60LL);
        v46 = *(_DWORD *)(*(_QWORD *)&v17 + 56LL);
        *(_QWORD *)&v149.left = 0LL;
        v149.right = v46;
        v149.bottom = v45;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v107);
        v47 = v127;
        if ( !*(_WORD *)(v127 + 100) && *(_QWORD *)(v127 + 32) != *(_QWORD *)(*(_QWORD *)&v17 + 32LL) )
          goto LABEL_74;
        v155 = *(__m128i *)a8;
        v150.left = _mm_cvtsi128_si32(v155) - 1;
        v150.top = v155.m128i_i32[1] - 1;
        v150.right = _mm_cvtsi128_si32(_mm_srli_si128(v155, 8)) + 1;
        v150.bottom = _mm_srli_si128(v155, 8).m128i_i32[1] + 1;
        v50 = *(_DWORD *)(v127 + 60);
        v51 = *(_DWORD *)(v127 + 56);
        v142 = 0LL;
        v143 = v51;
        v144 = v50;
        ERECTL::operator*=(&v150, &v142);
        if ( ERECTL::bEmpty((ERECTL *)&v150) )
          goto LABEL_76;
        if ( *(_WORD *)(v47 + 100)
          || v150.left <= v15->right && v150.right >= v15->left && v150.top <= v15->bottom && v150.bottom >= v15->top )
        {
          v155.m128i_i32[0] = v52 - v150.left;
          v155.m128i_i32[1] -= v150.top;
          v155.m128i_i32[2] = v53 - v150.left;
          v155.m128i_i32[3] -= v150.top;
          v134[3] = 0;
          v136 = 0;
          v137 = 0;
          v134[1] = v150.right - v150.left + 1;
          v134[2] = v150.bottom - v150.top + 1;
          v135 = 0LL;
          if ( v97 )
            v54 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
          else
            v54 = *(_DWORD *)(v47 + 96);
          v134[0] = v54;
          v136 = *(_DWORD *)(v47 + 112) & 0x40000;
          SURFMEM::bCreateDIB((SURFMEM *)&v103, (struct _DEVBITMAPINFO *)v134, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v103 )
            goto LABEL_190;
          v106 = *(_QWORD *)&v150.left;
          if ( !v107[0] )
            goto LABEL_190;
          *(_QWORD *)&v150.left = 0LL;
          v150.right -= v106;
          v150.bottom -= HIDWORD(v106);
          RGNOBJ::vSet((RGNOBJ *)v107, &v150);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v163, v107[0], (struct ERECTL *)&v150, 1);
          v148 = *(_QWORD *)(v127 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v148, (struct _SURFOBJ *)(v127 + 24), 0LL, 0);
          if ( v125 )
            _guard_dispatch_icall_fptr();
          v48 = v103;
          v111 = v103;
          v14 = (struct _RECTL *)&v155;
          v49 = (XCLIPOBJ *)v163;
        }
        else
        {
LABEL_74:
          v48 = (struct _SURFOBJ *)v47;
          v111 = (struct _SURFOBJ *)v47;
          v49 = v117;
        }
        v113 = (__int64)v49;
        v145 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
        PDEVOBJ::vSync((PDEVOBJ *)&v145, v98, 0LL, 0);
        ERECTL::operator*=(&v149, *(_DWORD **)&v122.left);
        if ( !ERECTL::bEmpty((ERECTL *)&v149) )
        {
          v108 = 0LL;
          v109 = 0;
          v110 = 0;
          if ( v94
            || *(_WORD *)(*(_QWORD *)&v17 + 100LL)
            || (v56 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL), v56 == 7)
            || v56 == 8 )
          {
            v138[3] = 0;
            v140 = 0;
            v141 = 0;
            v138[1] = v149.right - v149.left;
            v138[2] = v149.bottom - v149.top;
            v139 = 0LL;
            if ( v97 )
              dhpdev = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
            else
              dhpdev = (int)v48[1].dhpdev;
            v138[0] = dhpdev;
            v140 = *(_DWORD *)(*(_QWORD *)&v17 + 112LL) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v108, (struct _DEVBITMAPINFO *)v138, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( !*(_QWORD *)&v108 )
              goto LABEL_189;
            v152 = 0LL;
            v153 = v149.right - v149.left;
            v154 = v149.bottom - v149.top;
            _guard_dispatch_icall_fptr();
            LODWORD(v152) = **(_DWORD **)&v122.left - v149.left;
            HIDWORD(v152) = *(_DWORD *)(*(_QWORD *)&v122.left + 4LL) - v149.top;
            v153 = *(_DWORD *)(*(_QWORD *)&v122.left + 8LL) - v149.left;
            v154 = *(_DWORD *)(*(_QWORD *)&v122.left + 12LL) - v149.top;
            v60 = v108;
            v17 = v108;
            sizl = v108;
            v58 = (struct _RECTL *)&v152;
            *(_QWORD *)&v122.left = &v152;
            v99 = 0LL;
            v149.right -= v149.left;
            v61 = v149.bottom - v149.top;
            v149.bottom -= v149.top;
            *(_QWORD *)&v149.left = 0LL;
            if ( (v94 & 2) != 0 )
            {
              v62 = *(_DWORD *)(*(_QWORD *)&v108 + 88LL);
              if ( v62 <= 0 )
                *(_QWORD *)(*(_QWORD *)&v108 + 80LL) = *(_QWORD *)(*(_QWORD *)&v108 + 72LL);
              else
                *(_QWORD *)(*(_QWORD *)&v108 + 80LL) = *(_QWORD *)(*(_QWORD *)&v108 + 72LL) + v62 * (v61 - 1);
              *(_DWORD *)(*(_QWORD *)&v108 + 88LL) = -*(_DWORD *)(*(_QWORD *)&v108 + 88LL);
              v60 = v108;
            }
            if ( (v94 & 1) != 0 )
            {
              if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)&v60 + 96LL) - 1) > 5 )
              {
LABEL_189:
                SURFMEM::~SURFMEM((SURFMEM *)&v108);
LABEL_190:
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v107);
                SURFMEM::~SURFMEM((SURFMEM *)&v103);
                goto LABEL_191;
              }
              _guard_dispatch_icall_fptr();
            }
          }
          else
          {
            sizl = v17;
            v57 = v114;
            if ( v97 )
              v57 = 0LL;
            v99 = (struct _SURFOBJ *)v57;
            v58 = v55;
          }
          v146[0] = v48->pvBits;
          PDEVOBJ::vSync((PDEVOBJ *)v146, (struct _SURFOBJ *)&v48->hdev, 0LL, 0);
          LODWORD(v115) = v58->right;
          v101 = v58->left;
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
          if ( v92 == 3 && !v112 && (!v99 || (HIDWORD(v99->dhsurf) & 1) != 0) )
          {
            v68 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
            if ( LODWORD(v48[1].dhpdev) == v68 && (v68 == 3 || v68 == 4 || v68 == 6) )
            {
              if ( v113 && *(_BYTE *)(v113 + 20) == 3 )
              {
                *(_QWORD *)&v122.left = 0LL;
                *(_QWORD *)&v122.right = 0LL;
                *(_QWORD *)&v149.right = 0LL;
                *(_QWORD *)&v149.left = 0LL;
                v69 = v117;
                XCLIPOBJ::cEnumStart(v117, 0, 0, 4u, 0);
                do
                {
                  v70 = XCLIPOBJ::bEnum(v69, 0x14u, (char *)&v161, 0LL);
                  v102 = v70;
                  if ( v161 )
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
                      &v122,
                      &v162);
                    ERECTL::operator+=((unsigned int *)&v149, (unsigned int *)&v122);
                    v70 = v102;
                  }
                }
                while ( v70 );
              }
              else
              {
                v71 = v14;
                if ( v113 && *(_BYTE *)(v113 + 20) == 1 )
                  v71 = (struct _RECTL *)(v113 + 4);
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
                  &v149,
                  v71);
              }
              v72 = v149.left;
              v151 = v149;
              v73 = v149.right;
              v74 = v149.top;
              v75 = v149.bottom;
              goto LABEL_173;
            }
          }
          if ( (int)v115 < v101 )
            goto LABEL_189;
          if ( v58->bottom < v64 )
            goto LABEL_189;
          v76 = v65 + v63;
          if ( v65 + v63 < (unsigned int)v63 )
            goto LABEL_189;
          if ( v76 >= 0x3FFFFFF5 )
            goto LABEL_189;
          v77 = (struct tagCOLORADJUSTMENT *)PALLOCMEM2(4 * v76 + 40, 1752462151LL, 0);
          v121 = v77;
          if ( !v77 )
            goto LABEL_189;
          *v128 = 1;
          vInitStrDDA((struct _STRDDA *)v77, &v149, v58, v14);
          v151 = *(struct _RECTL *)&v77->caSize;
          if ( v113 )
            v113 &= -(__int64)(*(_BYTE *)(v113 + 20) != 0);
          v146[1] = qword_1C02E4010[LODWORD(v111[1].dhpdev)];
          if ( v96 )
            *(_DWORD *)&v77->caColorfulness = (v92 != 1) - 1;
          pso = (SURFOBJ *)qword_1C02E4070[3 * *(unsigned int *)(*(_QWORD *)&v17 + 96LL) - 1 + v92];
          v126 = pso;
          v78 = v151.right - v151.left;
          if ( v58->right - v58->left <= v14->right - v14->left )
          {
            if ( v78 + 3 < v78 )
              goto LABEL_188;
            v80 = (v78 + 3) >> 1;
            if ( v80 >= 0x15555553 )
              goto LABEL_188;
            v79 = v80 + 2;
          }
          else
          {
            if ( v78 >= 0x15555553 )
              goto LABEL_188;
            v79 = v78 + 2;
          }
          v81 = 12 * v79;
          if ( v78 <= 0x5F5E100 && (unsigned int)v81 <= 0x2710000 )
          {
            v82 = (HSURF)AllocFreeTmpBuffer(v81);
            hsurf = v82;
            if ( v82 )
            {
              v83 = *(_QWORD *)(*(_QWORD *)&v17 + 80LL) + *(_DWORD *)(*(_QWORD *)&v17 + 88LL) * v149.top;
              v115 = v83;
              if ( v112 )
              {
                LODWORD(v128) = v149.left + *(_DWORD *)v123[0] - **(_DWORD **)&v122.left;
                v84 = (struct _SURFOBJ *)(*(_QWORD *)(v125 + 80)
                                        + *(_DWORD *)(v125 + 88)
                                        * (v149.top + *((_DWORD *)v123[0] + 1)
                                                    - *(_DWORD *)(*(_QWORD *)&v122.left + 4LL)));
              }
              else
              {
                v84 = 0LL;
              }
              v112 = v84;
              v85 = v96;
              if ( v96 )
              {
                v86 = 0;
                if ( v92 == 1 )
                  v86 = -1;
                v101 = v86;
                vInitBuffer((struct _STRRUN *)v82, &v151, v86);
                v85 = v96;
              }
              *(_DWORD *)v82 = *(_DWORD *)(HSURF)&v77->caIlluminantIndex;
              v87 = v149.top;
              for ( i = 0; ; ++i )
              {
                v95 = i;
                v93 = v87;
                if ( v87 >= v149.bottom )
                  break;
                v89 = *(_DWORD *)(*(_QWORD *)&v77[1].caSize + 4LL * i);
                *((_DWORD *)v82 + 1) = v89;
                if ( v89 )
                {
                  _guard_dispatch_icall_fptr();
                  _guard_dispatch_icall_fptr();
                  v83 = v115;
                  v87 = v93;
                  v85 = v96;
                  if ( v96 )
                  {
                    vInitBuffer((struct _STRRUN *)v82, &v151, v101);
                    v87 = v93;
                    v85 = v96;
                  }
                  i = v95;
                }
                else if ( v85 )
                {
                  _guard_dispatch_icall_fptr();
                  v83 = v115;
                  v87 = v93;
                  i = v95;
                  v85 = v96;
                }
                v83 += *(int *)(*(_QWORD *)&v17 + 88LL);
                v115 = v83;
                *(_DWORD *)v82 += *((_DWORD *)v82 + 1);
                if ( v84 )
                {
                  v84 = (struct _SURFOBJ *)((char *)v84 + *(int *)(v125 + 88));
                  v112 = v84;
                }
                ++v87;
              }
              FreeTmpBuffer(v82);
              Win32FreePool(v77);
              v75 = v151.bottom;
              v73 = v151.right;
              v74 = v151.top;
              v72 = v151.left;
              v48 = v111;
LABEL_173:
              if ( v48 == (struct _SURFOBJ *)v127 )
              {
LABEL_174:
                SURFMEM::~SURFMEM((SURFMEM *)&v108);
                goto LABEL_76;
              }
              v151.left = v106 + v72;
              v151.top = HIDWORD(v106) + v74;
              v151.right = v106 + v73;
              v151.bottom = HIDWORD(v106) + v75;
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v120);
              if ( !v120[0] )
                goto LABEL_176;
              v90 = v117;
              if ( v117 )
              {
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v123);
                if ( !v123[0]
                  || (RGNOBJ::vSet((RGNOBJ *)v123, &v151),
                      !RGNOBJ::bMerge(
                         (RGNOBJ *)v120,
                         (struct RGNOBJ *)v123,
                         (XCLIPOBJ *)((char *)v90 + 56),
                         BYTE1(gafjRgnOp))) )
                {
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v123);
LABEL_176:
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v120);
                  goto LABEL_189;
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v123);
              }
              else
              {
                RGNOBJ::vSet((RGNOBJ *)v120, &v151);
              }
              v159 = *(struct _RECTL *)((char *)v120[0] + 88);
              if ( !v90 || bIntersect(&v159, (const struct _RECTL *)((char *)v90 + 4), &v159) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v164, v120[0], (struct ERECTL *)&v159, 1);
                if ( !ERECTL::bEmpty((ERECTL *)v165) )
                {
                  v150.left += v106;
                  v150.top += HIDWORD(v106);
                  v150.right += v106;
                  v150.bottom += HIDWORD(v106);
                  v106 = 0LL;
                  _guard_dispatch_icall_fptr();
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v120);
                  SURFMEM::~SURFMEM((SURFMEM *)&v108);
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v107);
                  SURFMEM::~SURFMEM((SURFMEM *)&v103);
                  SURFMEM::~SURFMEM((SURFMEM *)&v129);
                  return 1LL;
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v120);
              goto LABEL_174;
            }
          }
LABEL_188:
          Win32FreePool(v77);
          goto LABEL_189;
        }
LABEL_76:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v107);
        SURFMEM::~SURFMEM((SURFMEM *)&v103);
        goto LABEL_19;
      }
    }
    if ( v29 < 3 )
      v29 = 3;
    v92 = v29;
    goto LABEL_50;
  }
  return 1LL;
}
