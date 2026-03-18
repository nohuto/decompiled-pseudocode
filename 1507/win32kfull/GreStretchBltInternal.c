/*
 * XREFs of GreStretchBltInternal @ 0x1C009DE20
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 *     BltIcon @ 0x1C0051658 (BltIcon.c)
 *     _InternalGetIconInfo @ 0x1C0095874 (_InternalGetIconInfo.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0099AD8 (GreStretchDIBitsInternal.c)
 *     NtGdiStretchBlt @ 0x1C00E18A0 (NtGdiStretchBlt.c)
 *     DxgkEngBltViaGDI @ 0x1C0264220 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0004C78 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0013D08 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00175C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00182A4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00199F4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0021A60 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0025BE0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0026984 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0032C68 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     GreMovePointer @ 0x1C0040870 (GreMovePointer.c)
 *     NtGdiPatBlt @ 0x1C00868F0 (NtGdiPatBlt.c)
 *     bCvtPts1 @ 0x1C00979C4 (bCvtPts1.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009F030 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009F674 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00A0228 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C00FAA04 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C00FAA44 (--1UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 *     ?bHasSurface@XDCOBJ@@QEAAHXZ @ 0x1C026142C (-bHasSurface@XDCOBJ@@QEAAHXZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02653C4 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreStretchBltInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        LONG a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  unsigned int v13; // ebx
  unsigned int v15; // r12d
  unsigned int v18; // r8d
  int v19; // eax
  char v20; // r13
  int v21; // r13d
  bool v22; // zf
  LONG v23; // ebx
  DC *v24; // rcx
  __int64 v25; // rdx
  DC *v26; // r9
  __int64 v27; // r8
  __int64 v28; // rcx
  struct SURFACE *v29; // rbx
  int v30; // eax
  int v31; // eax
  struct SURFACE *v32; // rcx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rbx
  __int64 v36; // rbx
  unsigned int v37; // eax
  SURFACE *v38; // r11
  SURFACE *v39; // rsi
  SURFACE *v40; // r10
  struct SURFACE *v41; // r14
  __int64 v42; // r13
  char v43; // r15
  int v44; // ebx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // r8
  int v48; // edi
  int v49; // ebx
  DC *v50; // r8
  __int64 v51; // rcx
  struct SURFACE *v52; // rax
  struct SURFACE *v53; // rbx
  __int64 v54; // rbx
  __int64 v55; // r15
  struct _POINTL v56; // r9
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
  LONG v89; // r11d
  int v90; // edx
  unsigned __int8 v91; // r8
  SURFACE *v92; // rax
  DC *v93; // rcx
  DC *v94; // r8
  __int64 v95; // rcx
  char v96; // al
  __int64 cEntries; // rdx
  int v101; // [rsp+58h] [rbp-A8h]
  int v102; // [rsp+60h] [rbp-A0h]
  int v103; // [rsp+64h] [rbp-9Ch]
  struct SURFACE *v104; // [rsp+68h] [rbp-98h]
  DC *v105[6]; // [rsp+70h] [rbp-90h] BYREF
  SURFACE *v106; // [rsp+A0h] [rbp-60h]
  unsigned int v107; // [rsp+A8h] [rbp-58h]
  int v108; // [rsp+ACh] [rbp-54h]
  int v109; // [rsp+B0h] [rbp-50h]
  unsigned int v110; // [rsp+B4h] [rbp-4Ch]
  int v111; // [rsp+B8h] [rbp-48h]
  int v112; // [rsp+BCh] [rbp-44h]
  unsigned int v113; // [rsp+C0h] [rbp-40h]
  _QWORD v114[2]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v115[6]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v116; // [rsp+108h] [rbp+8h]
  __int64 v117; // [rsp+110h] [rbp+10h] BYREF
  __int64 v118; // [rsp+118h] [rbp+18h] BYREF
  __int64 v119; // [rsp+120h] [rbp+20h] BYREF
  __int64 v120; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v121[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v122[16]; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v123[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v124; // [rsp+170h] [rbp+70h]
  __int64 v125; // [rsp+178h] [rbp+78h]
  char v126; // [rsp+180h] [rbp+80h]
  int v127; // [rsp+184h] [rbp+84h]
  int v128; // [rsp+1A8h] [rbp+A8h]
  __int128 v129; // [rsp+1B0h] [rbp+B0h]
  int v130; // [rsp+1C0h] [rbp+C0h]
  __int64 v131[6]; // [rsp+1C8h] [rbp+C8h] BYREF
  _QWORD v132[7]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int128 v133; // [rsp+230h] [rbp+130h]
  __int64 v134; // [rsp+240h] [rbp+140h]
  __int128 v135; // [rsp+250h] [rbp+150h]
  __int64 v136; // [rsp+260h] [rbp+160h]
  struct _POINTL v137; // [rsp+270h] [rbp+170h] BYREF
  int v138; // [rsp+278h] [rbp+178h]
  int v139; // [rsp+27Ch] [rbp+17Ch]
  unsigned __int64 v140[2]; // [rsp+280h] [rbp+180h] BYREF
  unsigned __int64 v141; // [rsp+290h] [rbp+190h] BYREF
  __int64 v142; // [rsp+2A0h] [rbp+1A0h]
  __int64 v143; // [rsp+2A8h] [rbp+1A8h]
  __int64 v144; // [rsp+2B0h] [rbp+1B0h]
  __int64 v145; // [rsp+2B8h] [rbp+1B8h]
  struct SURFACE *v146; // [rsp+2C0h] [rbp+1C0h]
  struct SURFACE *v147; // [rsp+2C8h] [rbp+1C8h]
  __int64 v148; // [rsp+2D0h] [rbp+1D0h]
  XLATEOBJ *v149; // [rsp+2D8h] [rbp+1D8h] BYREF
  char *v150; // [rsp+2E0h] [rbp+1E0h]
  char v151[48]; // [rsp+2E8h] [rbp+1E8h] BYREF
  int v152; // [rsp+318h] [rbp+218h] BYREF
  LONG v153; // [rsp+31Ch] [rbp+21Ch]
  int v154; // [rsp+320h] [rbp+220h]
  int v155; // [rsp+324h] [rbp+224h]
  LONG v156; // [rsp+330h] [rbp+230h] BYREF
  LONG v157; // [rsp+334h] [rbp+234h]
  int v158; // [rsp+338h] [rbp+238h]
  int v159; // [rsp+33Ch] [rbp+23Ch]
  __int64 v160; // [rsp+350h] [rbp+250h]
  unsigned int v161; // [rsp+358h] [rbp+258h]
  int v162; // [rsp+35Ch] [rbp+25Ch]

  v13 = a11 & 0x7FFFFFFF;
  v15 = 1;
  v102 = a2;
  v148 = 0LL;
  v162 = 0;
  v110 = 0;
  v101 = 0;
  if ( (a11 & 0x40000000) != 0 )
  {
    v101 = 1;
    v13 = a11 & 0x3FFFFFFF;
  }
  v18 = ((v13 >> 8) | v13 & 0xFF0000) >> 8;
  v161 = v18;
  v19 = (unsigned __int8)gajRop3[(unsigned __int16)(v13 >> 8) >> 8];
  v20 = v19 | gajRop3[BYTE1(v18)];
  v107 = v19 | (unsigned __int8)gajRop3[BYTE1(v18)];
  v21 = v20 & 0xD4;
  v103 = v21;
  if ( !v21 && (unsigned __int8)v18 == BYTE1(v18) )
  {
    v15 = NtGdiPatBlt(a1, a2, a3, a4, a5, v13);
    goto LABEL_220;
  }
  DCOBJ::DCOBJ((DCOBJ *)v105, a1);
  if ( ((gajRop3[(unsigned __int8)v13] | gajRop3[BYTE1(v13)]) & 2) == 0 || v13 == 16711778 )
  {
    v23 = a3;
  }
  else
  {
    v22 = v13 == 66;
    v23 = a3;
    if ( !v22 )
      bSpDwmValidateSurface((struct XDCOBJ *)v105, a2, a3, a4, a5);
  }
  DCOBJ::DCOBJ((DCOBJ *)v115, a6);
  bSpDwmValidateSurface((struct XDCOBJ *)v115, a7, a8, a9, a10);
  v24 = v105[0];
  if ( !v105[0] )
    goto LABEL_216;
  if ( (*((_DWORD *)v105[0] + 9) & 0x10000) == 0 )
  {
    v25 = *((_QWORD *)v105[0] + 10);
    if ( (*(_DWORD *)(v25 + 8) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v105[0], *(_QWORD *)(v25 + 16));
      v24 = v105[0];
    }
  }
  if ( !v24 || (*((_DWORD *)v24 + 9) & 0x10000) != 0 || !v115[0] && v21 )
  {
LABEL_216:
    EngSetLastError(6u);
    if ( v21 && !v115[0] )
      v15 = 0;
    goto LABEL_219;
  }
  v125 = 0LL;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v131);
  DCOBJ::DCOBJ((DCOBJ *)v132);
  v124 = 0LL;
  memset(v123, 0, sizeof(v123));
  v130 = 0;
  v129 = 0LL;
  v132[6] = 0LL;
  v134 = 0LL;
  v133 = 0LL;
  v136 = 0LL;
  v135 = 0LL;
  v131[0] = 0LL;
  v132[0] = 0LL;
  if ( v21 )
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v123, (struct XDCOBJ *)v105, (struct XDCOBJ *)v115);
  else
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v123, v105);
  if ( (v130 & 1) != 0 )
  {
    v26 = v105[0];
    v27 = v115[0];
    if ( !v105[0]
      || !*((_QWORD *)v105[0] + 64)
      || (*((_DWORD *)v105[0] + 9) & 0x5000) == 0x1000
      || !v115[0]
      || (v28 = *(_QWORD *)(v115[0] + 512LL)) == 0
      || (*(_DWORD *)(v115[0] + 36LL) & 0x5000) == 0x1000
      || (*(_DWORD *)(v28 + 112) & 0x10000000) != 0 )
    {
      if ( !(unsigned int)XDCOBJ::bHasSurface((XDCOBJ *)v105) || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v115) )
      {
        if ( (*((_DWORD *)v26 + 9) & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v122, (struct XDCOBJ *)v105, 0x204u);
          v137.x = a2;
          v138 = a2 + a4;
          v137.y = v23;
          v139 = v23 + a5;
          if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v122, &v137) )
          {
            ERECTL::vOrder((ERECTL *)&v137);
            XDCOBJ::vAccumulate((XDCOBJ *)v105, (struct ERECTL *)&v137);
          }
        }
        goto LABEL_215;
      }
      if ( (*(_DWORD *)(v27 + 36) & 1) == 0 )
      {
        v15 = 0;
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v123);
        goto LABEL_219;
      }
    }
    if ( v21 )
    {
      v29 = *(struct SURFACE **)(v27 + 512);
      if ( !v29 )
        v29 = SURFACE::pdibDefault;
      if ( *((_DWORD *)v29 + 150) )
      {
        if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v29 + 150) )
          goto LABEL_211;
        v26 = v105[0];
        v27 = v115[0];
      }
      v30 = *((_DWORD *)v29 + 28);
      if ( (v30 & 0x800) != 0 )
      {
        v31 = UserSurfaceAccessCheck(*((_QWORD *)v29 + 74));
LABEL_45:
        if ( !v31 )
          goto LABEL_211;
        v26 = v105[0];
        v27 = v115[0];
        goto LABEL_47;
      }
      if ( (v30 & 0x10000000) != 0 )
      {
        v31 = UserScreenAccessCheck(v28);
        goto LABEL_45;
      }
    }
LABEL_47:
    v32 = (struct SURFACE *)*((_QWORD *)v26 + 64);
    if ( !v32 )
      v32 = SURFACE::pdibDefault;
    if ( (*((_DWORD *)v32 + 29) & 8) == 0 && !*((_QWORD *)v32 + 27) || (*((_WORD *)v32 + 51) & 0x200) == 0 )
    {
      v33 = *((_DWORD *)v32 + 28);
      if ( (v33 & 0x800) != 0 )
      {
        v34 = UserSurfaceAccessCheck(*((_QWORD *)v32 + 74));
      }
      else
      {
        if ( (v33 & 0x10000000) == 0 )
          goto LABEL_58;
        v34 = UserScreenAccessCheck(v32);
      }
      if ( v34 )
      {
        v26 = v105[0];
        v27 = v115[0];
LABEL_58:
        if ( (unsigned __int8)v161 != BYTE1(v161) )
        {
          EngSetLastError(0x57u);
          v15 = 0;
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v123);
          goto LABEL_219;
        }
        if ( (a11 < 0 && (v35 = *((_QWORD *)v26 + 10), (*(_DWORD *)(v35 + 312) & 1) != 0)
           || (v35 = *((_QWORD *)v26 + 10), (*(_BYTE *)(v35 + 312) & 9) == 9))
          && a6 != a1 )
        {
          v36 = *(_QWORD *)(v35 + 320);
          v37 = DC::dwSetLayout(v26, -1, 0);
          v26 = v105[0];
          v27 = v115[0];
          v102 = v36 - a4 - a2;
          v110 = v37;
          v109 = 0x80000000;
        }
        else
        {
          v109 = 0;
        }
        v38 = (SURFACE *)*((_QWORD *)v26 + 64);
        v137 = 0LL;
        if ( v38 )
          v39 = v38;
        else
          v39 = SURFACE::pdibDefault;
        v40 = *(SURFACE **)(v27 + 512);
        v106 = v39;
        if ( v40 )
          v41 = v40;
        else
          v41 = SURFACE::pdibDefault;
        v42 = *((_QWORD *)v41 + 6);
        v43 = a13;
        v104 = v41;
        if ( !v101 )
          goto LABEL_101;
        v44 = *(_DWORD *)(v27 + 36);
        if ( (v44 & 1) == 0
          || (v45 = *(_QWORD *)(v27 + 48), (*(_DWORD *)(v45 + 56) & 0x80u) != 0)
          || v45 != *((_QWORD *)v26 + 6)
          && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v105) || v46 != *(_QWORD *)(v47 + 3544))
          || !v42 )
        {
          v101 = 0;
          goto LABEL_101;
        }
        v48 = v103;
        if ( v103 && (v44 & 0x4000) != 0 && v40 != v38 )
        {
          SURFACE::bUnMap(v40, 0LL, 0LL);
          v26 = v105[0];
        }
        if ( (*((_DWORD *)v26 + 9) & 0x4000) != 0 )
          SURFACE::bUnMap(*((SURFACE **)v26 + 64), 0LL, v26);
        GreAcquireSemaphore(*(_QWORD *)(v42 + 72));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v42 + 72), 4LL);
        v116 = *(_QWORD *)(v42 + 80);
        UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v121);
        if ( (a13 & 2) == 0 || !gbForceSoftwareCursor )
          GreMovePointer(*((HDEV *)v41 + 6), -1, -1, 0);
        SURFACE::vSetIncludeSprites(v39);
        v49 = 0;
        if ( v103 && (*(_DWORD *)(v115[0] + 36LL) & 0x4000) != 0 )
        {
          v50 = v105[0];
          v51 = *(_QWORD *)(v115[0] + 512LL);
          if ( v51 == *((_QWORD *)v105[0] + 64) )
            goto LABEL_94;
          if ( (unsigned int)SURFACE::Map(v51, 0LL, 0LL) == 2 )
          {
            v49 = 1;
            *(_DWORD *)(v115[0] + 44LL) |= 1u;
          }
        }
        v50 = v105[0];
LABEL_94:
        if ( (*((_DWORD *)v50 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v50 + 64), 0LL, v50) == 2 )
        {
          *((_DWORD *)v105[0] + 11) |= 1u;
          UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v121);
          v15 = v107;
          goto LABEL_188;
        }
        if ( v49 )
        {
          UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v121);
          v15 = v107;
          goto LABEL_188;
        }
        UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v121);
LABEL_101:
        EXFORMOBJ::vInit((EXFORMOBJ *)v140, (struct XDCOBJ *)v105, 0x204u, 0);
        v52 = (struct SURFACE *)*((_QWORD *)v105[0] + 64);
        if ( !v52 )
          v52 = SURFACE::pdibDefault;
        v146 = v52;
        v142 = *((_QWORD *)v52 + 15);
        v143 = *((_QWORD *)v105[0] + 12);
        EXFORMOBJ::vInit((EXFORMOBJ *)&v141, (struct XDCOBJ *)v115, 0x204u, 0);
        v53 = *(struct SURFACE **)(v115[0] + 512LL);
        if ( !v53 )
          v53 = SURFACE::pdibDefault;
        v147 = v53;
        v54 = *((_QWORD *)v53 + 15);
        v144 = v54;
        v55 = *(_QWORD *)(v115[0] + 96LL);
        v145 = v55;
        if ( a12 == -1 )
          a12 = *(_DWORD *)(*(_QWORD *)(v115[0] + 80LL) + 36LL);
        if ( (a13 & 1) != 0 )
        {
          v56 = *(struct _POINTL *)(*((_QWORD *)v105[0] + 10) + 112LL);
          v137 = v56;
        }
        else
        {
          v56 = v137;
        }
        v57 = v143;
        v58 = v142;
        v59 = *((_QWORD *)v105[0] + 10);
        v60 = *((_DWORD *)v105[0] + 28);
        v112 = v60;
        v61 = *(_DWORD *)(v59 + 32);
        v111 = *(_DWORD *)(v59 + 40);
        v108 = v61;
        if ( !v54 )
        {
          if ( !v142 )
            goto LABEL_115;
          if ( (*(_DWORD *)(v142 + 24) & 0x800) != 0 )
          {
            v62 = *(_QWORD *)(v143 + 80);
            if ( !v62 || v62 == *(_QWORD *)(v143 + 72) )
              goto LABEL_115;
          }
        }
        if ( !v142 && (*(_DWORD *)(v54 + 24) & 0x800) != 0 )
        {
          v63 = *(_QWORD *)(v143 + 80);
          if ( !v63 )
          {
LABEL_115:
            v149 = xloIdent;
            goto LABEL_163;
          }
          if ( v63 == *(_QWORD *)(v143 + 72) )
          {
            v149 = xloIdent;
            goto LABEL_163;
          }
        }
        if ( v54
          && v142
          && ((v64 = *(_QWORD *)(v54 + 136), v64 == v54) ? (v65 = *(_DWORD *)(v54 + 32)) : (v65 = *(_DWORD *)(v64 + 32)),
              (v66 = *(_QWORD *)(v142 + 136), v66 == v142)
            ? (v67 = *(_DWORD *)(v142 + 32))
            : (v67 = *(_DWORD *)(v66 + 32)),
              v65 == v67) )
        {
          v149 = xloIdent;
        }
        else
        {
          v68 = 1;
          if ( (v60 & 7) != 0 && *(_QWORD *)&v56 )
          {
            v68 = 0;
          }
          else if ( v54 && v142 )
          {
            v69 = *(_DWORD *)(v54 + 56);
            v119 = v143;
            v120 = v55;
            v118 = v142;
            v113 = v69;
            v117 = ghsemPalette;
            GreAcquireSemaphore(ghsemPalette);
            v70 = xlateTable;
            v71 = 0;
            v72 = v113;
            v114[0] = xlateTable;
            do
            {
              v73 = *(_QWORD *)(v54 + 136);
              if ( v73 == v54 )
                v74 = *(_DWORD *)(v54 + 32);
              else
                v74 = *(_DWORD *)(v73 + 32);
              if ( *((_DWORD *)v70 + 8 * v72 + 4) == v74 )
              {
                v75 = XEPALOBJ::ulTime((XEPALOBJ *)&v118);
                if ( *(_DWORD *)(v76 + 20) == v75 )
                {
                  v77 = XEPALOBJ::ulTime((XEPALOBJ *)&v119);
                  if ( *(_DWORD *)(v78 + 28) == v77 )
                  {
                    v79 = *(XLATEOBJ **)(v78 + 8);
                    v149 = v79;
                    flXlate = v79[3].flXlate;
                    if ( (flXlate & 0x6000) == 0 )
                    {
                      if ( (v79->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                        || (v79->flXlate & 4) != 0
                        && a12 == v79[1].iUniq
                        && (v81 = XEPALOBJ::ulTime((XEPALOBJ *)&v120), *(_DWORD *)(v82 + 24) == v81)
                        || (flXlate & 0x100) != 0 && v111 == v79[1].flXlate && v108 == *(_DWORD *)&v79[1].iSrcType )
                      {
                        _InterlockedIncrement((volatile signed __int32 *)(v114[0] + 32LL * v72));
                        *(_DWORD *)(v54 + 56) = v72;
                        SEMOBJ::vUnlock((SEMOBJ *)&v117);
                        goto LABEL_163;
                      }
                    }
                    v70 = (struct _XLATETABLE near *)v114[0];
                  }
                }
              }
              ++v71;
              v72 = ((_BYTE)v72 + 1) & 7;
            }
            while ( v71 < 8 );
            v149 = 0LL;
            if ( ghsemPalette )
            {
              EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
              GreReleaseSemaphoreInternal(ghsemPalette);
            }
            v68 = 1;
          }
          XlateObject = CreateXlateObject(*(void **)&v137, v112, v54, v58, v55, v57, v111, v108, a12, 0);
          v149 = (XLATEOBJ *)XlateObject;
          if ( !XlateObject )
            goto LABEL_186;
          if ( v68 && v54 && v58 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
            EXLATEOBJ::vAddToCache((__int64)&v149, v54, v58, v55, v57);
        }
LABEL_163:
        v162 |= 2u;
        v84 = v107;
        if ( (v107 & 0xE8) != 0 )
        {
          v150 = (char *)v105[0] + 1584;
          v85 = *((_QWORD *)v105[0] + 10);
          v86 = *(_DWORD *)(v85 + 8);
          if ( (v86 & 1) != 0 || (*((_DWORD *)v105[0] + 83) & 1) != 0 )
          {
            *(_DWORD *)(v85 + 8) = v86 & 0xFFFFFFFE;
            *((_DWORD *)v105[0] + 83) &= ~1u;
            EBRUSHOBJ::vInitBrush(v150, v105[0], *((_QWORD *)v105[0] + 18), v143, v142);
          }
          v160 = *((_QWORD *)v105[0] + 197);
        }
        else
        {
          v150 = 0LL;
        }
        v148 = 0LL;
        if ( (*(_DWORD *)(v141 + 32) & 1) != 0 )
        {
          v156 = a7;
          v158 = a9 + a7;
          v157 = a8;
          v159 = a8 + a10;
          if ( (*(_BYTE *)(v141 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v141, &v156, 2LL) )
          {
            v48 = v103;
            if ( v103 && (unsigned int)ERECTL::bEmpty((ERECTL *)&v156) )
              goto LABEL_187;
            if ( (*(_DWORD *)(v140[0] + 32) & 1) == 0 )
            {
              BLTRECORD::TrgPlg((BLTRECORD *)v140, v102, a3, a4, a5);
              v15 = BLTRECORD::bRotate(
                      (BLTRECORD *)v140,
                      (struct DCOBJ *)v105,
                      (struct DCOBJ *)v115,
                      v84,
                      *(_BYTE *)(*((_QWORD *)v105[0] + 10) + 75LL));
LABEL_187:
              v41 = v104;
              v39 = v106;
              v43 = a13;
LABEL_188:
              if ( v109 < 0 )
                DC::dwSetLayout(v105[0], -1, v110);
              if ( v101 )
              {
                SURFACE::vClearIncludeSprites(v39);
                if ( v48 && (*(_DWORD *)(v115[0] + 36LL) & 0x4000) != 0 )
                {
                  v92 = *(SURFACE **)(v115[0] + 512LL);
                  v93 = v105[0];
                  if ( v92 == *((SURFACE **)v105[0] + 64) )
                    goto LABEL_196;
                  SURFACE::bUnMap(v92, 0LL, 0LL);
                }
                v93 = v105[0];
LABEL_196:
                if ( (*((_DWORD *)v93 + 9) & 0x4000) != 0 )
                  SURFACE::bUnMap(*((SURFACE **)v93 + 64), 0LL, v93);
                UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v114);
                if ( (v43 & 2) == 0 || !gbForceSoftwareCursor )
                  GreMovePointer(*((HDEV *)v41 + 6), v116, SHIDWORD(v116), 0);
                EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()", *(_QWORD *)(v42 + 72));
                GreReleaseSemaphoreInternal(*(_QWORD *)(v42 + 72));
                if ( v48 && (*(_DWORD *)(v115[0] + 36LL) & 0x4000) != 0 )
                {
                  v94 = v105[0];
                  v95 = *(_QWORD *)(v115[0] + 512LL);
                  if ( v95 == *((_QWORD *)v105[0] + 64) )
                    goto LABEL_207;
                  if ( (unsigned int)SURFACE::Map(v95, 0LL, 0LL) == 2 )
                    *(_DWORD *)(v115[0] + 44LL) |= 1u;
                }
                v94 = v105[0];
LABEL_207:
                if ( (*((_DWORD *)v94 + 9) & 0x4000) != 0
                  && (unsigned int)SURFACE::Map(*((_QWORD *)v94 + 64), 0LL, v94) == 2 )
                {
                  *((_DWORD *)v105[0] + 11) |= 1u;
                }
                UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v114);
                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v123);
                goto LABEL_219;
              }
LABEL_215:
              DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v123);
              goto LABEL_219;
            }
            v87 = v102;
            v88 = v102 + a4;
            v89 = a3;
            v90 = a3 + a5;
            v152 = v102;
            v155 = a3 + a5;
            v153 = a3;
            v154 = v102 + a4;
            if ( (*(_BYTE *)(v140[0] + 32) & 0x43) == 0x43 )
            {
LABEL_180:
              v91 = *(_BYTE *)(*((_QWORD *)v105[0] + 10) + 75LL);
              if ( v91 != 4 && v158 - v156 == v88 - v87 && v159 - v157 == v90 - v89 )
                v15 = BLTRECORD::bBitBlt((BLTRECORD *)v140, (struct DCOBJ *)v105, (struct DCOBJ *)v115, v84);
              else
                v15 = BLTRECORD::bStretch((BLTRECORD *)v140, (struct DCOBJ *)v105, (struct DCOBJ *)v115, v84, v91);
              goto LABEL_187;
            }
            if ( (unsigned int)bCvtPts1(v140[0], &v152, 2LL) )
            {
              v90 = v155;
              v88 = v154;
              v89 = v153;
              v87 = v152;
              goto LABEL_180;
            }
          }
        }
        EngSetLastError(0x57u);
LABEL_186:
        v48 = v103;
        v15 = 0;
        goto LABEL_187;
      }
    }
LABEL_211:
    EngSetLastError(5u);
    v15 = 0;
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v123);
    goto LABEL_219;
  }
  EngSetLastError(8u);
  v15 = 0;
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v123);
LABEL_219:
  DCOBJ::~DCOBJ((DCOBJ *)v115);
  DCOBJ::~DCOBJ((DCOBJ *)v105);
LABEL_220:
  v96 = v162;
  if ( (v162 & 0x20007) == 0 )
    return v15;
  if ( (v162 & 0x20000) != 0 )
  {
    if ( v148 )
    {
      DEC_SHARE_REF_CNT(v148);
      v96 = v162;
    }
    v148 = 0LL;
  }
  if ( (v96 & 2) != 0 && v149 )
  {
    cEntries = (int)v149[1].cEntries;
    if ( (int)cEntries < 0 )
    {
      if ( (_DWORD)cEntries != -1 )
        goto LABEL_232;
      FreeThreadBufferWithTag(v149);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
    }
    v96 = v162;
  }
LABEL_232:
  if ( (v96 & 4) != 0 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v151);
  return v15;
}
