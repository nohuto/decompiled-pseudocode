/*
 * XREFs of GreStretchBltInternal @ 0x1C004DDF0
 * Callers:
 *     _InternalGetIconInfo @ 0x1C003C054 (_InternalGetIconInfo.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     BltIcon @ 0x1C00B0F38 (BltIcon.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     NtGdiStretchBlt @ 0x1C01014D0 (NtGdiStretchBlt.c)
 *     DxgkEngBltViaGDI @ 0x1C0260390 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00018FC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00394D4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C003A654 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C003A910 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     bCvtPts1 @ 0x1C003BEC0 (bCvtPts1.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0041BD0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00449C0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00453F0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00460FC (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0048E14 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C004CCC0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004D800 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 *     GreMovePointer @ 0x1C00DB180 (GreMovePointer.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0125340 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0125380 (--1UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01BF4C8 (--1SEMOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C026175C (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C027FD8C (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreStretchBltInternal(
        HDC a1,
        int a2,
        int a3,
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
  unsigned __int64 v26; // r8
  __int64 v27; // rdx
  struct DC *v28; // r8
  __int64 v29; // r9
  DC *v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct SURFACE *v33; // rbx
  int v34; // eax
  int v35; // eax
  struct SURFACE *v36; // rcx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  struct DC *v40; // r8
  __int64 v41; // r9
  __int64 v42; // rbx
  __int64 v43; // rbx
  unsigned int v44; // eax
  SURFACE *v45; // r11
  SURFACE *v46; // rsi
  SURFACE *v47; // r10
  struct SURFACE *v48; // r14
  __int64 v49; // r13
  char v50; // r15
  int v51; // ebx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // r8
  int v55; // edi
  int v56; // ebx
  DC *v57; // r8
  __int64 v58; // rcx
  struct SURFACE *v59; // rax
  struct SURFACE *v60; // rbx
  __int64 v61; // rbx
  __int64 v62; // r15
  __int64 v63; // r14
  __int64 v64; // rdi
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // edx
  __int64 v72; // rax
  int v73; // ecx
  int v74; // esi
  unsigned int v75; // eax
  struct _XLATETABLE near *v76; // rdx
  unsigned int v77; // r11d
  unsigned int v78; // r10d
  __int64 v79; // rax
  int v80; // ecx
  int v81; // eax
  __int64 v82; // r8
  int v83; // eax
  __int64 v84; // r8
  XLATEOBJ *v85; // rdx
  FLONG flXlate; // r9d
  int v87; // eax
  __int64 v88; // r8
  __int64 XlateObject; // rax
  unsigned int v90; // r15d
  __int64 v91; // r8
  int v92; // edx
  LONG v93; // r14d
  LONG v94; // esi
  int v95; // r11d
  int v96; // ebx
  int v97; // r10d
  int v98; // r9d
  __int64 v99; // rcx
  SURFACE *v100; // rax
  DC *v101; // rcx
  DC *v102; // r8
  __int64 v103; // rcx
  __int64 v104; // rdx
  struct DC *v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  struct DC *v108; // r8
  __int64 v109; // r9
  char v110; // al
  __int64 cEntries; // rdx
  int v115; // [rsp+58h] [rbp-A8h]
  int v116; // [rsp+60h] [rbp-A0h]
  int v117; // [rsp+64h] [rbp-9Ch]
  DC *v118[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v119[32]; // [rsp+78h] [rbp-88h] BYREF
  struct SURFACE *v120; // [rsp+98h] [rbp-68h]
  SURFACE *v121; // [rsp+A0h] [rbp-60h]
  int v122; // [rsp+A8h] [rbp-58h]
  int v123; // [rsp+ACh] [rbp-54h]
  int v124; // [rsp+B0h] [rbp-50h]
  unsigned int v125; // [rsp+B4h] [rbp-4Ch]
  unsigned int v126; // [rsp+B8h] [rbp-48h]
  DC *v127[2]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v128[32]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v129; // [rsp+F0h] [rbp-10h]
  int v130; // [rsp+F4h] [rbp-Ch]
  _QWORD v131[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v132; // [rsp+108h] [rbp+8h]
  __int64 v133; // [rsp+110h] [rbp+10h] BYREF
  __int64 v134; // [rsp+118h] [rbp+18h] BYREF
  __int64 v135; // [rsp+120h] [rbp+20h] BYREF
  __int64 v136; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v137[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v138[16]; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v139[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v140; // [rsp+170h] [rbp+70h]
  __int64 v141; // [rsp+178h] [rbp+78h]
  char v142; // [rsp+180h] [rbp+80h]
  int v143; // [rsp+184h] [rbp+84h]
  int v144; // [rsp+1A8h] [rbp+A8h]
  __int128 v145; // [rsp+1B0h] [rbp+B0h]
  int v146; // [rsp+1C0h] [rbp+C0h]
  __int64 v147[6]; // [rsp+1C8h] [rbp+C8h] BYREF
  _QWORD v148[7]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int128 v149; // [rsp+230h] [rbp+130h]
  __int64 v150; // [rsp+240h] [rbp+140h]
  __int128 v151; // [rsp+250h] [rbp+150h]
  __int64 v152; // [rsp+260h] [rbp+160h]
  DC *v153; // [rsp+270h] [rbp+170h] BYREF
  int v154; // [rsp+278h] [rbp+178h]
  int v155; // [rsp+27Ch] [rbp+17Ch]
  struct _POINTFIX v156[2]; // [rsp+280h] [rbp+180h] BYREF
  __int64 v157; // [rsp+290h] [rbp+190h] BYREF
  __int64 v158; // [rsp+2A0h] [rbp+1A0h]
  __int64 v159; // [rsp+2A8h] [rbp+1A8h]
  __int64 v160; // [rsp+2B0h] [rbp+1B0h]
  __int64 v161; // [rsp+2B8h] [rbp+1B8h]
  struct SURFACE *v162; // [rsp+2C0h] [rbp+1C0h]
  struct SURFACE *v163; // [rsp+2C8h] [rbp+1C8h]
  __int64 v164; // [rsp+2D0h] [rbp+1D0h]
  XLATEOBJ *v165; // [rsp+2D8h] [rbp+1D8h] BYREF
  char *v166; // [rsp+2E0h] [rbp+1E0h]
  char v167[48]; // [rsp+2E8h] [rbp+1E8h] BYREF
  int v168; // [rsp+318h] [rbp+218h] BYREF
  int v169; // [rsp+31Ch] [rbp+21Ch]
  int v170; // [rsp+320h] [rbp+220h]
  int v171; // [rsp+324h] [rbp+224h]
  LONG v172; // [rsp+330h] [rbp+230h] BYREF
  LONG v173; // [rsp+334h] [rbp+234h]
  unsigned int v174; // [rsp+338h] [rbp+238h]
  unsigned int v175; // [rsp+33Ch] [rbp+23Ch]
  __int64 v176; // [rsp+350h] [rbp+250h]
  unsigned int v177; // [rsp+358h] [rbp+258h]
  int v178; // [rsp+35Ch] [rbp+25Ch]

  v13 = a11 & 0x7FFFFFFF;
  v15 = 1;
  v116 = a2;
  v164 = 0LL;
  v178 = 0;
  v125 = 0;
  v115 = 0;
  if ( (a11 & 0x40000000) != 0 )
  {
    v115 = 1;
    v13 = a11 & 0x3FFFFFFF;
  }
  v18 = ((v13 >> 8) | v13 & 0xFF0000) >> 8;
  v177 = v18;
  v19 = gajRop3[(unsigned __int16)(v13 >> 8) >> 8];
  v20 = v19 | gajRop3[BYTE1(v18)];
  v126 = v19 | gajRop3[BYTE1(v18)];
  v21 = v20 & 0xD4;
  v117 = v21;
  if ( !v21 && (unsigned __int8)v18 == BYTE1(v18) )
  {
    v15 = NtGdiPatBlt(a1, a2, a3, a4, a5, v13);
    goto LABEL_222;
  }
  v118[0] = 0LL;
  v118[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v119);
  XDCOBJ::vLock((XDCOBJ *)v118, a1);
  if ( ((gajRop3[(unsigned __int8)v13] | gajRop3[BYTE1(v13)]) & 2) == 0 || v13 == 16711778 )
  {
    v23 = a3;
  }
  else
  {
    v22 = v13 == 66;
    v23 = a3;
    if ( !v22 )
      bSpDwmValidateSurface((struct XDCOBJ *)v118, a2, a3, a4, a5);
  }
  v127[0] = 0LL;
  v127[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v128);
  XDCOBJ::vLock((XDCOBJ *)v127, a6);
  bSpDwmValidateSurface((struct XDCOBJ *)v127, a7, a8, a9, a10);
  v24 = v118[0];
  if ( !v118[0] )
    goto LABEL_218;
  if ( (*((_DWORD *)v118[0] + 9) & 0x10000) == 0 )
  {
    v25 = *((_QWORD *)v118[0] + 10);
    if ( (*(_DWORD *)(v25 + 8) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v118[0], *(_QWORD *)(v25 + 16));
      v24 = v118[0];
    }
  }
  if ( !v24 || (*((_DWORD *)v24 + 9) & 0x10000) != 0 || !v127[0] && v21 )
  {
LABEL_218:
    EngSetLastError(6u);
    if ( v21 && !v127[0] )
      v15 = 0;
    goto LABEL_221;
  }
  v141 = 0LL;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v147);
  DCOBJ::DCOBJ((DCOBJ *)v148);
  v140 = 0LL;
  memset(v139, 0, sizeof(v139));
  v146 = 0;
  v145 = 0LL;
  v148[6] = 0LL;
  v150 = 0LL;
  v149 = 0LL;
  v152 = 0LL;
  v151 = 0LL;
  v147[0] = 0LL;
  v148[0] = 0LL;
  if ( v21 )
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v139, (struct XDCOBJ *)v118, (struct XDCOBJ *)v127);
  else
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v139, (struct XDCOBJ *)v118);
  if ( (v146 & 1) != 0 )
  {
    v30 = v118[0];
    v31 = (__int64)v127[0];
    if ( v118[0] )
    {
      if ( !*((_QWORD *)v118[0] + 64) )
        goto LABEL_214;
      if ( (*((_DWORD *)v118[0] + 9) & 0x5000) != 0x1000 )
      {
        if ( v127[0] )
        {
          v32 = *((_QWORD *)v127[0] + 64);
          if ( v32 )
          {
            if ( (*((_DWORD *)v127[0] + 9) & 0x5000) != 0x1000 && (*(_DWORD *)(v32 + 112) & 0x10000000) == 0 )
              goto LABEL_35;
          }
        }
      }
    }
    if ( *((_QWORD *)v118[0] + 64) && (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v127) )
    {
      if ( (*(_DWORD *)(v31 + 36) & 1) == 0 )
      {
        v15 = 0;
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v139, v31, (struct DC *)v26, (__int64)v30);
        goto LABEL_221;
      }
LABEL_35:
      if ( v21 )
      {
        v33 = *(struct SURFACE **)(v31 + 512);
        if ( !v33 )
          v33 = SURFACE::pdibDefault;
        if ( *((_DWORD *)v33 + 152) )
        {
          if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v33 + 152) )
            goto LABEL_213;
          v30 = v118[0];
          v31 = (__int64)v127[0];
        }
        v34 = *((_DWORD *)v33 + 28);
        if ( (v34 & 0x800) != 0 )
        {
          v35 = UserSurfaceAccessCheck(*((_QWORD *)v33 + 75));
LABEL_45:
          if ( !v35 )
            goto LABEL_213;
          v30 = v118[0];
          v31 = (__int64)v127[0];
          goto LABEL_47;
        }
        if ( (v34 & 0x10000000) != 0 )
        {
          v35 = UserScreenAccessCheck(v32, v31, v26);
          goto LABEL_45;
        }
      }
LABEL_47:
      v36 = (struct SURFACE *)*((_QWORD *)v30 + 64);
      if ( !v36 )
        v36 = SURFACE::pdibDefault;
      if ( (*((_DWORD *)v36 + 29) & 8) == 0 && !*((_QWORD *)v36 + 28) || (*((_WORD *)v36 + 51) & 0x200) == 0 )
      {
        v37 = *((_DWORD *)v36 + 28);
        if ( (v37 & 0x800) != 0 )
        {
          v38 = UserSurfaceAccessCheck(*((_QWORD *)v36 + 75));
        }
        else
        {
          if ( (v37 & 0x10000000) == 0 )
            goto LABEL_58;
          v38 = UserScreenAccessCheck(v36, v31, 512LL);
        }
        if ( v38 )
        {
          v30 = v118[0];
          v31 = (__int64)v127[0];
LABEL_58:
          if ( (unsigned __int8)v177 != BYTE1(v177) )
          {
            EngSetLastError(0x57u);
            v15 = 0;
            DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v139, v39, v40, v41);
            goto LABEL_221;
          }
          if ( (a11 < 0 && (v42 = *((_QWORD *)v30 + 10), (*(_DWORD *)(v42 + 312) & 1) != 0)
             || (v42 = *((_QWORD *)v30 + 10), (*(_BYTE *)(v42 + 312) & 9) == 9))
            && a6 != a1 )
          {
            v43 = *(_QWORD *)(v42 + 320);
            v44 = DC::dwSetLayout(v30, -1, 0);
            v30 = v118[0];
            v31 = (__int64)v127[0];
            v116 = v43 - a4 - a2;
            v125 = v44;
            v124 = 0x80000000;
          }
          else
          {
            v124 = 0;
          }
          v45 = (SURFACE *)*((_QWORD *)v30 + 64);
          v153 = 0LL;
          if ( v45 )
            v46 = v45;
          else
            v46 = SURFACE::pdibDefault;
          v47 = *(SURFACE **)(v31 + 512);
          v121 = v46;
          if ( v47 )
            v48 = v47;
          else
            v48 = SURFACE::pdibDefault;
          v49 = *((_QWORD *)v48 + 6);
          v50 = a13;
          v120 = v48;
          if ( v115 )
          {
            v51 = *(_DWORD *)(v31 + 36);
            if ( (v51 & 1) != 0 )
            {
              v52 = *(_QWORD *)(v31 + 48);
              if ( (*(_DWORD *)(v52 + 56) & 0x80u) == 0
                && (v52 == *((_QWORD *)v30 + 6)
                 || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v118) && v54 == *(_QWORD *)(v53 + 3536)) )
              {
                if ( v49 )
                {
                  v55 = v117;
                  if ( v117 && (v51 & 0x4000) != 0 && v47 != v45 )
                  {
                    SURFACE::bUnMap(v47, 0LL, 0LL);
                    v30 = v118[0];
                  }
                  if ( (*((_DWORD *)v30 + 9) & 0x4000) != 0 )
                    SURFACE::bUnMap(*((SURFACE **)v30 + 64), 0LL, v30);
                  GreAcquireSemaphore(*(_QWORD *)(v49 + 72));
                  EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v49 + 72), 4LL);
                  v132 = *(_QWORD *)(v49 + 80);
                  UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v137);
                  if ( (a13 & 2) == 0 || !gbForceSoftwareCursor )
                    GreMovePointer(*((HDEV *)v48 + 6), -1, -1, 0);
                  SURFACE::vSetIncludeSprites(v46);
                  v56 = 0;
                  if ( v117 && (*((_DWORD *)v127[0] + 9) & 0x4000) != 0 )
                  {
                    v57 = v118[0];
                    v58 = *((_QWORD *)v127[0] + 64);
                    if ( v58 == *((_QWORD *)v118[0] + 64) )
                      goto LABEL_94;
                    if ( (unsigned int)SURFACE::Map(v58, 0LL, 0LL) == 2 )
                    {
                      v56 = 1;
                      *((_DWORD *)v127[0] + 11) |= 1u;
                    }
                  }
                  v57 = v118[0];
LABEL_94:
                  if ( (*((_DWORD *)v57 + 9) & 0x4000) != 0
                    && (unsigned int)SURFACE::Map(*((_QWORD *)v57 + 64), 0LL, v57) == 2 )
                  {
                    *((_DWORD *)v118[0] + 11) |= 1u;
                    UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v137);
                    v15 = v126;
                    goto LABEL_190;
                  }
                  if ( v56 )
                  {
                    UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v137);
                    v15 = v126;
                    goto LABEL_190;
                  }
                  UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v137);
                  goto LABEL_101;
                }
              }
            }
            v115 = 0;
          }
LABEL_101:
          EXFORMOBJ::vInit((EXFORMOBJ *)v156, (struct XDCOBJ *)v118, 0x204u, 0);
          v59 = (struct SURFACE *)*((_QWORD *)v118[0] + 64);
          if ( !v59 )
            v59 = SURFACE::pdibDefault;
          v162 = v59;
          v158 = *((_QWORD *)v59 + 15);
          v159 = *((_QWORD *)v118[0] + 12);
          EXFORMOBJ::vInit((EXFORMOBJ *)&v157, (struct XDCOBJ *)v127, 0x204u, 0);
          v60 = (struct SURFACE *)*((_QWORD *)v127[0] + 64);
          if ( !v60 )
            v60 = SURFACE::pdibDefault;
          v163 = v60;
          v61 = *((_QWORD *)v60 + 15);
          v160 = v61;
          v62 = *((_QWORD *)v127[0] + 12);
          v161 = v62;
          if ( a12 == -1 )
            a12 = *(_DWORD *)(*((_QWORD *)v127[0] + 10) + 36LL);
          if ( (a13 & 1) != 0 )
          {
            v30 = *(DC **)(*((_QWORD *)v118[0] + 10) + 112LL);
            v153 = v30;
          }
          else
          {
            v30 = v153;
          }
          v63 = v159;
          v64 = v158;
          v65 = *((_QWORD *)v118[0] + 10);
          v66 = *((_DWORD *)v118[0] + 28);
          v130 = v66;
          v67 = *(_DWORD *)(v65 + 32);
          v123 = *(_DWORD *)(v65 + 40);
          v122 = v67;
          if ( !v61 )
          {
            if ( !v158 )
              goto LABEL_115;
            if ( (*(_DWORD *)(v158 + 24) & 0x800) != 0 )
            {
              v68 = *(_QWORD *)(v159 + 80);
              if ( !v68 || v68 == *(_QWORD *)(v159 + 72) )
                goto LABEL_115;
            }
          }
          if ( v158 || (*(_DWORD *)(v61 + 24) & 0x800) == 0 )
            goto LABEL_129;
          v69 = *(_QWORD *)(v159 + 80);
          if ( !v69 )
          {
LABEL_115:
            v165 = xloIdent;
            goto LABEL_163;
          }
          if ( v69 == *(_QWORD *)(v159 + 72) )
          {
            v165 = xloIdent;
          }
          else
          {
LABEL_129:
            if ( v61
              && v158
              && ((v70 = *(_QWORD *)(v61 + 128), v70 == v61)
                ? (v71 = *(_DWORD *)(v61 + 32))
                : (v71 = *(_DWORD *)(v70 + 32)),
                  (v72 = *(_QWORD *)(v158 + 128), v72 == v158)
                ? (v73 = *(_DWORD *)(v158 + 32))
                : (v73 = *(_DWORD *)(v72 + 32)),
                  v71 == v73) )
            {
              v165 = xloIdent;
            }
            else
            {
              v74 = 1;
              if ( (v66 & 7) != 0 && v30 )
              {
                v74 = 0;
              }
              else if ( v61 && v158 )
              {
                v75 = *(_DWORD *)(v61 + 56);
                v134 = v159;
                v135 = v62;
                v133 = v158;
                v129 = v75;
                v136 = ghsemPalette;
                GreAcquireSemaphore(ghsemPalette);
                v76 = xlateTable;
                v77 = 0;
                v78 = v129;
                v131[0] = xlateTable;
                do
                {
                  v79 = *(_QWORD *)(v61 + 128);
                  if ( v79 == v61 )
                    v80 = *(_DWORD *)(v61 + 32);
                  else
                    v80 = *(_DWORD *)(v79 + 32);
                  if ( *((_DWORD *)v76 + 8 * v78 + 4) == v80 )
                  {
                    v81 = XEPALOBJ::ulTime((XEPALOBJ *)&v133);
                    if ( *(_DWORD *)(v82 + 20) == v81 )
                    {
                      v83 = XEPALOBJ::ulTime((XEPALOBJ *)&v134);
                      if ( *(_DWORD *)(v84 + 28) == v83 )
                      {
                        v85 = *(XLATEOBJ **)(v84 + 8);
                        v165 = v85;
                        flXlate = v85[3].flXlate;
                        if ( (flXlate & 0x6000) == 0 )
                        {
                          if ( (v85->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                            || (v85->flXlate & 4) != 0
                            && a12 == v85[1].iUniq
                            && (v87 = XEPALOBJ::ulTime((XEPALOBJ *)&v135), *(_DWORD *)(v88 + 24) == v87)
                            || (flXlate & 0x100) != 0 && v123 == v85[1].flXlate && v122 == *(_DWORD *)&v85[1].iSrcType )
                          {
                            _InterlockedIncrement((volatile signed __int32 *)(v131[0] + 32LL * v78));
                            *(_DWORD *)(v61 + 56) = v78;
                            SEMOBJ::~SEMOBJ((SEMOBJ *)&v136);
                            goto LABEL_163;
                          }
                        }
                        v76 = (struct _XLATETABLE near *)v131[0];
                      }
                    }
                  }
                  ++v77;
                  v78 = ((_BYTE)v78 + 1) & 7;
                }
                while ( v77 < 8 );
                v165 = 0LL;
                if ( ghsemPalette )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                  GreReleaseSemaphoreInternal(ghsemPalette);
                }
                v74 = 1;
              }
              XlateObject = CreateXlateObject(v153, v130, v61, v64, v62, v63, v123, v122, a12, 0);
              v165 = (XLATEOBJ *)XlateObject;
              if ( !XlateObject )
                goto LABEL_188;
              if ( v74 && v61 && v64 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                EXLATEOBJ::vAddToCache((__int64)&v165, v61, v64, v62, v63);
            }
          }
LABEL_163:
          v178 |= 2u;
          v90 = v126;
          if ( (v126 & 0xE8) != 0 )
          {
            v166 = (char *)v118[0] + 1584;
            v91 = *((_QWORD *)v118[0] + 10);
            v92 = *(_DWORD *)(v91 + 8);
            if ( (v92 & 1) != 0 || (*((_DWORD *)v118[0] + 83) & 1) != 0 )
            {
              *(_DWORD *)(v91 + 8) = v92 & 0xFFFFFFFE;
              *((_DWORD *)v118[0] + 83) &= ~1u;
              EBRUSHOBJ::vInitBrush(v166, v118[0], *((_QWORD *)v118[0] + 18), v159, v158, v162, 1);
            }
            v176 = *((_QWORD *)v118[0] + 197);
          }
          else
          {
            v166 = 0LL;
          }
          v164 = 0LL;
          if ( (*(_DWORD *)(v157 + 32) & 1) != 0 )
          {
            v93 = a7;
            v94 = a8;
            v26 = (unsigned int)(a7 + a9);
            v31 = (unsigned int)(a8 + a10);
            v174 = a7 + a9;
            v175 = a8 + a10;
            v172 = a7;
            v173 = a8;
            if ( (*(_BYTE *)(v157 + 32) & 0x43) == 0x43 )
              goto LABEL_174;
            if ( (unsigned int)bCvtPts1(v157, &v172, 2LL) )
            {
              v31 = v175;
              v26 = v174;
              v94 = v173;
              v93 = v172;
LABEL_174:
              v55 = v117;
              if ( v117 && (v93 == (_DWORD)v26 || v94 == (_DWORD)v31) )
                goto LABEL_189;
              if ( (*(_DWORD *)(*(_QWORD *)v156 + 32LL) & 1) == 0 )
              {
                BLTRECORD::TrgPlg((BLTRECORD *)v156, v116, a3, a4, a5);
                v15 = BLTRECORD::bRotate(
                        v156,
                        (struct DCOBJ *)v118,
                        v127,
                        v90,
                        *(_BYTE *)(*((_QWORD *)v118[0] + 10) + 75LL));
LABEL_189:
                v48 = v120;
                v46 = v121;
                v50 = a13;
LABEL_190:
                if ( v124 < 0 )
                  DC::dwSetLayout(v118[0], -1, v125);
                if ( v115 )
                {
                  SURFACE::vClearIncludeSprites(v46);
                  if ( v55 && (*((_DWORD *)v127[0] + 9) & 0x4000) != 0 )
                  {
                    v100 = (SURFACE *)*((_QWORD *)v127[0] + 64);
                    v101 = v118[0];
                    if ( v100 == *((SURFACE **)v118[0] + 64) )
                      goto LABEL_198;
                    SURFACE::bUnMap(v100, 0LL, 0LL);
                  }
                  v101 = v118[0];
LABEL_198:
                  if ( (*((_DWORD *)v101 + 9) & 0x4000) != 0 )
                    SURFACE::bUnMap(*((SURFACE **)v101 + 64), 0LL, v101);
                  UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v131);
                  if ( (v50 & 2) == 0 || !gbForceSoftwareCursor )
                    GreMovePointer(*((HDEV *)v48 + 6), v132, HIDWORD(v132), 0);
                  EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()", *(_QWORD *)(v49 + 72));
                  GreReleaseSemaphoreInternal(*(_QWORD *)(v49 + 72));
                  if ( v55 && (*((_DWORD *)v127[0] + 9) & 0x4000) != 0 )
                  {
                    v102 = v118[0];
                    v103 = *((_QWORD *)v127[0] + 64);
                    if ( v103 == *((_QWORD *)v118[0] + 64) )
                      goto LABEL_209;
                    if ( (unsigned int)SURFACE::Map(v103, 0LL, 0LL) == 2 )
                      *((_DWORD *)v127[0] + 11) |= 1u;
                  }
                  v102 = v118[0];
LABEL_209:
                  if ( (*((_DWORD *)v102 + 9) & 0x4000) != 0
                    && (unsigned int)SURFACE::Map(*((_QWORD *)v102 + 64), 0LL, v102) == 2 )
                  {
                    *((_DWORD *)v118[0] + 11) |= 1u;
                  }
                  UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v131);
                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v139, v104, v105, v106);
                  goto LABEL_221;
                }
LABEL_217:
                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v139, v31, (struct DC *)v26, (__int64)v30);
                goto LABEL_221;
              }
              v95 = v116;
              v96 = a3;
              v97 = v116 + a4;
              v98 = a3 + a5;
              v170 = v116 + a4;
              v171 = a3 + a5;
              v168 = v116;
              v169 = a3;
              if ( (*(_BYTE *)(*(_QWORD *)v156 + 32LL) & 0x43) == 0x43 )
              {
LABEL_182:
                v99 = *((_QWORD *)v118[0] + 10);
                if ( *(_BYTE *)(v99 + 75) != 4 && (_DWORD)v26 - v93 == v97 - v95 && (_DWORD)v31 - v94 == v98 - v96 )
                  v15 = BLTRECORD::bBitBlt((BLTRECORD *)v156, v118, (struct DCOBJ *)v127, v90);
                else
                  v15 = BLTRECORD::bStretch((BLTRECORD *)v156, v118, (struct DCOBJ *)v127, v90, *(_BYTE *)(v99 + 75));
                goto LABEL_189;
              }
              if ( (unsigned int)bCvtPts1(*(_QWORD *)v156, &v168, 2LL) )
              {
                LODWORD(v31) = v175;
                LODWORD(v26) = v174;
                v94 = v173;
                v93 = v172;
                v98 = v171;
                v97 = v170;
                v96 = v169;
                v95 = v168;
                goto LABEL_182;
              }
            }
          }
          EngSetLastError(0x57u);
LABEL_188:
          v55 = v117;
          v15 = 0;
          goto LABEL_189;
        }
      }
LABEL_213:
      EngSetLastError(5u);
      v15 = 0;
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v139, v107, v108, v109);
      goto LABEL_221;
    }
LABEL_214:
    if ( (*((_DWORD *)v30 + 9) & 0xE0) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v138, (struct XDCOBJ *)v118, 0x204u);
      LODWORD(v153) = a2;
      v154 = a2 + a4;
      HIDWORD(v153) = v23;
      v155 = v23 + a5;
      if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v138, (struct _POINTL *)&v153) )
      {
        ERECTL::vOrder((ERECTL *)&v153);
        XDCOBJ::vAccumulate((XDCOBJ *)v118, (struct ERECTL *)&v153);
      }
    }
    goto LABEL_217;
  }
  EngSetLastError(8u);
  v15 = 0;
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v139, v27, v28, v29);
LABEL_221:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v127);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v128);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v118);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v119);
LABEL_222:
  v110 = v178;
  if ( (v178 & 0x20007) == 0 )
    return v15;
  if ( (v178 & 0x20000) != 0 )
  {
    if ( v164 )
    {
      DEC_SHARE_REF_CNT(v164);
      v110 = v178;
    }
    v164 = 0LL;
  }
  if ( (v110 & 2) != 0 && v165 )
  {
    cEntries = (int)v165[1].cEntries;
    if ( (int)cEntries < 0 )
    {
      if ( (_DWORD)cEntries != -1 )
        goto LABEL_234;
      FreeThreadBufferWithTag(v165);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
    }
    v110 = v178;
  }
LABEL_234:
  if ( (v110 & 4) != 0 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v167);
  return v15;
}
