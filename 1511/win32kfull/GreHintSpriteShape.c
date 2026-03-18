/*
 * XREFs of GreHintSpriteShape @ 0x1C007B994
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027E60 (-vClearRendering@DC@@QEAAXXZ.c)
 *     HintSpriteShape @ 0x1C007B8EC (HintSpriteShape.c)
 * Callees:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C0016A14 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0038E2C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C003C420 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C003C710 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C003C734 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C004F9C4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C007AF78 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C007B218 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C007B3E8 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C007B460 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C007C138 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E94AC (DwmAsyncUpdateSprite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C026B82C (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 */

__int64 __fastcall GreHintSpriteShape(HDEV a1, struct PDEVOBJ *a2, HBITMAP a3, __int64 a4, int a5, int a6, int a7)
{
  unsigned int v7; // esi
  struct _SURFOBJ *v8; // r14
  HBITMAP v9; // rbx
  HDEV v12; // r15
  DWMSPRITE *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct SFMLOGICALSURFACE *v17; // r12
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  __int64 v22; // rbx
  __int64 v23; // rcx
  W32PIDLOCK *v24; // r15
  HLSURF HLSURFClone; // rax
  HDEV v26; // rdx
  HDEV v27; // rdx
  __int64 v28; // rax
  void *v29; // rax
  __int64 v30; // xmm1_8
  int v31; // eax
  __int64 v32; // rax
  __int64 v34; // [rsp+68h] [rbp-89h] BYREF
  HDEV v35; // [rsp+70h] [rbp-81h]
  HBITMAP v36; // [rsp+78h] [rbp-79h]
  int v37; // [rsp+80h] [rbp-71h] BYREF
  unsigned int v38; // [rsp+84h] [rbp-6Dh] BYREF
  _BYTE v39[4]; // [rsp+88h] [rbp-69h] BYREF
  unsigned int v40; // [rsp+8Ch] [rbp-65h] BYREF
  DWMSPRITE *v41; // [rsp+90h] [rbp-61h] BYREF
  _QWORD v42[2]; // [rsp+98h] [rbp-59h] BYREF
  _QWORD v43[2]; // [rsp+A8h] [rbp-49h] BYREF
  struct SFMLOGICALSURFACE *v44; // [rsp+B8h] [rbp-39h] BYREF
  int v45; // [rsp+C0h] [rbp-31h]
  SFMLOGICALSURFACE *v46[2]; // [rsp+C8h] [rbp-29h] BYREF
  struct _RECTL v47; // [rsp+D8h] [rbp-19h] BYREF

  v7 = 0;
  v44 = 0LL;
  v8 = 0LL;
  v45 = 0;
  v9 = a3;
  v36 = a3;
  v12 = a1;
  v35 = a1;
  if ( a7 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  if ( a6 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v39, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v41, (HWND)a2);
    v13 = v41;
    if ( !v41 )
    {
LABEL_18:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v39);
      goto LABEL_19;
    }
    v14 = *((_QWORD *)v41 + 16);
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v46, (HLSURF *)v14);
    v16 = *(_QWORD *)(v14 + 192);
    if ( v16 )
    {
      v22 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v22) )
      {
        v24 = (W32PIDLOCK *)(v23 + 264);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v23 + 264));
        if ( *(_DWORD *)(v22 + 316) )
        {
          *(_QWORD *)(v22 + 320) = v35;
          *(_QWORD *)(v22 + 328) = a2;
          *(_QWORD *)(v22 + 336) = v36;
          *(_OWORD *)(v22 + 344) = *(_OWORD *)a4;
          *(_OWORD *)(v22 + 360) = *(_OWORD *)(a4 + 16);
          *(_OWORD *)(v22 + 376) = *(_OWORD *)(a4 + 32);
          v30 = *(_QWORD *)(a4 + 48);
          *(_DWORD *)(v22 + 404) = a6;
          v31 = *(_DWORD *)(v22 + 112);
          *(_QWORD *)(v22 + 392) = v30;
          *(_DWORD *)(v22 + 400) = a5;
          if ( (v31 & 0x2000000) == 0 )
          {
            *(_DWORD *)(v22 + 112) = v31 | 0x2000000;
            _InterlockedIncrement(&glDelayedHintShape);
            v13 = v41;
          }
          W32PIDLOCK::vUnlockSingleThread(v24);
          SFMLOGICALSURFACEREF_vDestructorWrap(v46);
          v7 = 1;
          goto LABEL_17;
        }
        W32PIDLOCK::vUnlockSingleThread(v24);
        v12 = v35;
      }
      v9 = v36;
    }
    if ( *(_QWORD *)(v14 + 192) || (*(_DWORD *)(v14 + 248) & 1) != 0 )
    {
      HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(v12, (struct SFMLOGICALSURFACE *)v14, 0, a5 & 2, 1);
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v44, HLSURFClone);
      v17 = v44;
      if ( v44 )
      {
        DWMSPRITE::SetLogicalSurface(v13, v26, 0LL);
        DWMSPRITE::SetLogicalSurface(v13, v27, v17);
      }
      else
      {
        if ( v9 )
        {
          v7 = 0;
          SFMLOGICALSURFACEREF_vDestructorWrap(v46);
LABEL_17:
          _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
          goto LABEL_18;
        }
        v17 = (struct SFMLOGICALSURFACE *)v14;
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v14, v12, 0LL);
      }
    }
    else
    {
      v17 = (struct SFMLOGICALSURFACE *)v14;
    }
    if ( v9 )
    {
      LOBYTE(v15) = 5;
      v8 = (struct _SURFOBJ *)(HmgReferenceCheckLock(v9, v15, 0LL) + 24);
      SFMLOGICALSURFACE::SetShape(v17, v12, v8);
      *((_DWORD *)v17 + 64) |= 0x20u;
    }
    else
    {
      *((_DWORD *)v17 + 64) &= 0xFFFFFFDE;
    }
    v18 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
    v19 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
    if ( v8 )
    {
      *((_DWORD *)v17 + 64) |= 1u;
      v28 = *((_QWORD *)v13 + 11);
      *((_DWORD *)v13 + 16) = *((_DWORD *)v13 + 14) + v18;
      *((_DWORD *)v13 + 17) = v19 + *((_DWORD *)v13 + 15);
      if ( v28 )
      {
        v34 = v28;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v43);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v42);
        if ( v43[0] )
        {
          if ( v42[0] )
          {
            v47.right = *((_DWORD *)v13 + 16) - *((_DWORD *)v13 + 14);
            v47.bottom = *((_DWORD *)v13 + 17) - *((_DWORD *)v13 + 15);
            *(_QWORD *)&v47.left = 0LL;
            RGNOBJ::vSet((RGNOBJ *)v43, &v47);
            if ( RGNOBJ::bMerge((RGNOBJ *)v42, (struct RGNOBJ *)&v34, (struct RGNOBJ *)v43, BYTE1(gafjRgnOp)) )
            {
              if ( !RGNOBJ::bEqual((RGNOBJ *)v42, (struct RGNOBJ *)&v34)
                && RGNOBJ::bSwap((RGNOBJ *)v42, (struct RGNOBJ *)&v34) )
              {
                v32 = v34;
                *((_DWORD *)v13 + 24) = -1;
                *((_QWORD *)v13 + 11) = v32;
              }
            }
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v42);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v43);
      }
    }
    else
    {
      *((_DWORD *)v13 + 16) = *((_DWORD *)v13 + 14);
      *((_DWORD *)v13 + 17) = *((_DWORD *)v13 + 15);
    }
    v20 = *((_DWORD *)v17 + 64);
    if ( (v20 & 1) != 0 && (*((_DWORD *)v13 + 34) & 0x10) == 0 && (v20 & 0x20) != 0 )
    {
      SFMLOGICALSURFACE::StartSfmStateTracking(v17, v12, gpSfmState);
      SFMLOGICALSURFACE::GetRedirectionInfo(v17, (enum _HLSURF_REDIRECTIONSTYLE *)&v37, &v40, &v38, 0LL, 0LL);
      v29 = (void *)UserReferenceDwmApiPort(*((_DWORD *)v17 + 64) & 4);
      v7 = (int)DwmAsyncUpdateSprite(v29, (__int64)v13 + 72, a4, v37, v40, v38) >= 0;
      *((_DWORD *)v17 + 64) &= ~0x20u;
    }
    else
    {
      v7 = 1;
    }
    SFMLOGICALSURFACEREF_vDestructorWrap(v46);
    goto LABEL_17;
  }
  v7 = GdiHintSpriteShape(v12, (HWND)a2, v9, 0, 0);
LABEL_19:
  if ( a7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  SFMLOGICALSURFACEREF_vDestructorWrap(&v44);
  return v7;
}
