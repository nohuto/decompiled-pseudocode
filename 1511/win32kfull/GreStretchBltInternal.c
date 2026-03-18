/*
 * XREFs of GreStretchBltInternal @ 0x1C0046C60
 * Callers:
 *     BltIcon @ 0x1C00153C8 (BltIcon.c)
 *     GreStretchDIBitsInternal @ 0x1C00348C8 (GreStretchDIBitsInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     _InternalGetIconInfo @ 0x1C0049C9C (_InternalGetIconInfo.c)
 *     NtGdiStretchBlt @ 0x1C00E28B0 (NtGdiStretchBlt.c)
 *     DxgkEngBltViaGDI @ 0x1C0262980 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C000B324 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C000B448 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0019BFC (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002D65C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E950 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C002F1B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002FE9C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0041720 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C0041E4C (bCvtPts1.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0044040 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0046230 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0047FCC (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004868C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreMovePointer @ 0x1C00882C0 (GreMovePointer.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0103598 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C01035D8 (--1UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0263BDC (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreStretchBltInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  unsigned int v13; // edi
  unsigned int v15; // r12d
  unsigned int v18; // r8d
  char v19; // al
  __int64 v20; // rax
  DC *v21; // rdx
  int v22; // ebx
  DC *v23; // rcx
  __int64 v24; // rdx
  int v25; // edi
  DC *v26; // rax
  DC *v27; // r9
  DC *v28; // rdx
  __int64 v29; // rcx
  struct SURFACE *v30; // rbx
  int v31; // eax
  int v32; // eax
  struct SURFACE *v33; // rcx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rbx
  __int64 v37; // rbx
  unsigned int v38; // eax
  SURFACE *v39; // r11
  SURFACE *v40; // rsi
  SURFACE *v41; // r10
  struct SURFACE *v42; // r14
  __int64 v43; // r13
  char v44; // r15
  int v45; // ebx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  int v49; // ebx
  DC *v50; // r8
  __int64 v51; // rcx
  struct SURFACE *v52; // rax
  struct SURFACE *v53; // rbx
  __int64 v54; // rbx
  __int64 v55; // r15
  __int64 v56; // r9
  __int64 v57; // r14
  __int64 v58; // rdi
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // edx
  __int64 v66; // rax
  int v67; // ecx
  int v68; // esi
  unsigned int v69; // eax
  struct _XLATETABLE near *v70; // rdx
  unsigned int v71; // r11d
  unsigned int v72; // r10d
  __int64 v73; // rax
  int v74; // ecx
  int v75; // eax
  __int64 v76; // r8
  int v77; // eax
  __int64 v78; // r8
  XLATEOBJ *v79; // rdx
  FLONG flXlate; // r9d
  int v81; // eax
  __int64 v82; // r8
  __int64 XlateObject; // rax
  unsigned int v84; // ebx
  __int64 v85; // r8
  int v86; // edx
  int v87; // r10d
  int v88; // r9d
  int v89; // r11d
  int v90; // edx
  unsigned __int8 v91; // r8
  SURFACE *v92; // rax
  DC *v93; // rcx
  DC *v94; // r8
  __int64 v95; // rcx
  char v96; // al
  __int64 cEntries; // rdx
  DC *v99[2]; // [rsp+50h] [rbp-B0h] BYREF
  DC *v100; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v101; // [rsp+68h] [rbp-98h]
  int v102; // [rsp+70h] [rbp-90h]
  int v103; // [rsp+74h] [rbp-8Ch]
  int v104; // [rsp+78h] [rbp-88h]
  int v105; // [rsp+7Ch] [rbp-84h]
  int v106; // [rsp+80h] [rbp-80h]
  int v107; // [rsp+84h] [rbp-7Ch]
  SURFACE *v108; // [rsp+88h] [rbp-78h]
  struct SURFACE *v109; // [rsp+90h] [rbp-70h]
  int v110; // [rsp+98h] [rbp-68h]
  struct _XLATETABLE near *v111; // [rsp+A0h] [rbp-60h]
  int v112; // [rsp+A8h] [rbp-58h]
  unsigned int v113; // [rsp+ACh] [rbp-54h]
  int v114; // [rsp+B0h] [rbp-50h]
  unsigned int v115; // [rsp+B4h] [rbp-4Ch]
  int v116; // [rsp+B8h] [rbp-48h]
  unsigned int v117; // [rsp+BCh] [rbp-44h]
  __int64 v118; // [rsp+C0h] [rbp-40h]
  __int64 v119; // [rsp+C8h] [rbp-38h]
  __int64 v120; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v121; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v122; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v123; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v124[16]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v125[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v126; // [rsp+120h] [rbp+20h]
  __int64 v127; // [rsp+128h] [rbp+28h]
  char v128; // [rsp+130h] [rbp+30h]
  int v129; // [rsp+134h] [rbp+34h]
  __int64 v130; // [rsp+138h] [rbp+38h]
  __int64 v131; // [rsp+140h] [rbp+40h]
  int v132; // [rsp+148h] [rbp+48h]
  __int64 v133; // [rsp+150h] [rbp+50h]
  __int64 v134; // [rsp+158h] [rbp+58h]
  __int64 v135; // [rsp+160h] [rbp+60h]
  __int64 v136; // [rsp+168h] [rbp+68h]
  __int64 v137; // [rsp+170h] [rbp+70h]
  __int64 v138; // [rsp+178h] [rbp+78h]
  __int64 v139; // [rsp+180h] [rbp+80h]
  __int64 v140; // [rsp+188h] [rbp+88h]
  __int64 v141; // [rsp+198h] [rbp+98h]
  __int64 v142; // [rsp+1A0h] [rbp+A0h]
  __int64 v143; // [rsp+1A8h] [rbp+A8h]
  _BYTE v144[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v145[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _POINTL v146; // [rsp+1D0h] [rbp+D0h] BYREF
  int v147; // [rsp+1D8h] [rbp+D8h]
  int v148; // [rsp+1DCh] [rbp+DCh]
  struct _POINTFIX v149[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 v150; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v151; // [rsp+200h] [rbp+100h]
  __int64 v152; // [rsp+208h] [rbp+108h]
  __int64 v153; // [rsp+210h] [rbp+110h]
  __int64 v154; // [rsp+218h] [rbp+118h]
  struct SURFACE *v155; // [rsp+220h] [rbp+120h]
  struct SURFACE *v156; // [rsp+228h] [rbp+128h]
  __int64 v157; // [rsp+230h] [rbp+130h]
  XLATEOBJ *v158; // [rsp+238h] [rbp+138h] BYREF
  char *v159; // [rsp+240h] [rbp+140h]
  char v160[48]; // [rsp+248h] [rbp+148h] BYREF
  int v161; // [rsp+278h] [rbp+178h] BYREF
  int v162; // [rsp+27Ch] [rbp+17Ch]
  int v163; // [rsp+280h] [rbp+180h]
  int v164; // [rsp+284h] [rbp+184h]
  int v165; // [rsp+290h] [rbp+190h] BYREF
  int v166; // [rsp+294h] [rbp+194h]
  int v167; // [rsp+298h] [rbp+198h]
  int v168; // [rsp+29Ch] [rbp+19Ch]
  __int64 v169; // [rsp+2B0h] [rbp+1B0h]
  unsigned int v170; // [rsp+2B8h] [rbp+1B8h]
  int v171; // [rsp+2BCh] [rbp+1BCh]

  v13 = a11 & 0x7FFFFFFF;
  v103 = a4;
  v104 = a3;
  v15 = 1;
  v107 = a2;
  v106 = a5;
  v157 = 0LL;
  v171 = 0;
  v115 = 0;
  v105 = 0;
  if ( (a11 & 0x40000000) != 0 )
  {
    v105 = 1;
    v13 = a11 & 0x3FFFFFFF;
  }
  v18 = ((v13 >> 8) | v13 & 0xFF0000) >> 8;
  v170 = v18;
  v19 = gajRop3[(unsigned __int16)(v13 >> 8) >> 8] | gajRop3[BYTE1(v18)];
  v113 = (unsigned __int8)gajRop3[(unsigned __int16)(v13 >> 8) >> 8] | (unsigned __int8)gajRop3[BYTE1(v18)];
  v102 = v19 & 0xD4;
  if ( (v19 & 0xD4) == 0 && (unsigned __int8)v18 == BYTE1(v18) )
  {
    v15 = NtGdiPatBlt(a1, a2, a3, a4, a5, v13);
    goto LABEL_235;
  }
  v99[1] = 0LL;
  v99[0] = (DC *)HmgLockEx(a1, 1LL, 0LL);
  if ( v99[0] && !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v99) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v99[0] + 3);
    v99[0] = 0LL;
  }
  if ( ((gajRop3[(unsigned __int8)v13] | gajRop3[BYTE1(v13)]) & 2) != 0 && v13 != 16711778 && v13 != 66 )
    bSpDwmValidateSurface((struct XDCOBJ *)v99, a2, a3, v103, v106);
  v100 = 0LL;
  v101 = 0LL;
  v20 = HmgLockEx(a6, 1LL, 0LL);
  v100 = (DC *)v20;
  v21 = (DC *)v20;
  if ( v20 )
  {
    if ( HIDWORD(v101) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v20 + 48) + 56LL) & 0x8000) == 0 )
      {
LABEL_18:
        _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
LABEL_21:
        v100 = 0LL;
        goto LABEL_22;
      }
      v22 = *(_DWORD *)(v20 + 2504);
      if ( v22 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v21 = v100;
        goto LABEL_18;
      }
    }
    if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v100) )
      goto LABEL_22;
    _InterlockedDecrement((volatile signed __int32 *)v100 + 3);
    goto LABEL_21;
  }
LABEL_22:
  bSpDwmValidateSurface((struct XDCOBJ *)&v100, a7, a8, a9, a10);
  v23 = v99[0];
  if ( v99[0] )
  {
    if ( (*((_DWORD *)v99[0] + 9) & 0x10000) == 0 )
    {
      v24 = *((_QWORD *)v99[0] + 10);
      if ( (*(_DWORD *)(v24 + 8) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v99[0], *(_QWORD *)(v24 + 16));
        v23 = v99[0];
      }
    }
    v25 = v102;
    if ( v23 && (*((_DWORD *)v23 + 9) & 0x10000) == 0 && (v100 || !v102) )
    {
      v127 = 0LL;
      memset(v125, 0, sizeof(v125));
      v128 = 0;
      v129 = 0;
      v134 = 0LL;
      v136 = 0LL;
      v126 = 0LL;
      v132 = 0;
      v130 = 0LL;
      v131 = 0LL;
      v137 = 0LL;
      v140 = 0LL;
      v138 = 0LL;
      v139 = 0LL;
      v143 = 0LL;
      v141 = 0LL;
      v142 = 0LL;
      v133 = 0LL;
      v135 = 0LL;
      if ( v102 )
        DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v125, (struct XDCOBJ *)v99, (struct XDCOBJ *)&v100);
      else
        DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v125, v99);
      if ( (v132 & 1) == 0 )
      {
        EngSetLastError(8u);
        v15 = 0;
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v125);
        v26 = v100;
        goto LABEL_231;
      }
      v27 = v99[0];
      v28 = v100;
      if ( v99[0] )
      {
        if ( !*((_QWORD *)v99[0] + 64) )
          goto LABEL_223;
        if ( (*((_DWORD *)v99[0] + 9) & 0x5000) != 0x1000 )
        {
          if ( v100 )
          {
            v29 = *((_QWORD *)v100 + 64);
            if ( v29 )
            {
              if ( (*((_DWORD *)v100 + 9) & 0x5000) != 0x1000 && (*(_DWORD *)(v29 + 112) & 0x10000000) == 0 )
                goto LABEL_46;
            }
          }
        }
      }
      if ( *((_QWORD *)v99[0] + 64) && (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)&v100) )
      {
        if ( (*((_DWORD *)v28 + 9) & 1) == 0 )
        {
          v15 = 0;
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v125);
          v26 = v100;
          goto LABEL_231;
        }
LABEL_46:
        if ( v25 )
        {
          v30 = (struct SURFACE *)*((_QWORD *)v28 + 64);
          if ( !v30 )
            v30 = SURFACE::pdibDefault;
          if ( *((_DWORD *)v30 + 148) )
          {
            if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v30 + 148) )
              goto LABEL_222;
            v27 = v99[0];
            v28 = v100;
          }
          v31 = *((_DWORD *)v30 + 28);
          if ( (v31 & 0x800) != 0 )
          {
            v32 = UserSurfaceAccessCheck(*((_QWORD *)v30 + 73));
LABEL_56:
            if ( !v32 )
              goto LABEL_222;
            v27 = v99[0];
            v28 = v100;
            goto LABEL_58;
          }
          if ( (v31 & 0x10000000) != 0 )
          {
            v32 = UserScreenAccessCheck(v29, v28);
            goto LABEL_56;
          }
        }
LABEL_58:
        v33 = (struct SURFACE *)*((_QWORD *)v27 + 64);
        if ( !v33 )
          v33 = SURFACE::pdibDefault;
        if ( (*((_DWORD *)v33 + 29) & 8) == 0 && !*((_QWORD *)v33 + 27) || (*((_WORD *)v33 + 51) & 0x200) == 0 )
        {
          v34 = *((_DWORD *)v33 + 28);
          if ( (v34 & 0x800) != 0 )
          {
            v35 = UserSurfaceAccessCheck(*((_QWORD *)v33 + 73));
          }
          else
          {
            if ( (v34 & 0x10000000) == 0 )
              goto LABEL_69;
            v35 = UserScreenAccessCheck(v33, v28);
          }
          if ( v35 )
          {
            v27 = v99[0];
            v28 = v100;
LABEL_69:
            if ( (unsigned __int8)v170 != BYTE1(v170) )
            {
              EngSetLastError(0x57u);
              v15 = 0;
              DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v125);
              v26 = v100;
              goto LABEL_231;
            }
            if ( (a11 < 0 && (v36 = *((_QWORD *)v27 + 10), (*(_DWORD *)(v36 + 312) & 1) != 0)
               || (v36 = *((_QWORD *)v27 + 10), (*(_BYTE *)(v36 + 312) & 9) == 9))
              && a6 != a1 )
            {
              v37 = *(_QWORD *)(v36 + 320);
              v38 = DC::dwSetLayout(v27, -1, 0);
              v27 = v99[0];
              v28 = v100;
              v107 = v37 - v103 - a2;
              v115 = v38;
              v112 = 0x80000000;
            }
            else
            {
              v112 = 0;
            }
            v39 = (SURFACE *)*((_QWORD *)v27 + 64);
            v118 = 0LL;
            if ( v39 )
              v40 = v39;
            else
              v40 = SURFACE::pdibDefault;
            v41 = (SURFACE *)*((_QWORD *)v28 + 64);
            v108 = v40;
            if ( v41 )
              v42 = v41;
            else
              v42 = SURFACE::pdibDefault;
            v43 = *((_QWORD *)v42 + 6);
            v44 = a13;
            v109 = v42;
            if ( !v105 )
              goto LABEL_112;
            v45 = *((_DWORD *)v28 + 9);
            if ( (v45 & 1) == 0
              || (v46 = *((_QWORD *)v28 + 6), (*(_DWORD *)(v46 + 56) & 0x80u) != 0)
              || v46 != *((_QWORD *)v27 + 6)
              && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v99) || v48 != *(_QWORD *)(v47 + 3544))
              || !v43 )
            {
              v105 = 0;
              goto LABEL_112;
            }
            if ( v25 && (v45 & 0x4000) != 0 && v41 != v39 )
            {
              SURFACE::bUnMap(v41, 0LL, 0LL);
              v27 = v99[0];
            }
            if ( (*((_DWORD *)v27 + 9) & 0x4000) != 0 )
              SURFACE::bUnMap(*((SURFACE **)v27 + 64), 0LL, v27);
            GreAcquireSemaphore(*(_QWORD *)(v43 + 72));
            EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v43 + 72), 4LL);
            v119 = *(_QWORD *)(v43 + 80);
            UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v124);
            if ( (a13 & 2) == 0 || !gbForceSoftwareCursor )
              GreMovePointer(*((HDEV *)v42 + 6), -1, -1, 0);
            SURFACE::vSetIncludeSprites(v40);
            v49 = 0;
            if ( v25 && (*((_DWORD *)v100 + 9) & 0x4000) != 0 )
            {
              v50 = v99[0];
              v51 = *((_QWORD *)v100 + 64);
              if ( v51 == *((_QWORD *)v99[0] + 64) )
                goto LABEL_105;
              if ( (unsigned int)SURFACE::Map(v51, 0LL, 0LL) == 2 )
              {
                v49 = 1;
                *((_DWORD *)v100 + 11) |= 1u;
              }
            }
            v50 = v99[0];
LABEL_105:
            if ( (*((_DWORD *)v50 + 9) & 0x4000) != 0
              && (unsigned int)SURFACE::Map(*((_QWORD *)v50 + 64), 0LL, v50) == 2 )
            {
              *((_DWORD *)v99[0] + 11) |= 1u;
              UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v124);
              v15 = v113;
              goto LABEL_199;
            }
            if ( v49 )
            {
              UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v124);
              v15 = v113;
              goto LABEL_199;
            }
            UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v124);
LABEL_112:
            EXFORMOBJ::vInit((EXFORMOBJ *)v149, (struct XDCOBJ *)v99, 0x204u, 0);
            v52 = (struct SURFACE *)*((_QWORD *)v99[0] + 64);
            if ( !v52 )
              v52 = SURFACE::pdibDefault;
            v155 = v52;
            v151 = *((_QWORD *)v52 + 15);
            v152 = *((_QWORD *)v99[0] + 12);
            EXFORMOBJ::vInit((EXFORMOBJ *)&v150, (struct XDCOBJ *)&v100, 0x204u, 0);
            v53 = (struct SURFACE *)*((_QWORD *)v100 + 64);
            if ( !v53 )
              v53 = SURFACE::pdibDefault;
            v156 = v53;
            v54 = *((_QWORD *)v53 + 15);
            v153 = v54;
            v55 = *((_QWORD *)v100 + 12);
            v154 = v55;
            if ( a12 == -1 )
              a12 = *(_DWORD *)(*((_QWORD *)v100 + 10) + 36LL);
            if ( (a13 & 1) != 0 )
            {
              v56 = *(_QWORD *)(*((_QWORD *)v99[0] + 10) + 112LL);
              v118 = v56;
            }
            else
            {
              v56 = v118;
            }
            v57 = v152;
            v58 = v151;
            v59 = *((_QWORD *)v99[0] + 10);
            v60 = *((_DWORD *)v99[0] + 28);
            v116 = v60;
            v61 = *(_DWORD *)(v59 + 32);
            v114 = *(_DWORD *)(v59 + 40);
            v110 = v61;
            if ( !v54 )
            {
              if ( !v151 )
                goto LABEL_126;
              if ( (*(_DWORD *)(v151 + 24) & 0x800) != 0 )
              {
                v62 = *(_QWORD *)(v152 + 80);
                if ( !v62 || v62 == *(_QWORD *)(v152 + 72) )
                  goto LABEL_126;
              }
            }
            if ( !v151 && (*(_DWORD *)(v54 + 24) & 0x800) != 0 )
            {
              v63 = *(_QWORD *)(v152 + 80);
              if ( !v63 )
              {
LABEL_126:
                v158 = xloIdent;
                goto LABEL_174;
              }
              if ( v63 == *(_QWORD *)(v152 + 72) )
              {
                v158 = xloIdent;
                goto LABEL_174;
              }
            }
            if ( v54
              && v151
              && ((v64 = *(_QWORD *)(v54 + 136), v64 == v54)
                ? (v65 = *(_DWORD *)(v54 + 32))
                : (v65 = *(_DWORD *)(v64 + 32)),
                  (v66 = *(_QWORD *)(v151 + 136), v66 == v151)
                ? (v67 = *(_DWORD *)(v151 + 32))
                : (v67 = *(_DWORD *)(v66 + 32)),
                  v65 == v67) )
            {
              v158 = xloIdent;
            }
            else
            {
              v68 = 1;
              if ( (v60 & 7) != 0 && v56 )
              {
                v68 = 0;
              }
              else if ( v54 && v151 )
              {
                v69 = *(_DWORD *)(v54 + 56);
                v120 = v152;
                v123 = v55;
                v121 = v151;
                v117 = v69;
                v122 = ghsemPalette;
                GreAcquireSemaphore(ghsemPalette);
                v70 = xlateTable;
                v71 = 0;
                v72 = v117;
                v111 = xlateTable;
                do
                {
                  v73 = *(_QWORD *)(v54 + 136);
                  if ( v73 == v54 )
                    v74 = *(_DWORD *)(v54 + 32);
                  else
                    v74 = *(_DWORD *)(v73 + 32);
                  if ( *((_DWORD *)v70 + 8 * v72 + 4) == v74 )
                  {
                    v75 = XEPALOBJ::ulTime((XEPALOBJ *)&v121);
                    if ( *(_DWORD *)(v76 + 20) == v75 )
                    {
                      v77 = XEPALOBJ::ulTime((XEPALOBJ *)&v120);
                      if ( *(_DWORD *)(v78 + 28) == v77 )
                      {
                        v79 = *(XLATEOBJ **)(v78 + 8);
                        v158 = v79;
                        flXlate = v79[3].flXlate;
                        if ( (flXlate & 0x6000) == 0 )
                        {
                          if ( (v79->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                            || (v79->flXlate & 4) != 0
                            && a12 == v79[1].iUniq
                            && (v81 = XEPALOBJ::ulTime((XEPALOBJ *)&v123), *(_DWORD *)(v82 + 24) == v81)
                            || (flXlate & 0x100) != 0 && v114 == v79[1].flXlate && v110 == *(_DWORD *)&v79[1].iSrcType )
                          {
                            _InterlockedIncrement((volatile signed __int32 *)v111 + 8 * v72);
                            *(_DWORD *)(v54 + 56) = v72;
                            SEMOBJ::vUnlock((SEMOBJ *)&v122);
                            goto LABEL_174;
                          }
                        }
                        v70 = v111;
                      }
                    }
                  }
                  ++v71;
                  v72 = ((_BYTE)v72 + 1) & 7;
                }
                while ( v71 < 8 );
                v158 = 0LL;
                if ( ghsemPalette )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                  GreReleaseSemaphoreInternal(ghsemPalette);
                }
                v68 = 1;
              }
              XlateObject = CreateXlateObject(v118, v116, v54, v58, v55, v57, v114, v110, a12, 0);
              v158 = (XLATEOBJ *)XlateObject;
              if ( !XlateObject )
                goto LABEL_197;
              if ( v68 && v54 && v58 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                EXLATEOBJ::vAddToCache((__int64)&v158, v54, v58, v55, v57);
            }
LABEL_174:
            v171 |= 2u;
            v84 = v113;
            if ( (v113 & 0xE8) != 0 )
            {
              v159 = (char *)v99[0] + 1560;
              v85 = *((_QWORD *)v99[0] + 10);
              v86 = *(_DWORD *)(v85 + 8);
              if ( (v86 & 1) != 0 || (*((_DWORD *)v99[0] + 83) & 1) != 0 )
              {
                *(_DWORD *)(v85 + 8) = v86 & 0xFFFFFFFE;
                *((_DWORD *)v99[0] + 83) &= ~1u;
                EBRUSHOBJ::vInitBrush(v159, v99[0], *((_QWORD *)v99[0] + 18), v152, v151, v155, 1);
              }
              v169 = *((_QWORD *)v99[0] + 194);
            }
            else
            {
              v159 = 0LL;
            }
            v157 = 0LL;
            if ( (*(_DWORD *)(v150 + 32) & 1) != 0 )
            {
              v165 = a7;
              v167 = a9 + a7;
              v166 = a8;
              v168 = a8 + a10;
              if ( (*(_BYTE *)(v150 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v150, &v165, 2LL) )
              {
                v25 = v102;
                if ( v102 && (unsigned int)ERECTL::bEmpty((ERECTL *)&v165) )
                  goto LABEL_198;
                if ( (*(_DWORD *)(*(_QWORD *)v149 + 32LL) & 1) == 0 )
                {
                  BLTRECORD::TrgPlg((BLTRECORD *)v149, v107, v104, v103, v106);
                  v15 = BLTRECORD::bRotate(
                          v149,
                          (struct DCOBJ *)v99,
                          &v100,
                          v84,
                          *(_BYTE *)(*((_QWORD *)v99[0] + 10) + 75LL));
LABEL_198:
                  v42 = v109;
                  v40 = v108;
                  v44 = a13;
LABEL_199:
                  if ( v112 < 0 )
                    DC::dwSetLayout(v99[0], -1, v115);
                  if ( v105 )
                  {
                    SURFACE::vClearIncludeSprites(v40);
                    if ( v25 && (*((_DWORD *)v100 + 9) & 0x4000) != 0 )
                    {
                      v92 = (SURFACE *)*((_QWORD *)v100 + 64);
                      v93 = v99[0];
                      if ( v92 == *((SURFACE **)v99[0] + 64) )
                        goto LABEL_207;
                      SURFACE::bUnMap(v92, 0LL, 0LL);
                    }
                    v93 = v99[0];
LABEL_207:
                    if ( (*((_DWORD *)v93 + 9) & 0x4000) != 0 )
                      SURFACE::bUnMap(*((SURFACE **)v93 + 64), 0LL, v93);
                    UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v145);
                    if ( (v44 & 2) == 0 || !gbForceSoftwareCursor )
                      GreMovePointer(*((HDEV *)v42 + 6), v119, HIDWORD(v119), 0);
                    EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()", *(_QWORD *)(v43 + 72));
                    GreReleaseSemaphoreInternal(*(_QWORD *)(v43 + 72));
                    if ( v25 && (*((_DWORD *)v100 + 9) & 0x4000) != 0 )
                    {
                      v94 = v99[0];
                      v95 = *((_QWORD *)v100 + 64);
                      if ( v95 == *((_QWORD *)v99[0] + 64) )
                        goto LABEL_218;
                      if ( (unsigned int)SURFACE::Map(v95, 0LL, 0LL) == 2 )
                        *((_DWORD *)v100 + 11) |= 1u;
                    }
                    v94 = v99[0];
LABEL_218:
                    if ( (*((_DWORD *)v94 + 9) & 0x4000) != 0
                      && (unsigned int)SURFACE::Map(*((_QWORD *)v94 + 64), 0LL, v94) == 2 )
                    {
                      *((_DWORD *)v99[0] + 11) |= 1u;
                    }
                    UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v145);
                    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v125);
                    v26 = v100;
LABEL_231:
                    if ( !v26 )
                      goto LABEL_233;
                    goto LABEL_232;
                  }
LABEL_226:
                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v125);
                  v26 = v100;
                  goto LABEL_231;
                }
                v87 = v107;
                v88 = v107 + v103;
                v89 = v104;
                v90 = v104 + v106;
                v161 = v107;
                v164 = v104 + v106;
                v162 = v104;
                v163 = v107 + v103;
                if ( (*(_BYTE *)(*(_QWORD *)v149 + 32LL) & 0x43) == 0x43 )
                {
LABEL_191:
                  v91 = *(_BYTE *)(*((_QWORD *)v99[0] + 10) + 75LL);
                  if ( v91 != 4 && v167 - v165 == v88 - v87 && v168 - v166 == v90 - v89 )
                    v15 = BLTRECORD::bBitBlt((BLTRECORD *)v149, (struct DCOBJ *)v99, (struct DCOBJ *)&v100, v84);
                  else
                    v15 = BLTRECORD::bStretch((BLTRECORD *)v149, (struct DCOBJ *)v99, (struct DCOBJ *)&v100, v84, v91);
                  goto LABEL_198;
                }
                if ( (unsigned int)bCvtPts1(*(_QWORD *)v149, &v161, 2LL) )
                {
                  v90 = v164;
                  v88 = v163;
                  v89 = v162;
                  v87 = v161;
                  goto LABEL_191;
                }
              }
            }
            EngSetLastError(0x57u);
LABEL_197:
            v25 = v102;
            v15 = 0;
            goto LABEL_198;
          }
        }
LABEL_222:
        EngSetLastError(5u);
        v15 = 0;
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v125);
        v26 = v100;
        goto LABEL_231;
      }
LABEL_223:
      if ( (*((_DWORD *)v27 + 9) & 0xE0) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v144, (struct XDCOBJ *)v99, 0x204u);
        v146.y = v104;
        v147 = a2 + v103;
        v146.x = a2;
        v148 = v104 + v106;
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v144, &v146) )
        {
          ERECTL::vOrder((ERECTL *)&v146);
          XDCOBJ::vAccumulate((XDCOBJ *)v99, (struct ERECTL *)&v146);
        }
      }
      goto LABEL_226;
    }
  }
  else
  {
    v25 = v102;
  }
  EngSetLastError(6u);
  v26 = v100;
  if ( !v25 )
    goto LABEL_231;
  if ( !v100 )
  {
    v15 = 0;
    goto LABEL_231;
  }
LABEL_232:
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v100);
  _InterlockedDecrement((volatile signed __int32 *)v100 + 3);
LABEL_233:
  if ( v99[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v99);
    _InterlockedDecrement((volatile signed __int32 *)v99[0] + 3);
  }
LABEL_235:
  v96 = v171;
  if ( (v171 & 0x20007) == 0 )
    return v15;
  if ( (v171 & 0x20000) != 0 )
  {
    if ( v157 )
    {
      DEC_SHARE_REF_CNT(v157);
      v96 = v171;
    }
    v157 = 0LL;
  }
  if ( (v96 & 2) != 0 && v158 )
  {
    cEntries = (int)v158[1].cEntries;
    if ( (int)cEntries < 0 )
    {
      if ( (_DWORD)cEntries != -1 )
        goto LABEL_247;
      FreeThreadBufferWithTag(v158, cEntries);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
    }
    v96 = v171;
  }
LABEL_247:
  if ( (v96 & 4) != 0 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v160);
  return v15;
}
