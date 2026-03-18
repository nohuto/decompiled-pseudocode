/*
 * XREFs of NtGdiGetPixel @ 0x1C002CF70
 * Callers:
 *     <none>
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027E60 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C002DBA0 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1C0041E4C (bCvtPts1.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     GreDereferenceObject @ 0x1C007F7C0 (GreDereferenceObject.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00E4674 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C014B6AC (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C014B71C (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C014B76C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiGetPixel(__int64 a1, __int64 a2, int a3)
{
  int v4; // esi
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  _DWORD *v12; // rdx
  struct REGION *v13; // rdx
  int v14; // ecx
  int v15; // ebx
  bool v16; // zf
  BOOL (__stdcall *v17)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rsi
  DC *v27; // r14
  __int64 v28; // rbx
  char v29; // bl
  __int64 v30; // rax
  DCVISRGNSHARELOCK *v31; // rcx
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-E0h]
  unsigned int v34; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v35[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v36[8]; // [rsp+78h] [rbp-88h] BYREF
  int v37; // [rsp+80h] [rbp-80h] BYREF
  int v38; // [rsp+84h] [rbp-7Ch]
  __int128 v39; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h]
  _QWORD v42[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  HDC v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+D8h] [rbp-28h]
  __int64 v47; // [rsp+E0h] [rbp-20h] BYREF
  char v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+ECh] [rbp-14h]
  __int64 v50; // [rsp+F0h] [rbp-10h] BYREF
  int v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+FCh] [rbp-4h]
  int v53; // [rsp+100h] [rbp+0h] BYREF
  __int64 v54; // [rsp+104h] [rbp+4h]
  _BYTE v55[20]; // [rsp+10Ch] [rbp+Ch]
  DC *v56[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v57; // [rsp+130h] [rbp+30h] BYREF
  __int64 v58; // [rsp+138h] [rbp+38h] BYREF
  int v59; // [rsp+140h] [rbp+40h] BYREF
  int v60; // [rsp+144h] [rbp+44h]
  int v61; // [rsp+148h] [rbp+48h]
  int v62; // [rsp+14Ch] [rbp+4Ch]
  _DWORD v63[2]; // [rsp+150h] [rbp+50h] BYREF
  int v64; // [rsp+158h] [rbp+58h]
  int v65; // [rsp+15Ch] [rbp+5Ch]
  _BYTE v66[4]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v67[76]; // [rsp+164h] [rbp+64h] BYREF
  __int64 v68; // [rsp+1B0h] [rbp+B0h]
  int v69; // [rsp+1B8h] [rbp+B8h]
  int v70; // [rsp+1E0h] [rbp+E0h]
  __int64 v71; // [rsp+1F0h] [rbp+F0h]

  v34 = -1;
  v4 = a2;
  v35[1] = 0LL;
  LOBYTE(a2) = 1;
  v35[0] = HmgLockEx(a1, a2, 0LL);
  if ( !v35[0] )
    return v34;
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v35) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v35[0] + 12LL));
    return v34;
  }
  if ( !v35[0] )
    return v34;
  bSpDwmValidateSurface((struct XDCOBJ *)v35, v4, a3, 1, 1);
  v42[1] = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0;
  v42[0] = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v39, (struct XDCOBJ *)v35, 0) )
  {
    v6 = v35[0];
    v7 = *(_QWORD *)(v35[0] + 512LL);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 592) )
      {
        if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v7 + 592) )
          goto LABEL_46;
        v6 = v35[0];
      }
      v8 = *(_DWORD *)(v7 + 112);
      if ( (v8 & 0x800) != 0 )
      {
        v9 = UserSurfaceAccessCheck(*(_QWORD *)(v7 + 584));
      }
      else
      {
        if ( (v8 & 0x10000000) == 0 )
        {
LABEL_17:
          v51 = *(_DWORD *)(*(_QWORD *)(v6 + 80) + 68LL);
          v52 = *(_DWORD *)(*(_QWORD *)(v6 + 80) + 312LL) & 1;
          if ( (*(_DWORD *)(*(_QWORD *)(v6 + 80) + 352LL) & 0xE000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v50, (struct XDCOBJ *)v35, 0x204u, 0);
            v10 = v50;
            v6 = v35[0];
          }
          else
          {
            v10 = v6 + 336;
            v50 = v6 + 336;
          }
          v11 = *(_DWORD *)(v10 + 32) & 0x43;
          v37 = v4;
          v38 = a3;
          if ( (_BYTE)v11 != 67 )
          {
            bCvtPts1(v10, &v37);
            a3 = v38;
            v4 = v37;
          }
          v59 = v4;
          v61 = v4 + 1;
          v62 = a3 + 1;
          v12 = (_DWORD *)(v6 + 1416);
          v60 = a3;
          if ( (*(_DWORD *)(v6 + 40) & 1) == 0 )
            v12 = (_DWORD *)(v6 + 1408);
          v59 = v4 + *v12;
          v61 = *v12 + v4 + 1;
          v60 = a3 + v12[1];
          v62 = v12[1] + a3 + 1;
          v13 = *(struct REGION **)(v6 + 1528);
          if ( !v13 )
            v13 = *(struct REGION **)(v6 + 1520);
          v68 = 0LL;
          v69 = 0;
          v70 = 1;
          v71 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v66, v13, (struct ERECTL *)&v59, 0);
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v67) )
          {
            v14 = *(_DWORD *)(v35[0] + 112LL);
            if ( (v14 & 1) == 0
              || !*(_QWORD *)(*(_QWORD *)(v35[0] + 80LL) + 112LL)
              || (v15 = 1, (v14 & 0x10000000) == 0) )
            {
              v15 = 0;
            }
            v34 = 0;
            v54 = 0LL;
            *(_QWORD *)&v55[8] = 0LL;
            *(_QWORD *)v55 = 0LL;
            v53 = *(_DWORD *)(v7 + 96);
            *(_QWORD *)&v55[12] = 1LL;
            v54 = 0x100000001LL;
            *(_QWORD *)&v55[4] = 0LL;
            if ( v53 == 1 )
            {
              v63[0] = 7;
              v64 = 8;
            }
            else if ( v53 == 2 )
            {
              v63[0] = 1;
              v64 = 2;
            }
            else
            {
              v63[0] = 0;
              v64 = 1;
            }
            v47 = 0LL;
            v48 = 0;
            v49 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v47, (struct _DEVBITMAPINFO *)&v53, &v34, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              v16 = (*(_DWORD *)(v7 + 112) & 0x400) == 0;
              v63[1] = 0;
              v65 = 1;
              if ( v16 )
                v17 = EngCopyBits;
              else
                v17 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v7 + 48) + 2872LL);
              v18 = 0LL;
              if ( v47 )
                v18 = v47 + 24;
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, _DWORD *, int *))v17)(
                     v18,
                     v7 + 24,
                     0LL,
                     xloIdent,
                     v63,
                     &v59)
                && !v15 )
              {
                v34 = ulIndexToRGB(*(_QWORD *)(v7 + 120), *(_QWORD *)(v35[0] + 96LL), v34);
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v47);
          }
          goto LABEL_46;
        }
        v9 = UserScreenAccessCheck();
      }
      if ( v9 )
      {
        v6 = v35[0];
        goto LABEL_17;
      }
    }
  }
LABEL_46:
  XDCOBJ::RestoreAttributes((XDCOBJ *)v35);
  _InterlockedDecrement((volatile signed __int32 *)(v35[0] + 12LL));
  if ( v42[0] )
  {
    v19 = *(_QWORD *)(v42[0] + 48LL);
    if ( (v41 & 0x1000) != 0 )
    {
      DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v39);
      if ( (v41 & 0x10) != 0 )
      {
        *(_DWORD *)(v42[0] + 36LL) &= ~0x4000u;
        *(_QWORD *)(v42[0] + 512LL) = *(_QWORD *)(v19 + 2576);
      }
      DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v39);
    }
    XDCOBJ::vUnlock((XDCOBJ *)v42);
    v42[0] = 0LL;
  }
  if ( (v41 & 0x1000) != 0 )
  {
    GreDecLockCount();
    v41 &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  if ( (_QWORD)v39 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v39);
    GreReleaseSemaphoreInternal(v39);
  }
  if ( (v41 & 8) != 0 )
    v41 &= ~8u;
  if ( *((_QWORD *)&v39 + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", *((_QWORD *)&v39 + 1));
    GreReleaseSemaphoreInternal(*((_QWORD *)&v39 + 1));
  }
  if ( v44 )
  {
    v56[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v56, v45);
    LOBYTE(v21) = 5;
    v22 = HmgShareLock(v43, v21);
    LOBYTE(v23) = 5;
    v24 = (__int64 *)v22;
    v25 = HmgShareLock(v44, v23);
    v26 = *v24;
    v27 = v56[0];
    v28 = v25;
    *((_QWORD *)v56[0] + 64) = v25;
    DEC_SHARE_REF_CNT(v24);
    v58 = 0LL;
    DEC_SHARE_REF_CNT(v28);
    v57 = 0LL;
    GreDereferenceObject(v26, 1LL);
    v45 = 0LL;
    v43 = 0LL;
    *((_DWORD *)v27 + 9) |= v46;
    if ( (*((_DWORD *)v27 + 9) & 0x200) != 0 )
    {
      v29 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v29 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v36);
      LOBYTE(v33) = 5;
      v30 = HmgShareUnlockRemoveObject(v44, 0LL, 0LL, 0LL, v33);
      if ( v30 )
        SURFACE::bDeleteSurface(v30, 0LL, 1LL);
      *((_QWORD *)v27 + 65) = 0LL;
      DC::vClearRendering(v27);
      v44 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v31);
      if ( v29 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      LOBYTE(v33) = 5;
      v32 = HmgShareUnlockRemoveObject(v44, 0LL, 0LL, 0LL, v33);
      if ( v32 )
        SURFACE::bDeleteSurface(v32, 0LL, 1LL);
      *((_QWORD *)v27 + 65) = 0LL;
      v44 = 0LL;
    }
    XDCOBJ::vUnlock((XDCOBJ *)v56);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v57);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v58);
  }
  return v34;
}
