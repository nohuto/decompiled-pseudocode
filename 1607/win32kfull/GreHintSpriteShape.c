/*
 * XREFs of GreHintSpriteShape @ 0x1C0062450
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C004A9B8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     HintSpriteShape @ 0x1C00623A8 (HintSpriteShape.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0033D28 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00517F0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C005180C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0051834 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C0051ED0 (DwmAsyncUpdateSprite.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0052190 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0052360 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00523D8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0053FC0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0053FF8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0063028 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0064E94 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00662EC (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C025CFA0 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C0269CEC (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 */

__int64 __fastcall GreHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, __int64 a4, int a5, int a6, int a7)
{
  HBITMAP v8; // rbx
  struct _SURFOBJ *v11; // r14
  struct PDEVOBJ *v12; // rdx
  DWMSPRITE *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  W32PIDLOCK *v19; // r15
  HDEV v20; // rdi
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
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  HDEV v44; // [rsp+60h] [rbp-A0h]
  HWND v45; // [rsp+68h] [rbp-98h]
  HBITMAP v46; // [rsp+70h] [rbp-90h]
  unsigned int v47; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v48; // [rsp+7Ch] [rbp-84h] BYREF
  int v49; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v50[4]; // [rsp+84h] [rbp-7Ch] BYREF
  _QWORD v51[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v52[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v53[32]; // [rsp+A8h] [rbp-58h] BYREF
  DWMSPRITE *v54; // [rsp+C8h] [rbp-38h]
  _BYTE v55[48]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v56[32]; // [rsp+100h] [rbp+0h] BYREF
  struct SFMLOGICALSURFACE *v57; // [rsp+120h] [rbp+20h]
  struct _RECTL v58; // [rsp+130h] [rbp+30h] BYREF

  v44 = a1;
  v8 = a3;
  v46 = a3;
  v42 = 0;
  v45 = a2;
  v11 = 0LL;
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v56);
  if ( a7 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  if ( a6 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v50, v12, 0LL, 0LL);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v53, a2);
    v13 = v54;
    if ( v54 )
    {
      v14 = *((_QWORD *)v54 + 16);
      SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v55, (HLSURF *)v14);
      v16 = *(_QWORD *)(v14 + 192);
      v42 = 1;
      if ( v16 )
      {
        v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
        if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v17) )
        {
          v19 = (W32PIDLOCK *)(v18 + 272);
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 272));
          if ( *(_DWORD *)(v17 + 324) )
          {
            v20 = v44;
            v21 = v45;
            *(_QWORD *)(v17 + 344) = v46;
            *(_QWORD *)(v17 + 328) = v20;
            *(_QWORD *)(v17 + 336) = v21;
            *(_OWORD *)(v17 + 352) = *(_OWORD *)a4;
            *(_OWORD *)(v17 + 368) = *(_OWORD *)(a4 + 16);
            *(_OWORD *)(v17 + 384) = *(_OWORD *)(a4 + 32);
            v22 = *(_QWORD *)(a4 + 48);
            *(_DWORD *)(v17 + 412) = a6;
            v23 = *(_DWORD *)(v17 + 112);
            *(_QWORD *)(v17 + 400) = v22;
            *(_DWORD *)(v17 + 408) = a5;
            if ( (v23 & 0x2000000) == 0 )
            {
              *(_DWORD *)(v17 + 112) = v23 | 0x2000000;
              _InterlockedIncrement(&glDelayedHintShape);
            }
            W32PIDLOCK::vUnlockSingleThread(v19);
            SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v55);
            if ( v54 )
              _InterlockedDecrement((volatile signed __int32 *)v54 + 3);
            v54 = 0LL;
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v53);
            goto LABEL_45;
          }
          W32PIDLOCK::vUnlockSingleThread(v19);
        }
        v8 = v46;
      }
      if ( *(_QWORD *)(v14 + 192) || (*(_DWORD *)(v14 + 248) & 1) != 0 )
      {
        v24 = v44;
        HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(v44, (struct SFMLOGICALSURFACE *)v14, 0, a5 & 2, 1);
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
            goto LABEL_46;
          }
          v25 = (struct SFMLOGICALSURFACE *)v14;
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v14, v44, 0LL);
        }
      }
      else
      {
        v24 = v44;
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
          v43 = v32;
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
              if ( RGNOBJ::bMerge((RGNOBJ *)v51, (struct RGNOBJ *)&v43, (struct RGNOBJ *)v52, BYTE1(gafjRgnOp)) )
              {
                if ( !RGNOBJ::bEqual((RGNOBJ *)v51, (struct RGNOBJ *)&v43) )
                {
                  RGNOBJ::vSwap((RGNOBJ *)v51, (struct RGNOBJ *)&v43);
                  v33 = v43;
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
        SFMLOGICALSURFACE::StartSfmStateTracking(v25, v24, gpSfmState);
        SFMLOGICALSURFACE::GetRedirectionInfo(v25, (enum _HLSURF_REDIRECTIONSTYLE *)&v49, &v48, &v47, 0LL, 0LL);
        v35 = *(_QWORD *)v13;
        v36 = *(_QWORD *)v25;
        v37 = *((_DWORD *)v25 + 64) & 4;
        v38 = v37 | *((_DWORD *)v13 + 34) & 1 | (*((_DWORD *)v25 + 64) >> 1) & 0x18 | (2
                                                                                     * (*((_DWORD *)v25 + 64) & 1 | (8 * (*((_DWORD *)v13 + 34) & 0xE))));
        v39 = (void *)UserReferenceDwmApiPort(v37);
        updated = DwmAsyncUpdateSprite(v39, v35, v36, v38, (__int64 *)v13 + 9, (__int128 *)a4, v49, v48, v47);
        *((_DWORD *)v25 + 64) &= ~0x20u;
        v42 = updated >= 0;
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v55);
      if ( v54 )
        _InterlockedDecrement((volatile signed __int32 *)v54 + 3);
    }
    v54 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v53);
LABEL_45:
    v29 = v42;
LABEL_46:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v50);
    goto LABEL_48;
  }
  v29 = GdiHintSpriteShape(a1, a2, v8, 0, 0);
LABEL_48:
  if ( a7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v56);
  return v29;
}
