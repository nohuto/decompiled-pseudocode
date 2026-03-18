/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00453F0
 * Callers:
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C0001144 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C013A310 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0022AB0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C0028A48 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0035120 (-pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0044F30 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C0045398 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004655C (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0046684 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0046768 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C01BF508 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C025B314 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C025B43C (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028C7A4 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  int v3; // ebp
  char *v7; // r12
  char *v8; // r13
  int v9; // ebx
  BOOL v10; // r10d
  int v11; // edx
  int v12; // r8d
  bool v13; // zf
  unsigned int v14; // r15d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 ThreadWin32Thread; // rax
  bool v22; // zf
  int v23; // eax
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  BOOL v29; // r8d
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rbx
  DC *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  BOOL v41; // eax
  unsigned __int64 v42; // r8
  int v43; // r9d
  unsigned __int64 v44; // rdx
  int v45; // r15d
  int v46; // ecx
  int v47; // edx
  __int64 v48; // rdx
  int v49; // ecx
  __int64 v50; // rbx
  __int64 v51; // rcx
  int v52; // r8d
  __int64 v53; // r8
  __int64 v54; // rbx
  unsigned int v55; // eax
  unsigned int v56; // ebp
  __int64 v57; // rdx
  int v58; // ecx
  __int64 v59; // rbx
  __int64 v60; // rcx
  int v61; // edx
  int v62; // ecx
  int v63; // edx
  __int64 v64; // rcx
  int v65; // eax
  int v66; // r8d
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  struct _SURFOBJ *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  signed __int32 v76[8]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v77[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v78; // [rsp+40h] [rbp-48h]
  __int64 v79; // [rsp+90h] [rbp+8h] BYREF
  __int64 v80; // [rsp+98h] [rbp+10h] BYREF

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
  if ( TrapAppContainerRenderingWorker((DC **)a2, (HSURF *)this + 29, (HSURF *)this + 28, (unsigned int *)this + 62)
    && TrapAppContainerRenderingWorker((DC **)a3, (HSURF *)this + 33, (HSURF *)this + 32, 0LL) )
  {
    v7 = (char *)this + 120;
    v8 = (char *)this + 168;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    v9 = 1;
    if ( (!RFONTOBJ::bValid(a3) || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
      && (!RFONTOBJ::bValid(a2) || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) )
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
    if ( v10 && RFONTOBJ::bValid(a2) )
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
      v79 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      v9 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v79);
    }
    if ( RFONTOBJ::bValid(a2) )
    {
      v80 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
      v9 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v80);
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
      if ( (!RFONTOBJ::bValid(a2) || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0)
        && !(unsigned int)GreGetLockCount() )
      {
        *((_DWORD *)this + 28) |= 0x1000u;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20);
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
        v22 = (*((_DWORD *)this + 28) & 0x1000) == 0;
LABEL_77:
        if ( !v22 )
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
    if ( RFONTOBJ::bValid(a2) )
    {
      v23 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
      if ( (v23 & 0x200) != 0 )
      {
        if ( (v23 & 0x8000) == 0 || !v9 )
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
          v24 = *((_DWORD *)this + 28);
          if ( (v24 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
            *((_DWORD *)this + 28) = v24 | 0x200;
        }
        if ( !(unsigned int)GreGetLockCount() )
        {
          *((_DWORD *)this + 28) |= 0x1000u;
          v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27);
          if ( v28 )
          {
            *(_QWORD *)(v28 + 320) = 0LL;
            *(_QWORD *)(v28 + 312) = 0LL;
          }
          GreIncLockCount();
          GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
        }
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
        {
          v22 = (*((_DWORD *)this + 28) & 0x1000) == 0;
          goto LABEL_77;
        }
      }
    }
    v29 = RFONTOBJ::bValid(a2);
    if ( v29 && (*((_DWORD *)this + 28) & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x80000) != 0
      || (*((_DWORD *)this + 28) & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0
      || v29
      && ((*((_DWORD *)this + 28) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0)
      && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x10) != 0
      && !DC::bCompute(*(DC **)a2)
      || ((*((_DWORD *)this + 28) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
      && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0
      && !DC::bCompute(*(DC **)a3) )
    {
      v22 = *((_QWORD *)this + 2) == 0LL;
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
        v34 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33);
        v35 = v34;
        if ( v34 )
        {
          *(_QWORD *)(v34 + 312) = v7;
          if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
          {
            *(_BYTE *)(v34 + 328) = 1;
            *(_QWORD *)(*(_QWORD *)a2 + 2392LL) = 0LL;
            GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
            *(_DWORD *)(v35 + 336) = giVisRgnUniqueness;
            EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
            GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
          }
        }
      }
      v36 = *(DC **)a3;
      if ( **(_QWORD **)a3 != **(_QWORD **)a2 && (*((_DWORD *)v36 + 9) & 0x200) != 0 )
      {
        if ( *((_QWORD *)this + 32) )
          UserIsCurrentProcessImmersiveAppContainer();
        else
          DC::vSetRendering(v36);
        v40 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39);
        if ( v40 )
          *(_QWORD *)(v40 + 320) = a3;
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
    v41 = RFONTOBJ::bValid(a2);
    if ( v41 )
      v44 = *(_QWORD *)(*(_QWORD *)a2 + 512LL);
    else
      v44 = 0LL;
    v45 = 0;
    if ( !v42 || !v44 || v42 == v44 )
    {
      if ( v41 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1) )
        v45 = 1;
      if ( (!RFONTOBJ::bValid(a2) || **(_QWORD **)a2 != **(_QWORD **)a3)
        && !(unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v66, 0) )
      {
        goto LABEL_137;
      }
      goto LABEL_186;
    }
    if ( v42 < v44 )
    {
      *((_DWORD *)this + 28) = v43 | 0x8000;
      v46 = 1;
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
      {
        XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 168), **(HDC **)a3);
        if ( *(_QWORD *)v8 )
        {
          v47 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v47 & 1) != 0 && (v47 & 0x4000) == 0 && *((_QWORD *)this + 27) && !*((_QWORD *)this + 32) )
          {
            *(_DWORD *)(*(_QWORD *)v8 + 36LL) |= 0x4000u;
            *(_QWORD *)(*(_QWORD *)v8 + 512LL) = *((_QWORD *)this + 27);
            *((_DWORD *)this + 28) |= 0x20u;
          }
          if ( (unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this) )
            goto LABEL_124;
          *(_DWORD *)(*(_QWORD *)v8 + 44LL) |= 1u;
          goto LABEL_123;
        }
        v46 = 0;
      }
      *(_QWORD *)v8 = 0LL;
      if ( v46 )
      {
LABEL_124:
        _InterlockedOr(v76, 0);
        v48 = *(_QWORD *)a2;
        v49 = 1;
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
        {
          v50 = *(_QWORD *)(v48 + 48);
          XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v48);
          v51 = *(_QWORD *)(v50 + 1440);
          if ( *(_QWORD *)v7 )
          {
            v52 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
            if ( (v52 & 1) != 0 && (v52 & 0x4000) == 0 && v51 && !*((_QWORD *)this + 28) )
            {
              *(_DWORD *)(*(_QWORD *)v7 + 36LL) |= 0x4000u;
              *(_QWORD *)(*(_QWORD *)v7 + 512LL) = SURFOBJ_TO_SURFACE_NOT_NULL(v51);
              *((_DWORD *)this + 28) |= 0x10u;
            }
            v53 = *(_QWORD *)v7;
            if ( *(_QWORD *)v7 )
            {
              if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
              {
                v54 = *(_QWORD *)(v53 + 512);
                if ( v54 )
                {
                  v55 = SURFACE::Map(*(_QWORD *)(v53 + 512), this, v53);
                  v56 = v55;
                  if ( v55 <= 1 )
                  {
                    if ( (*(_DWORD *)(v54 + 112) & 0x800) != 0
                      && *(_QWORD *)(v54 + 248)
                      && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                    {
                      *((_DWORD *)this + 28) |= 0x400u;
                    }
                    if ( (*(_DWORD *)(v54 + 112) & 0x10) != 0
                      && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                    {
                      *((_DWORD *)this + 28) |= 0x2000u;
                    }
                    if ( v56 == 1 )
                      *((_DWORD *)this + 28) |= 0x40u;
                  }
                  else if ( v55 == 2 )
                  {
                    *(_DWORD *)(*(_QWORD *)v7 + 44LL) |= 1u;
LABEL_137:
                    *((_DWORD *)this + 28) &= ~1u;
                    return 0LL;
                  }
                }
              }
            }
            goto LABEL_186;
          }
          v49 = 0;
        }
        *(_QWORD *)v7 = 0LL;
        if ( !v49 )
        {
          *((_DWORD *)this + 28) &= ~1u;
          return 0LL;
        }
LABEL_186:
        if ( v45
          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 56LL) & 0x8000) != 0
          && *(_QWORD *)(*(_QWORD *)a2 + 512LL)
          && *(_QWORD *)this )
        {
          goto LABEL_137;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 56LL) & 0x8000) != 0 )
        {
          v67 = *(_QWORD *)(*(_QWORD *)a3 + 512LL);
          if ( v67 )
          {
            if ( *((_QWORD *)this + 1) )
            {
              if ( !bCopySurface((DEVLOCKBLTOBJ *)((char *)this + 40), (struct _SURFOBJ *)(v67 + 24)) )
                goto LABEL_137;
              SURFREF::SURFREF((SURFREF *)v77, *(HSURF *)(*(_QWORD *)(*(_QWORD *)a3 + 512LL) + 32LL));
              if ( hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL, 0LL) )
              {
                v74 = v78;
                *((_QWORD *)this + 13) = a3;
                *((_QWORD *)this + 12) = *(_QWORD *)(v74 + 32);
                SURFREF::vKeepIt((SURFREF *)v77);
              }
              else
              {
                v71 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70);
                if ( !v71 || *(_QWORD *)(v71 + 360) )
                {
                  *((_DWORD *)this + 28) &= ~1u;
                  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v77);
                  return 0LL;
                }
                v72 = SURFMEM::pSurfobj((struct _SURFOBJ **)this + 5);
                *(_QWORD *)(v73 + 360) = v72;
              }
              CAutoTGO::vGuard(
                (DEVLOCKBLTOBJ *)((char *)this + 56),
                this,
                (void (*)(void *))DEVLOCKBLTOBJ::TmpSrcThreadCleanup);
              EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)this + 1));
              GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
              v75 = *((_QWORD *)this + 2);
              *((_QWORD *)this + 1) = 0LL;
              *((_QWORD *)this + 4) = 0LL;
              if ( v75 )
              {
                EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v75);
                GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
                *((_QWORD *)this + 2) = 0LL;
              }
              SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v77);
            }
          }
        }
        return 1LL;
      }
LABEL_123:
      v45 = 1;
      goto LABEL_124;
    }
    v57 = *(_QWORD *)a2;
    v58 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
    {
      v59 = *(_QWORD *)(v57 + 48);
      XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v57);
      v60 = *(_QWORD *)(v59 + 1440);
      if ( *(_QWORD *)v7 )
      {
        v61 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
        if ( (v61 & 1) != 0 && (v61 & 0x4000) == 0 && v60 && !*((_QWORD *)this + 28) )
        {
          *(_DWORD *)(*(_QWORD *)v7 + 36LL) |= 0x4000u;
          *(_QWORD *)(*(_QWORD *)v7 + 512LL) = SURFOBJ_TO_SURFACE_NOT_NULL(v60);
          *((_DWORD *)this + 28) |= 0x10u;
        }
        if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
        {
          v45 = 1;
          *(_DWORD *)(*(_QWORD *)v7 + 44LL) |= 1u;
        }
        goto LABEL_163;
      }
      v58 = 0;
    }
    *(_QWORD *)v7 = 0LL;
    if ( !v58 )
      v45 = 1;
LABEL_163:
    _InterlockedOr(v76, 0);
    v62 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
    {
      XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 168), **(HDC **)a3);
      if ( *(_QWORD *)v8 )
      {
        v63 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
        if ( (v63 & 1) != 0 && (v63 & 0x4000) == 0 && *((_QWORD *)this + 27) && !*((_QWORD *)this + 32) )
        {
          *(_DWORD *)(*(_QWORD *)v8 + 36LL) |= 0x4000u;
          *(_QWORD *)(*(_QWORD *)v8 + 512LL) = *((_QWORD *)this + 27);
          *((_DWORD *)this + 28) |= 0x20u;
        }
        if ( *(_QWORD *)v8 )
        {
          if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
          {
            v64 = *(_QWORD *)(*(_QWORD *)v8 + 512LL);
            if ( v64 )
            {
              v65 = SURFACE::Map(v64, this, 0LL);
              if ( v65 == 2 )
              {
                *(_DWORD *)(*(_QWORD *)v8 + 44LL) |= 1u;
                *((_DWORD *)this + 28) &= ~1u;
                return 0LL;
              }
              if ( v65 == 1 )
                *((_DWORD *)this + 28) |= 0x80u;
            }
          }
        }
        goto LABEL_186;
      }
      v62 = 0;
    }
    *(_QWORD *)v8 = 0LL;
    if ( !v62 )
    {
      *((_DWORD *)this + 28) &= ~1u;
      return 0LL;
    }
    goto LABEL_186;
  }
  return 0LL;
}
