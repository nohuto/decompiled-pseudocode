/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009F674
 * Callers:
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C009EE8C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009F030 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00A0228 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A289C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     GrePlgBlt @ 0x1C0122434 (GrePlgBlt.c)
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019AB4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C001D448 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009CE2C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00A00EC (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bHasSurface@XDCOBJ@@QEAAHXZ @ 0x1C026142C (-bHasSurface@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4)
{
  struct ERECTL *v4; // r15
  int v5; // eax
  int v7; // ecx
  int v10; // ecx
  int v11; // eax
  __int64 result; // rax
  char *v13; // rsi
  DC **v14; // r9
  int v15; // r13d
  DC *v16; // rcx
  unsigned int v17; // r14d
  _DWORD *v18; // rcx
  __int64 v19; // rbx
  struct REGION *v20; // rax
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // r8d
  int v25; // ecx
  int v26; // r9d
  __int64 v27; // r10
  int v28; // ecx
  struct ECLIPOBJ *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rbx
  int (*v32)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v33; // r8
  __int64 v34; // r11
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // r10
  int v39; // ecx
  int *v40; // r13
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  DC *v44; // rcx
  DC *v45; // r8
  DC **v46; // r9
  int v47; // edx
  int v48; // r8d
  int v49; // r11d
  __int64 v50; // rcx
  int v51; // r10d
  struct REGION *v52; // rax
  __m128i v53; // xmm6
  int v54; // edx
  int v55; // r8d
  __int64 v56; // r9
  int v57; // r10d
  struct ECLIPOBJ *v58; // rdx
  __int64 v59; // rax
  int v60; // r8d
  int v61; // ecx
  int v62; // edx
  int v63; // eax
  int v64; // eax
  int v65; // r14d
  __int64 v66; // rcx
  BOOL (__stdcall *v67)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int128 *v70; // rcx
  __int64 v71; // r9
  _BYTE *v72; // r8
  __int64 v73; // rbx
  __int64 v74; // r9
  __int64 v75; // r10
  int v76; // edx
  int v77; // r10d
  int v78; // eax
  __int64 v79; // r11
  char v80; // cl
  char v81; // al
  XDCOBJ *v82; // rcx
  XDCOBJ *v83; // rcx
  __int64 v84; // rcx
  int v85; // r11d
  __int64 v86; // rax
  int v87; // r10d
  _DWORD *v88; // r8
  DC *v89; // rcx
  char *v90; // rcx
  int v91; // edx
  int v92; // r8d
  __int64 v93; // rcx
  struct REGION *v94; // rdx
  struct _RECTL v95; // xmm6
  __int64 v96; // rax
  int v97; // r9d
  int v98; // r10d
  int v99; // edx
  int v100; // r8d
  LONG v101; // r15d
  __int64 v102; // r11
  int v103; // eax
  int v104; // r15d
  struct ECLIPOBJ *v105; // rdx
  __int64 v106; // rax
  int v107; // eax
  int v108; // eax
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rbx
  __int64 v112; // r14
  SURFACE *v113; // rcx
  int (*v114)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // r10
  int v119; // r11d
  struct ERECTL *v120; // [rsp+30h] [rbp-D8h]
  char *v121; // [rsp+38h] [rbp-D0h]
  __int64 v122; // [rsp+40h] [rbp-C8h]
  __int64 v123; // [rsp+48h] [rbp-C0h]
  __int64 v124; // [rsp+50h] [rbp-B8h]
  int v125; // [rsp+58h] [rbp-B0h]
  struct _RECTL v126; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v127; // [rsp+78h] [rbp-90h] BYREF
  __int128 v128; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v129[4]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v130[3]; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int64 v131; // [rsp+D0h] [rbp-38h]
  __int64 v132; // [rsp+E8h] [rbp-20h]
  int v133; // [rsp+F0h] [rbp-18h]
  int v134; // [rsp+118h] [rbp+10h]
  __int64 v135; // [rsp+128h] [rbp+20h]
  _BYTE v136[4]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v137; // [rsp+13Ch] [rbp+34h] BYREF

  v4 = (BLTRECORD *)((char *)this + 152);
  v127.m128i_i64[0] = (__int64)a3;
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
  v13 = 0LL;
  if ( (_DWORD)result )
  {
    if ( (unsigned int)XDCOBJ::bHasSurface((XDCOBJ *)a2) )
    {
      v14 = (DC **)v127.m128i_i64[0];
      v15 = a4 & 0xD4;
      if ( !v15 || (unsigned int)XDCOBJ::bHasSurface((XDCOBJ *)v127.m128i_i64[0]) )
      {
        if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)a2, v4);
        v16 = *a2;
        v17 = 1;
        if ( (*((_DWORD *)*a2 + 10) & 1) != 0 )
          v18 = (_DWORD *)((char *)v16 + 1416);
        else
          v18 = (_DWORD *)((char *)v16 + 1408);
        *(_DWORD *)v4 += *v18;
        *((_DWORD *)v4 + 2) += *v18;
        *((_DWORD *)v4 + 1) += v18[1];
        *((_DWORD *)v4 + 3) += v18[1];
        v19 = *(_QWORD *)(*((_QWORD *)this + 8) + 48LL);
        if ( !v15 )
        {
          v20 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v136, v20, v4, 0);
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v137) )
          {
            if ( *((int *)this + 46) < 0 )
            {
              v21 = *((_DWORD *)this + 48);
              *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
              *((_DWORD *)this + 50) = v21;
            }
            if ( *((int *)this + 47) < 0 )
            {
              v22 = *((_DWORD *)this + 49);
              *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
              *((_DWORD *)this + 51) = v22;
            }
            if ( !BLTRECORD::pSurfMskOut(this) )
              goto LABEL_30;
            v25 = *((_DWORD *)this + 48);
            if ( v25 >= 0 )
            {
              v26 = *((_DWORD *)this + 49);
              if ( v26 >= 0 )
              {
                if ( v23 < 0 )
                  v23 = -v23;
                v27 = *((_QWORD *)this + 10);
                if ( *(_DWORD *)(v27 + 56) - v25 >= v23 )
                {
                  if ( v24 < 0 )
                    v24 = -v24;
                  if ( *(_DWORD *)(v27 + 60) - v26 >= v24 )
                  {
                    v28 = v137 + v25 - *(_DWORD *)v4;
                    *((_DWORD *)this + 49) = DWORD1(v137) + v26 - *((_DWORD *)this + 39);
                    *((_DWORD *)this + 48) = v28;
LABEL_30:
                    if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
                    {
                      v29 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
                      if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v29]) & 0xE8) == 0
                        || (v30 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v30 + 128) & 0x100) == 0 )
                      {
                        v127 = (__m128i)v137;
                        XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v29, (struct _RECTL *)&v127);
                      }
                    }
                    ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
                    v31 = *((_QWORD *)this + 12);
                    BLTRECORD::pSurfMskOut(this);
                    v32 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
                    v125 = *((_DWORD *)this + 54);
                    v35 = 0LL;
                    v124 = v36;
                    v123 = v31;
                    v122 = v37;
                    v121 = 0LL;
                    v120 = v4;
                    return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, _QWORD, struct ERECTL *, char *, __int64, __int64, __int64, int))v32)(
                             v34,
                             v35,
                             v33,
                             v136,
                             0LL,
                             v120,
                             v121,
                             v122,
                             v123,
                             v124,
                             v125);
                  }
                }
              }
            }
            goto LABEL_127;
          }
          return v17;
        }
        v39 = *((_DWORD *)this + 44);
        v40 = (int *)((char *)this + 184);
        if ( *((_DWORD *)this + 46) < v39 )
          v39 = *v40;
        *v40 = v39;
        v41 = *((_DWORD *)this + 45);
        if ( *((_DWORD *)this + 47) < v41 )
          v41 = *((_DWORD *)this + 47);
        *((_DWORD *)this + 47) = v41;
        if ( *((_DWORD *)this + 44) > *v40 )
        {
          v42 = *((_DWORD *)this + 48);
          *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
          *((_DWORD *)this + 50) = v42;
        }
        if ( *((_DWORD *)this + 45) > *((_DWORD *)this + 47) )
        {
          v43 = *((_DWORD *)this + 49);
          *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
          *((_DWORD *)this + 51) = v43;
        }
        v44 = *a2;
        v45 = *v14;
        if ( *((_QWORD *)*v14 + 64) == *((_QWORD *)*a2 + 64) )
        {
          *((_DWORD *)this + 44) = *(_DWORD *)v4 - *v40 - *(_DWORD *)DC::eptlOrigin(*v14);
          v47 = *((_DWORD *)this + 39) - *((_DWORD *)DC::eptlOrigin(*v46) + 1) - *((_DWORD *)this + 47);
          LODWORD(v128) = v48 + v49;
          *((_DWORD *)this + 45) = v47;
          v50 = *((_QWORD *)this + 8);
          DWORD1(v128) = v47 + v51;
          DWORD2(v128) = v49 + v48 + *(_DWORD *)(v50 + 56);
          HIDWORD(v128) = v51 + v47 + *(_DWORD *)(v50 + 60);
          ERECTL::operator*=(&v128);
          v52 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v136, v52, (struct ERECTL *)&v128, 0);
          v53 = (__m128i)v137;
          v128 = v137;
          if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v128) )
            return v17;
          if ( !BLTRECORD::pSurfMskOut(this) )
            goto LABEL_53;
          v54 = *((_DWORD *)this + 48);
          if ( v54 >= 0 )
          {
            v55 = *((_DWORD *)this + 49);
            if ( v55 >= 0 )
            {
              v56 = *((_QWORD *)this + 10);
              if ( *(_DWORD *)(v56 + 56) - v54 >= *((_DWORD *)this + 40) - *(_DWORD *)v4 )
              {
                v57 = *((_DWORD *)this + 39);
                if ( *(_DWORD *)(v56 + 60) - v55 >= *((_DWORD *)this + 41) - v57 )
                {
                  *((_DWORD *)this + 48) = _mm_cvtsi128_si32(v53) + v54 - *(_DWORD *)v4;
                  *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128(v53, 4)) + v55 - v57;
LABEL_53:
                  if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
                  {
                    v58 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
                    if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v58]) & 0xE8) == 0
                      || (v59 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v59 + 128) & 0x100) == 0 )
                    {
                      v127 = v53;
                      XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v58, (struct _RECTL *)&v127);
                    }
                  }
                  v60 = v128;
                  v61 = v128 - *((_DWORD *)this + 44);
                  v62 = DWORD1(v128);
                  v63 = DWORD1(v128);
                  *v40 = v61;
                  v64 = v63 - *((_DWORD *)this + 45);
                  *((_DWORD *)this + 47) = v64;
                  if ( v61 >= v60 )
                    DWORD2(v128) += v61 - v60;
                  else
                    LODWORD(v128) = v61;
                  if ( v64 >= v62 )
                    HIDWORD(v128) += v64 - v62;
                  else
                    DWORD1(v128) = v64;
                  ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
                  v65 = *((_DWORD *)this + 54);
                  if ( v65 != 52428 )
                  {
                    v73 = *((_QWORD *)this + 12);
                    BLTRECORD::pSurfMskOut(this);
                    v32 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
                    v125 = v65;
                    v124 = v74;
                    v123 = v73;
                    v122 = v75;
                    v121 = (char *)this + 184;
                    v120 = (struct ERECTL *)&v137;
                    return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, _QWORD, struct ERECTL *, char *, __int64, __int64, __int64, int))v32)(
                             v34,
                             v35,
                             v33,
                             v136,
                             0LL,
                             v120,
                             v121,
                             v122,
                             v123,
                             v124,
                             v125);
                  }
                  v66 = *((_QWORD *)this + 8);
                  if ( (*(_DWORD *)(v66 + 112) & 0x400) != 0 )
                    v67 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v19 + 2872);
                  else
                    v67 = EngCopyBits;
                  v68 = *((_QWORD *)this + 9);
                  if ( v68 )
                    v69 = v68 + 24;
                  else
                    v69 = 0LL;
                  if ( v66 )
                    v13 = (char *)(v66 + 24);
                  v70 = &v137;
                  v71 = 0LL;
                  v72 = v136;
                  return ((unsigned int (__fastcall *)(char *, __int64, _BYTE *, __int64, __int128 *, char *))v67)(
                           v13,
                           v69,
                           v72,
                           v71,
                           v70,
                           (char *)this + 184);
                }
              }
            }
          }
LABEL_127:
          EngSetLastError(0x57u);
          return 0;
        }
        v76 = *((_DWORD *)v44 + 9);
        v77 = 0x20000;
        if ( (v76 & 0x200) == 0 || !v19 || (v78 = 1, (*(_DWORD *)(v19 + 56) & 0x20000) == 0) )
          v78 = 0;
        v79 = *((_QWORD *)v44 + 6);
        *(_QWORD *)&v126.left = *((_QWORD *)v45 + 6);
        if ( v79 != *(_QWORD *)&v126.left && !v78 )
        {
          if ( (v76 & 0x4000) != 0 || (v80 = 0, (*((_DWORD *)v45 + 9) & 0x4000) != 0) )
            v80 = 1;
          if ( (*(_DWORD *)(v79 + 56) & 0x8000) != 0
            || (v81 = 0, (*(_DWORD *)(*(_QWORD *)&v126.left + 56LL) & 0x8000) != 0) )
          {
            v81 = 1;
          }
          if ( (!v80 || v81)
            && (*((_WORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)a2) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v82) + 3))
            && (*((_WORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v14) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v83) + 3)) )
          {
            goto LABEL_127;
          }
        }
        v84 = *((_QWORD *)this + 9);
        v85 = 0;
        v86 = *(_QWORD *)(v84 + 48);
        if ( v86 && v84 == *(_QWORD *)(v86 + 2576) && (v77 & *(_DWORD *)(v86 + 56)) != 0 )
        {
          v85 = *(_DWORD *)(v86 + 2608);
          v87 = *(_DWORD *)(v86 + 2612);
        }
        else
        {
          v87 = 0;
        }
        if ( (*((_DWORD *)v45 + 10) & 1) != 0 )
          v88 = (_DWORD *)((char *)v45 + 1416);
        else
          v88 = (_DWORD *)((char *)v45 + 1408);
        *((_DWORD *)this + 44) = *(_DWORD *)v4 - *v88 - *v40;
        v89 = *v14;
        if ( (*((_DWORD *)*v14 + 10) & 1) != 0 )
          v90 = (char *)v89 + 1416;
        else
          v90 = (char *)v89 + 1408;
        v91 = *((_DWORD *)this + 44);
        v92 = *((_DWORD *)this + 39) - *((_DWORD *)v90 + 1) - *((_DWORD *)this + 47);
        *((_DWORD *)this + 45) = v92;
        v93 = *((_QWORD *)this + 9);
        LODWORD(v128) = v91 + v85;
        DWORD1(v128) = v92 + v87;
        DWORD2(v128) = v85 + v91 + *(_DWORD *)(v93 + 56);
        HIDWORD(v128) = v87 + v92 + *(_DWORD *)(v93 + 60);
        ERECTL::operator*=(&v128);
        v94 = (struct REGION *)*((_QWORD *)*a2 + 194);
        if ( !v94 )
          v94 = (struct REGION *)*((_QWORD *)*a2 + 193);
        v131 = 0LL;
        v132 = 0LL;
        v133 = 0;
        v134 = 1;
        v135 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v129, v94, (struct ERECTL *)&v128, 0);
        v95 = (struct _RECTL)v130[0];
        v128 = v130[0];
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v128) )
          return v17;
        if ( (*((_DWORD *)this + 55) & 0x10000) != 0 )
          v96 = *((_QWORD *)this + 10);
        else
          v96 = 0LL;
        v97 = DWORD1(v130[0]);
        v98 = v130[0];
        if ( v96 )
        {
          v99 = *((_DWORD *)this + 48);
          if ( v99 < 0 )
            goto LABEL_127;
          v100 = *((_DWORD *)this + 49);
          if ( v100 < 0 )
            goto LABEL_127;
          v101 = *(_DWORD *)v4;
          v102 = *((_QWORD *)this + 10);
          v103 = *((_DWORD *)this + 40) - v101;
          v126.left = v101;
          if ( *(_DWORD *)(v102 + 56) - v99 < v103 )
            goto LABEL_127;
          v104 = *((_DWORD *)this + 39);
          if ( *(_DWORD *)(v102 + 60) - v100 < *((_DWORD *)this + 41) - v104 )
            goto LABEL_127;
          *((_DWORD *)this + 48) = LODWORD(v130[0]) + v99 - v126.left;
          *((_DWORD *)this + 49) = v97 + v100 - v104;
        }
        *v40 = v98 - *((_DWORD *)this + 44);
        *((_DWORD *)this + 47) = v97 - *((_DWORD *)this + 45);
        if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        {
          v105 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
          if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v105]) & 0xE8) == 0
            || (v106 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v106 + 128) & 0x100) == 0 )
          {
            v126 = v95;
            XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v105, &v126);
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)v127.m128i_i64[0] + 36LL) & 1) != 0 )
        {
          v107 = *((_DWORD *)this + 44);
          LODWORD(v128) = v128 - v107;
          DWORD2(v128) -= v107;
          v108 = *((_DWORD *)this + 45);
          DWORD1(v128) -= v108;
          HIDWORD(v128) -= v108;
        }
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
        if ( *((_DWORD *)this + 54) != 52428 )
        {
          v111 = *((_QWORD *)this + 12);
          v112 = *((_QWORD *)this + 11);
          BLTRECORD::pSurfMskOut(this);
          v113 = (SURFACE *)*((_QWORD *)this + 8);
          if ( v113 )
            v13 = (char *)v113 + 24;
          v114 = SURFACE::pfnBitBlt(v113);
          return ((unsigned int (__fastcall *)(char *, __int64, __int64, _BYTE *, __int64, _OWORD *, char *, __int64, __int64, __int64, int))v114)(
                   v13,
                   v115,
                   v116,
                   v129,
                   v112,
                   v130,
                   (char *)this + 184,
                   v118,
                   v111,
                   v117,
                   v119);
        }
        v109 = *((_QWORD *)this + 8);
        if ( (*(_DWORD *)(v109 + 112) & 0x400) != 0 )
          v67 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v19 + 2872);
        else
          v67 = EngCopyBits;
        v110 = *((_QWORD *)this + 9);
        v71 = *((_QWORD *)this + 11);
        if ( v110 )
          v69 = v110 + 24;
        else
          v69 = 0LL;
        if ( v109 )
          v13 = (char *)(v109 + 24);
        v70 = v130;
        v72 = v129;
        return ((unsigned int (__fastcall *)(char *, __int64, _BYTE *, __int64, __int128 *, char *))v67)(
                 v13,
                 v69,
                 v72,
                 v71,
                 v70,
                 (char *)this + 184);
      }
    }
    return 1LL;
  }
  return result;
}
