/*
 * XREFs of NtGdiTransparentBlt @ 0x1C00F0040
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1C0262980 (DxgkEngBltViaGDI.c)
 * Callees:
 *     EngPlgBlt @ 0x1C00041F0 (EngPlgBlt.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QEAAHXZ @ 0x1C0019B8C (-bRotationOrMirroring@EXFORMOBJ@@QEAAHXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0019BFC (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E8D8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E950 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C002F1B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0040108 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C0041D3C (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GetAppCompatFlags2 @ 0x1C00722A8 (GetAppCompatFlags2.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C00F05E0 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00F0AE8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C00F0B1C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0263BDC (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiTransparentBlt(
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
  __int64 v38; // rdx
  FIX v39; // r8d
  FIX x; // eax
  FIX y; // r10d
  FIX v42; // ecx
  int v43; // r9d
  int v44; // r8d
  int v45; // edx
  LONG v46; // ecx
  LONG v47; // edx
  _QWORD *v48; // rax
  bool v49; // zf
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v51; // edx
  POINTFIX v52; // r9
  unsigned int v53; // edx
  unsigned int v54; // edx
  int *v55; // rdi
  __int64 k; // rcx
  __int64 i; // rcx
  _WORD *v58; // rdi
  _BYTE *v59; // r8
  _BYTE *j; // r10
  _BYTE *v61; // rdx
  unsigned __int64 v62; // rcx
  _BYTE *v63; // rdx
  unsigned int v64; // edx
  size_t v65; // r8
  int v66; // edx
  SURFOBJ *v67; // rcx
  ULONG v68; // ecx
  __int64 v69; // rdx
  __int64 v70; // r8
  ULONG v71; // ecx
  int v72; // r12d
  int NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  POINTFIX v74; // [rsp+68h] [rbp-98h] BYREF
  int v75; // [rsp+70h] [rbp-90h]
  __int128 v76; // [rsp+80h] [rbp-80h] BYREF
  DC *v77[2]; // [rsp+90h] [rbp-70h] BYREF
  DC *v78[2]; // [rsp+A0h] [rbp-60h] BYREF
  POINTFIX v79; // [rsp+B0h] [rbp-50h] BYREF
  char v80; // [rsp+B8h] [rbp-48h]
  int v81; // [rsp+BCh] [rbp-44h]
  HDC v82; // [rsp+C0h] [rbp-40h]
  __int64 v83; // [rsp+C8h] [rbp-38h] BYREF
  int v84; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v85; // [rsp+D4h] [rbp-2Ch]
  _BYTE v86[20]; // [rsp+DCh] [rbp-24h] BYREF
  float *v87[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v88[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v89; // [rsp+108h] [rbp+8h]
  int v90; // [rsp+118h] [rbp+18h]
  int v91; // [rsp+11Ch] [rbp+1Ch]
  float *v92[2]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v93[176]; // [rsp+130h] [rbp+30h] BYREF
  RECTL prcl; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v95; // [rsp+1F0h] [rbp+F0h] BYREF
  RECTL v96; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v97[4]; // [rsp+210h] [rbp+110h] BYREF
  RECTL v98; // [rsp+214h] [rbp+114h] BYREF
  struct _POINTFIX v99; // [rsp+2B0h] [rbp+1B0h] BYREF
  FIX v100; // [rsp+2B8h] [rbp+1B8h]
  int v101; // [rsp+2BCh] [rbp+1BCh]
  int v102; // [rsp+2C0h] [rbp+1C0h]
  FIX v103; // [rsp+2C4h] [rbp+1C4h]
  FIX v104; // [rsp+2C8h] [rbp+1C8h]
  int v105; // [rsp+2CCh] [rbp+1CCh]
  __int128 v106; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v107; // [rsp+2E0h] [rbp+1E0h]
  int v108; // [rsp+2E4h] [rbp+1E4h]
  POINTFIX pptfx; // [rsp+2F0h] [rbp+1F0h] BYREF
  POINTFIX v110; // [rsp+2F8h] [rbp+1F8h]
  POINTFIX v111; // [rsp+300h] [rbp+200h]

  v11 = 0;
  v82 = a6;
  v75 = a8;
  if ( a4 >= 0 && a5 >= 0 && a9 >= 0 && a10 >= 0 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v77, a1);
    DCOBJ::DCOBJ((DCOBJ *)v78, v82);
    if ( !v77[0]
      || (*((_DWORD *)v77[0] + 9) & 0x10000) != 0
      || !v78[0]
      || (bSpDwmValidateSurface((struct XDCOBJ *)v78, a7, v75, a9, a10),
          bSpDwmValidateSurface((struct XDCOBJ *)v77, a2, a3, a4, a5),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v87, (struct XDCOBJ *)v77, 0x204u),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v92, (struct XDCOBJ *)v78, 0x204u),
          (unsigned int)EXFORMOBJ::bRotationOrMirroring(v92)) )
    {
      EngSetLastError(0x57u);
LABEL_7:
      v15 = v11;
LABEL_8:
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v78);
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v77);
      return v15;
    }
    prcl.left = a7;
    prcl.right = a9 + a7;
    prcl.top = v75;
    prcl.bottom = v75 + a10;
    EXFORMOBJ::bXform((EXFORMOBJ *)v92, (struct _POINTL *)&prcl);
    ERECTL::vOrder((ERECTL *)&prcl);
    `vector constructor iterator'(&v99, 8uLL, 4, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
    v75 = EXFORMOBJ::bRotationOrMirroring(v87);
    v15 = 1;
    if ( v75 )
    {
      *(_QWORD *)&v106 = __PAIR64__(a3, a2);
      DWORD2(v106) = a4 + a2;
      v108 = a5 + a3;
      HIDWORD(v106) = a3;
      v107 = a2;
      EXFORMOBJ::bXform((EXFORMOBJ *)v87, (struct _POINTL *)&v106, &v99, 3uLL);
      v39 = v100;
      x = v99.x;
      if ( ((_DWORD)v87[0][8] & 1) != 0 )
      {
        if ( v99.x > v100 )
        {
          x = v99.x + 16;
          v39 = v100 + 16;
          v102 += 16;
          v99.x += 16;
          v100 += 16;
        }
        y = v99.y;
        v42 = v103;
        v43 = v101;
        if ( v99.y > v103 )
        {
          y = v99.y + 16;
          v43 = v101 + 16;
          v42 = v103 + 16;
          v99.y += 16;
          v103 += 16;
          v101 += 16;
        }
      }
      else
      {
        v42 = v103;
        v43 = v101;
        y = v99.y;
      }
      v104 = v39 + v102 - x;
      v105 = v42 + v43 - y;
      v44 = v39 > x == v39 > v104;
      v45 = v43 > y == v43 > v105;
      if ( *(&v99.x + 2 * v44) > *(&v99.x + 2 * (v44 ^ 3LL)) )
        v44 ^= 3u;
      if ( *(&v99.y + 2 * v45) > *(&v99.y + 2 * (v45 ^ 3LL)) )
        v45 ^= 3u;
      LODWORD(v76) = (*(&v99.x + 2 * v44) + 15) >> 4;
      DWORD1(v76) = (*(&v99.y + 2 * v45) + 15) >> 4;
      DWORD2(v76) = (*(&v99.x + 2 * (v44 ^ 3LL)) + 15) >> 4;
      HIDWORD(v76) = (*(&v99.y + 2 * (v45 ^ 3LL)) + 15) >> 4;
      v95 = v76;
    }
    else
    {
      *(_QWORD *)&v76 = __PAIR64__(a3, a2);
      DWORD2(v76) = a4 + a2;
      HIDWORD(v76) = a5 + a3;
      v95 = v76;
      EXFORMOBJ::bXform((EXFORMOBJ *)v87, (struct _POINTL *)&v95);
      ERECTL::vOrder((ERECTL *)&v95);
    }
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v95) )
    {
      v11 = 1;
      goto LABEL_48;
    }
    if ( (*((_DWORD *)v77[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v77, (struct ERECTL *)&v95);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v93);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v93, (struct XDCOBJ *)v77, (struct XDCOBJ *)v78) )
    {
      v72 = XDCOBJ::bFullScreen((XDCOBJ *)v78);
      v11 = XDCOBJ::bFullScreen((XDCOBJ *)v77) | v72;
      goto LABEL_47;
    }
    v17 = (HDC)*((_QWORD *)v77[0] + 64);
    v82 = v17;
    if ( !v17
      || (v18 = *((_QWORD *)v17 + 15),
          v19 = *((_QWORD *)v77[0] + 12),
          v20 = (HDC)*((_QWORD *)v78[0] + 64),
          (v74 = (POINTFIX)v20) == 0LL) )
    {
      v11 = 1;
      goto LABEL_47;
    }
    if ( !(unsigned int)SrcSurfaceAccessCheck((struct SURFACE *)v20)
      || !(unsigned int)DestSurfaceAccessCheck((struct SURFACE *)v17) )
    {
      v71 = 6;
      goto LABEL_129;
    }
    v21 = 0;
    v106 = v95;
    v22 = (struct _POINTL *)DC::eptlOrigin(v77[0]);
    if ( !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v95, v22)
      || (v23 = (struct _POINTL *)DC::eptlOrigin(v78[0]), !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&prcl, v23)) )
    {
      v21 = 1;
    }
    v24 = *((_QWORD *)v20 + 6);
    if ( *((_WORD *)v20 + 50) == 1 && v24 && (*(_DWORD *)(v24 + 56) & 0x20000) != 0 )
    {
      v46 = *(_DWORD *)(v24 + 2608);
      if ( prcl.left >= v46 )
      {
        v47 = *(_DWORD *)(v24 + 2612);
        if ( prcl.top >= v47 && prcl.right <= *((_DWORD *)v20 + 14) + v46 )
        {
          v25 = prcl.bottom <= v47 + *((_DWORD *)v20 + 15);
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
    if ( v20 == v82 )
    {
      v96 = prcl;
      ERECTL::operator*=(&v96, &v95);
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v96) )
        v27 = 1;
    }
    if ( !v27 )
    {
      v28 = *((_QWORD *)v20 + 15);
      v29 = *((_QWORD *)v78[0] + 12);
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v28, v29, a11, 1LL);
      v30 = XDCOBJ::prgnEffRao((XDCOBJ *)v77);
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v97, v30, (struct ERECTL *)&v95, 0);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v98) )
      {
LABEL_121:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v93);
        `vector destructor iterator'(&v99, 8uLL, 4, Scale_None);
        goto LABEL_8;
      }
      if ( (*((_DWORD *)v77[0] + 9) & 0xE0) != 0 )
      {
        v96 = v98;
        XDCOBJ::vAccumulateTight((XDCOBJ *)v77, v31, &v96);
      }
      *(_QWORD *)&v76 = 0LL;
      BYTE8(v76) = 0;
      HIDWORD(v76) = 0;
      if ( (GetAppCompatFlags2(0x400u) & 0x8000000) != 0
        && (*(_DWORD *)(*((_QWORD *)v77[0] + 10) + 312LL) & 9) != 9
        && (*(_DWORD *)(*((_QWORD *)v77[0] + 10) + 312LL) & 1) != 0 )
      {
        v85 = 0LL;
        memset(v86, 0, sizeof(v86));
        v85 = *(_QWORD *)(*(_QWORD *)&v74 + 56LL);
        v84 = *(_DWORD *)(*(_QWORD *)&v74 + 96LL);
        v48 = *(_QWORD **)(*(_QWORD *)&v74 + 120LL);
        if ( v48 )
          *(_QWORD *)&v86[4] = *v48;
        else
          *(_QWORD *)&v86[4] = 0LL;
        SURFMEM::bCreateDIB((SURFMEM *)&v76, (struct _DEVBITMAPINFO *)&v84, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !(_QWORD)v76
          || ((*(_QWORD *)&v96.left = 0LL,
               v83 = 0LL,
               v49 = (*(_DWORD *)(*(_QWORD *)&v74 + 112LL) & 0x400) == 0,
               *(_QWORD *)&v96.right = *(_QWORD *)(*(_QWORD *)&v74 + 56LL),
               v49)
            ? (v50 = EngCopyBits)
            : (v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v24 + 2872)),
              !((unsigned int (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, RECTL *, __int64 *))v50)(
                 v76 + 24,
                 *(_QWORD *)&v74 + 24LL,
                 0LL,
                 0LL,
                 &v96,
                 &v83)
           || (v51 = *(_DWORD *)(v76 + 96), (unsigned int)(v51 - 1) > 5)) )
        {
          v15 = 0;
LABEL_120:
          SURFMEM::~SURFMEM((SURFMEM *)&v76);
          goto LABEL_121;
        }
        qword_1C02EA360[v51]();
        v32 = (POINTFIX)v76;
        v74 = (POINTFIX)v76;
      }
      else
      {
        v32 = v74;
      }
      v79 = 0LL;
      v80 = 0;
      v81 = 0;
      if ( !v75 )
        goto LABEL_38;
      v90 = 0;
      v91 = 0;
      v88[1] = DWORD2(v95) - v95;
      v89 = (unsigned int)(HIDWORD(v95) - DWORD1(v95));
      v88[0] = *(_DWORD *)(*(_QWORD *)&v32 + 96LL);
      v90 = *(_DWORD *)(*(_QWORD *)&v32 + 112LL) & 0x40000;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v79, (struct _DEVBITMAPINFO *)v88, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v52 = v79;
        v53 = *(_DWORD *)(*(_QWORD *)&v79 + 64LL);
        if ( *(_DWORD *)(*(_QWORD *)&v32 + 96LL) == 1 )
        {
          v65 = *(unsigned int *)(*(_QWORD *)&v79 + 64LL);
          if ( NearestIndexFromColorref )
            v66 = 255;
          else
            v66 = 0;
        }
        else if ( *(_DWORD *)(*(_QWORD *)&v32 + 96LL) == 2 )
        {
          v65 = *(unsigned int *)(*(_QWORD *)&v79 + 64LL);
          v66 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
        }
        else
        {
          if ( *(_DWORD *)(*(_QWORD *)&v32 + 96LL) != 3 )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v32 + 96LL) == 4 )
            {
              v64 = v53 >> 1;
              if ( !v64 )
                goto LABEL_115;
              v58 = *(_WORD **)(*(_QWORD *)&v79 + 72LL);
              for ( i = v64; i; --i )
                *v58++ = NearestIndexFromColorref;
            }
            else
            {
              if ( *(_DWORD *)(*(_QWORD *)&v32 + 96LL) == 5 )
              {
                v59 = *(_BYTE **)(*(_QWORD *)&v79 + 80LL);
                for ( j = &v59[*(_DWORD *)(*(_QWORD *)&v79 + 60LL) * *(_DWORD *)(*(_QWORD *)&v79 + 88LL)];
                      v59 != j;
                      v59 += *(int *)(*(_QWORD *)&v52 + 88LL) )
                {
                  v61 = v59;
                  v62 = (unsigned __int64)&v59[3 * *(_DWORD *)(*(_QWORD *)&v52 + 56LL) - 2];
                  if ( (unsigned __int64)v59 < v62 )
                  {
                    do
                    {
                      *v61 = NearestIndexFromColorref;
                      v63 = v61 + 1;
                      *v63++ = BYTE1(NearestIndexFromColorref);
                      *v63 = BYTE2(NearestIndexFromColorref);
                      v61 = v63 + 1;
                    }
                    while ( (unsigned __int64)v61 < v62 );
                    v52 = v79;
                  }
                }
                goto LABEL_115;
              }
              if ( *(_DWORD *)(*(_QWORD *)&v32 + 96LL) != 6 || (v54 = v53 >> 2) == 0 )
              {
LABEL_115:
                `vector constructor iterator'(&pptfx, 8uLL, 3, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                v74.x = v99.x - 16 * v106;
                v74.y = v99.y - 16 * DWORD1(v106);
                pptfx = v74;
                v74.x = v100 - 16 * v106;
                v74.y = v101 - 16 * DWORD1(v106);
                v110 = v74;
                v74.x = v102 - 16 * v106;
                v74.y = v103 - 16 * DWORD1(v106);
                v111 = v74;
                if ( v79 )
                  v67 = (SURFOBJ *)(*(_QWORD *)&v79 + 24LL);
                else
                  v67 = 0LL;
                EngPlgBlt(
                  v67,
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
                v32 = v79;
                prcl.right = DWORD2(v95) - v95;
                prcl.bottom = HIDWORD(v95) - DWORD1(v95);
                *(_QWORD *)&prcl.left = 0LL;
                `vector destructor iterator'(&pptfx, 8uLL, 3, Scale_None);
LABEL_38:
                v33 = 0LL;
                v74 = 0LL;
                if ( *((_QWORD *)v78[0] + 64) == *((_QWORD *)v77[0] + 64)
                  || (inited = EXLATEOBJ::bInitXlateObj(
                                 (__int64 *)&v74,
                                 0LL,
                                 0,
                                 v28,
                                 v18,
                                 v29,
                                 v19,
                                 *(_DWORD *)(*((_QWORD *)v77[0] + 10) + 40LL),
                                 *(_DWORD *)(*((_QWORD *)v77[0] + 10) + 32LL),
                                 -1,
                                 0),
                      v33 = v74,
                      inited) )
                {
                  v35 = v82;
                  ++*((_DWORD *)v82 + 23);
                  if ( *((_QWORD *)v77[0] + 6) == *((_QWORD *)v78[0] + 6)
                    || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v77) && *(_QWORD *)(v69 + 3544) == v70 )
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
                            v97,
                            v33,
                            &v95,
                            &prcl,
                            NearestIndexFromColorref,
                            0);
                    goto LABEL_46;
                  }
                  v68 = 87;
                }
                else
                {
                  v68 = 6;
                }
                EngSetLastError(v68);
LABEL_46:
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v74, v38);
                SURFMEM::~SURFMEM((SURFMEM *)&v79);
                SURFMEM::~SURFMEM((SURFMEM *)&v76);
LABEL_47:
                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v93);
LABEL_48:
                `vector destructor iterator'(&v99, 8uLL, 4, Scale_None);
                goto LABEL_7;
              }
              v55 = *(int **)(*(_QWORD *)&v79 + 72LL);
              for ( k = v54; k; --k )
                *v55++ = NearestIndexFromColorref;
            }
            v32 = v74;
            goto LABEL_115;
          }
          v65 = *(unsigned int *)(*(_QWORD *)&v79 + 64LL);
          v66 = NearestIndexFromColorref;
        }
        memset(*(void **)(*(_QWORD *)&v79 + 72LL), v66, v65);
        goto LABEL_115;
      }
      EngSetLastError(8u);
      v15 = 0;
      SURFMEM::~SURFMEM((SURFMEM *)&v79);
      goto LABEL_120;
    }
    v71 = 87;
LABEL_129:
    EngSetLastError(v71);
    goto LABEL_47;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
