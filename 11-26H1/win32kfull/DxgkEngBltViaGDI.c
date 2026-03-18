/*
 * XREFs of DxgkEngBltViaGDI @ 0x1401A9910
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ @ 0x14001678C (--0-$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006BCA0 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140071CD0 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400725E4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007715C (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E1D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     UserGetRedirectedWindowOrigin @ 0x14012E4D0 (UserGetRedirectedWindowOrigin.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x14016C510 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14018A09C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401A98C8 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401AA450 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1401AAB58 (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1401AABD0 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngBltViaGDI(
        __int64 a1,
        HDC a2,
        int *a3,
        __int64 a4,
        PVOID pvBits,
        LONG lWidth,
        int a7,
        int a8,
        char a9,
        char a10,
        unsigned int a11,
        __int64 a12,
        __int64 a13)
{
  unsigned int v15; // r12d
  struct Gre::Base::SESSION_GLOBALS *v16; // r15
  HPALETTE v17; // rax
  char v18; // bl
  HPALETTE v19; // r14
  HBITMAP Bitmap; // r13
  unsigned int v21; // edx
  unsigned __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rax
  HDC DisplayDC; // rax
  HDC v26; // r14
  __int64 v27; // rbx
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r13
  __m128i v33; // xmm2
  int v34; // r10d
  int v35; // eax
  int v36; // r9d
  int v37; // edx
  int v39; // r9d
  int v40; // r8d
  int v41; // r14d
  int v42; // esi
  int v43; // edi
  int v44; // r8d
  int v45; // r10d
  int v46; // ebx
  int v47; // r11d
  int v48; // edx
  unsigned int v49; // eax
  int v50; // r12d
  __int64 v51; // rcx
  int v52; // eax
  int v53; // r15d
  int v54; // ebx
  unsigned int v55; // r13d
  int v56; // edi
  int v57; // esi
  int v58; // ebx
  int v59; // eax
  int v60; // r12d
  int v61; // r9d
  __int64 v62; // rcx
  LONG x; // ebx
  unsigned int v64; // edi
  HDC v65; // r14
  void (__fastcall *v66)(_BYTE *, _BYTE *, int *, int *, LONG, LONG); // r12
  char v67; // [rsp+70h] [rbp-90h]
  struct _POINTL v68; // [rsp+78h] [rbp-88h] BYREF
  SIZEL sizl; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v70; // [rsp+88h] [rbp-78h] BYREF
  __int128 v71; // [rsp+90h] [rbp-70h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v72; // [rsp+A0h] [rbp-60h]
  __int64 v73; // [rsp+A8h] [rbp-58h]
  HDC v74; // [rsp+B0h] [rbp-50h]
  __int128 v75; // [rsp+B8h] [rbp-48h] BYREF
  HPALETTE hpal; // [rsp+C8h] [rbp-38h]
  unsigned int v77; // [rsp+D0h] [rbp-30h]
  unsigned int v78; // [rsp+D4h] [rbp-2Ch]
  __int64 v79; // [rsp+D8h] [rbp-28h]
  HBITMAP v80; // [rsp+E0h] [rbp-20h]
  _OWORD v81[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v82; // [rsp+108h] [rbp+8h]
  _QWORD v83[8]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v84[2]; // [rsp+150h] [rbp+50h] BYREF
  HDC v85; // [rsp+170h] [rbp+70h]
  __int16 v86; // [rsp+178h] [rbp+78h]
  struct SURFACE *v87[2]; // [rsp+180h] [rbp+80h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v88; // [rsp+190h] [rbp+90h]
  _BYTE v89[20]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v90; // [rsp+204h] [rbp+104h]
  int v91; // [rsp+208h] [rbp+108h]
  int v92; // [rsp+20Ch] [rbp+10Ch]
  int v93[4]; // [rsp+210h] [rbp+110h] BYREF
  int v94[4]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v95[96]; // [rsp+230h] [rbp+130h] BYREF

  *(_QWORD *)&v71 = a12;
  v73 = a1;
  *(_QWORD *)v93 = a13;
  v79 = a4;
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v95);
  v15 = 0;
  if ( a2 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v87, a2);
    v16 = v88;
    v72 = v88;
    if ( !v87[0] )
      goto LABEL_28;
    v17 = a9
        ? EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu)
        : EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
    hpal = v17;
    if ( !v17 )
      goto LABEL_28;
    sizl = (SIZEL)__PAIR64__(a8, a7);
    v18 = 1;
    v19 = hpal;
    Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
    v80 = Bitmap;
    DxEngSetPaletteState(hpal, v21, v22);
    if ( !Bitmap )
    {
LABEL_27:
      EngDeletePalette(v19);
LABEL_28:
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v87);
      goto LABEL_29;
    }
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&sizl, v16);
    memset(v81, 0, sizeof(v81));
    PushThreadGuardedObject(
      v81,
      v81,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    v82 = 0LL;
    LOBYTE(v23) = 5;
    v24 = HmgShareLock(v16, Bitmap, v23, 16LL);
    v82 = v24;
    if ( v24 )
    {
      DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v24 + 24), v19);
      *(_DWORD *)(v82 + 112) |= 0x100000u;
      *(_DWORD *)(v82 + 112) |= 0x4000u;
      *(_DWORD *)(v82 + 112) |= 0x200u;
    }
    else
    {
      v18 = 0;
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v81);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *(_QWORD *)&sizl);
    if ( !v18 )
    {
LABEL_26:
      EngDeleteSurface((HSURF)Bitmap);
      goto LABEL_27;
    }
    DisplayDC = (HDC)GreCreateDisplayDC(*((_QWORD *)v87[0] + 6), 1LL);
    v74 = DisplayDC;
    v26 = DisplayDC;
    if ( !DisplayDC )
    {
LABEL_25:
      v19 = hpal;
      goto LABEL_26;
    }
    v27 = 0LL;
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v83, DisplayDC, v16);
    if ( v83[0] )
    {
      LOBYTE(v28) = 7;
      v27 = *(_QWORD *)GrepSelectBitmap(v94, v83, Bitmap, v28);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v83);
    if ( !v27 )
    {
LABEL_24:
      GrepDeleteDC(v26, 20971520LL);
      goto LABEL_25;
    }
    *(_OWORD *)v89 = 0LL;
    sizl = 0LL;
    v29 = *((_QWORD *)v87[0] + 122);
    v75 = 0LL;
    v78 = *(_DWORD *)(v29 + 108);
    v77 = v78 & 7;
    if ( (v78 & 7) != 0 )
      DC::dwSetLayout(v87[0], -1, 0);
    GreAcquireSemaphoreShared<1,>(v16);
    GreAcquireSemaphoreShared<2,>(v16);
    GreAcquireSemaphoreShared<3,>(v16);
    v32 = v73;
    if ( a3 )
    {
      if ( *(_QWORD *)(v73 + 8) )
      {
        v68 = 0LL;
        v58 = _bittest((const signed __int32 *)v87[0] + 9, 0xEu);
        *(_OWORD *)v89 = *(_OWORD *)((char *)v87[0] + 1032);
        if ( _bittest((const signed __int32 *)v87[0] + 9, 0xEu) )
        {
          v70 = 0LL;
          if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v70, v30, v31) )
            ERECTL::bOffsetAdd((ERECTL *)v89, &v70, 0);
        }
        if ( v58 && (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v68, v30, v31) )
          ERECTL::bOffsetAdd((ERECTL *)v89, &v68, 0);
        IntersectRect(&v75, (int *)v89, a3);
        v35 = *(_DWORD *)v89;
        v36 = *(_DWORD *)&v89[12];
        v34 = *(_DWORD *)&v89[8];
        if ( *(_DWORD *)v89 != (_DWORD)v75
          || *(_QWORD *)&v89[4] != *(_QWORD *)((char *)&v75 + 4)
          || *(_DWORD *)&v89[12] != HIDWORD(v75) )
        {
          sizl = (SIZEL)a3;
          LODWORD(v75) = v75 - *(_DWORD *)v89;
          DWORD2(v75) -= *(_DWORD *)v89;
          DWORD1(v75) -= *(_DWORD *)&v89[4];
          HIDWORD(v75) -= *(_DWORD *)&v89[4];
        }
LABEL_19:
        v37 = *(_DWORD *)(v32 + 88);
        v90 = 0;
        *(_DWORD *)&v89[8] = v34 - v35;
        v91 = a7;
        v92 = a8;
        *(_QWORD *)&v89[12] = (unsigned int)(v36 - *(_DWORD *)&v89[4]);
        *(_QWORD *)v89 = 0LL;
        if ( (*(unsigned int (__fastcall **)(_BYTE *, _BYTE *, __int64, __int64))v93)(
               &v89[16],
               v89,
               (v32 + 48) & -(__int64)((v37 & 0x80u) != 0),
               (v32 + 32) & -(__int64)((v37 & 0x40) != 0))
          && (v39 = *(_DWORD *)&v89[8]) != 0
          && (v40 = *(_DWORD *)&v89[12]) != 0 )
        {
          if ( !a3 || *(_QWORD *)(v32 + 8) )
          {
            v41 = *(_DWORD *)&v89[4];
            v42 = *(_DWORD *)v89;
          }
          else
          {
            v39 = *a3 + *(_DWORD *)&v89[8];
            v42 = *a3 + *(_DWORD *)v89;
            v59 = a3[1];
            v41 = v59 + *(_DWORD *)&v89[4];
            v40 = v59 + *(_DWORD *)&v89[12];
            *(_DWORD *)v89 = v42;
            *(_DWORD *)&v89[12] += v59;
            *(_DWORD *)&v89[8] = v39;
            *(_DWORD *)&v89[4] += v59;
          }
          v43 = v92;
          v44 = v40 - v41;
          v45 = v90;
          v46 = v91;
          v47 = v92 - v90;
          v48 = *(_DWORD *)&v89[16];
          if ( v44 == v92 - v90 && v39 - v42 == v91 - *(_DWORD *)&v89[16] )
          {
            v49 = 0;
            v68.x = 0;
            if ( *(_DWORD *)(v32 + 64) )
            {
              while ( 1 )
              {
                v50 = v48;
                v51 = 2LL * v49;
                v71 = 0LL;
                v52 = *(_DWORD *)(v79 + 16LL * v49);
                if ( v52 > v48 )
                  v50 = v52;
                if ( *(_DWORD *)(v79 + 8 * v51 + 8) < v46 )
                  v46 = *(_DWORD *)(v79 + 8 * v51 + 8);
                if ( v50 >= v46 )
                  goto LABEL_48;
                v53 = v45;
                if ( *(_DWORD *)(v79 + 8 * v51 + 4) > v45 )
                  v53 = *(_DWORD *)(v79 + 8 * v51 + 4);
                if ( *(_DWORD *)(v79 + 8 * v51 + 12) < v43 )
                  v43 = *(_DWORD *)(v79 + 8 * v51 + 12);
                if ( v53 >= v43 )
                {
LABEL_48:
                  v43 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
                  v53 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
                  v71 = 0LL;
                  v46 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
                  v50 = _mm_cvtsi128_si32((__m128i)0LL);
                }
                v54 = v42 - v48 + v46;
                v55 = v42 + v50 - v48;
                LODWORD(v71) = v55;
                v56 = v41 - v45 + v43;
                HIDWORD(v71) = v56;
                v70.x = v41 + v53 - v45;
                *(_QWORD *)((char *)&v71 + 4) = __PAIR64__(v54, v70.x);
                if ( sizl )
                {
                  IntersectRect(&v71, (int *)&v71, (int *)&v75);
                  v55 = v71;
                  v56 = HIDWORD(v71);
                  v60 = v71 - v42;
                  v57 = DWORD1(v71);
                  v50 = *(_DWORD *)&v89[16] + v60;
                  v53 = v90 + DWORD1(v71) - v41;
                  v54 = DWORD2(v71);
                }
                else
                {
                  v57 = v41 + v53 - v45;
                }
                if ( a10 )
                {
                  v26 = v74;
                  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v83, v74, v72);
                  v15 = v83[0]
                      ? GrepTransparentBlt(
                          (struct XDCOBJ *)v87,
                          v55,
                          v57,
                          v54 - v55,
                          v56 - v57,
                          (struct XDCOBJ *)v83,
                          v50,
                          v53,
                          v54 - v55,
                          v56 - v57,
                          a11)
                      : 0;
                  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v83);
                }
                else
                {
                  DCOBJ::DCOBJ((DCOBJ *)v83, v72);
                  UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>(v84);
                  v26 = v74;
                  v85 = v74;
                  v86 = 1;
                  v15 = GrepBitBltImpl(
                          (struct XDCOBJ *)v87,
                          v55,
                          v57,
                          v54 - v55,
                          v56 - v57,
                          (struct OPTAPIDCOBJ *)v83,
                          v50,
                          v53,
                          -2134114272,
                          0,
                          0);
                  v83[0] &= -(__int64)((_BYTE)v86 != 0);
                  PopThreadGuardedObject(v84);
                  DCOBJ::~DCOBJ((DCOBJ *)v83);
                }
                v49 = v68.x + 1;
                v68.x = v49;
                if ( v49 >= *(_DWORD *)(v73 + 64) )
                  break;
                v43 = v92;
                v46 = v91;
                v41 = *(_DWORD *)&v89[4];
                v42 = *(_DWORD *)v89;
                v48 = *(_DWORD *)&v89[16];
                v45 = v90;
              }
              v16 = v72;
              goto LABEL_21;
            }
          }
          else
          {
            v61 = v39 - v42;
            v68.x = 0;
            v70.x = 0;
            v62 = *((_QWORD *)v87[0] + 122);
            v67 = *(_BYTE *)(v62 + 215);
            LODWORD(v73) = (v61 << 16) / (v91 - *(_DWORD *)&v89[16]);
            LODWORD(v72) = (v44 << 16) / v47;
            if ( sizl )
            {
              x = ((v91 - *(_DWORD *)&v89[16]) << 16) / v61;
              v68.x = x;
              v70.x = (v47 << 16) / v44;
            }
            else
            {
              x = 0;
            }
            *(_BYTE *)(v62 + 215) = 3;
            v64 = 0;
            if ( *(_DWORD *)(v32 + 64) )
            {
              v65 = v74;
              do
              {
                *(_OWORD *)v93 = 0LL;
                *(_OWORD *)v94 = 0LL;
                IntersectRect(v94, (int *)(v79 + 16LL * v64), (int *)&v89[16]);
                v66 = (void (__fastcall *)(_BYTE *, _BYTE *, int *, int *, LONG, LONG))v71;
                ((void (__fastcall *)(_BYTE *, _BYTE *, int *, int *, _DWORD, _DWORD))v71)(
                  v89,
                  &v89[16],
                  v93,
                  v94,
                  v73,
                  (_DWORD)v72);
                if ( *(_QWORD *)&sizl && (unsigned int)IntersectRect(v93, v93, (int *)&v75) )
                  v66(&v89[16], v89, v94, v93, x, v70.x);
                v15 = 0;
                if ( a10 )
                {
                  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v83, v65, v16);
                  if ( v83[0] )
                    v15 = GrepTransparentBlt(
                            (struct XDCOBJ *)v87,
                            v93[0],
                            v93[1],
                            v93[2] - v93[0],
                            v93[3] - v93[1],
                            (struct XDCOBJ *)v83,
                            v94[0],
                            v94[1],
                            v94[2] - v94[0],
                            v94[3] - v94[1],
                            a11);
                  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v83);
                }
                else
                {
                  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v83, v65, v16);
                  v15 = GrepStretchBlt(
                          v87,
                          v93[0],
                          v93[1],
                          v93[2] - v93[0],
                          v93[3] - v93[1],
                          (struct OPTAPIDCOBJ *)v83,
                          v94[0],
                          v94[1],
                          v94[2] - v94[0],
                          v94[3] - v94[1],
                          -2134114272,
                          0,
                          0);
                  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v83);
                }
                x = v68.x;
                ++v64;
              }
              while ( v64 < *(_DWORD *)(v32 + 64) );
            }
            *(_BYTE *)(*((_QWORD *)v87[0] + 122) + 215LL) = v67;
          }
          v26 = v74;
        }
        else
        {
          v15 = 1;
        }
LABEL_21:
        GrepUnlockVisRgn(v16);
        if ( v77 )
          DC::dwSetLayout(v87[0], -1, v78);
        Bitmap = v80;
        goto LABEL_24;
      }
      v33 = *(__m128i *)a3;
      v34 = a3[2];
    }
    else
    {
      v33 = *(__m128i *)((char *)v87[0] + 1032);
      v34 = _mm_cvtsi128_si32(_mm_srli_si128(v33, 8));
    }
    v35 = _mm_cvtsi128_si32(v33);
    v36 = _mm_cvtsi128_si32(_mm_srli_si128(v33, 12));
    *(__m128i *)v89 = v33;
    goto LABEL_19;
  }
LABEL_29:
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v95);
  return v15;
}
