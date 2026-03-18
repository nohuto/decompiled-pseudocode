/*
 * XREFs of GreHintSpriteShape @ 0x1C000FAE4
 * Callers:
 *     HintSpriteShape @ 0x1C000E9D0 (HintSpriteShape.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C001D740 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x1C000BE74 (DwmAsyncUpdateSprite.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C000CD18 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C000F65C (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0010330 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00118C0 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0011A90 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0011B08 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0012894 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0012900 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0012928 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0061CB0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C009CE8C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0260008 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C026CCBC (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, __int64 a4, int a5, int a6, int a7)
{
  HBITMAP v8; // rbx
  struct _SURFOBJ *v11; // r14
  struct PDEVOBJ *v12; // rdx
  DWMSPRITE *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  W32PIDLOCK *v20; // r15
  HWND v21; // rsi
  __int64 v22; // xmm1_8
  int v23; // eax
  HDEV v24; // r13
  struct SFMLOGICALSURFACE *v25; // r15
  HLSURF HLSURFClone; // rax
  HDEV v27; // rdx
  HDEV v28; // rdx
  unsigned int v29; // ebx
  int v30; // ecx
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rcx
  int v38; // ebx
  void *v39; // rax
  int updated; // eax
  BOOL v42; // [rsp+50h] [rbp-B0h]
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  HBITMAP v45; // [rsp+68h] [rbp-98h]
  HWND v46; // [rsp+70h] [rbp-90h]
  unsigned int v47; // [rsp+78h] [rbp-88h] BYREF
  int v48; // [rsp+7Ch] [rbp-84h] BYREF
  _BYTE v49[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v50; // [rsp+84h] [rbp-7Ch] BYREF
  _QWORD v51[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v52[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v53[32]; // [rsp+A8h] [rbp-58h] BYREF
  DWMSPRITE *v54; // [rsp+C8h] [rbp-38h]
  _BYTE v55[48]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v56[32]; // [rsp+100h] [rbp+0h] BYREF
  struct SFMLOGICALSURFACE *v57; // [rsp+120h] [rbp+20h]
  struct _RECTL v58; // [rsp+130h] [rbp+30h] BYREF

  v8 = a3;
  v45 = a3;
  v42 = 0;
  v46 = a2;
  v11 = 0LL;
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v56);
  if ( a7 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  if ( a6 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v49, v12, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v53, a2);
    v13 = v54;
    if ( v54 )
    {
      v14 = *((_QWORD *)v54 + 16);
      SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v55, (struct SFMLOGICALSURFACE *)v14);
      v42 = 1;
      v17 = *(_QWORD *)(v14 + 192);
      if ( v17 )
      {
        v18 = SURFOBJ_TO_SURFACE_NOT_NULL(v17);
        if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v18) )
        {
          v20 = (W32PIDLOCK *)(v19 + 264);
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v19 + 264));
          if ( *(_DWORD *)(v18 + 316) )
          {
            v21 = v46;
            *(_QWORD *)(v18 + 336) = v45;
            *(_QWORD *)(v18 + 320) = a1;
            *(_QWORD *)(v18 + 328) = v21;
            *(_OWORD *)(v18 + 344) = *(_OWORD *)a4;
            *(_OWORD *)(v18 + 360) = *(_OWORD *)(a4 + 16);
            *(_OWORD *)(v18 + 376) = *(_OWORD *)(a4 + 32);
            v22 = *(_QWORD *)(a4 + 48);
            *(_DWORD *)(v18 + 404) = a6;
            v23 = *(_DWORD *)(v18 + 112);
            *(_QWORD *)(v18 + 392) = v22;
            *(_DWORD *)(v18 + 400) = a5;
            if ( (v23 & 0x2000000) == 0 )
            {
              *(_DWORD *)(v18 + 112) = v23 | 0x2000000;
              _InterlockedIncrement(&glDelayedHintShape);
            }
            W32PIDLOCK::vUnlockSingleThread(v20);
            SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v55);
            if ( v54 )
              _InterlockedDecrement((volatile signed __int32 *)v54 + 3);
            v54 = 0LL;
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v53);
            goto LABEL_46;
          }
          W32PIDLOCK::vUnlockSingleThread(v20);
        }
        v8 = v45;
      }
      if ( *(_QWORD *)(v14 + 192) || (*(_DWORD *)(v14 + 248) & 1) != 0 )
      {
        v24 = a1;
        HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, (struct SFMLOGICALSURFACE *)v14, 0, a5 & 2, 1);
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v56, HLSURFClone);
        v25 = v57;
        if ( v57 )
        {
          DWMSPRITE::SetLogicalSurface(v13, v27, 0LL);
          DWMSPRITE::SetLogicalSurface(v13, v28, v25);
        }
        else
        {
          if ( v8 )
          {
            v29 = 0;
            SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v55);
            if ( v54 )
              _InterlockedDecrement((volatile signed __int32 *)v54 + 3);
            v54 = 0LL;
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v53);
            goto LABEL_47;
          }
          v25 = (struct SFMLOGICALSURFACE *)v14;
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v14, a1, 0LL);
        }
      }
      else
      {
        v24 = a1;
        v25 = (struct SFMLOGICALSURFACE *)v14;
      }
      if ( v8 )
      {
        LOBYTE(v15) = 5;
        v11 = (struct _SURFOBJ *)(HmgReferenceCheckLock(v8, v15, 0LL) + 24);
        SFMLOGICALSURFACE::SetShape(v25, v24, v11);
        *((_DWORD *)v25 + 64) |= 0x20u;
      }
      else
      {
        *((_DWORD *)v25 + 64) &= 0xFFFFFFDE;
      }
      v30 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
      v31 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
      if ( v11 )
      {
        *((_DWORD *)v25 + 64) |= 1u;
        v32 = *((_QWORD *)v13 + 11);
        *((_DWORD *)v13 + 16) = *((_DWORD *)v13 + 14) + v30;
        *((_DWORD *)v13 + 17) = v31 + *((_DWORD *)v13 + 15);
        if ( v32 )
        {
          v44 = v32;
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v52);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v51);
          if ( v52[0] )
          {
            if ( v51[0] )
            {
              v58.right = *((_DWORD *)v13 + 16) - *((_DWORD *)v13 + 14);
              v58.bottom = *((_DWORD *)v13 + 17) - *((_DWORD *)v13 + 15);
              *(_QWORD *)&v58.left = 0LL;
              RGNOBJ::vSet((RGNOBJ *)v52, &v58);
              if ( RGNOBJ::bMerge((RGNOBJ *)v51, (struct RGNOBJ *)&v44, (struct RGNOBJ *)v52, BYTE1(gafjRgnOp)) )
              {
                if ( !RGNOBJ::bEqual((RGNOBJ *)v51, (struct RGNOBJ *)&v44)
                  && RGNOBJ::bSwap((RGNOBJ *)v51, (struct RGNOBJ *)&v44) )
                {
                  v33 = v44;
                  *((_DWORD *)v13 + 24) = -1;
                  *((_QWORD *)v13 + 11) = v33;
                }
              }
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v51);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v52);
        }
      }
      else
      {
        *((_DWORD *)v13 + 16) = *((_DWORD *)v13 + 14);
        *((_DWORD *)v13 + 17) = *((_DWORD *)v13 + 15);
      }
      v34 = *((_DWORD *)v25 + 64);
      if ( (v34 & 1) != 0 && (*((_DWORD *)v13 + 34) & 0x10) == 0 && (v34 & 0x20) != 0 )
      {
        SFMLOGICALSURFACE::StartSfmStateTracking(v25, v24, gpSfmState, v16);
        SFMLOGICALSURFACE::GetRedirectionInfo(v25, (enum _HLSURF_REDIRECTIONSTYLE *)&v48, &v50, &v47, 0LL, 0LL);
        v35 = *(_QWORD *)v13;
        v36 = *(_QWORD *)v25;
        v37 = *((_DWORD *)v25 + 64) & 4;
        v38 = v37 | *((_DWORD *)v13 + 34) & 1 | (*((_DWORD *)v25 + 64) >> 1) & 0x18 | (2
                                                                                     * (*((_DWORD *)v25 + 64) & 1 | (8 * (*((_DWORD *)v13 + 34) & 0xE))));
        v39 = (void *)UserReferenceDwmApiPort(v37);
        updated = DwmAsyncUpdateSprite(v39, v35, v36, v38, (__int64 *)v13 + 9, (__int128 *)a4, v48, v50, v47);
        *((_DWORD *)v25 + 64) &= ~0x20u;
        v42 = updated >= 0;
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v55);
      if ( v54 )
        _InterlockedDecrement((volatile signed __int32 *)v54 + 3);
    }
    v54 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v53);
LABEL_46:
    v29 = v42;
LABEL_47:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v49);
    goto LABEL_49;
  }
  v29 = GdiHintSpriteShape(a1, a2, v8, 0, 0);
LABEL_49:
  if ( a7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v56);
  return v29;
}
