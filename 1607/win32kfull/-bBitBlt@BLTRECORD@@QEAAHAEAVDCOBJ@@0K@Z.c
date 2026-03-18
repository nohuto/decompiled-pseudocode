/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C004CCC0
 * Callers:
 *     GrePlgBlt @ 0x1C00011A4 (GrePlgBlt.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00018FC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C000F1C8 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C004CACC (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004D800 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0033E1C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0049064 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C004B158 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C004DDD4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4)
{
  struct ERECTL *v4; // r15
  int v5; // eax
  int v7; // ecx
  int v10; // ecx
  int v11; // eax
  __int64 result; // rax
  DC **v13; // r9
  int v14; // esi
  DC *v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rbx
  struct REGION *v18; // rax
  int v19; // ecx
  int v20; // ecx
  int v21; // edx
  int v22; // r8d
  int v23; // ecx
  int v24; // r9d
  __int64 v25; // r10
  int v26; // ecx
  struct ECLIPOBJ *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rbx
  int (*v30)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // r11
  __int32 v35; // ecx
  __int32 *v36; // r13
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  DC *v40; // rcx
  char *v41; // rsi
  DC *v42; // r8
  DC **v43; // r9
  int v44; // edx
  int v45; // r8d
  int v46; // r10d
  __int64 v47; // rcx
  int v48; // r11d
  struct REGION *v49; // rax
  __m128i v50; // xmm1
  unsigned int v51; // r14d
  int v52; // edx
  int v53; // r8d
  __int64 v54; // r9
  int v55; // r10d
  struct ECLIPOBJ *v56; // rdx
  __int64 v57; // rax
  __int32 v58; // r8d
  __int32 v59; // ecx
  __int32 v60; // edx
  __int32 v61; // eax
  __int32 v62; // eax
  int v63; // r14d
  __int64 v64; // rcx
  BOOL (__stdcall *v65)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v69; // rbx
  int (*v70)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r10
  __int64 v75; // r11
  int v76; // edx
  int v77; // eax
  __int64 v78; // r10
  __int64 v79; // r11
  bool v80; // cl
  bool v81; // al
  XDCOBJ *v82; // rcx
  XDCOBJ *v83; // rcx
  __int64 v84; // rcx
  int v85; // r10d
  int v86; // r11d
  __int64 v87; // rax
  _DWORD *v88; // r8
  DC *v89; // rcx
  char *v90; // rcx
  int v91; // edx
  int v92; // eax
  __int64 v93; // rcx
  __int32 v94; // r9d
  __int32 v95; // r8d
  __int32 v96; // r11d
  int v97; // r10d
  bool v98; // cc
  struct REGION *v99; // rdx
  __m128i v100; // xmm1
  int v101; // r9d
  __int32 v102; // r10d
  __int64 v103; // r11
  int v104; // edx
  int v105; // r8d
  __int32 v106; // r15d
  int v107; // r14d
  struct ECLIPOBJ *v108; // rdx
  __int64 v109; // rax
  int v110; // eax
  int v111; // eax
  __int64 v112; // rcx
  BOOL (__stdcall *v113)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rbx
  __int64 v117; // r14
  SURFACE *v118; // rcx
  int (*v119)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // r10
  int v124; // r11d
  int v125; // [rsp+60h] [rbp-A0h]
  __m128i v126; // [rsp+68h] [rbp-98h] BYREF
  __m128i v127; // [rsp+78h] [rbp-88h] BYREF
  __m128i v128; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v129[4]; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v130; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v131; // [rsp+D8h] [rbp-28h]
  __int64 v132; // [rsp+F0h] [rbp-10h]
  int v133; // [rsp+F8h] [rbp-8h]
  int v134; // [rsp+120h] [rbp+20h]
  __int64 v135; // [rsp+130h] [rbp+30h]
  _BYTE v136[4]; // [rsp+140h] [rbp+40h] BYREF
  __m128i v137; // [rsp+144h] [rbp+44h] BYREF

  v4 = (BLTRECORD *)((char *)this + 152);
  v126.m128i_i64[0] = (__int64)a3;
  v5 = *((_DWORD *)this + 40);
  v7 = *((_DWORD *)this + 38);
  if ( v7 > v5 )
  {
    *(_DWORD *)v4 = v5;
    *((_DWORD *)v4 + 2) = v7;
  }
  v10 = *((_DWORD *)v4 + 1);
  v11 = *((_DWORD *)v4 + 3);
  if ( v10 > v11 )
  {
    *((_DWORD *)v4 + 1) = v11;
    *((_DWORD *)v4 + 3) = v10;
  }
  result = DC::bTightenRao(*a2);
  if ( !(_DWORD)result )
    return result;
  if ( !*((_QWORD *)*a2 + 64) )
    return 1LL;
  v13 = (DC **)v126.m128i_i64[0];
  v14 = a4 & 0xD4;
  if ( v14 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)v126.m128i_i64[0] + 512LL) )
      return 1LL;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
    XDCOBJ::vAccumulate((XDCOBJ *)a2, v4);
  v15 = *a2;
  if ( (*((_DWORD *)*a2 + 10) & 1) != 0 )
    v16 = (_DWORD *)((char *)v15 + 1416);
  else
    v16 = (_DWORD *)((char *)v15 + 1408);
  *(_DWORD *)v4 += *v16;
  *((_DWORD *)v4 + 2) += *v16;
  *((_DWORD *)v4 + 1) += v16[1];
  *((_DWORD *)v4 + 3) += v16[1];
  v17 = *(_QWORD *)(*((_QWORD *)this + 8) + 48LL);
  if ( v14 )
  {
    v35 = *((_DWORD *)this + 44);
    v36 = (__int32 *)((char *)this + 184);
    if ( *((_DWORD *)this + 46) < v35 )
      v35 = *v36;
    *v36 = v35;
    v37 = *((_DWORD *)this + 45);
    if ( *((_DWORD *)this + 47) < v37 )
      v37 = *((_DWORD *)this + 47);
    *((_DWORD *)this + 47) = v37;
    if ( *((_DWORD *)this + 44) > *v36 )
    {
      v38 = *((_DWORD *)this + 48);
      *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
      *((_DWORD *)this + 50) = v38;
    }
    if ( *((_DWORD *)this + 45) > *((_DWORD *)this + 47) )
    {
      v39 = *((_DWORD *)this + 49);
      *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
      *((_DWORD *)this + 51) = v39;
    }
    v40 = *a2;
    v41 = 0LL;
    v42 = *v13;
    if ( *((_QWORD *)*v13 + 64) == *((_QWORD *)*a2 + 64) )
    {
      *((_DWORD *)this + 44) = *(_DWORD *)v4 - *(_DWORD *)DC::eptlOrigin(*v13) - *v36;
      v44 = *((_DWORD *)this + 39) - *((_DWORD *)DC::eptlOrigin(*v43) + 1) - *((_DWORD *)this + 47);
      v128.m128i_i32[0] = v45 + v46;
      *((_DWORD *)this + 45) = v44;
      v47 = *((_QWORD *)this + 8);
      v128.m128i_i32[1] = v44 + v48;
      v128.m128i_i32[2] = v46 + v45 + *(_DWORD *)(v47 + 56);
      v128.m128i_i32[3] = v48 + v44 + *(_DWORD *)(v47 + 60);
      ERECTL::operator*=(&v128, v4);
      v49 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v136, v49, (struct ERECTL *)&v128, 0);
      v50 = v137;
      v128 = v137;
      if ( ERECTL::bEmpty((ERECTL *)&v128) )
        return 1;
      if ( !BLTRECORD::pSurfMskOut(this) )
        goto LABEL_55;
      v52 = *((_DWORD *)this + 48);
      if ( v52 >= 0 )
      {
        v53 = *((_DWORD *)this + 49);
        if ( v53 >= 0 )
        {
          v54 = *((_QWORD *)this + 10);
          if ( *(_DWORD *)(v54 + 56) - v52 >= *((_DWORD *)this + 40) - *(_DWORD *)v4 )
          {
            v55 = *((_DWORD *)this + 39);
            if ( *(_DWORD *)(v54 + 60) - v53 >= *((_DWORD *)this + 41) - v55 )
            {
              *((_DWORD *)this + 48) = _mm_cvtsi128_si32(v50) + v52 - *(_DWORD *)v4;
              *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128(v50, 4)) + v53 - v55;
LABEL_55:
              if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
              {
                v56 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
                if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v56]) & 0xE8) == 0
                  || (v57 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v57 + 128) & 0x100) == 0 )
                {
                  v126 = v50;
                  XDCOBJ::vAccumulateTight((struct _RECTL **)a2, v56, (struct _RECTL *)&v126);
                }
              }
              v58 = v128.m128i_i32[0];
              v59 = v128.m128i_i32[0] - *((_DWORD *)this + 44);
              v60 = v128.m128i_i32[1];
              v61 = v128.m128i_i32[1];
              *v36 = v59;
              v62 = v61 - *((_DWORD *)this + 45);
              *((_DWORD *)this + 47) = v62;
              if ( v59 >= v58 )
                v128.m128i_i32[2] += v59 - v58;
              else
                v128.m128i_i32[0] = v59;
              if ( v62 >= v60 )
                v128.m128i_i32[3] += v62 - v60;
              else
                v128.m128i_i32[1] = v62;
              ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
              v63 = *((_DWORD *)this + 54);
              if ( v63 == 52428 )
              {
                v64 = *((_QWORD *)this + 8);
                if ( (*(_DWORD *)(v64 + 112) & 0x400) != 0 )
                  v65 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2864);
                else
                  v65 = EngCopyBits;
                v66 = *((_QWORD *)this + 9);
                if ( v66 )
                  v67 = v66 + 24;
                else
                  v67 = 0LL;
                if ( v64 )
                  v41 = (char *)(v64 + 24);
                return ((unsigned int (__fastcall *)(char *, __int64, _BYTE *, _QWORD, __m128i *, char *))v65)(
                         v41,
                         v67,
                         v136,
                         0LL,
                         &v137,
                         (char *)this + 184);
              }
              else
              {
                v69 = *((_QWORD *)this + 12);
                BLTRECORD::pSurfMskOut(this);
                v70 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
                return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, _QWORD, __m128i *, char *, __int64, __int64, __int64, int))v70)(
                         v75,
                         v71,
                         v72,
                         v136,
                         0LL,
                         &v137,
                         (char *)this + 184,
                         v74,
                         v69,
                         v73,
                         v63);
              }
            }
          }
        }
      }
LABEL_141:
      EngSetLastError(0x57u);
      return 0;
    }
    v76 = *((_DWORD *)v40 + 9);
    v51 = 1;
    if ( (v76 & 0x200) == 0 || !v17 || (v77 = 1, (*(_DWORD *)(v17 + 56) & 0x20000) == 0) )
      v77 = 0;
    v78 = *((_QWORD *)v40 + 6);
    v79 = *((_QWORD *)v42 + 6);
    if ( v78 != v79 && !v77 )
    {
      v80 = (v76 & 0x4000) != 0 || (*((_DWORD *)v42 + 9) & 0x4000) != 0;
      v81 = (*(_DWORD *)(v78 + 56) & 0x8000) != 0 || (*(_DWORD *)(v79 + 56) & 0x8000) != 0;
      if ( (!v80 || v81)
        && (*((_WORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)a2) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v82) + 3))
        && (*((_WORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v13) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v83) + 3)) )
      {
        goto LABEL_141;
      }
    }
    v84 = *((_QWORD *)this + 9);
    v85 = 0;
    v86 = 0;
    v125 = 0;
    v87 = *(_QWORD *)(v84 + 48);
    if ( v87 && v84 == *(_QWORD *)(v87 + 2576) && (*(_DWORD *)(v87 + 56) & 0x20000) != 0 )
    {
      v86 = *(_DWORD *)(v87 + 2612);
      v85 = *(_DWORD *)(v87 + 2608);
      v125 = v86;
    }
    if ( (*((_DWORD *)v42 + 10) & 1) != 0 )
      v88 = (_DWORD *)((char *)v42 + 1416);
    else
      v88 = (_DWORD *)((char *)v42 + 1408);
    *((_DWORD *)this + 44) = *(_DWORD *)v4 - *v88 - *v36;
    v89 = *v13;
    if ( (*((_DWORD *)*v13 + 10) & 1) != 0 )
      v90 = (char *)v89 + 1416;
    else
      v90 = (char *)v89 + 1408;
    v91 = *((_DWORD *)this + 39) - *((_DWORD *)v90 + 1) - *((_DWORD *)this + 47);
    v92 = *((_DWORD *)this + 44);
    *((_DWORD *)this + 45) = v91;
    v93 = *((_QWORD *)this + 9);
    v94 = v86 + v91;
    v95 = v92 + v85;
    v128.m128i_i32[1] = v86 + v91;
    v128.m128i_i32[0] = v95;
    v96 = v85 + v92 + *(_DWORD *)(v93 + 56);
    v128.m128i_i32[2] = v96;
    v97 = v91 + v125 + *(_DWORD *)(v93 + 60);
    if ( *(_DWORD *)v4 > v95 )
      v95 = *(_DWORD *)v4;
    v98 = *((_DWORD *)v4 + 1) <= v94;
    v128.m128i_i32[0] = v95;
    if ( !v98 )
      v94 = *((_DWORD *)v4 + 1);
    v98 = *((_DWORD *)v4 + 2) < v96;
    v128.m128i_i32[1] = v94;
    if ( v98 )
      v96 = *((_DWORD *)v4 + 2);
    v98 = *((_DWORD *)v4 + 3) < v97;
    v128.m128i_i32[2] = v96;
    if ( v98 )
      v97 = *((_DWORD *)v4 + 3);
    v128.m128i_i32[3] = v97;
    if ( v96 >= v95 )
    {
      if ( v97 < v94 )
        v94 = v97;
      v128.m128i_i32[1] = v94;
    }
    else
    {
      v128.m128i_i32[0] = v96;
    }
    v99 = (struct REGION *)*((_QWORD *)*a2 + 194);
    if ( !v99 )
      v99 = (struct REGION *)*((_QWORD *)*a2 + 193);
    v131 = 0LL;
    v132 = 0LL;
    v133 = 0;
    v134 = 1;
    v135 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v129, v99, (struct ERECTL *)&v128, 0);
    v100 = v130;
    v101 = _mm_cvtsi128_si32(v130);
    v128 = v130;
    if ( v101 == _mm_cvtsi128_si32(_mm_srli_si128(v130, 8)) || v130.m128i_i32[1] == _mm_srli_si128(v130, 8).m128i_i32[1] )
      return v51;
    v102 = v130.m128i_i32[1];
    if ( (*((_DWORD *)this + 55) & 0x10000) != 0 )
    {
      v103 = *((_QWORD *)this + 10);
      if ( v103 )
      {
        v104 = *((_DWORD *)this + 48);
        if ( v104 < 0 )
          goto LABEL_141;
        v105 = *((_DWORD *)this + 49);
        if ( v105 < 0 )
          goto LABEL_141;
        v106 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v103 + 56) - v104 < *((_DWORD *)this + 40) - v106 )
          goto LABEL_141;
        v107 = *((_DWORD *)this + 39);
        if ( *(_DWORD *)(v103 + 60) - v105 < *((_DWORD *)this + 41) - v107 )
          goto LABEL_141;
        *((_DWORD *)this + 48) = v101 + v104 - v106;
        *((_DWORD *)this + 49) = v102 + v105 - v107;
      }
    }
    *v36 = v101 - *((_DWORD *)this + 44);
    *((_DWORD *)this + 47) = v102 - *((_DWORD *)this + 45);
    if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
    {
      v108 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
      if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v108]) & 0xE8) == 0
        || (v109 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v109 + 128) & 0x100) == 0 )
      {
        v127 = v100;
        XDCOBJ::vAccumulateTight((struct _RECTL **)a2, v108, (struct _RECTL *)&v127);
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)v126.m128i_i64[0] + 36LL) & 1) != 0 )
    {
      v110 = *((_DWORD *)this + 44);
      v128.m128i_i32[0] -= v110;
      v128.m128i_i32[2] -= v110;
      v111 = *((_DWORD *)this + 45);
      v128.m128i_i32[1] -= v111;
      v128.m128i_i32[3] -= v111;
    }
    ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
    if ( *((_DWORD *)this + 54) == 52428 )
    {
      v112 = *((_QWORD *)this + 8);
      if ( (*(_DWORD *)(v112 + 112) & 0x400) != 0 )
        v113 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2864);
      else
        v113 = EngCopyBits;
      v114 = *((_QWORD *)this + 9);
      if ( v114 )
        v115 = v114 + 24;
      else
        v115 = 0LL;
      if ( v112 )
        v41 = (char *)(v112 + 24);
      return ((unsigned int (__fastcall *)(char *, __int64, _BYTE *, _QWORD, __m128i *, char *))v113)(
               v41,
               v115,
               v129,
               *((_QWORD *)this + 11),
               &v130,
               (char *)this + 184);
    }
    else
    {
      v116 = *((_QWORD *)this + 12);
      v117 = *((_QWORD *)this + 11);
      BLTRECORD::pSurfMskOut(this);
      v118 = (SURFACE *)*((_QWORD *)this + 8);
      if ( v118 )
        v41 = (char *)v118 + 24;
      v119 = SURFACE::pfnBitBlt(v118);
      return ((unsigned int (__fastcall *)(char *, __int64, __int64, _BYTE *, __int64, __m128i *, char *, __int64, __int64, __int64, int))v119)(
               v41,
               v120,
               v121,
               v129,
               v117,
               &v130,
               (char *)this + 184,
               v123,
               v116,
               v122,
               v124);
    }
  }
  v18 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v136, v18, v4, 0);
  if ( ERECTL::bEmpty((ERECTL *)&v137) )
    return 1LL;
  if ( *((int *)this + 46) < 0 )
  {
    v19 = *((_DWORD *)this + 48);
    *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
    *((_DWORD *)this + 50) = v19;
  }
  if ( *((int *)this + 47) < 0 )
  {
    v20 = *((_DWORD *)this + 49);
    *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
    *((_DWORD *)this + 51) = v20;
  }
  if ( BLTRECORD::pSurfMskOut(this) )
  {
    v23 = *((_DWORD *)this + 48);
    if ( v23 < 0 )
      goto LABEL_37;
    v24 = *((_DWORD *)this + 49);
    if ( v24 < 0 )
      goto LABEL_37;
    if ( v21 < 0 )
      v21 = -v21;
    v25 = *((_QWORD *)this + 10);
    if ( *(_DWORD *)(v25 + 56) - v23 < v21 )
      goto LABEL_37;
    if ( v22 < 0 )
      v22 = -v22;
    if ( *(_DWORD *)(v25 + 60) - v24 < v22 )
    {
LABEL_37:
      EngSetLastError(0x57u);
      return 0LL;
    }
    v26 = v137.m128i_i32[0] + v23 - *(_DWORD *)v4;
    *((_DWORD *)this + 49) = v137.m128i_i32[1] + v24 - *((_DWORD *)this + 39);
    *((_DWORD *)this + 48) = v26;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
  {
    v27 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
    if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v27]) & 0xE8) == 0
      || (v28 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v28 + 128) & 0x100) == 0 )
    {
      v126 = v137;
      XDCOBJ::vAccumulateTight((struct _RECTL **)a2, v27, (struct _RECTL *)&v126);
    }
  }
  ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
  v29 = *((_QWORD *)this + 12);
  BLTRECORD::pSurfMskOut(this);
  v30 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _BYTE *, _QWORD, struct ERECTL *, _QWORD, __int64, __int64, __int64, _DWORD))v30)(
           v34,
           0LL,
           v31,
           v136,
           0LL,
           v4,
           0LL,
           v33,
           v29,
           v32,
           *((_DWORD *)this + 54));
}
