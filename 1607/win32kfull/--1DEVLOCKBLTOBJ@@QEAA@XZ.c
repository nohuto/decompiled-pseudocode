/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0
 * Callers:
 *     GrePlgBlt @ 0x1C00011A4 (GrePlgBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C000F1C8 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     GreGradientFill @ 0x1C005FD04 (GreGradientFill.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C013A310 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0046488 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00464E0 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0046814 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C004A9B8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C004FFEC (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreDereferenceObject @ 0x1C00D7D48 (GreDereferenceObject.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C011327C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C01132B8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1C012D2B0 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C01BF4D0 (--1CAutoTGO@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C025B244 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025B528 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028CAF8 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C028EF14 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this, __int64 a2, struct DC *a3, __int64 a4)
{
  int v4; // eax
  struct XDCOBJ *v6; // rbx
  __int64 v7; // rcx
  SURFACE *v8; // rsi
  __int64 v9; // rcx
  SURFACE *v10; // rcx
  struct DC *v11; // rcx
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 CurrentProcess; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  HSURF v40; // rbx
  char v41; // bl
  __int64 v42; // rcx
  __int64 v43; // rax
  DCVISRGNSHARELOCK *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  HSURF v51; // rbx
  DC *v52; // rax
  char v53; // bl
  __int64 v54; // rcx
  __int64 v55; // rax
  DCVISRGNSHARELOCK *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  signed __int32 v59[8]; // [rsp+0h] [rbp-100h] BYREF
  int v60; // [rsp+20h] [rbp-E0h]
  DC *v61[6]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v62[32]; // [rsp+60h] [rbp-A0h] BYREF
  HSURF *v63; // [rsp+80h] [rbp-80h]
  _BYTE v64[32]; // [rsp+88h] [rbp-78h] BYREF
  HSURF *v65; // [rsp+A8h] [rbp-58h]
  DC *v66[6]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v67[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v68; // [rsp+100h] [rbp+0h]
  _BYTE v69[32]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v70; // [rsp+128h] [rbp+28h]
  char v71; // [rsp+160h] [rbp+60h] BYREF
  char v72; // [rsp+168h] [rbp+68h] BYREF

  v4 = *((_DWORD *)this + 28);
  if ( (v4 & 0x1000) != 0 )
  {
    if ( (v4 & 0x8000) != 0 )
    {
      v6 = (DEVLOCKBLTOBJ *)((char *)this + 120);
      v7 = *((_QWORD *)this + 15);
      if ( v7 )
      {
        v8 = *(SURFACE **)(v7 + 512);
        if ( (v4 & 0x400) != 0 )
        {
          bUnHookRedir(v6);
          *((_DWORD *)this + 28) &= ~0x400u;
        }
        if ( (*((_DWORD *)this + 28) & 0x2000) != 0 )
        {
          bUnHookBmpDrv(v6);
          *((_DWORD *)this + 28) &= ~0x2000u;
        }
        if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
        {
          a3 = *(struct DC **)v6;
          if ( (*(_DWORD *)(*(_QWORD *)v6 + 44LL) & 1) == 0 )
            SURFACE::bUnMap(v8, this, a3);
          *(_DWORD *)(*(_QWORD *)v6 + 44LL) &= ~1u;
        }
      }
      _InterlockedOr(v59, 0);
      if ( *((_QWORD *)this + 21) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
    else
    {
      v9 = *((_QWORD *)this + 21);
      if ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 44) & 1) == 0 )
        {
          v10 = *(SURFACE **)(v9 + 512);
          if ( v10 )
            SURFACE::bUnMap(v10, this, 0LL);
        }
        *(_DWORD *)(*((_QWORD *)this + 21) + 44LL) &= ~1u;
      }
      _InterlockedOr(v59, 0);
      v6 = (DEVLOCKBLTOBJ *)((char *)this + 120);
      if ( *((_QWORD *)this + 15) )
        DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    }
    v11 = *(struct DC **)v6;
    if ( *(_QWORD *)v6 )
    {
      v12 = *((_DWORD *)this + 28);
      if ( (v12 & 0x1000) != 0
        && (*((_DWORD *)v11 + 9) & 0x4000) != 0
        && *((_QWORD *)v11 + 61)
        && *((_DWORD *)v11 + 126) )
      {
        GreUpdateSpriteDevLockEnd(v6, v12 & 0x400000);
      }
    }
  }
  if ( *((_QWORD *)this + 5) )
  {
    CAutoTGO::vUnguard((DEVLOCKBLTOBJ *)((char *)this + 56));
    DEVLOCKBLTOBJ::TmpSrcCleanup(this);
  }
  v13 = *((_DWORD *)this + 28);
  if ( (v13 & 0x1000) != 0 )
  {
    if ( (v13 & 0x8000) != 0 )
    {
      v14 = *((_QWORD *)this + 15);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 48);
        if ( (v13 & 0x10) != 0 )
        {
          *(_DWORD *)(v14 + 36) &= ~0x4000u;
          *(_QWORD *)(*((_QWORD *)this + 15) + 512LL) = *(_QWORD *)(v15 + 2576);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DC **)this + 15, (__int64)a3, a4);
        XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 120));
        *((_QWORD *)this + 15) = 0LL;
      }
      _InterlockedOr(v59, 0);
      v16 = *((_QWORD *)this + 21);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 48);
        if ( (*((_DWORD *)this + 28) & 0x20) != 0 )
        {
          *(_DWORD *)(v16 + 36) &= ~0x4000u;
          *(_QWORD *)(*((_QWORD *)this + 21) + 512LL) = *(_QWORD *)(v17 + 2576);
        }
        v18 = *((_QWORD *)this + 27);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 72);
          CurrentProcess = PsGetCurrentProcess();
          MmUnmapViewOfSection(CurrentProcess, v19);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DC **)this + 21, (__int64)a3, a4);
        XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 168));
        *((_QWORD *)this + 21) = 0LL;
      }
      *((_DWORD *)this + 28) &= ~0x8000u;
    }
    else
    {
      v21 = *((_QWORD *)this + 21);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 48);
        if ( (v13 & 0x20) != 0 )
        {
          *(_DWORD *)(v21 + 36) &= ~0x4000u;
          *(_QWORD *)(*((_QWORD *)this + 21) + 512LL) = *(_QWORD *)(v22 + 2576);
        }
        v23 = *((_QWORD *)this + 27);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 72);
          v25 = PsGetCurrentProcess();
          MmUnmapViewOfSection(v25, v24);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DC **)this + 21, (__int64)a3, a4);
        XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 168));
        *((_QWORD *)this + 21) = 0LL;
      }
      _InterlockedOr(v59, 0);
      v26 = *((_QWORD *)this + 15);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 48);
        if ( (*((_DWORD *)this + 28) & 0x10) != 0 )
        {
          *(_DWORD *)(v26 + 36) &= ~0x4000u;
          *(_QWORD *)(*((_QWORD *)this + 15) + 512LL) = *(_QWORD *)(v27 + 2576);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DC **)this + 15, (__int64)a3, a4);
        XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 120));
        *((_QWORD *)this + 15) = 0LL;
      }
    }
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x1000u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v28, v29, v30);
    if ( ThreadWin32Thread )
    {
      v32 = *ThreadWin32Thread;
      if ( v32 )
      {
        *(_QWORD *)(v32 + 320) = 0LL;
        *(_QWORD *)(v32 + 312) = 0LL;
      }
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v33 = *((_QWORD *)this + 1);
  if ( v33 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v33);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  v34 = *((_DWORD *)this + 28);
  if ( (v34 & 8) != 0 )
    *((_DWORD *)this + 28) = v34 & 0xFFFFFFF7;
  v35 = *((_QWORD *)this + 2);
  if ( v35 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v35);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 29) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v61, *((HDC *)this + 30));
    SURFREF::SURFREF((SURFREF *)v62);
    SURFREF::SURFREF((SURFREF *)v67);
    LOBYTE(v36) = 5;
    v37 = HmgShareLock(*((_QWORD *)this + 28), v36);
    v38 = *((_QWORD *)this + 29);
    LOBYTE(v39) = 5;
    v63 = (HSURF *)v37;
    v68 = HmgShareLock(v38, v39);
    v40 = *v63;
    *((_QWORD *)v61[0] + 64) = v68;
    DEC_SHARE_REF_CNT(v63);
    v63 = 0LL;
    DEC_SHARE_REF_CNT(v68);
    v68 = 0LL;
    GreDereferenceObject(v40);
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    if ( this != (DEVLOCKBLTOBJ *)-248LL )
      *((_DWORD *)v61[0] + 9) |= *((_DWORD *)this + 62);
    if ( (*((_DWORD *)v61[0] + 9) & 0x200) != 0 )
    {
      v41 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v41 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v71);
      v42 = *((_QWORD *)this + 29);
      LOBYTE(v60) = 5;
      v43 = HmgShareUnlockRemoveObject(v42, 0LL, 0LL, 0LL, v60);
      if ( v43 )
        SURFACE::bDeleteSurface(v43, 0LL, 1LL);
      *((_QWORD *)v61[0] + 65) = 0LL;
      DC::vClearRendering(v61[0]);
      *((_QWORD *)this + 29) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v44);
      if ( v41 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v45 = *((_QWORD *)this + 29);
      LOBYTE(v60) = 5;
      v46 = HmgShareUnlockRemoveObject(v45, 0LL, 0LL, 0LL, v60);
      if ( v46 )
        SURFACE::bDeleteSurface(v46, 0LL, 1LL);
      *((_QWORD *)v61[0] + 65) = 0LL;
      *((_QWORD *)this + 29) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v67);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v62);
    DCOBJ::~DCOBJ((DCOBJ *)v61);
  }
  if ( *((_QWORD *)this + 33) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v66, *((HDC *)this + 34));
    SURFREF::SURFREF((SURFREF *)v64);
    SURFREF::SURFREF((SURFREF *)v69);
    LOBYTE(v47) = 5;
    v48 = HmgShareLock(*((_QWORD *)this + 32), v47);
    v49 = *((_QWORD *)this + 33);
    LOBYTE(v50) = 5;
    v65 = (HSURF *)v48;
    v70 = HmgShareLock(v49, v50);
    v51 = *v65;
    *((_QWORD *)v66[0] + 64) = v70;
    DEC_SHARE_REF_CNT(v65);
    v65 = 0LL;
    DEC_SHARE_REF_CNT(v70);
    v70 = 0LL;
    GreDereferenceObject(v51);
    v52 = v66[0];
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    if ( (*((_DWORD *)v52 + 9) & 0x200) != 0 )
    {
      v53 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v53 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v72);
      v54 = *((_QWORD *)this + 33);
      LOBYTE(v60) = 5;
      v55 = HmgShareUnlockRemoveObject(v54, 0LL, 0LL, 0LL, v60);
      if ( v55 )
        SURFACE::bDeleteSurface(v55, 0LL, 1LL);
      *((_QWORD *)v66[0] + 65) = 0LL;
      DC::vClearRendering(v66[0]);
      *((_QWORD *)this + 33) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v56);
      if ( v53 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v57 = *((_QWORD *)this + 33);
      LOBYTE(v60) = 5;
      v58 = HmgShareUnlockRemoveObject(v57, 0LL, 0LL, 0LL, v60);
      if ( v58 )
        SURFACE::bDeleteSurface(v58, 0LL, 1LL);
      *((_QWORD *)v66[0] + 65) = 0LL;
      *((_QWORD *)this + 33) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v69);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v64);
    DCOBJ::~DCOBJ((DCOBJ *)v66);
  }
  DCOBJ::~DCOBJ((DEVLOCKBLTOBJ *)((char *)this + 168));
  DCOBJ::~DCOBJ((DEVLOCKBLTOBJ *)((char *)this + 120));
  CAutoTGO::~CAutoTGO((DEVLOCKBLTOBJ *)((char *)this + 56));
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
