/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1402029BC
 * Callers:
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x14001D930 (UserIsWindowWithNoRedirectionBitmap.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x14006BD7C (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140072EE8 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140074A40 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     DwmAsyncUpdateSprite @ 0x14009C7A0 (DwmAsyncUpdateSprite.c)
 *     GreDeleteSprite @ 0x14009CAE8 (GreDeleteSprite.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x14009CE1C (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14009EA74 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x14009EE88 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FAB8 (--0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB18 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB84 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400A153C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x1400A19CC (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 *     DwmAsyncCreateSprite @ 0x1400A19E8 (DwmAsyncCreateSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1400A3968 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1400A5240 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x1400A8A5C (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401AB8AC (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401C32E0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1401D150C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1401D155C (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1401D4F90 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1401E783C (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x140251E2C (UserIsWindowOnDesktopAndComposed.c)
 *     UserGetMiniWinInfo @ 0x14025AF04 (UserGetMiniWinInfo.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x140289F18 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(Gre::Base *a1, __int64 a2)
{
  __int64 v2; // r14
  int v4; // edi
  struct Gre::Base::SESSION_GLOBALS *v5; // rbx
  HDEV v6; // r12
  __int64 v7; // r12
  Gre::Base *v8; // rcx
  __int64 v9; // r8
  unsigned int i; // ecx
  HSPRITE DwmSpriteObj; // rax
  __int64 v12; // r15
  __int64 *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _SURFOBJ *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  BOOL (__stdcall *v25)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rcx
  int v29; // esi
  void *v30; // rax
  Gre::Base *v31; // rcx
  struct Gre::Base::SESSION_GLOBALS *v32; // rax
  int v33; // r9d
  int v34; // ecx
  __int64 v35; // r14
  int v36; // eax
  SFMLOGICALSURFACE *v37; // rbx
  int v38; // esi
  int v39; // r15d
  __int64 v40; // rcx
  int v41; // edx
  __int64 v42; // rbx
  int v43; // r15d
  __int64 v44; // rdi
  void *v45; // rax
  bool v46; // sf
  bool v47; // of
  struct DWMSPRITE *v48; // rsi
  int updated; // eax
  SFMLOGICALSURFACE *v50; // rbx
  __int64 v51; // rax
  struct Gre::Base::SESSION_GLOBALS *v52; // r14
  unsigned int v53; // esi
  _QWORD *v54; // rcx
  _QWORD *v55; // rbx
  __int64 v56; // r8
  _QWORD *v57; // rbx
  _QWORD *v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rdi
  int v63; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v64; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v65; // [rsp+68h] [rbp-98h] BYREF
  int v66; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v67; // [rsp+70h] [rbp-90h] BYREF
  SFMLOGICALSURFACE *v68; // [rsp+78h] [rbp-88h] BYREF
  __int64 v69; // [rsp+80h] [rbp-80h] BYREF
  struct DWMSPRITE *v70; // [rsp+88h] [rbp-78h]
  __int64 v71; // [rsp+90h] [rbp-70h]
  Gre::Base *v72; // [rsp+98h] [rbp-68h] BYREF
  struct W32_PUSH_LOCK *v73; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v74[2]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v75[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v76; // [rsp+D8h] [rbp-28h]
  _BYTE v77[16]; // [rsp+E0h] [rbp-20h] BYREF
  HSEMAPHORE v78; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-8h] BYREF
  HSEMAPHORE v80; // [rsp+100h] [rbp+0h]
  HSEMAPHORE v81; // [rsp+108h] [rbp+8h] BYREF
  HSEMAPHORE v82; // [rsp+110h] [rbp+10h] BYREF
  HSEMAPHORE v83; // [rsp+118h] [rbp+18h]
  _BYTE v84[32]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h] BYREF
  int v87; // [rsp+150h] [rbp+50h]
  int v88; // [rsp+154h] [rbp+54h]
  struct tagRECT v89; // [rsp+158h] [rbp+58h] BYREF
  __int128 v90[9]; // [rsp+170h] [rbp+70h] BYREF

  v71 = a2;
  v72 = a1;
  v2 = a2;
  v4 = 1;
  if ( !a1 )
    return 0LL;
  v5 = Gre::Base::Globals(a1);
  GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared((GreAcquireUnownedDMCLockShared *)v77, v5);
  SEMOBJ<2>::SEMOBJ<2>(&v78, v5);
  SEMOBJ<3>::SEMOBJ<3>(&v79, v5);
  v80 = (HSEMAPHORE)*((_QWORD *)a1 + 7);
  GreAcquireSemaphoreInternal(v80);
  GrepAcquireLockValidate<4>();
  SEMOBJ<6>::SEMOBJ<6>(&v81, v5);
  SEMOBJ<7>::SEMOBJ<7>(&v82, v5);
  v83 = (HSEMAPHORE)*((_QWORD *)a1 + 6);
  GreAcquireSemaphoreInternal(v83);
  GrepAcquireLockValidate<8>();
  v6 = (HDEV)((char *)a1 + 80);
  if ( *((_DWORD *)a1 + 35) )
    v6 = (HDEV)(**((_QWORD **)a1 + 18) + 80LL);
  v7 = *((_QWORD *)v6 + 1);
  v67 = 0;
  v65 = 0;
  v64 = 0;
  v66 = 0;
  while ( v7 )
  {
    v8 = *(Gre::Base **)(v7 + 72);
    if ( v8 && (unsigned int)UserIsWindowOnDesktopAndComposed(v8, v2) )
    {
      if ( *((_DWORD *)a1 + 35) && (*(_DWORD *)v7 & 0x20) == 0 )
      {
        v9 = *(_QWORD *)(v7 + 8);
        for ( i = 0; i < *(_DWORD *)(v9 + 20); ++i )
        {
          if ( (**(_DWORD **)(v9 + 8LL * i + 24) & 0x20) != 0 )
          {
            v7 = *(_QWORD *)(v9 + 8LL * i + 24);
            break;
          }
        }
      }
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v75);
      v76 = 0LL;
      ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v90);
      DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj(*(Gre::Base **)(v7 + 72), v2, a1, 0);
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v75, DwmSpriteObj);
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v90);
      v12 = v76;
      v70 = (struct DWMSPRITE *)v76;
      if ( v76 )
      {
        v13 = *(__int64 **)(v7 + 16);
        v4 = 1;
        v14 = *(_QWORD *)(v76 + 144);
        v68 = (SFMLOGICALSURFACE *)v14;
        v15 = *v13;
        *(_DWORD *)(v76 + 56) = *(_DWORD *)(v7 + 112) + *(_DWORD *)(*v13 + 2576);
        *(_DWORD *)(v12 + 60) = *(_DWORD *)(v15 + 2580) + *(_DWORD *)(v7 + 116);
        v16 = *(_DWORD *)(v7 + 112) + *(_DWORD *)(v15 + 2576);
        *(_DWORD *)(v12 + 64) = v16;
        v17 = (unsigned int)(*(_DWORD *)(v7 + 116) + *(_DWORD *)(v15 + 2580));
        *(_DWORD *)(v12 + 68) = v17;
        *(_QWORD *)(v12 + 72) = *(_QWORD *)(v7 + 224);
        *(_DWORD *)(v12 + 80) = *(_DWORD *)(v7 + 232);
        if ( (*(_DWORD *)v7 & 1) != 0
          || (*(_DWORD *)v7 & 0x10) != 0
          || *(_DWORD *)(v7 + 80) >= *(_DWORD *)(v7 + 88)
          || (v18 = 1, *(_DWORD *)(v7 + 84) >= *(_DWORD *)(v7 + 92)) )
        {
          v18 = 0;
        }
        *(_DWORD *)(v12 + 136) = v18 | *(_DWORD *)(v12 + 136) & 0xFFFFFFFE;
        v19 = *(_QWORD *)(v7 + 128);
        if ( v19 )
        {
          *(_DWORD *)(v12 + 64) = v16 + *(_DWORD *)(v19 + 32);
          *(_DWORD *)(v12 + 68) = v17 + *(_DWORD *)(*(_QWORD *)(v7 + 128) + 36LL);
          v20 = *(_QWORD *)(v7 + 240);
          if ( v20 )
          {
            LOBYTE(v17) = 5;
            v21 = HmgReferenceCheckLock(v20, v17, 0LL);
            SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v14, (HDEV)a1, (struct _SURFOBJ *)(v21 + 24));
            *(_DWORD *)(v14 + 252) |= 1u;
            *(_DWORD *)(v14 + 252) = *(_DWORD *)(v14 + 252) & 0xFFFFFFBF | (*(_DWORD *)v7 >> 1) & 0x40;
          }
          else
          {
            SpCreateSurface((__int64)v84, (__int64)a1, (unsigned int *)(*(_QWORD *)(v7 + 128) + 32LL));
            if ( v85 )
            {
              SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v14, (HDEV)a1, (struct _SURFOBJ *)(v85 + 24));
              v22 = *(struct _SURFOBJ **)(v14 + 184);
              v74[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v74, v22);
              if ( v74[0] )
              {
                v23 = *(_QWORD *)(v7 + 128);
                v24 = *(_QWORD *)(v14 + 184);
                v86 = 0LL;
                v87 = *(_DWORD *)(v23 + 32);
                v88 = *(_DWORD *)(v23 + 36);
                v69 = 0LL;
                if ( (*(_DWORD *)(v24 + 88) & 0x400) != 0 )
                  v25 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a1 + 354);
                else
                  v25 = EngCopyBits;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v72) )
                  v25 = RedirCopyBits;
                if ( *(_BYTE *)(v12 + 126) )
                  SURFACE::set_AppContainerW32PID((SURFACE *)(v24 - 24), *(_DWORD *)(v12 + 112));
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v25)(
                  *(_QWORD *)(v14 + 184),
                  *(_QWORD *)(v7 + 128),
                  0LL,
                  0LL,
                  &v86,
                  &v69);
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v74);
            }
            else
            {
              v4 = 0;
            }
            SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v84);
          }
        }
        if ( v4 )
        {
          memset_0(v90, 0, 0x88uLL);
          v63 = 39168;
          v73 = (struct W32_PUSH_LOCK *)(v12 + 88);
          if ( v12 != -88 )
            GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v12 + 88));
          UserGetMiniWinInfo(*(_QWORD *)(v12 + 40), v90, &v63);
          v26 = *(_QWORD *)(v12 + 40);
          v27 = *(_QWORD *)v12;
          v28 = *(_DWORD *)(v12 + 136) & 1;
          v29 = *(_DWORD *)(v14 + 252) & 0xC | v28 | (2
                                                    * (*(_DWORD *)(v14 + 252) & 1 | *(_DWORD *)(v12 + 136) & 0x40 | (4 * (*(_DWORD *)(v12 + 136) & 0xE))));
          v30 = (void *)UserReferenceDwmApiPort(v28);
          if ( (int)DwmAsyncCreateSprite(v30, v27, v26, (__int128 *)(v12 + 56), v29, v90, v63) < 0 )
          {
            v4 = 0;
          }
          else
          {
            v4 = 1;
            if ( *(_QWORD *)(v14 + 184) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v7 + 72)) )
            {
              *(_DWORD *)(v14 + 252) |= 8u;
              v32 = Gre::Base::Globals(v31);
              SFMLOGICALSURFACE::StartSfmStateTracking(
                (SFMLOGICALSURFACE *)v14,
                (HDEV)a1,
                *((struct SfmState **)v32 + 543),
                v33);
              SFMLOGICALSURFACE::GetRedirectionInfo(
                (SFMLOGICALSURFACE *)v14,
                (enum _HLSURF_REDIRECTIONSTYLE *)&v66,
                &v65,
                &v64,
                0LL,
                0LL);
              v34 = *(_DWORD *)(v12 + 136);
              v35 = *(_QWORD *)(v12 + 104);
              v36 = v34 & 0x40;
              v37 = v68;
              *(_QWORD *)(v12 + 104) = 0LL;
              v38 = *(_DWORD *)(v12 + 116);
              v39 = v34 & 0xE;
              v40 = v34 & 1;
              v41 = *((_DWORD *)v37 + 63);
              v42 = *(_QWORD *)v37;
              v43 = v41 & 0xC | v40 | (2 * (v41 & 1 | v36 | (4 * v39)));
              v44 = *(_QWORD *)v70;
              v45 = (void *)UserReferenceDwmApiPort(v40);
              v47 = __OFSUB__(v38, 1);
              v46 = v38 - 1 < 0;
              v48 = v70;
              updated = DwmAsyncUpdateSprite(v45, v44, v42, v43, (__int64)v70 + 72, v90, v66, v65, v64, v46 == v47, v35);
              v50 = v68;
              v4 = updated >= 0;
              *((_DWORD *)v68 + 63) &= ~8u;
              if ( updated >= 0 )
              {
                v68 = (SFMLOGICALSURFACE *)((char *)v50 + 256);
                if ( v50 != (SFMLOGICALSURFACE *)-256LL )
                  GreAcquirePushLockExclusive((SFMLOGICALSURFACE *)((char *)v50 + 256));
                v89.right = *((_DWORD *)v48 + 16) - *((_DWORD *)v48 + 14);
                v89.bottom = *((_DWORD *)v48 + 17) - *((_DWORD *)v48 + 15);
                *(_QWORD *)&v89.left = 0LL;
                vSpUpdateDirtyRgn(v48, v50, 0LL, (const struct _RECTL *)&v89, &v67, 0);
                Gre::PUSHLOCKEX::vUnlock(&v68, 0);
                v51 = SFMLOGICALSURFACE::uiCookie(v50);
                v4 = bSpDwmNotifyDirty(*(HSPRITE *)v48, v50, v67, v51);
              }
            }
          }
          Gre::PUSHLOCKEX::vUnlock(&v73, 0);
        }
        v2 = v71;
      }
      else
      {
        v4 = 0;
      }
      v7 = *(_QWORD *)(v7 + 24);
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v75);
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 24);
    }
    if ( !v4 )
    {
      v52 = Gre::Base::Globals(v8);
      v53 = 0;
      v54 = (_QWORD *)(*((_QWORD *)v52 + 28) + 80LL);
      v55 = (_QWORD *)*v54;
      if ( (_QWORD *)*v54 != v54 )
      {
        do
        {
          v56 = (unsigned __int64)(v55 - 3) & -(__int64)(v55 != 0LL);
          v55 = *(_QWORD **)(v56 + 0x18);
          GreDeleteSprite(a1, 0LL, *(void **)v56, 1);
        }
        while ( v55 != (_QWORD *)(*((_QWORD *)v52 + 28) + 80LL) );
      }
      goto LABEL_72;
    }
  }
  v53 = v4;
  if ( *((_DWORD *)a1 + 35) )
  {
    v57 = (_QWORD *)*((_QWORD *)a1 + 19);
    if ( v57 )
    {
      do
      {
        v58 = (_QWORD *)v57[1];
        if ( *v57 && (unsigned int)UserIsWindowOnDesktopAndComposed(*v57, v2) )
        {
          GdiHintSpriteShape((HDEV)a1, (HWND)*v57, 0LL, 0, 0);
          GdiDeleteSprite((HDEV)a1, (HWND)*v57, v57);
        }
        v57 = v58;
      }
      while ( v58 );
    }
  }
  else
  {
    v59 = *((_QWORD *)a1 + 11);
    if ( v59 )
    {
      do
      {
        v60 = *(_QWORD *)(v59 + 72);
        v61 = *(_QWORD *)(v59 + 24);
        if ( v60 && (unsigned int)UserIsWindowOnDesktopAndComposed(v60, v2) )
        {
          if ( *(_QWORD *)(v59 + 240) )
            GdiHintSpriteShape((HDEV)a1, *(HWND *)(v59 + 72), 0LL, 0, 0);
          GdiDeleteSprite((HDEV)a1, *(HWND *)(v59 + 72), (_QWORD *)v59);
        }
        v59 = v61;
      }
      while ( v61 );
    }
  }
LABEL_72:
  ENTER_GRE_DWM_CRIT::~ENTER_GRE_DWM_CRIT((ENTER_GRE_DWM_CRIT *)v77);
  return v53;
}
