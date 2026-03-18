/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E950
 * Callers:
 *     GreGradientFill @ 0x1C0019264 (GreGradientFill.c)
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C00F0040 (NtGdiTransparentBlt.c)
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00FC4C8 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     GrePlgBlt @ 0x1C028000C (GrePlgBlt.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027E60 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C002DBA0 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0030220 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0030434 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00326B0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreDereferenceObject @ 0x1C007F7C0 (GreDereferenceObject.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00E4674 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C014B76C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028DEB0 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02902CC (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this)
{
  int v1; // eax
  struct XDCOBJ *v3; // rbx
  __int64 v4; // rcx
  SURFACE *v5; // rdi
  __int64 v6; // rcx
  SURFACE *v7; // rcx
  __int64 v8; // rax
  SURFACE *v9; // rdi
  struct DC *v10; // rcx
  int v11; // edx
  _QWORD **v12; // rax
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
  __int64 *ThreadWin32Thread; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  HDC v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rsi
  DC *v40; // rbp
  __int64 v41; // rbx
  char v42; // bl
  __int64 v43; // rcx
  __int64 v44; // rax
  DCVISRGNSHARELOCK *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  HDC v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rsi
  DC *v55; // rbp
  __int64 v56; // rbx
  char v57; // bl
  __int64 v58; // rcx
  __int64 v59; // rax
  DCVISRGNSHARELOCK *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rax
  signed __int32 v63[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v64; // [rsp+20h] [rbp-88h]
  __int64 v65; // [rsp+30h] [rbp-78h] BYREF
  __int64 v66; // [rsp+38h] [rbp-70h] BYREF
  DC *v67[2]; // [rsp+40h] [rbp-68h] BYREF
  DC *v68[3]; // [rsp+50h] [rbp-58h] BYREF
  char v69; // [rsp+B0h] [rbp+8h] BYREF
  char v70; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v71; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v72; // [rsp+C8h] [rbp+20h] BYREF

  v1 = *((_DWORD *)this + 18);
  if ( (v1 & 0x1000) != 0 )
  {
    if ( (v1 & 0x8000) != 0 )
    {
      v3 = (DEVLOCKBLTOBJ *)((char *)this + 80);
      v4 = *((_QWORD *)this + 10);
      if ( v4 )
      {
        v5 = *(SURFACE **)(v4 + 512);
        if ( (v1 & 0x400) != 0 )
        {
          bUnHookRedir(v3);
          *((_DWORD *)this + 18) &= ~0x400u;
        }
        if ( (*((_DWORD *)this + 18) & 0x2000) != 0 )
        {
          bUnHookBmpDrv(v3);
          *((_DWORD *)this + 18) &= ~0x2000u;
        }
        if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)v3 + 44LL) & 1) == 0 )
            SURFACE::bUnMap(v5, this, *(struct DC **)v3);
          *(_DWORD *)(*(_QWORD *)v3 + 44LL) &= ~1u;
        }
      }
      _InterlockedOr(v63, 0);
      if ( *((_QWORD *)this + 12) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
    else
    {
      v6 = *((_QWORD *)this + 12);
      if ( v6 )
      {
        if ( (*(_DWORD *)(v6 + 44) & 1) == 0 )
        {
          v7 = *(SURFACE **)(v6 + 512);
          if ( v7 )
            SURFACE::bUnMap(v7, this, 0LL);
        }
        *(_DWORD *)(*((_QWORD *)this + 12) + 44LL) &= ~1u;
      }
      _InterlockedOr(v63, 0);
      v8 = *((_QWORD *)this + 10);
      v3 = (DEVLOCKBLTOBJ *)((char *)this + 80);
      if ( v8 )
      {
        v9 = *(SURFACE **)(v8 + 512);
        if ( (*((_DWORD *)this + 18) & 0x400) != 0 )
        {
          bUnHookRedir((DEVLOCKBLTOBJ *)((char *)this + 80));
          *((_DWORD *)this + 18) &= ~0x400u;
        }
        if ( (*((_DWORD *)this + 18) & 0x2000) != 0 )
        {
          bUnHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 80));
          *((_DWORD *)this + 18) &= ~0x2000u;
        }
        if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)v3 + 44LL) & 1) == 0 )
            SURFACE::bUnMap(v9, this, *(struct DC **)v3);
          *(_DWORD *)(*(_QWORD *)v3 + 44LL) &= ~1u;
        }
      }
    }
    v10 = *(struct DC **)v3;
    if ( *(_QWORD *)v3 )
    {
      v11 = *((_DWORD *)this + 18);
      if ( (v11 & 0x1000) != 0
        && (*((_DWORD *)v10 + 9) & 0x4000) != 0
        && *((_QWORD *)v10 + 61)
        && *((_DWORD *)v10 + 126) )
      {
        GreUpdateSpriteDevLockEnd(v3, v11 & 0x400000);
      }
    }
  }
  if ( *((_QWORD *)this + 5) )
  {
    v12 = (_QWORD **)*((_QWORD *)this + 8);
    if ( *v12 )
      hbmSelectBitmap(**v12, *((_QWORD *)this + 7), 1LL, 0LL);
    EPALOBJ::~EPALOBJ((DEVLOCKBLTOBJ *)((char *)this + 40));
    bDeleteSurface(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v13 = *((_DWORD *)this + 18);
  if ( (v13 & 0x1000) != 0 )
  {
    if ( (v13 & 0x8000) != 0 )
    {
      v14 = *((_QWORD *)this + 10);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 48);
        if ( (v13 & 0x10) != 0 )
        {
          *(_DWORD *)(v14 + 36) &= ~0x4000u;
          *(_QWORD *)(*((_QWORD *)this + 10) + 512LL) = *(_QWORD *)(v15 + 2576);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 80));
        if ( *((_QWORD *)this + 10) )
        {
          XDCOBJ::RestoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 80));
          _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 10) + 12LL));
          *((_QWORD *)this + 10) = 0LL;
        }
        *((_QWORD *)this + 10) = 0LL;
      }
      _InterlockedOr(v63, 0);
      v16 = *((_QWORD *)this + 12);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 48);
        if ( (*((_DWORD *)this + 18) & 0x20) != 0 )
        {
          *(_DWORD *)(v16 + 36) &= ~0x4000u;
          *(_QWORD *)(*((_QWORD *)this + 12) + 512LL) = *(_QWORD *)(v17 + 2576);
        }
        v18 = *((_QWORD *)this + 14);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 72);
          CurrentProcess = PsGetCurrentProcess();
          MmUnmapViewOfSection(CurrentProcess, v19);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 96));
        XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 96));
        *((_QWORD *)this + 12) = 0LL;
      }
      *((_DWORD *)this + 18) &= ~0x8000u;
    }
    else
    {
      v21 = *((_QWORD *)this + 12);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 48);
        if ( (v13 & 0x20) != 0 )
        {
          *(_DWORD *)(v21 + 36) &= ~0x4000u;
          *(_QWORD *)(*((_QWORD *)this + 12) + 512LL) = *(_QWORD *)(v22 + 2576);
        }
        v23 = *((_QWORD *)this + 14);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 72);
          v25 = PsGetCurrentProcess();
          MmUnmapViewOfSection(v25, v24);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 96));
        if ( *((_QWORD *)this + 12) )
        {
          XDCOBJ::RestoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 96));
          _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 12) + 12LL));
          *((_QWORD *)this + 12) = 0LL;
        }
        *((_QWORD *)this + 12) = 0LL;
      }
      _InterlockedOr(v63, 0);
      v26 = *((_QWORD *)this + 10);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 48);
        if ( (*((_DWORD *)this + 18) & 0x10) != 0 )
        {
          *(_DWORD *)(v26 + 36) &= ~0x4000u;
          *(_QWORD *)(*((_QWORD *)this + 10) + 512LL) = *(_QWORD *)(v27 + 2576);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 80));
        if ( *((_QWORD *)this + 10) )
        {
          XDCOBJ::RestoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 80));
          _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 10) + 12LL));
          *((_QWORD *)this + 10) = 0LL;
        }
        *((_QWORD *)this + 10) = 0LL;
      }
    }
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x1000u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v29 = *ThreadWin32Thread;
      if ( v29 )
      {
        *(_QWORD *)(v29 + 320) = 0LL;
        *(_QWORD *)(v29 + 312) = 0LL;
      }
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v30 = *((_QWORD *)this + 1);
  if ( v30 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v30);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  v31 = *((_DWORD *)this + 18);
  if ( (v31 & 8) != 0 )
    *((_DWORD *)this + 18) = v31 & 0xFFFFFFF7;
  v32 = *((_QWORD *)this + 2);
  if ( v32 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v32);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 16) )
  {
    v33 = (HDC)*((_QWORD *)this + 17);
    v67[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v67, v33);
    LOBYTE(v34) = 5;
    v35 = HmgShareLock(*((_QWORD *)this + 15), v34);
    LOBYTE(v36) = 5;
    v37 = (__int64 *)v35;
    v38 = HmgShareLock(*((_QWORD *)this + 16), v36);
    v39 = *v37;
    v40 = v67[0];
    v41 = v38;
    *((_QWORD *)v67[0] + 64) = v38;
    DEC_SHARE_REF_CNT(v37);
    v72 = 0LL;
    DEC_SHARE_REF_CNT(v41);
    v71 = 0LL;
    GreDereferenceObject(v39, 1LL);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    if ( this != (DEVLOCKBLTOBJ *)-144LL )
      *((_DWORD *)v40 + 9) |= *((_DWORD *)this + 36);
    if ( (*((_DWORD *)v40 + 9) & 0x200) != 0 )
    {
      v42 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v42 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v69);
      v43 = *((_QWORD *)this + 16);
      LOBYTE(v64) = 5;
      v44 = HmgShareUnlockRemoveObject(v43, 0LL, 0LL, 0LL, v64);
      if ( v44 )
        SURFACE::bDeleteSurface(v44, 0LL, 1LL);
      *((_QWORD *)v40 + 65) = 0LL;
      DC::vClearRendering(v40);
      *((_QWORD *)this + 16) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v45);
      if ( v42 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v46 = *((_QWORD *)this + 16);
      LOBYTE(v64) = 5;
      v47 = HmgShareUnlockRemoveObject(v46, 0LL, 0LL, 0LL, v64);
      if ( v47 )
        SURFACE::bDeleteSurface(v47, 0LL, 1LL);
      *((_QWORD *)v40 + 65) = 0LL;
      *((_QWORD *)this + 16) = 0LL;
    }
    XDCOBJ::vUnlock((XDCOBJ *)v67);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v71);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v72);
  }
  if ( *((_QWORD *)this + 20) )
  {
    v48 = (HDC)*((_QWORD *)this + 21);
    v68[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v68, v48);
    LOBYTE(v49) = 5;
    v50 = HmgShareLock(*((_QWORD *)this + 19), v49);
    LOBYTE(v51) = 5;
    v52 = (__int64 *)v50;
    v53 = HmgShareLock(*((_QWORD *)this + 20), v51);
    v54 = *v52;
    v55 = v68[0];
    v56 = v53;
    *((_QWORD *)v68[0] + 64) = v53;
    DEC_SHARE_REF_CNT(v52);
    v66 = 0LL;
    DEC_SHARE_REF_CNT(v56);
    v65 = 0LL;
    GreDereferenceObject(v54, 1LL);
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    if ( (*((_DWORD *)v55 + 9) & 0x200) != 0 )
    {
      v57 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v57 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v70);
      v58 = *((_QWORD *)this + 20);
      LOBYTE(v64) = 5;
      v59 = HmgShareUnlockRemoveObject(v58, 0LL, 0LL, 0LL, v64);
      if ( v59 )
        SURFACE::bDeleteSurface(v59, 0LL, 1LL);
      *((_QWORD *)v55 + 65) = 0LL;
      DC::vClearRendering(v55);
      *((_QWORD *)this + 20) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v60);
      if ( v57 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v61 = *((_QWORD *)this + 20);
      LOBYTE(v64) = 5;
      v62 = HmgShareUnlockRemoveObject(v61, 0LL, 0LL, 0LL, v64);
      if ( v62 )
        SURFACE::bDeleteSurface(v62, 0LL, 1LL);
      *((_QWORD *)v55 + 65) = 0LL;
      *((_QWORD *)this + 20) = 0LL;
    }
    XDCOBJ::vUnlock((XDCOBJ *)v68);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v65);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v66);
  }
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
