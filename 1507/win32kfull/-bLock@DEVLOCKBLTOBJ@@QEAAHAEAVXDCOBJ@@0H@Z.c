/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00175C0
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C01058C0 (NtGdiTransparentBlt.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C0122A30 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C0016D88 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0018704 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0018878 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0019EF0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C001A330 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C002FDDC (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C009DA88 (-pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0155C88 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C01C1380 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C025E394 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C025E4D4 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025E4FC (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028DD34 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  int v3; // ebp
  char *v7; // r12
  char *v8; // r13
  int v9; // ebx
  int v10; // r10d
  int v11; // edx
  int v12; // r8d
  bool v13; // zf
  unsigned int v14; // r15d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 ThreadWin32Thread; // rax
  bool v19; // zf
  int v20; // eax
  int v21; // edx
  __int64 v22; // rax
  int v23; // r8d
  __int64 v25; // rax
  __int64 v26; // rbx
  DC *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  unsigned __int64 v30; // r8
  int v31; // r9d
  unsigned __int64 v32; // rdx
  int v33; // r15d
  __int64 v34; // rcx
  int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rcx
  int v40; // r8d
  __int64 v41; // rdx
  int v42; // ecx
  __int64 v43; // rbx
  __int64 v44; // rcx
  int v45; // edx
  __int64 v46; // r8
  __int64 v47; // rbx
  unsigned int v48; // eax
  unsigned int v49; // ebp
  int v50; // edx
  __int64 v51; // rcx
  int v52; // eax
  int v53; // r8d
  __int64 v54; // rdx
  __int64 v55; // rax
  struct _SURFOBJ *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  signed __int32 v60[8]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v61[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v62; // [rsp+40h] [rbp-48h]
  __int64 v63; // [rsp+90h] [rbp+8h] BYREF
  __int64 v64; // [rsp+98h] [rbp+10h] BYREF

  v3 = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = **(_QWORD **)a2;
  *((_QWORD *)this + 34) = **(_QWORD **)a3;
  if ( TrapAppContainerRenderingWorker(a2, (HSURF *)this + 29, (HSURF *)this + 28, (unsigned int *)this + 62)
    && TrapAppContainerRenderingWorker(a3, (HSURF *)this + 33, (HSURF *)this + 32, 0LL) )
  {
    v7 = (char *)this + 120;
    v8 = (char *)this + 168;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    v9 = 1;
    if ( (!(unsigned int)RFONTOBJ::bValid(a3) || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
      && (!(unsigned int)RFONTOBJ::bValid(a2) || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) )
    {
      goto LABEL_27;
    }
    *((_QWORD *)this + 2) = ghsemDynamicModeChange;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *((_DWORD *)this + 28) |= 8u;
    if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
    {
      GreAcquireSemaphoreSharedInternal(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
      v3 = 1;
    }
    v10 = RFONTOBJ::bValid(a3);
    if ( v10 && (unsigned int)RFONTOBJ::bValid(a2) )
    {
      v11 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
      v12 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
      if ( ((v12 ^ v11) & 0x200) != 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 80LL) + 8LL) & 0x4000) != 0 && (v11 & 0x8000) != 0 )
          goto LABEL_23;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 8LL) & 0x4000) == 0 )
          goto LABEL_22;
        v13 = (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x8000) == 0;
      }
      else
      {
        if ( (v12 & 0x200) == 0 || (v11 & 0x200) == 0 || (v12 & 0x8000) == 0 )
          goto LABEL_22;
        v13 = (v11 & 0x8000) == 0;
      }
      if ( v13 )
LABEL_22:
        v9 = 0;
    }
LABEL_23:
    if ( v10 )
    {
      v63 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      v9 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v63);
    }
    if ( (unsigned int)RFONTOBJ::bValid(a2) )
    {
      v64 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
      v9 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v64);
    }
LABEL_27:
    v14 = 11;
    v15 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
    if ( (v15 & 0x200) != 0 )
    {
      if ( (v15 & 0x8000) == 0 || !v9 )
      {
        *((_QWORD *)this + 1) = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
        *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
        if ( v3 && *((_QWORD *)this + 1) == ghsemGreLock )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
          v3 = 0;
        }
        GreAcquireSemaphore(*((_QWORD *)this + 1));
        v16 = *((_QWORD *)this + 1);
        v17 = 11LL;
        if ( v16 == ghsemGreLock )
          v17 = 2LL;
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemSrc", v16, v17);
      }
      if ( (!(unsigned int)RFONTOBJ::bValid(a2) || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0)
        && !(unsigned int)GreGetLockCount() )
      {
        *((_DWORD *)this + 28) |= 0x1000u;
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
        {
          *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
          *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
        }
        GreIncLockCount();
        GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
      }
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x5000) == 0x1000 )
      {
        v19 = (*((_DWORD *)this + 28) & 0x1000) == 0;
LABEL_77:
        if ( !v19 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
          GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        }
        *((_DWORD *)this + 28) &= ~1u;
        if ( v3 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
        return 0LL;
      }
    }
    if ( (unsigned int)RFONTOBJ::bValid(a2) )
    {
      v20 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
      if ( (v20 & 0x200) != 0 )
      {
        if ( (v20 & 0x8000) == 0 || !v9 )
        {
          *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
          *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
          if ( v3 && *(_QWORD *)this == ghsemGreLock )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            GreReleaseSemaphoreInternal(ghsemGreLock);
            v3 = 0;
          }
          GreAcquireSemaphore(*(_QWORD *)this);
          if ( *(_QWORD *)this == ghsemGreLock )
            v14 = 2;
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v14);
          v21 = *((_DWORD *)this + 28);
          if ( (v21 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
            *((_DWORD *)this + 28) = v21 | 0x200;
        }
        if ( !(unsigned int)GreGetLockCount() )
        {
          *((_DWORD *)this + 28) |= 0x1000u;
          v22 = W32GetThreadWin32Thread(KeGetCurrentThread());
          if ( v22 )
          {
            *(_QWORD *)(v22 + 320) = 0LL;
            *(_QWORD *)(v22 + 312) = 0LL;
          }
          GreIncLockCount();
          GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
        }
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
        {
          v19 = (*((_DWORD *)this + 28) & 0x1000) == 0;
          goto LABEL_77;
        }
      }
    }
    v23 = RFONTOBJ::bValid(a2);
    if ( v23 && (*((_DWORD *)this + 28) & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x80000) != 0
      || (*((_DWORD *)this + 28) & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0
      || v23
      && ((*((_DWORD *)this + 28) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0)
      && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x10) != 0
      && !DC::bCompute(*(DC **)a2)
      || ((*((_DWORD *)this + 28) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
      && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0
      && !DC::bCompute(*(DC **)a3) )
    {
      v19 = *((_QWORD *)this + 2) == 0LL;
      goto LABEL_77;
    }
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
    {
      if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
        goto LABEL_102;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
      {
        if ( *((_QWORD *)this + 28) )
          UserIsCurrentProcessImmersiveAppContainer();
        else
          DC::vSetRendering(*(DC **)a2);
        v25 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v26 = v25;
        if ( v25 )
        {
          *(_QWORD *)(v25 + 312) = v7;
          if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
          {
            *(_BYTE *)(v25 + 328) = 1;
            *(_QWORD *)(*(_QWORD *)a2 + 2392LL) = 0LL;
            GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
            *(_DWORD *)(v26 + 336) = giVisRgnUniqueness;
            EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
            GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
          }
        }
      }
      v27 = *(DC **)a3;
      if ( **(_QWORD **)a3 != **(_QWORD **)a2 && (*((_DWORD *)v27 + 9) & 0x200) != 0 )
      {
        if ( *((_QWORD *)this + 32) )
          UserIsCurrentProcessImmersiveAppContainer();
        else
          DC::vSetRendering(v27);
        v28 = W32GetThreadWin32Thread(KeGetCurrentThread());
        if ( v28 )
          *(_QWORD *)(v28 + 320) = a3;
      }
    }
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    }
LABEL_102:
    if ( v3 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      return 1LL;
    RFONTOBJ::bValid(a3);
    v29 = RFONTOBJ::bValid(a2);
    if ( v29 )
      v32 = *(_QWORD *)(*(_QWORD *)a2 + 512LL);
    else
      v32 = 0LL;
    v33 = 0;
    if ( !v30 || !v32 || v30 == v32 )
    {
      if ( v29 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1) )
        v33 = 1;
      if ( (!(unsigned int)RFONTOBJ::bValid(a2) || **(_QWORD **)a2 != **(_QWORD **)a3)
        && !(unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v53, 0) )
      {
        goto LABEL_135;
      }
      goto LABEL_182;
    }
    if ( v30 < v32 )
    {
      *((_DWORD *)this + 28) = v31 | 0x8000;
      LODWORD(v34) = 1;
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0
        && (XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 168), **(HDC **)a3), (v34 = *(_QWORD *)v8) != 0) )
      {
        v35 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
        if ( (v35 & 1) != 0 && (v35 & 0x4000) == 0 && *((_QWORD *)this + 27) && !*((_QWORD *)this + 32) )
        {
          *(_DWORD *)(v34 + 36) |= 0x4000u;
          *(_QWORD *)(*(_QWORD *)v8 + 512LL) = *((_QWORD *)this + 27);
          *((_DWORD *)this + 28) |= 0x20u;
        }
        if ( (unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this) )
          goto LABEL_123;
        *(_DWORD *)(*(_QWORD *)v8 + 44LL) |= 1u;
      }
      else
      {
        *(_QWORD *)v8 = 0LL;
        if ( (_DWORD)v34 )
        {
LABEL_123:
          _InterlockedOr(v60, 0);
          v36 = *(_QWORD *)a2;
          LODWORD(v37) = 1;
          if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
          {
            v38 = *(_QWORD *)(v36 + 48);
            XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v36);
            v39 = *(_QWORD *)(v38 + 1440);
            if ( *(_QWORD *)v7 )
            {
              v40 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
              if ( (v40 & 1) != 0 && (v40 & 0x4000) == 0 && v39 && !*((_QWORD *)this + 28) )
              {
                *(_DWORD *)(*(_QWORD *)v7 + 36LL) |= 0x4000u;
                *(_QWORD *)(*(_QWORD *)v7 + 512LL) = SURFOBJ_TO_SURFACE_NOT_NULL(v39);
                *((_DWORD *)this + 28) |= 0x10u;
              }
              if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
              {
                *(_DWORD *)(*(_QWORD *)v7 + 44LL) |= 1u;
                *((_DWORD *)this + 28) &= ~1u;
                return 0LL;
              }
              goto LABEL_182;
            }
            LODWORD(v37) = 0;
          }
          *(_QWORD *)v7 = 0LL;
          goto LABEL_134;
        }
      }
      v33 = 1;
      goto LABEL_123;
    }
    v41 = *(_QWORD *)a2;
    v42 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
    {
      v43 = *(_QWORD *)(v41 + 48);
      XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v41);
      v44 = *(_QWORD *)(v43 + 1440);
      if ( *(_QWORD *)v7 )
      {
        v45 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
        if ( (v45 & 1) != 0 && (v45 & 0x4000) == 0 && v44 && !*((_QWORD *)this + 28) )
        {
          *(_DWORD *)(*(_QWORD *)v7 + 36LL) |= 0x4000u;
          *(_QWORD *)(*(_QWORD *)v7 + 512LL) = SURFOBJ_TO_SURFACE_NOT_NULL(v44);
          *((_DWORD *)this + 28) |= 0x10u;
        }
        v46 = *(_QWORD *)v7;
        if ( !*(_QWORD *)v7 )
          goto LABEL_161;
        if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
          goto LABEL_161;
        v47 = *(_QWORD *)(v46 + 512);
        if ( !v47 )
          goto LABEL_161;
        v48 = SURFACE::Map(*(_QWORD *)(v46 + 512), this, v46);
        v49 = v48;
        if ( v48 <= 1 )
        {
          if ( (*(_DWORD *)(v47 + 112) & 0x800) != 0
            && *(_QWORD *)(v47 + 240)
            && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120)) )
          {
            *((_DWORD *)this + 28) |= 0x400u;
          }
          if ( (*(_DWORD *)(v47 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120)) )
            *((_DWORD *)this + 28) |= 0x2000u;
          if ( v49 == 1 )
            *((_DWORD *)this + 28) |= 0x40u;
          goto LABEL_161;
        }
        if ( v48 != 2 )
        {
LABEL_161:
          _InterlockedOr(v60, 0);
          LODWORD(v37) = 1;
          if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
          {
            XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 168), **(HDC **)a3);
            v37 = *(_QWORD *)v8;
            if ( *(_QWORD *)v8 )
            {
              v50 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
              if ( (v50 & 1) != 0 && (v50 & 0x4000) == 0 && *((_QWORD *)this + 27) && !*((_QWORD *)this + 32) )
              {
                *(_DWORD *)(v37 + 36) |= 0x4000u;
                *(_QWORD *)(*(_QWORD *)v8 + 512LL) = *((_QWORD *)this + 27);
                *((_DWORD *)this + 28) |= 0x20u;
              }
              if ( *(_QWORD *)v8 )
              {
                if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
                {
                  v51 = *(_QWORD *)(*(_QWORD *)v8 + 512LL);
                  if ( v51 )
                  {
                    v52 = SURFACE::Map(v51, this, 0LL);
                    if ( v52 == 2 )
                    {
                      *(_DWORD *)(*(_QWORD *)v8 + 44LL) |= 1u;
                      *((_DWORD *)this + 28) &= ~1u;
                      return 0LL;
                    }
                    if ( v52 == 1 )
                      *((_DWORD *)this + 28) |= 0x80u;
                  }
                }
              }
              goto LABEL_182;
            }
          }
          *(_QWORD *)v8 = 0LL;
LABEL_134:
          if ( !(_DWORD)v37 )
            goto LABEL_135;
LABEL_182:
          if ( v33
            || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 56LL) & 0x8000) != 0
            && *(_QWORD *)(*(_QWORD *)a2 + 512LL)
            && *(_QWORD *)this )
          {
            goto LABEL_135;
          }
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 56LL) & 0x8000) != 0 )
          {
            v54 = *(_QWORD *)(*(_QWORD *)a3 + 512LL);
            if ( v54 )
            {
              if ( *((_QWORD *)this + 1) )
              {
                if ( bCopySurface((DEVLOCKBLTOBJ *)((char *)this + 40), (struct _SURFOBJ *)(v54 + 24)) )
                {
                  SURFREF::SURFREF((SURFREF *)v61, *(HSURF *)(*(_QWORD *)(*(_QWORD *)a3 + 512LL) + 32LL));
                  if ( hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL) )
                  {
                    v58 = v62;
                    *((_QWORD *)this + 13) = a3;
                    *((_QWORD *)this + 12) = *(_QWORD *)(v58 + 32);
                    SURFREF::vKeepIt((SURFREF *)v61);
                  }
                  else
                  {
                    v55 = W32GetThreadWin32Thread(KeGetCurrentThread());
                    if ( !v55 || *(_QWORD *)(v55 + 368) )
                    {
                      *((_DWORD *)this + 28) &= ~1u;
                      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v61);
                      return 0LL;
                    }
                    v56 = SURFMEM::pSurfobj((DEVLOCKBLTOBJ *)((char *)this + 40));
                    *(_QWORD *)(v57 + 368) = v56;
                  }
                  CAutoTGO::vGuard(
                    (DEVLOCKBLTOBJ *)((char *)this + 56),
                    this,
                    (void (*)(void *))DEVLOCKBLTOBJ::TmpSrcThreadCleanup);
                  EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)this + 1));
                  GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
                  v59 = *((_QWORD *)this + 2);
                  *((_QWORD *)this + 1) = 0LL;
                  *((_QWORD *)this + 4) = 0LL;
                  if ( v59 )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v59);
                    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
                    *((_QWORD *)this + 2) = 0LL;
                  }
                  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v61);
                  return 1LL;
                }
LABEL_135:
                *((_DWORD *)this + 28) &= ~1u;
                return 0LL;
              }
            }
          }
          return 1LL;
        }
        *(_DWORD *)(*(_QWORD *)v7 + 44LL) |= 1u;
LABEL_160:
        v33 = 1;
        goto LABEL_161;
      }
      v42 = 0;
    }
    *(_QWORD *)v7 = 0LL;
    if ( v42 )
      goto LABEL_161;
    goto LABEL_160;
  }
  return 0LL;
}
