/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 *     GreGradientFill @ 0x1C0033608 (GreGradientFill.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A289C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C01058C0 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C0122434 (GrePlgBlt.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C000C01C (GreDereferenceObject.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0018630 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0018688 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00187BC (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C001882C (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0018920 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C001BB50 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C001D740 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00DF1D4 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0112294 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C025E2C0 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025E5C0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C0265304 (--1CAutoTGO@@QEAA@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1C02653E8 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028E090 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02904B4 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C02B0114 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this)
{
  int v1; // eax
  struct XDCOBJ *v3; // rbx
  __int64 v4; // rcx
  SURFACE *v5; // rsi
  struct DC *v6; // rcx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 CurrentProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  HSURF v25; // rbx
  char v26; // bl
  __int64 v27; // rcx
  __int64 v28; // rax
  DCVISRGNSHARELOCK *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  HSURF v36; // rbx
  DC *v37; // rax
  char v38; // bl
  __int64 v39; // rcx
  __int64 v40; // rax
  DCVISRGNSHARELOCK *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  signed __int32 v44[8]; // [rsp+0h] [rbp-100h] BYREF
  int v45; // [rsp+20h] [rbp-E0h]
  DC *v46[6]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v47[32]; // [rsp+60h] [rbp-A0h] BYREF
  HSURF *v48; // [rsp+80h] [rbp-80h]
  _BYTE v49[32]; // [rsp+88h] [rbp-78h] BYREF
  HSURF *v50; // [rsp+A8h] [rbp-58h]
  DC *v51[6]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v52[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v53; // [rsp+100h] [rbp+0h]
  _BYTE v54[32]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v55; // [rsp+128h] [rbp+28h]
  char v56; // [rsp+160h] [rbp+60h] BYREF
  char v57; // [rsp+168h] [rbp+68h] BYREF

  v1 = *((_DWORD *)this + 28);
  if ( (v1 & 0x1000) != 0 )
  {
    if ( (v1 & 0x8000) != 0 )
    {
      v3 = (DEVLOCKBLTOBJ *)((char *)this + 120);
      v4 = *((_QWORD *)this + 15);
      if ( v4 )
      {
        v5 = *(SURFACE **)(v4 + 512);
        if ( (v1 & 0x400) != 0 )
        {
          bUnHookRedir(v3);
          *((_DWORD *)this + 28) &= ~0x400u;
        }
        if ( (*((_DWORD *)this + 28) & 0x2000) != 0 )
        {
          bUnHookBmpDrv(v3);
          *((_DWORD *)this + 28) &= ~0x2000u;
        }
        if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)v3 + 44LL) & 1) == 0 )
            SURFACE::bUnMap(v5, this, *(struct DC **)v3);
          *(_DWORD *)(*(_QWORD *)v3 + 44LL) &= ~1u;
        }
      }
      _InterlockedOr(v44, 0);
      if ( *((_QWORD *)this + 21) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
    else
    {
      if ( *((_QWORD *)this + 21) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
      _InterlockedOr(v44, 0);
      v3 = (DEVLOCKBLTOBJ *)((char *)this + 120);
      if ( *((_QWORD *)this + 15) )
        DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    }
    v6 = *(struct DC **)v3;
    if ( *(_QWORD *)v3 )
    {
      v7 = *((_DWORD *)this + 28);
      if ( (v7 & 0x1000) != 0 && (*((_DWORD *)v6 + 9) & 0x4000) != 0 && *((_QWORD *)v6 + 61) && *((_DWORD *)v6 + 126) )
        GreUpdateSpriteDevLockEnd(v3, v7 & 0x400000);
    }
  }
  if ( *((_QWORD *)this + 5) )
  {
    CAutoTGO::vUnguard((DEVLOCKBLTOBJ *)((char *)this + 56));
    DEVLOCKBLTOBJ::TmpSrcCleanup(this);
  }
  v8 = *((_DWORD *)this + 28);
  if ( (v8 & 0x1000) != 0 )
  {
    if ( (v8 & 0x8000) != 0 )
    {
      v9 = *((_QWORD *)this + 15);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 48);
        if ( (v8 & 0x10) != 0 )
        {
          *(_DWORD *)(v9 + 36) &= ~0x4000u;
          *(_QWORD *)(*((_QWORD *)this + 15) + 512LL) = *(_QWORD *)(v10 + 2576);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 120));
        XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 120));
        *((_QWORD *)this + 15) = 0LL;
      }
      _InterlockedOr(v44, 0);
      v11 = *((_QWORD *)this + 21);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 48);
        if ( (*((_DWORD *)this + 28) & 0x20) != 0 )
        {
          *(_DWORD *)(v11 + 36) &= ~0x4000u;
          *(_QWORD *)(*((_QWORD *)this + 21) + 512LL) = *(_QWORD *)(v12 + 2576);
        }
        v13 = *((_QWORD *)this + 27);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 72);
          CurrentProcess = PsGetCurrentProcess();
          MmUnmapViewOfSection(CurrentProcess, v14);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 168));
        XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 168));
        *((_QWORD *)this + 21) = 0LL;
      }
      *((_DWORD *)this + 28) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      _InterlockedOr(v44, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
    }
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x1000u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v17 = *ThreadWin32Thread;
      if ( v17 )
      {
        *(_QWORD *)(v17 + 320) = 0LL;
        *(_QWORD *)(v17 + 312) = 0LL;
      }
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v18 = *((_QWORD *)this + 1);
  if ( v18 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v18);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  v19 = *((_DWORD *)this + 28);
  if ( (v19 & 8) != 0 )
    *((_DWORD *)this + 28) = v19 & 0xFFFFFFF7;
  v20 = *((_QWORD *)this + 2);
  if ( v20 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v20);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 29) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v46, *((HDC *)this + 30));
    SURFREF::SURFREF((SURFREF *)v49);
    SURFREF::SURFREF((SURFREF *)v52);
    LOBYTE(v21) = 5;
    v22 = HmgShareLock(*((_QWORD *)this + 28), v21);
    v23 = *((_QWORD *)this + 29);
    LOBYTE(v24) = 5;
    v50 = (HSURF *)v22;
    v53 = HmgShareLock(v23, v24);
    v25 = *v50;
    *((_QWORD *)v46[0] + 64) = v53;
    DEC_SHARE_REF_CNT(v50);
    v50 = 0LL;
    DEC_SHARE_REF_CNT(v53);
    v53 = 0LL;
    GreDereferenceObject(v25, 1u);
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    if ( this != (DEVLOCKBLTOBJ *)-248LL )
      *((_DWORD *)v46[0] + 9) |= *((_DWORD *)this + 62);
    if ( (*((_DWORD *)v46[0] + 9) & 0x200) != 0 )
    {
      v26 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v26 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v56);
      v27 = *((_QWORD *)this + 29);
      LOBYTE(v45) = 5;
      v28 = HmgShareUnlockRemoveObject(v27, 0LL, 0LL, 0LL, v45);
      if ( v28 )
        SURFACE::bDeleteSurface(v28, 0LL, 1LL);
      *((_QWORD *)v46[0] + 65) = 0LL;
      DC::vClearRendering(v46[0]);
      *((_QWORD *)this + 29) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v29);
      if ( v26 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v30 = *((_QWORD *)this + 29);
      LOBYTE(v45) = 5;
      v31 = HmgShareUnlockRemoveObject(v30, 0LL, 0LL, 0LL, v45);
      if ( v31 )
        SURFACE::bDeleteSurface(v31, 0LL, 1LL);
      *((_QWORD *)v46[0] + 65) = 0LL;
      *((_QWORD *)this + 29) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v52);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v49);
    DCOBJ::~DCOBJ((DCOBJ *)v46);
  }
  if ( *((_QWORD *)this + 33) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v51, *((HDC *)this + 34));
    SURFREF::SURFREF((SURFREF *)v47);
    SURFREF::SURFREF((SURFREF *)v54);
    LOBYTE(v32) = 5;
    v33 = HmgShareLock(*((_QWORD *)this + 32), v32);
    v34 = *((_QWORD *)this + 33);
    LOBYTE(v35) = 5;
    v48 = (HSURF *)v33;
    v55 = HmgShareLock(v34, v35);
    v36 = *v48;
    *((_QWORD *)v51[0] + 64) = v55;
    DEC_SHARE_REF_CNT(v48);
    v48 = 0LL;
    DEC_SHARE_REF_CNT(v55);
    v55 = 0LL;
    GreDereferenceObject(v36, 1u);
    v37 = v51[0];
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    if ( (*((_DWORD *)v37 + 9) & 0x200) != 0 )
    {
      v38 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v38 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v57);
      v39 = *((_QWORD *)this + 33);
      LOBYTE(v45) = 5;
      v40 = HmgShareUnlockRemoveObject(v39, 0LL, 0LL, 0LL, v45);
      if ( v40 )
        SURFACE::bDeleteSurface(v40, 0LL, 1LL);
      *((_QWORD *)v51[0] + 65) = 0LL;
      DC::vClearRendering(v51[0]);
      *((_QWORD *)this + 33) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v41);
      if ( v38 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v42 = *((_QWORD *)this + 33);
      LOBYTE(v45) = 5;
      v43 = HmgShareUnlockRemoveObject(v42, 0LL, 0LL, 0LL, v45);
      if ( v43 )
        SURFACE::bDeleteSurface(v43, 0LL, 1LL);
      *((_QWORD *)v51[0] + 65) = 0LL;
      *((_QWORD *)this + 33) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v54);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v47);
    DCOBJ::~DCOBJ((DCOBJ *)v51);
  }
  DCOBJ::~DCOBJ((DEVLOCKBLTOBJ *)((char *)this + 168));
  DCOBJ::~DCOBJ((DEVLOCKBLTOBJ *)((char *)this + 120));
  CAutoTGO::~CAutoTGO((DEVLOCKBLTOBJ *)((char *)this + 56));
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
