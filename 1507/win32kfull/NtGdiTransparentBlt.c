/*
 * XREFs of NtGdiTransparentBlt @ 0x1C01058C0
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1C0264220 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016DE0 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00175C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0021A60 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0032C68 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     GetAppCompatFlags2 @ 0x1C00956B8 (GetAppCompatFlags2.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C009DB38 (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009DC0C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00A2224 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     EngPlgBlt @ 0x1C00C8FF0 (EngPlgBlt.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QEAAHXZ @ 0x1C0105E60 (-bRotationOrMirroring@EXFORMOBJ@@QEAAHXZ.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0105E88 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C0105EDC (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02653C4 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiTransparentBlt(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  int v11; // r12d
  unsigned int v15; // r13d
  HDC v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r15
  HDC v20; // rbx
  int v21; // esi
  struct _POINTL *v22; // rax
  struct _POINTL *v23; // rax
  __int64 v24; // rdi
  bool v25; // cc
  int v26; // eax
  int v27; // esi
  __int64 v28; // rbx
  __int64 v29; // rsi
  struct REGION *v30; // rax
  struct ECLIPOBJ *v31; // rdx
  POINTFIX v32; // rdi
  POINTFIX v33; // r10
  int inited; // eax
  HDC v35; // r9
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rax
  __int64 v37; // rdx
  FIX v38; // r8d
  FIX x; // eax
  FIX y; // r10d
  FIX v41; // ecx
  int v42; // r9d
  int v43; // r8d
  int v44; // edx
  LONG v45; // ecx
  LONG v46; // edx
  _QWORD *v47; // rax
  bool v48; // zf
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v50; // edx
  POINTFIX v51; // r9
  unsigned int v52; // edx
  unsigned int v53; // edx
  int *v54; // rdi
  __int64 k; // rcx
  __int64 i; // rcx
  _WORD *v57; // rdi
  _BYTE *v58; // r8
  _BYTE *j; // r10
  _BYTE *v60; // rdx
  unsigned __int64 v61; // rcx
  _BYTE *v62; // rdx
  unsigned int v63; // edx
  size_t v64; // r8
  int v65; // edx
  SURFOBJ *v66; // rcx
  ULONG v67; // ecx
  __int64 v68; // rdx
  __int64 v69; // r8
  ULONG v70; // ecx
  int v71; // r12d
  int NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  POINTFIX v73; // [rsp+68h] [rbp-98h] BYREF
  int v74; // [rsp+70h] [rbp-90h]
  __int128 v75; // [rsp+80h] [rbp-80h] BYREF
  POINTFIX v76; // [rsp+90h] [rbp-70h] BYREF
  char v77; // [rsp+98h] [rbp-68h]
  int v78; // [rsp+9Ch] [rbp-64h]
  HDC v79; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+A8h] [rbp-58h] BYREF
  DC *v81[6]; // [rsp+B0h] [rbp-50h] BYREF
  int v82; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v83; // [rsp+E4h] [rbp-1Ch]
  _BYTE v84[20]; // [rsp+ECh] [rbp-14h] BYREF
  _QWORD v85[2]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v86[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v87; // [rsp+118h] [rbp+18h]
  int v88; // [rsp+128h] [rbp+28h]
  int v89; // [rsp+12Ch] [rbp+2Ch]
  DC *v90[6]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v91[16]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v92[288]; // [rsp+170h] [rbp+70h] BYREF
  RECTL prcl; // [rsp+290h] [rbp+190h] BYREF
  __int128 v94; // [rsp+2A0h] [rbp+1A0h] BYREF
  RECTL v95; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v96[4]; // [rsp+2C0h] [rbp+1C0h] BYREF
  RECTL v97; // [rsp+2C4h] [rbp+1C4h] BYREF
  struct _POINTFIX v98; // [rsp+360h] [rbp+260h] BYREF
  FIX v99; // [rsp+368h] [rbp+268h]
  int v100; // [rsp+36Ch] [rbp+26Ch]
  int v101; // [rsp+370h] [rbp+270h]
  FIX v102; // [rsp+374h] [rbp+274h]
  FIX v103; // [rsp+378h] [rbp+278h]
  int v104; // [rsp+37Ch] [rbp+27Ch]
  __int128 v105; // [rsp+380h] [rbp+280h] BYREF
  LONG v106; // [rsp+390h] [rbp+290h]
  int v107; // [rsp+394h] [rbp+294h]
  POINTFIX pptfx; // [rsp+3A0h] [rbp+2A0h] BYREF
  POINTFIX v109; // [rsp+3A8h] [rbp+2A8h]
  POINTFIX v110; // [rsp+3B0h] [rbp+2B0h]

  v11 = 0;
  v79 = a6;
  v74 = a8;
  if ( a4 >= 0 && a5 >= 0 && a9 >= 0 && a10 >= 0 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v81, a1);
    DCOBJ::DCOBJ((DCOBJ *)v90, v79);
    if ( !v81[0]
      || (*((_DWORD *)v81[0] + 9) & 0x10000) != 0
      || !v90[0]
      || (bSpDwmValidateSurface((struct XDCOBJ *)v90, a7, v74, a9, a10),
          bSpDwmValidateSurface((struct XDCOBJ *)v81, a2, a3, a4, a5),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v85, (struct XDCOBJ *)v81, 0x204u),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v91, (struct XDCOBJ *)v90, 0x204u),
          (unsigned int)EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v91)) )
    {
      EngSetLastError(0x57u);
LABEL_7:
      v15 = v11;
LABEL_8:
      DCOBJ::~DCOBJ((DCOBJ *)v90);
      DCOBJ::~DCOBJ((DCOBJ *)v81);
      return v15;
    }
    prcl.left = a7;
    prcl.right = a9 + a7;
    prcl.top = v74;
    prcl.bottom = v74 + a10;
    EXFORMOBJ::bXform((EXFORMOBJ *)v91, (struct _POINTL *)&prcl);
    ERECTL::vOrder((ERECTL *)&prcl);
    `vector constructor iterator'(&v98, 8uLL, 4, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
    v74 = EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v85);
    v15 = 1;
    if ( v74 )
    {
      *(_QWORD *)&v105 = __PAIR64__(a3, a2);
      DWORD2(v105) = a4 + a2;
      v107 = a5 + a3;
      HIDWORD(v105) = a3;
      v106 = a2;
      EXFORMOBJ::bXform((EXFORMOBJ *)v85, (struct _POINTL *)&v105, &v98, 3uLL);
      v38 = v99;
      x = v98.x;
      if ( (*(_DWORD *)(v85[0] + 32LL) & 1) != 0 )
      {
        if ( v98.x > v99 )
        {
          x = v98.x + 16;
          v38 = v99 + 16;
          v101 += 16;
          v98.x += 16;
          v99 += 16;
        }
        y = v98.y;
        v41 = v102;
        v42 = v100;
        if ( v98.y > v102 )
        {
          y = v98.y + 16;
          v42 = v100 + 16;
          v41 = v102 + 16;
          v98.y += 16;
          v102 += 16;
          v100 += 16;
        }
      }
      else
      {
        v41 = v102;
        v42 = v100;
        y = v98.y;
      }
      v103 = v38 + v101 - x;
      v104 = v41 + v42 - y;
      v43 = v38 > x == v38 > v103;
      v44 = v42 > y == v42 > v104;
      if ( *(&v98.x + 2 * v43) > *(&v98.x + 2 * (v43 ^ 3LL)) )
        v43 ^= 3u;
      if ( *(&v98.y + 2 * v44) > *(&v98.y + 2 * (v44 ^ 3LL)) )
        v44 ^= 3u;
      LODWORD(v75) = (*(&v98.x + 2 * v43) + 15) >> 4;
      DWORD1(v75) = (*(&v98.y + 2 * v44) + 15) >> 4;
      DWORD2(v75) = (*(&v98.x + 2 * (v43 ^ 3LL)) + 15) >> 4;
      HIDWORD(v75) = (*(&v98.y + 2 * (v44 ^ 3LL)) + 15) >> 4;
      v94 = v75;
    }
    else
    {
      *(_QWORD *)&v75 = __PAIR64__(a3, a2);
      DWORD2(v75) = a4 + a2;
      HIDWORD(v75) = a5 + a3;
      v94 = v75;
      EXFORMOBJ::bXform((EXFORMOBJ *)v85, (struct _POINTL *)&v94);
      ERECTL::vOrder((ERECTL *)&v94);
    }
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v94) )
    {
      v11 = 1;
      goto LABEL_48;
    }
    if ( (*((_DWORD *)v81[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v81, (struct ERECTL *)&v94);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v92);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v92, (struct XDCOBJ *)v81, (struct XDCOBJ *)v90) )
    {
      v71 = XDCOBJ::bFullScreen((XDCOBJ *)v90);
      v11 = XDCOBJ::bFullScreen((XDCOBJ *)v81) | v71;
      goto LABEL_47;
    }
    v17 = (HDC)*((_QWORD *)v81[0] + 64);
    v79 = v17;
    if ( !v17
      || (v18 = *((_QWORD *)v17 + 15),
          v19 = *((_QWORD *)v81[0] + 12),
          v20 = (HDC)*((_QWORD *)v90[0] + 64),
          (v73 = (POINTFIX)v20) == 0LL) )
    {
      v11 = 1;
      goto LABEL_47;
    }
    if ( !(unsigned int)SrcSurfaceAccessCheck((struct SURFACE *)v20)
      || !(unsigned int)DestSurfaceAccessCheck((struct SURFACE *)v17) )
    {
      v70 = 6;
      goto LABEL_129;
    }
    v21 = 0;
    v105 = v94;
    v22 = (struct _POINTL *)DC::eptlOrigin(v81[0]);
    if ( !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v94, v22)
      || (v23 = (struct _POINTL *)DC::eptlOrigin(v90[0]), !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&prcl, v23)) )
    {
      v21 = 1;
    }
    v24 = *((_QWORD *)v20 + 6);
    if ( *((_WORD *)v20 + 50) == 1 && v24 && (*(_DWORD *)(v24 + 56) & 0x20000) != 0 )
    {
      v45 = *(_DWORD *)(v24 + 2608);
      if ( prcl.left >= v45 )
      {
        v46 = *(_DWORD *)(v24 + 2612);
        if ( prcl.top >= v46 && prcl.right <= *((_DWORD *)v20 + 14) + v45 )
        {
          v25 = prcl.bottom <= v46 + *((_DWORD *)v20 + 15);
LABEL_29:
          v26 = 0;
          if ( v25 )
            goto LABEL_30;
        }
      }
    }
    else if ( prcl.left >= 0 && prcl.top >= 0 && prcl.right <= *((_DWORD *)v20 + 14) )
    {
      v25 = prcl.bottom <= *((_DWORD *)v20 + 15);
      goto LABEL_29;
    }
    v26 = 1;
LABEL_30:
    v27 = v26 | v21;
    if ( v20 == v79 )
    {
      v95 = prcl;
      ERECTL::operator*=(&v95);
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v95) )
        v27 = 1;
    }
    if ( !v27 )
    {
      v28 = *((_QWORD *)v20 + 15);
      v29 = *((_QWORD *)v90[0] + 12);
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v28, v29, a11, 1LL);
      v30 = XDCOBJ::prgnEffRao((XDCOBJ *)v81);
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v96, v30, (struct ERECTL *)&v94, 0);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v97) )
      {
LABEL_121:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v92);
        `vector destructor iterator'(&v98, 8uLL, 4, (void (*)(void *))Scale_None);
        goto LABEL_8;
      }
      if ( (*((_DWORD *)v81[0] + 9) & 0xE0) != 0 )
      {
        v95 = v97;
        XDCOBJ::vAccumulateTight((XDCOBJ *)v81, v31, &v95);
      }
      *(_QWORD *)&v75 = 0LL;
      BYTE8(v75) = 0;
      HIDWORD(v75) = 0;
      if ( (GetAppCompatFlags2(0x400u) & 0x8000000) != 0
        && (*(_DWORD *)(*((_QWORD *)v81[0] + 10) + 312LL) & 9) != 9
        && (*(_DWORD *)(*((_QWORD *)v81[0] + 10) + 312LL) & 1) != 0 )
      {
        v83 = 0LL;
        memset(v84, 0, sizeof(v84));
        v83 = *(_QWORD *)(*(_QWORD *)&v73 + 56LL);
        v82 = *(_DWORD *)(*(_QWORD *)&v73 + 96LL);
        v47 = *(_QWORD **)(*(_QWORD *)&v73 + 120LL);
        if ( v47 )
          *(_QWORD *)&v84[4] = *v47;
        else
          *(_QWORD *)&v84[4] = 0LL;
        SURFMEM::bCreateDIB((SURFMEM *)&v75, (struct _DEVBITMAPINFO *)&v82, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !(_QWORD)v75
          || ((*(_QWORD *)&v95.left = 0LL,
               v80 = 0LL,
               v48 = (*(_DWORD *)(*(_QWORD *)&v73 + 112LL) & 0x400) == 0,
               *(_QWORD *)&v95.right = *(_QWORD *)(*(_QWORD *)&v73 + 56LL),
               v48)
            ? (v49 = EngCopyBits)
            : (v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v24 + 2872)),
              !((unsigned int (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, RECTL *, __int64 *))v49)(
                 v75 + 24,
                 *(_QWORD *)&v73 + 24LL,
                 0LL,
                 0LL,
                 &v95,
                 &v80)
           || (v50 = *(_DWORD *)(v75 + 96), (unsigned int)(v50 - 1) > 5)) )
        {
          v15 = 0;
LABEL_120:
          SURFMEM::~SURFMEM((SURFMEM *)&v75);
          goto LABEL_121;
        }
        qword_1C02EB3A0[v50]();
        v32 = (POINTFIX)v75;
        v73 = (POINTFIX)v75;
      }
      else
      {
        v32 = v73;
      }
      v76 = 0LL;
      v77 = 0;
      v78 = 0;
      if ( !v74 )
        goto LABEL_38;
      v88 = 0;
      v89 = 0;
      v86[1] = DWORD2(v94) - v94;
      v87 = (unsigned int)(HIDWORD(v94) - DWORD1(v94));
      v86[0] = *(_DWORD *)(*(_QWORD *)&v32 + 96LL);
      v88 = *(_DWORD *)(*(_QWORD *)&v32 + 112LL) & 0x40000;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v76, (struct _DEVBITMAPINFO *)v86, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v51 = v76;
        v52 = *(_DWORD *)(*(_QWORD *)&v76 + 64LL);
        if ( *(_DWORD *)(*(_QWORD *)&v32 + 96LL) == 1 )
        {
          v64 = *(unsigned int *)(*(_QWORD *)&v76 + 64LL);
          if ( NearestIndexFromColorref )
            v65 = 255;
          else
            v65 = 0;
        }
        else if ( *(_DWORD *)(*(_QWORD *)&v32 + 96LL) == 2 )
        {
          v64 = *(unsigned int *)(*(_QWORD *)&v76 + 64LL);
          v65 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
        }
        else
        {
          if ( *(_DWORD *)(*(_QWORD *)&v32 + 96LL) != 3 )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v32 + 96LL) == 4 )
            {
              v63 = v52 >> 1;
              if ( !v63 )
                goto LABEL_115;
              v57 = *(_WORD **)(*(_QWORD *)&v76 + 72LL);
              for ( i = v63; i; --i )
                *v57++ = NearestIndexFromColorref;
            }
            else
            {
              if ( *(_DWORD *)(*(_QWORD *)&v32 + 96LL) == 5 )
              {
                v58 = *(_BYTE **)(*(_QWORD *)&v76 + 80LL);
                for ( j = &v58[*(_DWORD *)(*(_QWORD *)&v76 + 60LL) * *(_DWORD *)(*(_QWORD *)&v76 + 88LL)];
                      v58 != j;
                      v58 += *(int *)(*(_QWORD *)&v51 + 88LL) )
                {
                  v60 = v58;
                  v61 = (unsigned __int64)&v58[3 * *(_DWORD *)(*(_QWORD *)&v51 + 56LL) - 2];
                  if ( (unsigned __int64)v58 < v61 )
                  {
                    do
                    {
                      *v60 = NearestIndexFromColorref;
                      v62 = v60 + 1;
                      *v62++ = BYTE1(NearestIndexFromColorref);
                      *v62 = BYTE2(NearestIndexFromColorref);
                      v60 = v62 + 1;
                    }
                    while ( (unsigned __int64)v60 < v61 );
                    v51 = v76;
                  }
                }
                goto LABEL_115;
              }
              if ( *(_DWORD *)(*(_QWORD *)&v32 + 96LL) != 6 || (v53 = v52 >> 2) == 0 )
              {
LABEL_115:
                `vector constructor iterator'(&pptfx, 8uLL, 3, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                v73.x = v98.x - 16 * v105;
                v73.y = v98.y - 16 * DWORD1(v105);
                pptfx = v73;
                v73.x = v99 - 16 * v105;
                v73.y = v100 - 16 * DWORD1(v105);
                v109 = v73;
                v73.x = v101 - 16 * v105;
                v73.y = v102 - 16 * DWORD1(v105);
                v110 = v73;
                if ( v76 )
                  v66 = (SURFOBJ *)(*(_QWORD *)&v76 + 24LL);
                else
                  v66 = 0LL;
                EngPlgBlt(
                  v66,
                  (SURFOBJ *)(*(_QWORD *)&v32 + 24LL),
                  0LL,
                  0LL,
                  xloIdent,
                  0LL,
                  0LL,
                  &pptfx,
                  &prcl,
                  0LL,
                  3u);
                v32 = v76;
                prcl.right = DWORD2(v94) - v94;
                prcl.bottom = HIDWORD(v94) - DWORD1(v94);
                *(_QWORD *)&prcl.left = 0LL;
                `vector destructor iterator'(&pptfx, 8uLL, 3, (void (*)(void *))Scale_None);
LABEL_38:
                v33 = 0LL;
                v73 = 0LL;
                if ( *((_QWORD *)v90[0] + 64) == *((_QWORD *)v81[0] + 64)
                  || (inited = EXLATEOBJ::bInitXlateObj(
                                 (__int64 *)&v73,
                                 0LL,
                                 0,
                                 v28,
                                 v18,
                                 v29,
                                 v19,
                                 *(_DWORD *)(*((_QWORD *)v81[0] + 10) + 40LL),
                                 *(_DWORD *)(*((_QWORD *)v81[0] + 10) + 32LL),
                                 -1,
                                 0),
                      v33 = v73,
                      inited) )
                {
                  v35 = v79;
                  ++*((_DWORD *)v79 + 23);
                  if ( *((_QWORD *)v81[0] + 6) == *((_QWORD *)v90[0] + 6)
                    || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v81) && *(_QWORD *)(v68 + 3544) == v69 )
                  {
                    if ( ((_DWORD)v35[28] & 0x8000) != 0 )
                      v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v35 + 6) + 3312LL);
                    else
                      v36 = EngTransparentBlt;
                    v37 = 0LL;
                    if ( v32 )
                      v37 = *(_QWORD *)&v32 + 24LL;
                    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))v36)(
                            v35 + 6,
                            v37,
                            v96,
                            v33,
                            &v94,
                            &prcl,
                            NearestIndexFromColorref,
                            0);
                    goto LABEL_46;
                  }
                  v67 = 87;
                }
                else
                {
                  v67 = 6;
                }
                EngSetLastError(v67);
LABEL_46:
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v73);
                SURFMEM::~SURFMEM((SURFMEM *)&v76);
                SURFMEM::~SURFMEM((SURFMEM *)&v75);
LABEL_47:
                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v92);
LABEL_48:
                `vector destructor iterator'(&v98, 8uLL, 4, (void (*)(void *))Scale_None);
                goto LABEL_7;
              }
              v54 = *(int **)(*(_QWORD *)&v76 + 72LL);
              for ( k = v53; k; --k )
                *v54++ = NearestIndexFromColorref;
            }
            v32 = v73;
            goto LABEL_115;
          }
          v64 = *(unsigned int *)(*(_QWORD *)&v76 + 64LL);
          v65 = NearestIndexFromColorref;
        }
        memset(*(void **)(*(_QWORD *)&v76 + 72LL), v65, v64);
        goto LABEL_115;
      }
      EngSetLastError(8u);
      v15 = 0;
      SURFMEM::~SURFMEM((SURFMEM *)&v76);
      goto LABEL_120;
    }
    v70 = 87;
LABEL_129:
    EngSetLastError(v70);
    goto LABEL_47;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
