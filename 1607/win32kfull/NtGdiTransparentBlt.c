/*
 * XREFs of NtGdiTransparentBlt @ 0x1C013A310
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1C0260390 (DxgkEngBltViaGDI.c)
 * Callees:
 *     EngPlgBlt @ 0x1C0001FC0 (EngPlgBlt.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C003560C (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00363F0 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00394D4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0041BD0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00453F0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00469F0 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C010F588 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QEAAHXZ @ 0x1C013AF90 (-bRotationOrMirroring@EXFORMOBJ@@QEAAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C013AFB8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C013B00C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C026175C (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
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
  FIX v16; // r8d
  FIX x; // eax
  FIX y; // r10d
  FIX v19; // ecx
  int v20; // r9d
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rdx
  struct DC *v24; // r8
  __int64 v25; // r9
  HDC v26; // rdi
  __int64 v27; // r14
  __int64 v28; // r15
  HDC v29; // rbx
  int v30; // esi
  struct _POINTL *v31; // rax
  struct _POINTL *v32; // rax
  __int64 v33; // rdi
  LONG v34; // ecx
  LONG v35; // edx
  bool v36; // cc
  int v37; // eax
  int v38; // esi
  __int64 v39; // rbx
  __int64 v40; // rsi
  struct REGION *v41; // rax
  struct ECLIPOBJ *v42; // rdx
  struct DC *v43; // r8
  __int64 v44; // r9
  int v45; // eax
  _QWORD *v46; // rax
  bool v47; // zf
  BOOL (__stdcall *v48)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v49; // edx
  POINTFIX v50; // rdi
  POINTFIX v51; // r9
  unsigned int v52; // edx
  unsigned int v53; // edx
  int *v54; // rdi
  __int64 k; // rcx
  _BYTE *v56; // r8
  _BYTE *j; // r10
  _BYTE *v58; // rdx
  unsigned __int64 v59; // rcx
  _BYTE *v60; // rdx
  unsigned int v61; // edx
  _WORD *v62; // rdi
  __int64 i; // rcx
  size_t v64; // r8
  int v65; // edx
  SURFOBJ *v66; // rcx
  POINTFIX v67; // r10
  int inited; // eax
  ULONG v69; // ecx
  HDC v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  BOOL (__stdcall *v73)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rax
  __int64 v74; // rdx
  ULONG v75; // ecx
  int v76; // r12d
  int NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  POINTFIX v79; // [rsp+68h] [rbp-98h] BYREF
  int v80; // [rsp+70h] [rbp-90h]
  __int128 v81; // [rsp+80h] [rbp-80h] BYREF
  HDC v82; // [rsp+90h] [rbp-70h]
  POINTFIX v83; // [rsp+98h] [rbp-68h] BYREF
  char v84; // [rsp+A0h] [rbp-60h]
  int v85; // [rsp+A4h] [rbp-5Ch]
  DC *v86[2]; // [rsp+A8h] [rbp-58h] BYREF
  char v87[32]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-28h] BYREF
  int v89; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v90; // [rsp+E4h] [rbp-1Ch]
  _BYTE v91[20]; // [rsp+ECh] [rbp-14h] BYREF
  _QWORD v92[2]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v93[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v94; // [rsp+118h] [rbp+18h]
  int v95; // [rsp+128h] [rbp+28h]
  int v96; // [rsp+12Ch] [rbp+2Ch]
  DC *v97[2]; // [rsp+130h] [rbp+30h] BYREF
  char v98[32]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v99[16]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v100[288]; // [rsp+170h] [rbp+70h] BYREF
  RECTL prcl; // [rsp+290h] [rbp+190h] BYREF
  __int128 v102; // [rsp+2A0h] [rbp+1A0h] BYREF
  RECTL v103; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v104[4]; // [rsp+2C0h] [rbp+1C0h] BYREF
  RECTL v105; // [rsp+2C4h] [rbp+1C4h] BYREF
  struct _POINTFIX v106; // [rsp+360h] [rbp+260h] BYREF
  FIX v107; // [rsp+368h] [rbp+268h]
  int v108; // [rsp+36Ch] [rbp+26Ch]
  int v109; // [rsp+370h] [rbp+270h]
  FIX v110; // [rsp+374h] [rbp+274h]
  FIX v111; // [rsp+378h] [rbp+278h]
  int v112; // [rsp+37Ch] [rbp+27Ch]
  __int128 v113; // [rsp+380h] [rbp+280h] BYREF
  LONG v114; // [rsp+390h] [rbp+290h]
  int v115; // [rsp+394h] [rbp+294h]
  POINTFIX pptfx; // [rsp+3A0h] [rbp+2A0h] BYREF
  POINTFIX v117; // [rsp+3A8h] [rbp+2A8h]
  POINTFIX v118; // [rsp+3B0h] [rbp+2B0h]

  v11 = 0;
  v82 = a6;
  v80 = a8;
  if ( a4 >= 0 && a5 >= 0 && a9 >= 0 && a10 >= 0 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v86, a1);
    DCOBJ::DCOBJ((DCOBJ *)v97, v82);
    if ( !v86[0]
      || (*((_DWORD *)v86[0] + 9) & 0x10000) != 0
      || !v97[0]
      || (bSpDwmValidateSurface((struct XDCOBJ *)v97, a7, v80, a9, a10),
          bSpDwmValidateSurface((struct XDCOBJ *)v86, a2, a3, a4, a5),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v92, (struct XDCOBJ *)v86, 0x204u),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v99, (struct XDCOBJ *)v97, 0x204u),
          (unsigned int)EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v99)) )
    {
      EngSetLastError(0x57u);
      goto LABEL_129;
    }
    prcl.left = a7;
    prcl.right = a9 + a7;
    prcl.top = v80;
    prcl.bottom = v80 + a10;
    EXFORMOBJ::bXform((EXFORMOBJ *)v99, (struct _POINTL *)&prcl);
    ERECTL::vOrder((ERECTL *)&prcl);
    `vector constructor iterator'(&v106, 8uLL, 4uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
    v80 = EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v92);
    v15 = 1;
    if ( v80 )
    {
      *(_QWORD *)&v113 = __PAIR64__(a3, a2);
      DWORD2(v113) = a4 + a2;
      v115 = a5 + a3;
      HIDWORD(v113) = a3;
      v114 = a2;
      EXFORMOBJ::bXform((EXFORMOBJ *)v92, (struct _POINTL *)&v113, &v106, 3uLL);
      v16 = v107;
      x = v106.x;
      if ( (*(_DWORD *)(v92[0] + 32LL) & 1) != 0 )
      {
        if ( v106.x > v107 )
        {
          x = v106.x + 16;
          v16 = v107 + 16;
          v109 += 16;
          v106.x += 16;
          v107 += 16;
        }
        y = v106.y;
        v19 = v110;
        v20 = v108;
        if ( v106.y > v110 )
        {
          y = v106.y + 16;
          v20 = v108 + 16;
          v19 = v110 + 16;
          v106.y += 16;
          v110 += 16;
          v108 += 16;
        }
      }
      else
      {
        v19 = v110;
        v20 = v108;
        y = v106.y;
      }
      v111 = v16 + v109 - x;
      v112 = v19 + v20 - y;
      v21 = v16 > x == v16 > v111;
      v22 = v20 > y == v20 > v112;
      if ( *(&v106.x + 2 * v21) > *(&v106.x + 2 * (v21 ^ 3LL)) )
        v21 ^= 3u;
      if ( *(&v106.y + 2 * v22) > *(&v106.y + 2 * (v22 ^ 3LL)) )
        v22 ^= 3u;
      LODWORD(v81) = (*(&v106.x + 2 * v21) + 15) >> 4;
      DWORD1(v81) = (*(&v106.y + 2 * v22) + 15) >> 4;
      DWORD2(v81) = (*(&v106.x + 2 * (v21 ^ 3LL)) + 15) >> 4;
      HIDWORD(v81) = (*(&v106.y + 2 * (v22 ^ 3LL)) + 15) >> 4;
      v102 = v81;
    }
    else
    {
      *(_QWORD *)&v81 = __PAIR64__(a3, a2);
      DWORD2(v81) = a4 + a2;
      HIDWORD(v81) = a5 + a3;
      v102 = v81;
      EXFORMOBJ::bXform((EXFORMOBJ *)v92, (struct _POINTL *)&v102);
      ERECTL::vOrder((ERECTL *)&v102);
    }
    if ( ERECTL::bEmpty((ERECTL *)&v102) )
    {
      v11 = 1;
      goto LABEL_127;
    }
    if ( (*((_DWORD *)v86[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v86, (struct ERECTL *)&v102);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v100);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v100, (struct XDCOBJ *)v86, (struct XDCOBJ *)v97) )
    {
      v76 = XDCOBJ::bFullScreen((XDCOBJ *)v97);
      v11 = XDCOBJ::bFullScreen((XDCOBJ *)v86) | v76;
      goto LABEL_125;
    }
    v26 = (HDC)*((_QWORD *)v86[0] + 64);
    v82 = v26;
    if ( !v26
      || (v27 = *((_QWORD *)v26 + 15),
          v28 = *((_QWORD *)v86[0] + 12),
          v29 = (HDC)*((_QWORD *)v97[0] + 64),
          (v79 = (POINTFIX)v29) == 0LL) )
    {
      v11 = 1;
      goto LABEL_125;
    }
    if ( !(unsigned int)SrcSurfaceAccessCheck((struct SURFACE *)v29)
      || !(unsigned int)DestSurfaceAccessCheck((struct SURFACE *)v26) )
    {
      v75 = 6;
      goto LABEL_122;
    }
    v30 = 0;
    v113 = v102;
    v31 = (struct _POINTL *)DC::eptlOrigin(v86[0]);
    if ( !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v102, v31)
      || (v32 = (struct _POINTL *)DC::eptlOrigin(v97[0]), !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&prcl, v32)) )
    {
      v30 = 1;
    }
    v33 = *((_QWORD *)v29 + 6);
    if ( *((_WORD *)v29 + 50) == 1 && v33 && (*(_DWORD *)(v33 + 56) & 0x20000) != 0 )
    {
      v34 = *(_DWORD *)(v33 + 2608);
      if ( prcl.left >= v34 )
      {
        v35 = *(_DWORD *)(v33 + 2612);
        if ( prcl.top >= v35 && prcl.right <= *((_DWORD *)v29 + 14) + v34 )
        {
          v36 = prcl.bottom <= v35 + *((_DWORD *)v29 + 15);
          goto LABEL_44;
        }
      }
    }
    else if ( prcl.left >= 0 && prcl.top >= 0 && prcl.right <= *((_DWORD *)v29 + 14) )
    {
      v36 = prcl.bottom <= *((_DWORD *)v29 + 15);
LABEL_44:
      v37 = 0;
      if ( v36 )
        goto LABEL_46;
    }
    v37 = 1;
LABEL_46:
    v38 = v37 | v30;
    if ( v29 == v82 )
    {
      v103 = prcl;
      ERECTL::operator*=(&v103, &v102);
      if ( !ERECTL::bEmpty((ERECTL *)&v103) )
        v38 = 1;
    }
    if ( !v38 )
    {
      v39 = *((_QWORD *)v29 + 15);
      v40 = *((_QWORD *)v97[0] + 12);
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v39, v40, a11, 1LL);
      v41 = XDCOBJ::prgnEffRao((XDCOBJ *)v86);
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v104, v41, (struct ERECTL *)&v102, 0);
      if ( ERECTL::bEmpty((ERECTL *)&v105) )
      {
LABEL_107:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v100, (__int64)v42, v43, v44);
        `vector destructor iterator'(&v106, 8uLL, 4uLL, (void (*)(void *))Scale_None);
LABEL_130:
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v97);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v98);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v86);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v87);
        return v15;
      }
      if ( (*((_DWORD *)v86[0] + 9) & 0xE0) != 0 )
      {
        v103 = v105;
        XDCOBJ::vAccumulateTight((struct _RECTL **)v86, v42, &v103);
      }
      *(_QWORD *)&v81 = 0LL;
      BYTE8(v81) = 0;
      HIDWORD(v81) = 0;
      if ( (GetAppCompatFlags2(0x400u, (__int64)v42, (__int64)v43, v44) & 0x8000000) != 0
        && (v45 = *(_DWORD *)(*((_QWORD *)v86[0] + 10) + 312LL), (v45 & 1) != 0)
        && (v45 & 9) != 9 )
      {
        v90 = 0LL;
        memset(v91, 0, sizeof(v91));
        v90 = *(_QWORD *)(*(_QWORD *)&v79 + 56LL);
        v89 = *(_DWORD *)(*(_QWORD *)&v79 + 96LL);
        v46 = *(_QWORD **)(*(_QWORD *)&v79 + 120LL);
        if ( v46 )
          *(_QWORD *)&v91[4] = *v46;
        else
          *(_QWORD *)&v91[4] = 0LL;
        SURFMEM::bCreateDIB((SURFMEM *)&v81, (struct _DEVBITMAPINFO *)&v89, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !(_QWORD)v81
          || ((*(_QWORD *)&v103.left = 0LL,
               v88 = 0LL,
               v47 = (*(_DWORD *)(*(_QWORD *)&v79 + 112LL) & 0x400) == 0,
               *(_QWORD *)&v103.right = *(_QWORD *)(*(_QWORD *)&v79 + 56LL),
               v47)
            ? (v48 = EngCopyBits)
            : (v48 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v33 + 2864)),
              !((unsigned int (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, RECTL *, __int64 *))v48)(
                 v81 + 24,
                 *(_QWORD *)&v79 + 24LL,
                 0LL,
                 0LL,
                 &v103,
                 &v88)
           || (v49 = *(_DWORD *)(v81 + 96), (unsigned int)(v49 - 1) > 5)) )
        {
          v15 = 0;
LABEL_106:
          SURFMEM::~SURFMEM((SURFMEM *)&v81);
          goto LABEL_107;
        }
        qword_1C02E5460[v49]();
        v50 = (POINTFIX)v81;
        v79 = (POINTFIX)v81;
      }
      else
      {
        v50 = v79;
      }
      v83 = 0LL;
      v84 = 0;
      v85 = 0;
      if ( !v80 )
        goto LABEL_102;
      v95 = 0;
      v96 = 0;
      v93[1] = DWORD2(v102) - v102;
      v94 = (unsigned int)(HIDWORD(v102) - DWORD1(v102));
      v93[0] = *(_DWORD *)(*(_QWORD *)&v50 + 96LL);
      v95 = *(_DWORD *)(*(_QWORD *)&v50 + 112LL) & 0x40000;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v83, (struct _DEVBITMAPINFO *)v93, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v51 = v83;
        v52 = *(_DWORD *)(*(_QWORD *)&v83 + 64LL);
        if ( *(_DWORD *)(*(_QWORD *)&v50 + 96LL) == 1 )
        {
          v64 = *(unsigned int *)(*(_QWORD *)&v83 + 64LL);
          if ( NearestIndexFromColorref )
            v65 = 255;
          else
            v65 = 0;
        }
        else if ( *(_DWORD *)(*(_QWORD *)&v50 + 96LL) == 2 )
        {
          v64 = *(unsigned int *)(*(_QWORD *)&v83 + 64LL);
          v65 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
        }
        else
        {
          if ( *(_DWORD *)(*(_QWORD *)&v50 + 96LL) != 3 )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v50 + 96LL) == 4 )
            {
              v61 = v52 >> 1;
              if ( !v61 )
                goto LABEL_98;
              v62 = *(_WORD **)(*(_QWORD *)&v83 + 72LL);
              for ( i = v61; i; --i )
                *v62++ = NearestIndexFromColorref;
            }
            else
            {
              if ( *(_DWORD *)(*(_QWORD *)&v50 + 96LL) == 5 )
              {
                v56 = *(_BYTE **)(*(_QWORD *)&v83 + 80LL);
                for ( j = &v56[*(_DWORD *)(*(_QWORD *)&v83 + 60LL) * *(_DWORD *)(*(_QWORD *)&v83 + 88LL)];
                      v56 != j;
                      v56 += *(int *)(*(_QWORD *)&v51 + 88LL) )
                {
                  v58 = v56;
                  v59 = (unsigned __int64)&v56[3 * *(_DWORD *)(*(_QWORD *)&v51 + 56LL) - 2];
                  if ( (unsigned __int64)v56 < v59 )
                  {
                    do
                    {
                      *v58 = NearestIndexFromColorref;
                      v60 = v58 + 1;
                      *v60++ = BYTE1(NearestIndexFromColorref);
                      *v60 = BYTE2(NearestIndexFromColorref);
                      v58 = v60 + 1;
                    }
                    while ( (unsigned __int64)v58 < v59 );
                    v51 = v83;
                  }
                }
                goto LABEL_98;
              }
              if ( *(_DWORD *)(*(_QWORD *)&v50 + 96LL) != 6 || (v53 = v52 >> 2) == 0 )
              {
LABEL_98:
                `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                v79.x = v106.x - 16 * v113;
                v79.y = v106.y - 16 * DWORD1(v113);
                pptfx = v79;
                v79.x = v107 - 16 * v113;
                v79.y = v108 - 16 * DWORD1(v113);
                v117 = v79;
                v79.x = v109 - 16 * v113;
                v79.y = v110 - 16 * DWORD1(v113);
                v118 = v79;
                if ( v83 )
                  v66 = (SURFOBJ *)(*(_QWORD *)&v83 + 24LL);
                else
                  v66 = 0LL;
                EngPlgBlt(
                  v66,
                  (SURFOBJ *)(*(_QWORD *)&v50 + 24LL),
                  0LL,
                  0LL,
                  xloIdent,
                  0LL,
                  0LL,
                  &pptfx,
                  &prcl,
                  0LL,
                  3u);
                v50 = v83;
                prcl.right = DWORD2(v102) - v102;
                prcl.bottom = HIDWORD(v102) - DWORD1(v102);
                *(_QWORD *)&prcl.left = 0LL;
                `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))Scale_None);
LABEL_102:
                v67 = 0LL;
                v79 = 0LL;
                if ( *((_QWORD *)v97[0] + 64) == *((_QWORD *)v86[0] + 64)
                  || (inited = EXLATEOBJ::bInitXlateObj(
                                 (__int64 *)&v79,
                                 0LL,
                                 0,
                                 v39,
                                 v27,
                                 v40,
                                 v28,
                                 *(_DWORD *)(*((_QWORD *)v86[0] + 10) + 40LL),
                                 *(_DWORD *)(*((_QWORD *)v86[0] + 10) + 32LL),
                                 -1,
                                 0),
                      v67 = v79,
                      inited) )
                {
                  v70 = v82;
                  ++*((_DWORD *)v82 + 23);
                  if ( *((_QWORD *)v86[0] + 6) == *((_QWORD *)v97[0] + 6)
                    || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v86) && *(_QWORD *)(v71 + 3536) == v72 )
                  {
                    if ( ((_DWORD)v70[28] & 0x8000) != 0 )
                      v73 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v70 + 6) + 3304LL);
                    else
                      v73 = EngTransparentBlt;
                    v74 = 0LL;
                    if ( v50 )
                      v74 = *(_QWORD *)&v50 + 24LL;
                    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))v73)(
                            v70 + 6,
                            v74,
                            v104,
                            v67,
                            &v102,
                            &prcl,
                            NearestIndexFromColorref,
                            0);
                    goto LABEL_119;
                  }
                  v69 = 87;
                }
                else
                {
                  v69 = 6;
                }
                EngSetLastError(v69);
LABEL_119:
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v79);
                SURFMEM::~SURFMEM((SURFMEM *)&v83);
                SURFMEM::~SURFMEM((SURFMEM *)&v81);
LABEL_125:
                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v100, v23, v24, v25);
LABEL_127:
                `vector destructor iterator'(&v106, 8uLL, 4uLL, (void (*)(void *))Scale_None);
LABEL_129:
                v15 = v11;
                goto LABEL_130;
              }
              v54 = *(int **)(*(_QWORD *)&v83 + 72LL);
              for ( k = v53; k; --k )
                *v54++ = NearestIndexFromColorref;
            }
            v50 = v79;
            goto LABEL_98;
          }
          v64 = *(unsigned int *)(*(_QWORD *)&v83 + 64LL);
          v65 = NearestIndexFromColorref;
        }
        memset(*(void **)(*(_QWORD *)&v83 + 72LL), v65, v64);
        goto LABEL_98;
      }
      EngSetLastError(8u);
      v15 = 0;
      SURFMEM::~SURFMEM((SURFMEM *)&v83);
      goto LABEL_106;
    }
    v75 = 87;
LABEL_122:
    EngSetLastError(v75);
    goto LABEL_125;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
