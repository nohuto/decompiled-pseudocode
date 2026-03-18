/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0047FCC
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C000B448 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C0047DE0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004868C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00FC4C8 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     GrePlgBlt @ 0x1C028000C (GrePlgBlt.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0027B7C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002D6BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0038DCC (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C0048C2C (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4)
{
  struct ERECTL *v4; // r15
  int v5; // eax
  int v7; // ecx
  int v10; // ecx
  int v11; // eax
  char *v12; // rsi
  XDCOBJ *v13; // r10
  int v14; // r13d
  DC *v15; // rcx
  unsigned int v16; // r14d
  _DWORD *v17; // rcx
  __int64 v18; // rbx
  int v19; // ecx
  int *v20; // r13
  int v21; // ecx
  DC *v22; // rcx
  __int64 v23; // r8
  int v24; // r11d
  int v25; // r9d
  int v26; // edx
  __int64 v27; // rcx
  unsigned int v28; // r11d
  __int64 v29; // rax
  unsigned int v30; // r9d
  _DWORD *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // edx
  int v35; // eax
  int v36; // r9d
  __int64 v37; // rcx
  signed int v38; // r8d
  int v39; // r11d
  int v40; // r10d
  bool v41; // cc
  struct REGION *v42; // rdx
  struct _RECTL v43; // xmm6
  __int64 v44; // rax
  int v45; // r9d
  int v46; // r10d
  __int64 v47; // rcx
  BOOL (__stdcall *v48)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v49; // rdx
  __int64 v50; // r9
  __int64 v51; // rdx
  __int128 *v52; // rcx
  _BYTE *v53; // r8
  __int64 v56; // rbx
  __int64 v57; // r14
  SURFACE *v58; // rcx
  int (*v59)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r10
  int v64; // r11d
  int v65; // edx
  int v66; // r8d
  __int64 v67; // r11
  int v68; // r15d
  int v69; // eax
  int v70; // eax
  struct ECLIPOBJ *v71; // rdx
  struct REGION *v72; // rax
  int v73; // edx
  int v74; // r8d
  struct ECLIPOBJ *v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rbx
  int (*v78)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v79; // r8
  __int64 v80; // r11
  __int64 v81; // rdx
  __int64 v82; // r9
  __int64 v83; // r10
  int v84; // ecx
  int v85; // ecx
  int v86; // ecx
  int v87; // r9d
  __int64 v88; // r10
  int v89; // ecx
  int v90; // ecx
  int v91; // ecx
  DC **v92; // r10
  int v93; // edx
  int v94; // r8d
  int v95; // r11d
  __int64 v96; // rcx
  int v97; // r9d
  struct REGION *v98; // rax
  __m128i v99; // xmm6
  int v100; // edx
  int v101; // r8d
  __int64 v102; // r9
  int v103; // r10d
  struct ECLIPOBJ *v104; // rdx
  __int64 v105; // rax
  int v106; // r8d
  int v107; // ecx
  int v108; // edx
  int v109; // eax
  int v110; // eax
  int v111; // r14d
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rbx
  __int64 v115; // r9
  __int64 v116; // r10
  XDCOBJ *v117; // rcx
  XDCOBJ *v118; // rcx
  __int64 v119; // rax
  struct ERECTL *v120; // [rsp+30h] [rbp-D8h]
  char *v121; // [rsp+38h] [rbp-D0h]
  __int64 v122; // [rsp+40h] [rbp-C8h]
  __int64 v123; // [rsp+48h] [rbp-C0h]
  __int64 v124; // [rsp+50h] [rbp-B8h]
  int v125; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v126; // [rsp+68h] [rbp-A0h]
  __m128i v127; // [rsp+70h] [rbp-98h] BYREF
  struct _RECTL v128; // [rsp+80h] [rbp-88h] BYREF
  __int128 v129; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v130[4]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v131[4]; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v132; // [rsp+F8h] [rbp-10h]
  int v133; // [rsp+100h] [rbp-8h]
  int v134; // [rsp+128h] [rbp+20h]
  __int64 v135; // [rsp+138h] [rbp+30h]
  _BYTE v136[4]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v137; // [rsp+14Ch] [rbp+44h] BYREF

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
  v12 = 0LL;
  if ( !(unsigned int)DC::bTightenRao(*a2) )
    return 0LL;
  if ( *((_QWORD *)*a2 + 64) )
  {
    v13 = (XDCOBJ *)v127.m128i_i64[0];
    v14 = a4 & 0xD4;
    if ( !v14 || *(_QWORD *)(*(_QWORD *)v127.m128i_i64[0] + 512LL) )
    {
      if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)a2, v4);
      v15 = *a2;
      v16 = 1;
      if ( (*((_DWORD *)*a2 + 10) & 1) != 0 )
        v17 = (_DWORD *)((char *)v15 + 1416);
      else
        v17 = (_DWORD *)((char *)v15 + 1408);
      *(_DWORD *)v4 += *v17;
      *((_DWORD *)v4 + 2) += *v17;
      *((_DWORD *)v4 + 1) += v17[1];
      *((_DWORD *)v4 + 3) += v17[1];
      v18 = *(_QWORD *)(*((_QWORD *)this + 8) + 48LL);
      if ( v14 )
      {
        v19 = *((_DWORD *)this + 44);
        v20 = (int *)((char *)this + 184);
        if ( *((_DWORD *)this + 46) < v19 )
          v19 = *v20;
        *v20 = v19;
        v21 = *((_DWORD *)this + 45);
        if ( *((_DWORD *)this + 47) < v21 )
          v21 = *((_DWORD *)this + 47);
        *((_DWORD *)this + 47) = v21;
        if ( *((_DWORD *)this + 44) > *v20 )
        {
          v90 = *((_DWORD *)this + 48);
          *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
          *((_DWORD *)this + 50) = v90;
        }
        if ( *((_DWORD *)this + 45) > *((_DWORD *)this + 47) )
        {
          v91 = *((_DWORD *)this + 49);
          *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
          *((_DWORD *)this + 51) = v91;
        }
        v22 = *a2;
        v23 = *(_QWORD *)v13;
        if ( *(_QWORD *)(*(_QWORD *)v13 + 512LL) != *((_QWORD *)*a2 + 64) )
        {
          v24 = *((_DWORD *)v22 + 9);
          v25 = 0x20000;
          if ( (v24 & 0x200) == 0 || !v18 || (v26 = 1, (*(_DWORD *)(v18 + 56) & 0x20000) == 0) )
            v26 = 0;
          if ( *((_QWORD *)v22 + 6) != *(_QWORD *)(v23 + 48)
            && (v24 & 0x4000) == 0
            && (*(_DWORD *)(v23 + 36) & 0x4000) == 0
            && !v26
            && (*((_WORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)a2) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v117) + 3))
            && (*((_WORD *)XDCOBJ::pSurfaceEff(v13) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v118) + 3)) )
          {
            goto LABEL_142;
          }
          v27 = *((_QWORD *)this + 9);
          v28 = 0;
          v126 = 0LL;
          v29 = *(_QWORD *)(v27 + 48);
          if ( v29 && v27 == *(_QWORD *)(v29 + 2576) && (v25 & *(_DWORD *)(v29 + 56)) != 0 )
          {
            v28 = *(_DWORD *)(v29 + 2608);
            v30 = *(_DWORD *)(v29 + 2612);
            v126 = __PAIR64__(v30, v28);
          }
          else
          {
            v30 = 0;
          }
          if ( (*(_DWORD *)(v23 + 40) & 1) != 0 )
            v31 = (_DWORD *)(v23 + 1416);
          else
            v31 = (_DWORD *)(v23 + 1408);
          *((_DWORD *)this + 44) = *(_DWORD *)v4 - *v31 - *v20;
          v32 = *(_QWORD *)v13;
          if ( (*(_DWORD *)(*(_QWORD *)v13 + 40LL) & 1) != 0 )
            v33 = v32 + 1416;
          else
            v33 = v32 + 1408;
          v34 = *((_DWORD *)this + 39) - *(_DWORD *)(v33 + 4) - *((_DWORD *)this + 47);
          v35 = *((_DWORD *)this + 44);
          v36 = v34 + v30;
          *((_DWORD *)this + 45) = v34;
          v37 = *((_QWORD *)this + 9);
          v38 = v35 + v28;
          *(_QWORD *)&v129 = __PAIR64__(v36, v38);
          v39 = v126 + v35 + *(_DWORD *)(v37 + 56);
          DWORD2(v129) = v39;
          v40 = v34 + HIDWORD(v126) + *(_DWORD *)(v37 + 60);
          if ( *(_DWORD *)v4 > v38 )
            v38 = *(_DWORD *)v4;
          v41 = *((_DWORD *)v4 + 1) <= v36;
          LODWORD(v129) = v38;
          if ( !v41 )
            v36 = *((_DWORD *)v4 + 1);
          v41 = *((_DWORD *)v4 + 2) < v39;
          DWORD1(v129) = v36;
          if ( v41 )
            v39 = *((_DWORD *)v4 + 2);
          v41 = *((_DWORD *)v4 + 3) < v40;
          DWORD2(v129) = v39;
          if ( v41 )
            v40 = *((_DWORD *)v4 + 3);
          HIDWORD(v129) = v40;
          if ( v39 < v38 )
          {
            LODWORD(v129) = v39;
          }
          else
          {
            if ( v40 < v36 )
              v36 = v40;
            DWORD1(v129) = v36;
          }
          v42 = (struct REGION *)*((_QWORD *)*a2 + 191);
          if ( !v42 )
            v42 = (struct REGION *)*((_QWORD *)*a2 + 190);
          v132 = 0LL;
          v133 = 0;
          v134 = 1;
          v135 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v130, v42, (struct ERECTL *)&v129, 0);
          v43 = (struct _RECTL)v131[0];
          v129 = v131[0];
          if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v129) )
            return v16;
          if ( (*((_DWORD *)this + 55) & 0x10000) != 0 )
            v44 = *((_QWORD *)this + 10);
          else
            v44 = 0LL;
          v45 = DWORD1(v131[0]);
          v46 = v131[0];
          if ( !v44 )
            goto LABEL_51;
          v65 = *((_DWORD *)this + 48);
          if ( v65 >= 0 )
          {
            v66 = *((_DWORD *)this + 49);
            if ( v66 >= 0 )
            {
              v67 = *((_QWORD *)this + 10);
              LODWORD(v126) = *(_DWORD *)v4;
              if ( *(_DWORD *)(v67 + 56) - v65 >= *((_DWORD *)this + 40) - *(_DWORD *)v4 )
              {
                v68 = *((_DWORD *)this + 39);
                if ( *(_DWORD *)(v67 + 60) - v66 >= *((_DWORD *)this + 41) - v68 )
                {
                  *((_DWORD *)this + 48) = LODWORD(v131[0]) + v65 - v126;
                  *((_DWORD *)this + 49) = v45 + v66 - v68;
LABEL_51:
                  *v20 = v46 - *((_DWORD *)this + 44);
                  *((_DWORD *)this + 47) = v45 - *((_DWORD *)this + 45);
                  if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
                  {
                    v71 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
                    if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v71]) & 0xE8) == 0
                      || (v119 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v119 + 128) & 0x100) == 0 )
                    {
                      v128 = v43;
                      XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v71, &v128);
                    }
                  }
                  if ( (*(_DWORD *)(*(_QWORD *)v127.m128i_i64[0] + 36LL) & 1) != 0 )
                  {
                    v69 = *((_DWORD *)this + 44);
                    LODWORD(v129) = v129 - v69;
                    DWORD2(v129) -= v69;
                    v70 = *((_DWORD *)this + 45);
                    DWORD1(v129) -= v70;
                    HIDWORD(v129) -= v70;
                  }
                  ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
                  if ( *((_DWORD *)this + 54) != 52428 )
                  {
                    v56 = *((_QWORD *)this + 12);
                    v57 = *((_QWORD *)this + 11);
                    BLTRECORD::pSurfMskOut(this);
                    v58 = (SURFACE *)*((_QWORD *)this + 8);
                    if ( v58 )
                      v12 = (char *)v58 + 24;
                    v59 = SURFACE::pfnBitBlt(v58);
                    return ((unsigned int (__fastcall *)(char *, __int64, __int64, _BYTE *, __int64, _OWORD *, char *, __int64, __int64, __int64, int))v59)(
                             v12,
                             v60,
                             v61,
                             v130,
                             v57,
                             v131,
                             (char *)this + 184,
                             v63,
                             v56,
                             v62,
                             v64);
                  }
                  v47 = *((_QWORD *)this + 8);
                  if ( (*(_DWORD *)(v47 + 112) & 0x400) != 0 )
                    v48 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v18 + 2872);
                  else
                    v48 = EngCopyBits;
                  v49 = *((_QWORD *)this + 9);
                  v50 = *((_QWORD *)this + 11);
                  if ( v49 )
                    v51 = v49 + 24;
                  else
                    v51 = 0LL;
                  if ( v47 )
                    v12 = (char *)(v47 + 24);
                  v52 = v131;
                  v53 = v130;
                  return ((unsigned int (__fastcall *)(char *, __int64, _BYTE *, __int64, __int128 *, char *))v48)(
                           v12,
                           v51,
                           v53,
                           v50,
                           v52,
                           (char *)this + 184);
                }
              }
            }
          }
LABEL_142:
          EngSetLastError(0x57u);
          return 0;
        }
        *((_DWORD *)this + 44) = *(_DWORD *)v4 - *v20 - *(_DWORD *)DC::eptlOrigin(*(DC **)v13);
        v93 = *((_DWORD *)this + 39) - *((_DWORD *)DC::eptlOrigin(*v92) + 1) - *((_DWORD *)this + 47);
        LODWORD(v129) = v94 + v95;
        *((_DWORD *)this + 45) = v93;
        v96 = *((_QWORD *)this + 8);
        DWORD1(v129) = v93 + v97;
        DWORD2(v129) = v95 + v94 + *(_DWORD *)(v96 + 56);
        HIDWORD(v129) = v97 + v93 + *(_DWORD *)(v96 + 60);
        ERECTL::operator*=(&v129, v4);
        v98 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v136, v98, (struct ERECTL *)&v129, 0);
        v99 = (__m128i)v137;
        v129 = v137;
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v129) )
          return v16;
        if ( BLTRECORD::pSurfMskOut(this) )
        {
          v100 = *((_DWORD *)this + 48);
          if ( v100 < 0 )
            goto LABEL_142;
          v101 = *((_DWORD *)this + 49);
          if ( v101 < 0 )
            goto LABEL_142;
          v102 = *((_QWORD *)this + 10);
          if ( *(_DWORD *)(v102 + 56) - v100 < *((_DWORD *)this + 40) - *(_DWORD *)v4 )
            goto LABEL_142;
          v103 = *((_DWORD *)this + 39);
          if ( *(_DWORD *)(v102 + 60) - v101 < *((_DWORD *)this + 41) - v103 )
            goto LABEL_142;
          *((_DWORD *)this + 48) = _mm_cvtsi128_si32(v99) + v100 - *(_DWORD *)v4;
          *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128(v99, 4)) + v101 - v103;
        }
        if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        {
          v104 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
          if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v104]) & 0xE8) == 0
            || (v105 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v105 + 128) & 0x100) == 0 )
          {
            v127 = v99;
            XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v104, (struct _RECTL *)&v127);
          }
        }
        v106 = v129;
        v107 = v129 - *((_DWORD *)this + 44);
        v108 = DWORD1(v129);
        v109 = DWORD1(v129);
        *v20 = v107;
        v110 = v109 - *((_DWORD *)this + 45);
        *((_DWORD *)this + 47) = v110;
        if ( v107 >= v106 )
          DWORD2(v129) += v107 - v106;
        else
          LODWORD(v129) = v107;
        if ( v110 >= v108 )
          HIDWORD(v129) += v110 - v108;
        else
          DWORD1(v129) = v110;
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
        v111 = *((_DWORD *)this + 54);
        if ( v111 == 52428 )
        {
          v112 = *((_QWORD *)this + 8);
          if ( (*(_DWORD *)(v112 + 112) & 0x400) != 0 )
            v48 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v18 + 2872);
          else
            v48 = EngCopyBits;
          v113 = *((_QWORD *)this + 9);
          if ( v113 )
            v51 = v113 + 24;
          else
            v51 = 0LL;
          if ( v112 )
            v12 = (char *)(v112 + 24);
          v52 = &v137;
          v50 = 0LL;
          v53 = v136;
          return ((unsigned int (__fastcall *)(char *, __int64, _BYTE *, __int64, __int128 *, char *))v48)(
                   v12,
                   v51,
                   v53,
                   v50,
                   v52,
                   (char *)this + 184);
        }
        v114 = *((_QWORD *)this + 12);
        BLTRECORD::pSurfMskOut(this);
        v78 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
        v125 = v111;
        v124 = v115;
        v123 = v114;
        v122 = v116;
        v121 = (char *)this + 184;
        v120 = (struct ERECTL *)&v137;
      }
      else
      {
        v72 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v136, v72, v4, 0);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v137) )
          return v16;
        if ( *((int *)this + 46) < 0 )
        {
          v84 = *((_DWORD *)this + 48);
          *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
          *((_DWORD *)this + 50) = v84;
        }
        if ( *((int *)this + 47) < 0 )
        {
          v85 = *((_DWORD *)this + 49);
          *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
          *((_DWORD *)this + 51) = v85;
        }
        if ( BLTRECORD::pSurfMskOut(this) )
        {
          v86 = *((_DWORD *)this + 48);
          if ( v86 < 0 )
            goto LABEL_142;
          v87 = *((_DWORD *)this + 49);
          if ( v87 < 0 )
            goto LABEL_142;
          if ( v73 < 0 )
            v73 = -v73;
          v88 = *((_QWORD *)this + 10);
          if ( *(_DWORD *)(v88 + 56) - v86 < v73 )
            goto LABEL_142;
          if ( v74 < 0 )
            v74 = -v74;
          if ( *(_DWORD *)(v88 + 60) - v87 < v74 )
            goto LABEL_142;
          v89 = v137 + v86 - *(_DWORD *)v4;
          *((_DWORD *)this + 49) = DWORD1(v137) + v87 - *((_DWORD *)this + 39);
          *((_DWORD *)this + 48) = v89;
        }
        if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        {
          v75 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
          if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v75]) & 0xE8) == 0
            || (v76 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v76 + 128) & 0x100) == 0 )
          {
            v127 = (__m128i)v137;
            XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v75, (struct _RECTL *)&v127);
          }
        }
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
        v77 = *((_QWORD *)this + 12);
        BLTRECORD::pSurfMskOut(this);
        v78 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
        v125 = *((_DWORD *)this + 54);
        v81 = 0LL;
        v124 = v82;
        v123 = v77;
        v122 = v83;
        v121 = 0LL;
        v120 = v4;
      }
      return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, _QWORD, struct ERECTL *, char *, __int64, __int64, __int64, int))v78)(
               v80,
               v81,
               v79,
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
  return 1LL;
}
