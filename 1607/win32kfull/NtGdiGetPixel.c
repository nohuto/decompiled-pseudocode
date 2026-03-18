/*
 * XREFs of NtGdiGetPixel @ 0x1C0040650
 * Callers:
 *     <none>
 * Callees:
 *     bCvtPts1 @ 0x1C003BEC0 (bCvtPts1.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0041BD0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048594 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00487E0 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C004A9B8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     GreDereferenceObject @ 0x1C00D7D48 (GreDereferenceObject.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C011327C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C01132B8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025B528 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetPixel(HDC a1, int a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _DWORD *v14; // rdx
  struct REGION *v15; // rdx
  int v16; // ecx
  int v17; // ebx
  bool v18; // zf
  BOOL (__stdcall *v19)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  HSURF v26; // rbx
  char v27; // bl
  __int64 v28; // rax
  DCVISRGNSHARELOCK *v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // ebx
  int v33; // [rsp+20h] [rbp-E0h]
  unsigned int v34; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v35[4]; // [rsp+64h] [rbp-9Ch] BYREF
  int v36; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+6Ch] [rbp-94h]
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  char v39; // [rsp+78h] [rbp-88h]
  int v40; // [rsp+7Ch] [rbp-84h]
  __int128 v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h]
  int v43; // [rsp+98h] [rbp-68h]
  _QWORD v44[6]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  HDC v47; // [rsp+E0h] [rbp-20h]
  int v48; // [rsp+E8h] [rbp-18h]
  __int64 v49; // [rsp+F0h] [rbp-10h] BYREF
  int v50; // [rsp+F8h] [rbp-8h]
  int v51; // [rsp+FCh] [rbp-4h]
  int v52; // [rsp+100h] [rbp+0h] BYREF
  __int64 v53; // [rsp+104h] [rbp+4h]
  _BYTE v54[20]; // [rsp+10Ch] [rbp+Ch]
  _QWORD v55[6]; // [rsp+120h] [rbp+20h] BYREF
  DC *v56[6]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v57[32]; // [rsp+180h] [rbp+80h] BYREF
  HSURF *v58; // [rsp+1A0h] [rbp+A0h]
  _BYTE v59[32]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v60; // [rsp+1C8h] [rbp+C8h]
  int v61; // [rsp+1D0h] [rbp+D0h] BYREF
  int v62; // [rsp+1D4h] [rbp+D4h]
  int v63; // [rsp+1D8h] [rbp+D8h]
  int v64; // [rsp+1DCh] [rbp+DCh]
  _DWORD v65[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  int v66; // [rsp+1E8h] [rbp+E8h]
  int v67; // [rsp+1ECh] [rbp+ECh]
  _BYTE v68[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v69; // [rsp+1F4h] [rbp+F4h]
  int v70; // [rsp+1F8h] [rbp+F8h]
  int v71; // [rsp+1FCh] [rbp+FCh]
  int v72; // [rsp+200h] [rbp+100h]
  __int64 v73; // [rsp+228h] [rbp+128h]
  __int64 v74; // [rsp+240h] [rbp+140h]
  int v75; // [rsp+248h] [rbp+148h]
  int v76; // [rsp+270h] [rbp+170h]
  __int64 v77; // [rsp+280h] [rbp+180h]

  v34 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v55, a1);
  if ( !v55[0] )
    goto LABEL_72;
  bSpDwmValidateSurface((struct XDCOBJ *)v55, a2, a3, 1, 1);
  DCOBJ::DCOBJ((DCOBJ *)v44);
  v42 = 0LL;
  v41 = 0LL;
  v43 = 0;
  v44[0] = 0LL;
  v47 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v41, (struct XDCOBJ *)v55, 0) )
  {
    v8 = v55[0];
    v9 = *(_QWORD *)(v55[0] + 512LL);
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 608) )
      {
        if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v9 + 608) )
          goto LABEL_43;
        v8 = v55[0];
      }
      v10 = *(_DWORD *)(v9 + 112);
      if ( (v10 & 0x800) != 0 )
      {
        v11 = UserSurfaceAccessCheck(*(_QWORD *)(v9 + 600));
      }
      else
      {
        if ( (v10 & 0x10000000) == 0 )
        {
LABEL_13:
          v50 = *(_DWORD *)(*(_QWORD *)(v8 + 80) + 68LL);
          v51 = *(_DWORD *)(*(_QWORD *)(v8 + 80) + 312LL) & 1;
          if ( (*(_DWORD *)(*(_QWORD *)(v8 + 80) + 352LL) & 0xE000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v49, (struct XDCOBJ *)v55, 0x204u, 0);
            v12 = v49;
            v8 = v55[0];
          }
          else
          {
            v12 = v8 + 336;
            v49 = v8 + 336;
          }
          v13 = *(_DWORD *)(v12 + 32) & 0x43;
          v36 = a2;
          v37 = a3;
          if ( (_BYTE)v13 != 67 )
          {
            bCvtPts1(v12, &v36, 1LL);
            a3 = v37;
            a2 = v36;
          }
          v61 = a2;
          v63 = a2 + 1;
          v64 = a3 + 1;
          v14 = (_DWORD *)(v8 + 1416);
          v62 = a3;
          if ( (*(_DWORD *)(v8 + 40) & 1) == 0 )
            v14 = (_DWORD *)(v8 + 1408);
          v61 = a2 + *v14;
          v63 = *v14 + a2 + 1;
          v62 = a3 + v14[1];
          v64 = v14[1] + a3 + 1;
          v15 = *(struct REGION **)(v8 + 1552);
          if ( !v15 )
            v15 = *(struct REGION **)(v8 + 1544);
          v73 = 0LL;
          v74 = 0LL;
          v75 = 0;
          v76 = 1;
          v77 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v68, v15, (struct ERECTL *)&v61, 0);
          if ( v69 != v71 && v70 != v72 )
          {
            v16 = *(_DWORD *)(v55[0] + 112LL);
            if ( (v16 & 1) == 0
              || !*(_QWORD *)(*(_QWORD *)(v55[0] + 80LL) + 112LL)
              || (v17 = 1, (v16 & 0x10000000) == 0) )
            {
              v17 = 0;
            }
            v34 = 0;
            v53 = 0LL;
            *(_QWORD *)&v54[8] = 0LL;
            *(_QWORD *)v54 = 0LL;
            v52 = *(_DWORD *)(v9 + 96);
            *(_QWORD *)&v54[12] = 1LL;
            v53 = 0x100000001LL;
            *(_QWORD *)&v54[4] = 0LL;
            if ( v52 == 1 )
            {
              v65[0] = 7;
              v66 = 8;
            }
            else if ( v52 == 2 )
            {
              v65[0] = 1;
              v66 = 2;
            }
            else
            {
              v65[0] = 0;
              v66 = 1;
            }
            v38 = 0LL;
            v39 = 0;
            v40 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v38, (struct _DEVBITMAPINFO *)&v52, &v34, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              v18 = (*(_DWORD *)(v9 + 112) & 0x400) == 0;
              v65[1] = 0;
              v67 = 1;
              if ( v18 )
                v19 = EngCopyBits;
              else
                v19 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v9 + 48) + 2864LL);
              v20 = 0LL;
              if ( v38 )
                v20 = v38 + 24;
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, _DWORD *, int *))v19)(
                     v20,
                     v9 + 24,
                     0LL,
                     xloIdent,
                     v65,
                     &v61)
                && !v17 )
              {
                v34 = ulIndexToRGB(*(_QWORD *)(v9 + 120), *(_QWORD *)(v55[0] + 96LL), v34);
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v38);
          }
          goto LABEL_43;
        }
        v11 = UserScreenAccessCheck(v6, v5, v7);
      }
      if ( v11 )
      {
        v8 = v55[0];
        goto LABEL_13;
      }
    }
  }
LABEL_43:
  if ( v44[0] )
  {
    v21 = *(_QWORD *)(v44[0] + 48LL);
    if ( (v43 & 0x1000) != 0 )
    {
      DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v41);
      if ( (v43 & 0x10) != 0 )
      {
        *(_DWORD *)(v44[0] + 36LL) &= ~0x4000u;
        *(_QWORD *)(v44[0] + 512LL) = *(_QWORD *)(v21 + 2576);
      }
      DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v41);
    }
    XDCOBJ::vUnlock((XDCOBJ *)v44);
    v44[0] = 0LL;
  }
  if ( (v43 & 0x1000) != 0 )
  {
    GreDecLockCount();
    v43 &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  if ( (_QWORD)v41 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v41);
    GreReleaseSemaphoreInternal(v41);
  }
  if ( (v43 & 8) != 0 )
    v43 &= ~8u;
  if ( *((_QWORD *)&v41 + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", *((_QWORD *)&v41 + 1));
    GreReleaseSemaphoreInternal(*((_QWORD *)&v41 + 1));
  }
  if ( v46 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v56, v47);
    SURFREF::SURFREF((SURFREF *)v57);
    SURFREF::SURFREF((SURFREF *)v59);
    LOBYTE(v23) = 5;
    v24 = HmgShareLock(v45, v23);
    LOBYTE(v25) = 5;
    v58 = (HSURF *)v24;
    v60 = HmgShareLock(v46, v25);
    v26 = *v58;
    *((_QWORD *)v56[0] + 64) = v60;
    DEC_SHARE_REF_CNT(v58);
    v58 = 0LL;
    DEC_SHARE_REF_CNT(v60);
    v60 = 0LL;
    GreDereferenceObject(v26);
    v47 = 0LL;
    v45 = 0LL;
    *((_DWORD *)v56[0] + 9) |= v48;
    if ( (*((_DWORD *)v56[0] + 9) & 0x200) != 0 )
    {
      v27 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v27 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v35);
      LOBYTE(v33) = 5;
      v28 = HmgShareUnlockRemoveObject(v46, 0LL, 0LL, 0LL, v33);
      if ( v28 )
        SURFACE::bDeleteSurface(v28, 0LL, 1LL);
      *((_QWORD *)v56[0] + 65) = 0LL;
      DC::vClearRendering(v56[0]);
      v46 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v29);
      if ( v27 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      LOBYTE(v33) = 5;
      v30 = HmgShareUnlockRemoveObject(v46, 0LL, 0LL, 0LL, v33);
      if ( v30 )
        SURFACE::bDeleteSurface(v30, 0LL, 1LL);
      *((_QWORD *)v56[0] + 65) = 0LL;
      v46 = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v59);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v57);
    DCOBJ::~DCOBJ((DCOBJ *)v56);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v44);
LABEL_72:
  v31 = v34;
  DCOBJ::~DCOBJ((DCOBJ *)v55);
  return v31;
}
