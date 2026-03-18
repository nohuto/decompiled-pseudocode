/*
 * XREFs of NtGdiGetPixel @ 0x1C0020EF0
 * Callers:
 *     <none>
 * Callees:
 *     GreDereferenceObject @ 0x1C000C01C (GreDereferenceObject.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C001D740 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0021A60 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     bCvtPts1 @ 0x1C00979C4 (bCvtPts1.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00DF1D4 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C01121D4 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0112244 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0112294 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025E5C0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C02B0114 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetPixel(HDC a1, int a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  _DWORD *v11; // rdx
  struct REGION *v12; // rdx
  int v13; // ecx
  int v14; // ebx
  bool v15; // zf
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  HSURF v23; // rbx
  char v24; // bl
  __int64 v25; // rax
  DCVISRGNSHARELOCK *v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // ebx
  int v30; // [rsp+20h] [rbp-E0h]
  unsigned int v31; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[4]; // [rsp+64h] [rbp-9Ch] BYREF
  int v33; // [rsp+68h] [rbp-98h] BYREF
  int v34; // [rsp+6Ch] [rbp-94h]
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  char v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+7Ch] [rbp-84h]
  __int128 v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+98h] [rbp-68h]
  _QWORD v41[6]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  HDC v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F0h] [rbp-10h] BYREF
  int v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+FCh] [rbp-4h]
  int v49; // [rsp+100h] [rbp+0h] BYREF
  __int64 v50; // [rsp+104h] [rbp+4h]
  _BYTE v51[20]; // [rsp+10Ch] [rbp+Ch]
  _QWORD v52[6]; // [rsp+120h] [rbp+20h] BYREF
  DC *v53[6]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v54[32]; // [rsp+180h] [rbp+80h] BYREF
  HSURF *v55; // [rsp+1A0h] [rbp+A0h]
  _BYTE v56[32]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v57; // [rsp+1C8h] [rbp+C8h]
  int v58; // [rsp+1D0h] [rbp+D0h] BYREF
  int v59; // [rsp+1D4h] [rbp+D4h]
  int v60; // [rsp+1D8h] [rbp+D8h]
  int v61; // [rsp+1DCh] [rbp+DCh]
  _DWORD v62[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  int v63; // [rsp+1E8h] [rbp+E8h]
  int v64; // [rsp+1ECh] [rbp+ECh]
  _BYTE v65[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v66[52]; // [rsp+1F4h] [rbp+F4h] BYREF
  __int64 v67; // [rsp+228h] [rbp+128h]
  __int64 v68; // [rsp+240h] [rbp+140h]
  int v69; // [rsp+248h] [rbp+148h]
  int v70; // [rsp+270h] [rbp+170h]
  __int64 v71; // [rsp+280h] [rbp+180h]

  v31 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v52, a1);
  if ( !v52[0] )
    goto LABEL_71;
  bSpDwmValidateSurface((struct XDCOBJ *)v52, a2, a3, 1, 1);
  DCOBJ::DCOBJ((DCOBJ *)v41);
  v39 = 0LL;
  v38 = 0LL;
  v40 = 0;
  v41[0] = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v38, (struct XDCOBJ *)v52, 0) )
  {
    v5 = v52[0];
    v6 = *(_QWORD *)(v52[0] + 512LL);
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 600) )
      {
        if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v6 + 600) )
          goto LABEL_42;
        v5 = v52[0];
      }
      v7 = *(_DWORD *)(v6 + 112);
      if ( (v7 & 0x800) != 0 )
      {
        v8 = UserSurfaceAccessCheck(*(_QWORD *)(v6 + 592));
      }
      else
      {
        if ( (v7 & 0x10000000) == 0 )
        {
LABEL_13:
          v47 = *(_DWORD *)(*(_QWORD *)(v5 + 80) + 68LL);
          v48 = *(_DWORD *)(*(_QWORD *)(v5 + 80) + 312LL) & 1;
          if ( (*(_DWORD *)(*(_QWORD *)(v5 + 80) + 352LL) & 0xE000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v46, (struct XDCOBJ *)v52, 0x204u, 0);
            v9 = v46;
            v5 = v52[0];
          }
          else
          {
            v9 = v5 + 336;
            v46 = v5 + 336;
          }
          v10 = *(_DWORD *)(v9 + 32) & 0x43;
          v33 = a2;
          v34 = a3;
          if ( (_BYTE)v10 != 67 )
          {
            bCvtPts1(v9, &v33, 1LL);
            a3 = v34;
            a2 = v33;
          }
          v58 = a2;
          v60 = a2 + 1;
          v61 = a3 + 1;
          v11 = (_DWORD *)(v5 + 1416);
          v59 = a3;
          if ( (*(_DWORD *)(v5 + 40) & 1) == 0 )
            v11 = (_DWORD *)(v5 + 1408);
          v58 = a2 + *v11;
          v60 = *v11 + a2 + 1;
          v59 = a3 + v11[1];
          v61 = v11[1] + a3 + 1;
          v12 = *(struct REGION **)(v5 + 1552);
          if ( !v12 )
            v12 = *(struct REGION **)(v5 + 1544);
          v67 = 0LL;
          v68 = 0LL;
          v69 = 0;
          v70 = 1;
          v71 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v65, v12, (struct ERECTL *)&v58, 0);
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v66) )
          {
            v13 = *(_DWORD *)(v52[0] + 112LL);
            if ( (v13 & 1) == 0
              || !*(_QWORD *)(*(_QWORD *)(v52[0] + 80LL) + 112LL)
              || (v14 = 1, (v13 & 0x10000000) == 0) )
            {
              v14 = 0;
            }
            v31 = 0;
            v50 = 0LL;
            *(_QWORD *)&v51[8] = 0LL;
            *(_QWORD *)v51 = 0LL;
            v49 = *(_DWORD *)(v6 + 96);
            *(_QWORD *)&v51[12] = 1LL;
            v50 = 0x100000001LL;
            *(_QWORD *)&v51[4] = 0LL;
            if ( v49 == 1 )
            {
              v62[0] = 7;
              v63 = 8;
            }
            else if ( v49 == 2 )
            {
              v62[0] = 1;
              v63 = 2;
            }
            else
            {
              v62[0] = 0;
              v63 = 1;
            }
            v35 = 0LL;
            v36 = 0;
            v37 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v35, (struct _DEVBITMAPINFO *)&v49, &v31, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              v15 = (*(_DWORD *)(v6 + 112) & 0x400) == 0;
              v62[1] = 0;
              v64 = 1;
              if ( v15 )
                v16 = EngCopyBits;
              else
                v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v6 + 48) + 2872LL);
              v17 = 0LL;
              if ( v35 )
                v17 = v35 + 24;
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, _DWORD *, int *))v16)(
                     v17,
                     v6 + 24,
                     0LL,
                     xloIdent,
                     v62,
                     &v58)
                && !v14 )
              {
                v31 = ulIndexToRGB(*(_QWORD *)(v6 + 120), *(_QWORD *)(v52[0] + 96LL), v31);
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v35);
          }
          goto LABEL_42;
        }
        v8 = UserScreenAccessCheck();
      }
      if ( v8 )
      {
        v5 = v52[0];
        goto LABEL_13;
      }
    }
  }
LABEL_42:
  if ( v41[0] )
  {
    v18 = *(_QWORD *)(v41[0] + 48LL);
    if ( (v40 & 0x1000) != 0 )
    {
      DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v38);
      if ( (v40 & 0x10) != 0 )
      {
        *(_DWORD *)(v41[0] + 36LL) &= ~0x4000u;
        *(_QWORD *)(v41[0] + 512LL) = *(_QWORD *)(v18 + 2576);
      }
      DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v38);
    }
    XDCOBJ::vUnlock((XDCOBJ *)v41);
    v41[0] = 0LL;
  }
  if ( (v40 & 0x1000) != 0 )
  {
    GreDecLockCount();
    v40 &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  if ( (_QWORD)v38 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v38);
    GreReleaseSemaphoreInternal(v38);
  }
  if ( (v40 & 8) != 0 )
    v40 &= ~8u;
  if ( *((_QWORD *)&v38 + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", *((_QWORD *)&v38 + 1));
    GreReleaseSemaphoreInternal(*((_QWORD *)&v38 + 1));
  }
  if ( v43 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v53, v44);
    SURFREF::SURFREF((SURFREF *)v54);
    SURFREF::SURFREF((SURFREF *)v56);
    LOBYTE(v20) = 5;
    v21 = HmgShareLock(v42, v20);
    LOBYTE(v22) = 5;
    v55 = (HSURF *)v21;
    v57 = HmgShareLock(v43, v22);
    v23 = *v55;
    *((_QWORD *)v53[0] + 64) = v57;
    DEC_SHARE_REF_CNT(v55);
    v55 = 0LL;
    DEC_SHARE_REF_CNT(v57);
    v57 = 0LL;
    GreDereferenceObject(v23, 1u);
    v44 = 0LL;
    v42 = 0LL;
    *((_DWORD *)v53[0] + 9) |= v45;
    if ( (*((_DWORD *)v53[0] + 9) & 0x200) != 0 )
    {
      v24 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v24 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v32);
      LOBYTE(v30) = 5;
      v25 = HmgShareUnlockRemoveObject(v43, 0LL, 0LL, 0LL, v30);
      if ( v25 )
        SURFACE::bDeleteSurface(v25, 0LL, 1LL);
      *((_QWORD *)v53[0] + 65) = 0LL;
      DC::vClearRendering(v53[0]);
      v43 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v26);
      if ( v24 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      LOBYTE(v30) = 5;
      v27 = HmgShareUnlockRemoveObject(v43, 0LL, 0LL, 0LL, v30);
      if ( v27 )
        SURFACE::bDeleteSurface(v27, 0LL, 1LL);
      *((_QWORD *)v53[0] + 65) = 0LL;
      v43 = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v56);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v54);
    DCOBJ::~DCOBJ((DCOBJ *)v53);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v41);
LABEL_71:
  v28 = v31;
  DCOBJ::~DCOBJ((DCOBJ *)v52);
  return v28;
}
