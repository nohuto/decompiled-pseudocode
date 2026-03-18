/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C002F1B0
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C00F0040 (NtGdiTransparentBlt.c)
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C028000C (GrePlgBlt.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0019BF0 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C002E884 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0030274 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C003032C (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C003038C (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0031BA0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C025DCBC (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  int v6; // ebx
  char *v7; // r15
  int v8; // edi
  BOOL v9; // r10d
  int v10; // r11d
  int v11; // edx
  int v12; // r8d
  bool v13; // zf
  unsigned int v14; // r12d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rax
  bool v20; // zf
  int v21; // eax
  int v22; // edx
  __int64 *v23; // rax
  __int64 v24; // rax
  BOOL v25; // r8d
  __int64 *v26; // rax
  __int64 v27; // rbx
  DC *v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rax
  BOOL v31; // eax
  unsigned __int64 v32; // r8
  int v33; // r9d
  unsigned __int64 v34; // rdx
  int v35; // r12d
  int v36; // ecx
  __int64 v37; // rcx
  int v38; // edx
  __int64 *v39; // rdx
  int v40; // ecx
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // edi
  __int64 v45; // rcx
  int v46; // r8d
  __int64 v47; // rax
  __int64 *v49; // rdx
  int v50; // ecx
  __int64 v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // edi
  __int64 v55; // rcx
  int v56; // r8d
  __int64 *v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // ebx
  __int64 v61; // rcx
  int v62; // edx
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // eax
  int v66; // r8d
  __int64 v67; // rdx
  signed __int32 v68[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v69; // [rsp+60h] [rbp+8h] BYREF
  __int64 v70; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = **(_QWORD **)a2;
  *((_QWORD *)this + 21) = **(_QWORD **)a3;
  if ( TrapAppContainerRenderingWorker(a2, (HSURF *)this + 16, (HSURF *)this + 15, (unsigned int *)this + 36)
    && TrapAppContainerRenderingWorker(a3, (HSURF *)this + 20, (HSURF *)this + 19, 0LL) )
  {
    v6 = 1;
    v7 = (char *)this + 80;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    v8 = 0;
    if ( (!DWMSPRITEREF::bValid(a3) || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
      && (!DWMSPRITEREF::bValid(a2) || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) )
    {
      goto LABEL_28;
    }
    *((_QWORD *)this + 2) = ghsemDynamicModeChange;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *((_DWORD *)this + 18) |= 8u;
    if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
    {
      GreAcquireSemaphoreSharedInternal(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
      v8 = 1;
    }
    v9 = DWMSPRITEREF::bValid(a3);
    if ( !v9 || !DWMSPRITEREF::bValid(a2) )
    {
LABEL_24:
      if ( v9 )
      {
        v69 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
        v6 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v69);
      }
      if ( DWMSPRITEREF::bValid(a2) )
      {
        v70 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        v6 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v70);
      }
LABEL_28:
      v14 = 11;
      v15 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
      if ( (v15 & 0x200) != 0 )
      {
        if ( (v15 & 0x8000) == 0 || !v6 )
        {
          *((_QWORD *)this + 1) = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
          *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
          if ( v8 && *((_QWORD *)this + 1) == ghsemGreLock )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            GreReleaseSemaphoreInternal(ghsemGreLock);
            v8 = 0;
          }
          GreAcquireSemaphore(*((_QWORD *)this + 1));
          v16 = *((_QWORD *)this + 1);
          v17 = 11LL;
          if ( v16 == ghsemGreLock )
            v17 = 2LL;
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemSrc", v16, v17);
        }
        if ( (!DWMSPRITEREF::bValid(a2) || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0)
          && !(unsigned int)GreGetLockCount() )
        {
          *((_DWORD *)this + 18) |= 0x1000u;
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( ThreadWin32Thread )
          {
            v19 = *ThreadWin32Thread;
            if ( v19 )
            {
              *(_QWORD *)(v19 + 320) = 0LL;
              *(_QWORD *)(v19 + 312) = 0LL;
            }
          }
          GreIncLockCount();
          GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
        }
        if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x5000) == 0x1000 )
        {
          v20 = (*((_DWORD *)this + 18) & 0x1000) == 0;
LABEL_80:
          if ( !v20 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
            GreReleaseSemaphoreInternal(ghsemDCVisRgn);
          }
          *((_DWORD *)this + 18) &= ~1u;
          if ( v8 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            GreReleaseSemaphoreInternal(ghsemGreLock);
          }
          return 0LL;
        }
      }
      if ( DWMSPRITEREF::bValid(a2) )
      {
        v21 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
        if ( (v21 & 0x200) != 0 )
        {
          if ( (v21 & 0x8000) == 0 || !v6 )
          {
            *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
            *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
            if ( v8 && *(_QWORD *)this == ghsemGreLock )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
              GreReleaseSemaphoreInternal(ghsemGreLock);
              v8 = 0;
            }
            GreAcquireSemaphore(*(_QWORD *)this);
            if ( *(_QWORD *)this == ghsemGreLock )
              v14 = 2;
            EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v14);
            v22 = *((_DWORD *)this + 18);
            if ( (v22 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
              *((_DWORD *)this + 18) = v22 | 0x200;
          }
          if ( !(unsigned int)GreGetLockCount() )
          {
            *((_DWORD *)this + 18) |= 0x1000u;
            v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v23 )
            {
              v24 = *v23;
              if ( v24 )
              {
                *(_QWORD *)(v24 + 320) = 0LL;
                *(_QWORD *)(v24 + 312) = 0LL;
              }
            }
            GreIncLockCount();
            GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
          }
          if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
          {
            v20 = (*((_DWORD *)this + 18) & 0x1000) == 0;
            goto LABEL_80;
          }
        }
      }
      v25 = DWMSPRITEREF::bValid(a2);
      if ( v25 && (*((_DWORD *)this + 18) & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x80000) != 0
        || (*((_DWORD *)this + 18) & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0
        || v25
        && ((*((_DWORD *)this + 18) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0)
        && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x10) != 0
        && !DC::bCompute(*(DC **)a2)
        || ((*((_DWORD *)this + 18) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
        && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0
        && !DC::bCompute(*(DC **)a3) )
      {
        v20 = *((_QWORD *)this + 2) == 0LL;
        goto LABEL_80;
      }
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
      {
        if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
          goto LABEL_106;
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
        {
          if ( *((_QWORD *)this + 15) )
            UserIsCurrentProcessImmersiveAppContainer();
          else
            DC::vSetRendering(*(DC **)a2);
          v26 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v26 )
          {
            v27 = *v26;
            if ( *v26 )
            {
              *(_QWORD *)(v27 + 312) = v7;
              if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
              {
                *(_BYTE *)(v27 + 328) = 1;
                *(_QWORD *)(*(_QWORD *)a2 + 2368LL) = 0LL;
                GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
                EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
                *(_DWORD *)(v27 + 336) = giVisRgnUniqueness;
                EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
                GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
              }
            }
          }
        }
        v28 = *(DC **)a3;
        if ( **(_QWORD **)a3 != **(_QWORD **)a2 && (*((_DWORD *)v28 + 9) & 0x200) != 0 )
        {
          if ( *((_QWORD *)this + 19) )
            UserIsCurrentProcessImmersiveAppContainer();
          else
            DC::vSetRendering(v28);
          v29 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v29 )
          {
            v30 = *v29;
            if ( v30 )
              *(_QWORD *)(v30 + 320) = a3;
          }
        }
      }
      if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      }
LABEL_106:
      if ( v8 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
        return 1LL;
      DWMSPRITEREF::bValid(a3);
      v31 = DWMSPRITEREF::bValid(a2);
      if ( v31 )
        v34 = *(_QWORD *)(*(_QWORD *)a2 + 512LL);
      else
        v34 = 0LL;
      v35 = 0;
      if ( !v32 || !v34 || v32 == v34 )
      {
        if ( v31 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1) )
          v35 = 1;
        if ( (!DWMSPRITEREF::bValid(a2) || **(_QWORD **)a2 != **(_QWORD **)a3)
          && !(unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v66, 0) )
        {
          goto LABEL_144;
        }
LABEL_196:
        if ( v35
          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 56LL) & 0x8000) != 0
          && *(_QWORD *)(*(_QWORD *)a2 + 512LL)
          && *(_QWORD *)this )
        {
          goto LABEL_144;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 56LL) & 0x8000) != 0
          && *(_QWORD *)(*(_QWORD *)a3 + 512LL)
          && *((_QWORD *)this + 1) )
        {
          *((_QWORD *)this + 8) = a3;
          *((_QWORD *)this + 7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 512LL) + 32LL);
          if ( !bCopySurface(
                  (DEVLOCKBLTOBJ *)((char *)this + 40),
                  (struct _SURFOBJ *)(*(_QWORD *)(*(_QWORD *)a3 + 512LL) + 24LL)) )
          {
            if ( *((_QWORD *)this + 5) )
            {
              EPALOBJ::~EPALOBJ((DEVLOCKBLTOBJ *)((char *)this + 40));
              bDeleteSurface(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL));
              *((_QWORD *)this + 5) = 0LL;
            }
            *((_QWORD *)this + 7) = 0LL;
            *((_QWORD *)this + 8) = 0LL;
            goto LABEL_144;
          }
          hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL, 0LL);
          EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)this + 1));
          GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
          v67 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 1) = 0LL;
          *((_QWORD *)this + 4) = 0LL;
          if ( v67 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v67);
            GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
            *((_QWORD *)this + 2) = 0LL;
          }
        }
        return 1LL;
      }
      if ( v32 < v34 )
      {
        *((_DWORD *)this + 18) = v33 | 0x8000;
        v36 = 1;
        if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
        {
          XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 96), **(HDC **)a3);
          v37 = *((_QWORD *)this + 12);
          if ( v37 )
          {
            v38 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
            if ( (v38 & 1) != 0 && (v38 & 0x4000) == 0 && *((_QWORD *)this + 14) && !*((_QWORD *)this + 19) )
            {
              *(_DWORD *)(v37 + 36) |= 0x4000u;
              *(_QWORD *)(*((_QWORD *)this + 12) + 512LL) = *((_QWORD *)this + 14);
              *((_DWORD *)this + 18) |= 0x20u;
            }
            if ( (unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this) )
              goto LABEL_128;
            *(_DWORD *)(*((_QWORD *)this + 12) + 44LL) |= 1u;
            goto LABEL_127;
          }
          v36 = 0;
        }
        *((_QWORD *)this + 12) = 0LL;
        if ( v36 )
        {
LABEL_128:
          _InterlockedOr(v68, 0);
          v39 = *(__int64 **)a2;
          v40 = 1;
          if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
          {
            v41 = v39[6];
            v42 = *v39;
            LOBYTE(v39) = 1;
            v43 = HmgLockEx(v42, v39, *((unsigned int *)this + 23));
            *(_QWORD *)v7 = v43;
            if ( v43 )
            {
              if ( *((_DWORD *)this + 23)
                && ((*(_DWORD *)(*(_QWORD *)(v43 + 48) + 56LL) & 0x8000) == 0
                 || (v44 = *(_DWORD *)(v43 + 2504), v44 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)))
                || !(unsigned int)XDCOBJ::bSaveAttributes((DEVLOCKBLTOBJ *)((char *)this + 80)) )
              {
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v7 + 12LL));
                *(_QWORD *)v7 = 0LL;
              }
            }
            v45 = *(_QWORD *)(v41 + 1440);
            if ( *(_QWORD *)v7 )
            {
              v46 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
              if ( (v46 & 1) != 0 && (v46 & 0x4000) == 0 && v45 && !*((_QWORD *)this + 15) )
              {
                *(_DWORD *)(*(_QWORD *)v7 + 36LL) |= 0x4000u;
                *(_QWORD *)(*(_QWORD *)v7 + 512LL) = SURFOBJ_TO_SURFACE_NOT_NULL(v45);
                *((_DWORD *)this + 18) |= 0x10u;
              }
              if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
              {
                v47 = *(_QWORD *)v7;
LABEL_143:
                *(_DWORD *)(v47 + 44) |= 1u;
LABEL_144:
                *((_DWORD *)this + 18) &= ~1u;
                return 0LL;
              }
              goto LABEL_196;
            }
            v40 = 0;
          }
          *(_QWORD *)v7 = 0LL;
          goto LABEL_148;
        }
LABEL_127:
        v35 = 1;
        goto LABEL_128;
      }
      v49 = *(__int64 **)a2;
      v50 = 1;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
      {
        v51 = v49[6];
        v52 = *v49;
        LOBYTE(v49) = 1;
        v53 = HmgLockEx(v52, v49, *((unsigned int *)this + 23));
        *(_QWORD *)v7 = v53;
        if ( v53 )
        {
          if ( *((_DWORD *)this + 23)
            && ((*(_DWORD *)(*(_QWORD *)(v53 + 48) + 56LL) & 0x8000) == 0
             || (v54 = *(_DWORD *)(v53 + 2504), v54 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)))
            || !(unsigned int)XDCOBJ::bSaveAttributes((DEVLOCKBLTOBJ *)((char *)this + 80)) )
          {
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v7 + 12LL));
            *(_QWORD *)v7 = 0LL;
          }
        }
        v55 = *(_QWORD *)(v51 + 1440);
        if ( *(_QWORD *)v7 )
        {
          v56 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
          if ( (v56 & 1) != 0 && (v56 & 0x4000) == 0 && v55 && !*((_QWORD *)this + 15) )
          {
            *(_DWORD *)(*(_QWORD *)v7 + 36LL) |= 0x4000u;
            *(_QWORD *)(*(_QWORD *)v7 + 512LL) = SURFOBJ_TO_SURFACE_NOT_NULL(v55);
            *((_DWORD *)this + 18) |= 0x10u;
          }
          if ( (unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
            goto LABEL_168;
          *(_DWORD *)(*(_QWORD *)v7 + 44LL) |= 1u;
          goto LABEL_167;
        }
        v50 = 0;
      }
      *(_QWORD *)v7 = 0LL;
      if ( v50 )
      {
LABEL_168:
        _InterlockedOr(v68, 0);
        v57 = *(__int64 **)a3;
        v40 = 1;
        if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
        {
          v58 = *v57;
          LOBYTE(v57) = 1;
          v59 = HmgLockEx(v58, v57, *((unsigned int *)this + 27));
          *((_QWORD *)this + 12) = v59;
          if ( v59 )
          {
            if ( *((_DWORD *)this + 27)
              && ((*(_DWORD *)(*(_QWORD *)(v59 + 48) + 56LL) & 0x8000) == 0
               || (v60 = *(_DWORD *)(v59 + 2504), v60 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)))
              || !(unsigned int)XDCOBJ::bSaveAttributes((DEVLOCKBLTOBJ *)((char *)this + 96)) )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 12) + 12LL));
              *((_QWORD *)this + 12) = 0LL;
            }
          }
          v61 = *((_QWORD *)this + 12);
          if ( v61 )
          {
            v62 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
            if ( (v62 & 1) != 0 && (v62 & 0x4000) == 0 && *((_QWORD *)this + 14) && !*((_QWORD *)this + 19) )
            {
              *(_DWORD *)(v61 + 36) |= 0x4000u;
              *(_QWORD *)(*((_QWORD *)this + 12) + 512LL) = *((_QWORD *)this + 14);
              *((_DWORD *)this + 18) |= 0x20u;
            }
            v63 = *((_QWORD *)this + 12);
            if ( v63 )
            {
              if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
              {
                v64 = *(_QWORD *)(v63 + 512);
                if ( v64 )
                {
                  v65 = SURFACE::Map(v64, this, 0LL);
                  if ( v65 == 2 )
                  {
                    v47 = *((_QWORD *)this + 12);
                    goto LABEL_143;
                  }
                  if ( v65 == 1 )
                    *((_DWORD *)this + 18) |= 0x80u;
                }
              }
            }
            goto LABEL_196;
          }
          v40 = 0;
        }
        *((_QWORD *)this + 12) = 0LL;
LABEL_148:
        if ( !v40 )
          goto LABEL_144;
        goto LABEL_196;
      }
LABEL_167:
      v35 = 1;
      goto LABEL_168;
    }
    v11 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
    if ( ((v12 ^ v11) & 0x200) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 80LL) + 8LL) & 0x4000) != 0 && (v11 & 0x8000) != 0 )
        goto LABEL_22;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 8LL) & 0x4000) == 0 )
      {
LABEL_23:
        v6 = 0;
        goto LABEL_24;
      }
      v13 = (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x8000) == 0;
    }
    else
    {
      if ( (v12 & 0x200) == 0 || (v11 & 0x200) == 0 || (v12 & 0x8000) == 0 )
        goto LABEL_23;
      v13 = (v11 & 0x8000) == 0;
    }
    if ( !v13 )
    {
LABEL_22:
      v6 = v10;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  return 0LL;
}
