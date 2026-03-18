/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     bDeleteSurface @ 0x1C0037780 (bDeleteSurface.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C0046200 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C005AF20 (vDynamicConvertNewSurfaceDCs.c)
 * Callees:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap_0 @ 0x1C0001100 (DEVLOCKOBJ_bPrepareTrgDcoWrap_0.c)
 *     IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0 @ 0x1C0001108 (IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0.c)
 *     UntrapAppContainerRenderingWrap_0 @ 0x1C0001110 (UntrapAppContainerRenderingWrap_0.c)
 *     IsUntrapAppContainerRenderingSupported_0 @ 0x1C0001118 (IsUntrapAppContainerRenderingSupported_0.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap_0 @ 0x1C0001120 (DEVLOCKOBJ_bDisposeTrgDcoWrap_0.c)
 *     IsDEVLOCKOBJ_bDisposeTrgDcoSupported_0 @ 0x1C0001128 (IsDEVLOCKOBJ_bDisposeTrgDcoSupported_0.c)
 *     IsvAccNotifyDeleteSurfaceSupported_0 @ 0x1C0001258 (IsvAccNotifyDeleteSurfaceSupported_0.c)
 *     vAccNotifyDeleteSurfaceWrap_0 @ 0x1C0001260 (vAccNotifyDeleteSurfaceWrap_0.c)
 *     IsUMPDDrvDeleteDeviceBitmapSupported_0 @ 0x1C0001268 (IsUMPDDrvDeleteDeviceBitmapSupported_0.c)
 *     UMPDDrvDeleteDeviceBitmap_0 @ 0x1C0001270 (UMPDDrvDeleteDeviceBitmap_0.c)
 *     IsUMPDEngFreeUserMemSupported_0 @ 0x1C0001278 (IsUMPDEngFreeUserMemSupported_0.c)
 *     UMPDEngFreeUserMem_0 @ 0x1C0001280 (UMPDEngFreeUserMem_0.c)
 *     IsGreDeleteWndSupported_0 @ 0x1C0001288 (IsGreDeleteWndSupported_0.c)
 *     GreDeleteWnd_0 @ 0x1C0001290 (GreDeleteWnd_0.c)
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002C18 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002C20 (Win32FreePoolImpl_0.c)
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00121B0 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002C0A4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     HmgRemoveObject @ 0x1C0036F40 (HmgRemoveObject.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C00374F0 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0037B20 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreDecLockCount @ 0x1C006E210 (GreDecLockCount.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C006E360 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C006E380 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     EngFreeUserMem @ 0x1C00841F0 (EngFreeUserMem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B4B80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00B5874 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(struct SURFACE *a1, int a2, int a3)
{
  int v4; // r15d
  unsigned int v6; // r14d
  __int64 v7; // rdx
  void *v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // r13d
  int v14; // eax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  PERESOURCE v18; // rdx
  bool v19; // zf
  char *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r12
  int v23; // r8d
  __int64 v24; // rax
  BOOL v25; // r13d
  struct _ERESOURCE *v26; // rbx
  __int64 v27; // r14
  __int64 v28; // r15
  _DWORD *v29; // rdi
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  signed __int32 v33; // eax
  unsigned int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // r8d
  _QWORD *v38; // r12
  char *v39; // r13
  int v40; // ebx
  signed int v41; // r15d
  struct _ERESOURCE *v42; // r14
  __int64 v43; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 ProcessWin32Process; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  int v52; // r9d
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r8
  int v56; // ecx
  void (__fastcall *v57)(__int64 *); // rax
  __int64 *v58; // rcx
  int v59; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  ULONG_PTR v63; // r14
  __int64 v64; // rdi
  int v65; // r15d
  PVOID v66; // rbx
  __int64 CurrentProcess; // rax
  __int64 v68; // rax
  int v69; // ecx
  ULONG_PTR v70; // rdx
  _QWORD *v71; // r8
  __int64 *v72; // rax
  __int64 *v73; // rdx
  __int64 **v74; // rcx
  ULONG_PTR v75; // rbx
  unsigned int v76; // r14d
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // rbx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  PVOID pv; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v88; // [rsp+58h] [rbp-A8h]
  int v89; // [rsp+5Ch] [rbp-A4h]
  __int64 v90; // [rsp+60h] [rbp-A0h] BYREF
  int v91; // [rsp+68h] [rbp-98h]
  int v92; // [rsp+6Ch] [rbp-94h]
  PEPROCESS v93; // [rsp+70h] [rbp-90h] BYREF
  PVOID MappedBase; // [rsp+78h] [rbp-88h]
  __int128 v95; // [rsp+80h] [rbp-80h] BYREF
  __int64 v96; // [rsp+90h] [rbp-70h]
  int v97; // [rsp+98h] [rbp-68h]
  __int64 v98; // [rsp+A0h] [rbp-60h]
  __int64 v99; // [rsp+A8h] [rbp-58h]
  __int64 v100; // [rsp+B0h] [rbp-50h]
  __int64 v101; // [rsp+B8h] [rbp-48h]
  __int64 v102; // [rsp+C0h] [rbp-40h]
  __int64 v103; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v104; // [rsp+D8h] [rbp-28h]
  HANDLE SecureHandle; // [rsp+E0h] [rbp-20h]
  PEPROCESS Process; // [rsp+E8h] [rbp-18h] BYREF
  PVOID Object; // [rsp+F0h] [rbp-10h]
  HANDLE v108; // [rsp+F8h] [rbp-8h]
  ULONG_PTR RegionSize; // [rsp+100h] [rbp+0h] BYREF
  __int64 v110; // [rsp+108h] [rbp+8h]
  __int64 *v111; // [rsp+110h] [rbp+10h]
  __int64 v112; // [rsp+118h] [rbp+18h] BYREF
  int v113; // [rsp+120h] [rbp+20h] BYREF
  HSEMAPHORE v114; // [rsp+128h] [rbp+28h] BYREF
  __int64 v115; // [rsp+130h] [rbp+30h]
  __int64 v116; // [rsp+138h] [rbp+38h]
  __int64 v117; // [rsp+140h] [rbp+40h]
  unsigned int v118; // [rsp+154h] [rbp+54h]
  int v119; // [rsp+158h] [rbp+58h]
  ULONG_PTR v120[2]; // [rsp+160h] [rbp+60h]
  __int128 v121; // [rsp+170h] [rbp+70h]
  __int64 v122; // [rsp+180h] [rbp+80h]
  _OWORD v123[6]; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v124; // [rsp+200h] [rbp+100h] BYREF
  int v125; // [rsp+208h] [rbp+108h]
  int v126; // [rsp+218h] [rbp+118h]

  v125 = a2;
  v4 = a2;
  v6 = 1;
  if ( a1 == SURFACE::pdibDefault || !a1 )
    return v6;
  v108 = 0LL;
  v104 = 0LL;
  MappedBase = 0LL;
  SecureHandle = 0LL;
  v126 = 0;
  if ( !*((_WORD *)a1 + 50) )
  {
    v7 = *((_QWORD *)a1 + 9);
    v108 = (HANDLE)*((_QWORD *)a1 + 23);
    v104 = *((_QWORD *)a1 + 22);
    v126 = *((_DWORD *)a1 + 52);
    v8 = (void *)*((_QWORD *)a1 + 27);
    MappedBase = (PVOID)(v7 - (unsigned __int16)*((_DWORD *)a1 + 48));
    SecureHandle = v8;
  }
  v9 = *(_OWORD *)((char *)a1 + 264);
  v10 = *(_OWORD *)((char *)a1 + 280);
  v11 = *((_QWORD *)a1 + 6);
  v12 = *((_QWORD *)a1 + 15);
  v13 = *((unsigned __int16 *)a1 + 51);
  v111 = (__int64 *)*((_QWORD *)a1 + 3);
  v117 = *((_QWORD *)a1 + 16);
  pv = (PVOID)*((_QWORD *)a1 + 9);
  Object = (PVOID)*((_QWORD *)a1 + 30);
  v14 = *((_DWORD *)a1 + 78);
  v90 = v11;
  v110 = v12;
  v89 = v13;
  v92 = v14;
  v123[0] = v9;
  v15 = *(_OWORD *)((char *)a1 + 296);
  v123[1] = v10;
  v16 = *(_OWORD *)((char *)a1 + 536);
  v123[2] = v15;
  v17 = *(_OWORD *)((char *)a1 + 520);
  v121 = v16;
  *(_OWORD *)v120 = v17;
  v122 = *((_QWORD *)a1 + 69);
  if ( v11
    && (*((_DWORD *)a1 + 28) & 0x400000) != 0
    && (*(_DWORD *)(v11 + 56) & 1) != 0
    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange) )
  {
    v18 = ghsemDynamicModeChange;
    v91 = 1;
    if ( ghsemDynamicModeChange )
    {
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
      v18 = ghsemDynamicModeChange;
    }
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", v18);
  }
  else
  {
    v91 = 0;
  }
  v103 = 0LL;
  v95 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v96 = 0LL;
  v97 = 0;
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() >= 0 )
    DEVLOCKOBJ_bPrepareTrgDcoWrap_0();
  v19 = (*((_DWORD *)a1 + 28) & 0x400000) == 0;
  v102 = 0LL;
  v101 = 0LL;
  v100 = 0LL;
  if ( v19 || !v11 )
  {
    v96 = 0LL;
    v95 = 0LL;
    v97 = 0;
    if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() >= 0 )
      DEVLOCKOBJ_bPrepareTrgDcoWrap_0();
    v102 = 0LL;
    v101 = 0LL;
    v100 = 0LL;
  }
  else
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v103, (struct PDEVOBJ *)&v90);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)&v95, (struct PDEVOBJ *)&v90);
  }
  v22 = *(_QWORD *)a1;
  v23 = gcMaxHmgr;
  v24 = (unsigned __int16)*(_QWORD *)a1;
  v115 = *(_QWORD *)a1;
  v88 = -2147483614;
  if ( (unsigned int)v24 < gcMaxHmgr )
  {
    v21 = 3 * v24;
    v20 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v24;
    if ( v20[14] == 5 && *((_WORD *)v20 + 6) == WORD1(v22) )
    {
      v21 = *((_DWORD *)v20 + 2) & 0xFFFFFFFE;
      v88 = *((_DWORD *)v20 + 2) & 0xFFFFFFFE;
    }
  }
  v124 = 0;
  if ( a3 )
  {
LABEL_108:
    if ( v92 )
    {
      _InterlockedDecrement(&glRenderEndDelete);
      v11 = v90;
    }
    if ( (int)IsvAccNotifyDeleteSurfaceSupported_0() >= 0 )
      vAccNotifyDeleteSurfaceWrap_0();
    v56 = *((_DWORD *)a1 + 28);
    if ( (v56 & 0x400000) == 0 || !v111 || !v11 )
    {
LABEL_126:
      if ( SecureHandle )
      {
        MmUnsecureVirtualMemory(SecureHandle);
LABEL_171:
        v75 = v124;
        v76 = v88;
        *((_QWORD *)a1 + 51) = v115;
        *((_DWORD *)a1 + 104) = v75;
        *((_WORD *)a1 + 210) = *((_WORD *)a1 + 6);
        *((_WORD *)a1 + 211) = *((_WORD *)a1 + 7);
        *((_DWORD *)a1 + 108) = v76;
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)a1 + 55, 0LL);
        if ( (*((_DWORD *)a1 + 29) & 0x800) != 0 )
        {
          BugCheckParameter4 = v75;
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL);
        }
        if ( (*((_WORD *)a1 + 7) & 0x8000) != 0 )
        {
          if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
            Win32FreeToPagedLookasideListImpl_0();
        }
        else if ( (int)IsWin32FreePoolImplSupported_0() >= 0 )
        {
          Win32FreePoolImpl_0();
        }
        if ( v117 && (int)IsGreDeleteWndSupported_0() >= 0 )
          GreDeleteWnd_0();
        if ( v110 )
        {
          v112 = v110;
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v112);
        }
        v6 = 1;
        goto LABEL_184;
      }
      if ( v108 )
      {
        MmUnsecureVirtualMemory(v108);
        v59 = v126;
      }
      else
      {
        v59 = v126;
        if ( !v126 )
        {
          if ( (v13 & 8) == 0 )
          {
            if ( (v13 & 0x800) != 0 )
            {
              v114 = ghsemMapRot;
              EngAcquireSemaphore(ghsemMapRot);
              v71 = (_QWORD *)*((_QWORD *)a1 + 32);
              if ( v71 )
              {
                v72 = (__int64 *)((char *)a1 + 440);
                if ( (__int64 *)*v72 != v72 )
                {
                  v73 = (__int64 *)*v72;
                  v74 = (__int64 **)*((_QWORD *)a1 + 56);
                  if ( *(__int64 **)(*v72 + 8) != v72 || *v74 != v72 )
                    __fastfail(3u);
                  *v74 = v73;
                  v73[1] = (__int64)v74;
                }
                if ( pv && Object )
                  MmUnmapViewOfSection(*v71, pv);
              }
              W32PIDLOCK::vCleanUp((W32PIDLOCK *)v123);
              if ( Object )
                ObfDereferenceObject(Object);
              SEMOBJ::vUnlock((SEMOBJ *)&v114);
            }
            else if ( (v13 & 0x10) != 0 )
            {
              vFreeKernelSection(pv);
            }
            goto LABEL_171;
          }
          if ( (v13 & 0x80u) == 0 )
          {
            EngFreeUserMem(pv);
            goto LABEL_171;
          }
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55);
          v63 = v120[1];
          v64 = ThreadWin32Thread;
          v65 = DWORD2(v121);
          v66 = (PVOID)v120[1];
          if ( DWORD2(v121) )
            v66 = pv;
          CurrentProcess = PsGetCurrentProcess(v62, v61);
          MmUnmapViewOfSection(CurrentProcess, v66);
          if ( v64 && (v68 = *(_QWORD *)(v64 + 72)) != 0 )
          {
            v69 = *(_DWORD *)(v68 + 8);
          }
          else
          {
            if ( !(_DWORD)v122 )
            {
              if ( (int)IsUMPDEngFreeUserMemSupported_0() >= 0 )
                UMPDEngFreeUserMem_0();
              goto LABEL_145;
            }
            v69 = HIDWORD(v121);
          }
          v93 = 0LL;
          if ( PsLookupProcessByProcessId((HANDLE)v69, &v93) >= 0 )
          {
            v70 = (ULONG_PTR)pv;
            if ( v65 )
              v70 = v63;
            MmUnmapViewOfSection(v93, v70);
            ObfDereferenceObject(v93);
          }
LABEL_145:
          if ( !v120[0] )
            KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
          ObfDereferenceObject((PVOID)v120[0]);
          goto LABEL_171;
        }
      }
      if ( pv )
      {
        if ( v59 )
        {
          MmUnmapViewInSessionSpace(MappedBase);
        }
        else if ( v104 )
        {
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, MappedBase);
        }
        else
        {
          RegionSize = 0LL;
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &pv, &RegionSize, 0x8000u);
        }
      }
      goto LABEL_171;
    }
    if ( (*((_DWORD *)a1 + 29) & 9) != 0 )
    {
      v57 = *(void (__fastcall **)(__int64 *))(v11 + 2688);
      if ( v57 )
      {
        v58 = (__int64 *)((char *)a1 + 24);
LABEL_125:
        v57(v58);
        goto LABEL_126;
      }
      v57 = *(void (__fastcall **)(__int64 *))(v11 + 3480);
      if ( !v57 )
        goto LABEL_126;
    }
    else
    {
      v57 = *(void (__fastcall **)(__int64 *))(v11 + 2808);
      if ( !v57 )
        goto LABEL_126;
      if ( (v56 & 0x40000) != 0 )
      {
        if ( !v4 && (int)IsUMPDDrvDeleteDeviceBitmapSupported_0() >= 0 )
          UMPDDrvDeleteDeviceBitmap_0();
        goto LABEL_126;
      }
    }
    v58 = v111;
    goto LABEL_125;
  }
  v25 = v4 == 2;
  if ( (unsigned __int16)v22 >= (unsigned int)gcMaxHmgr )
    goto LABEL_88;
  v26 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v21, v20);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v26);
    LODWORD(v26) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((unsigned int)L"ghsemHmgr", (_DWORD)v20, v23, (_DWORD)v26, 16, (__int64)L"ghsemHmgr");
  v116 = (unsigned __int16)v22;
  v27 = (unsigned __int16)v22;
  v28 = 24LL * (unsigned __int16)v22;
  v29 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + v28;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v113);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v31 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v32 = *(_QWORD *)(v31 + 72);
  else
    v32 = 0LL;
LABEL_36:
  _m_prefetchw(v29 + 2);
  v33 = v29[2];
  v34 = v33 & 0xFFFFFFFE;
  v118 = v33;
  if ( ((v33 & 0xFFFFFFFE) == (v113 & 0xFFFFFFFC) || !v34 || v32 && v34 == *(_DWORD *)(v32 + 8))
    && (*((_BYTE *)v29 + 15) & 0x20) == 0 )
  {
    while ( (*((_BYTE *)v29 + 15) & 0x40) == 0 )
    {
      if ( (v33 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_36;
      }
      v119 = v33 | 1;
      if ( v33 != _InterlockedCompareExchange(v29 + 2, v33 | 1, v33) || (*((_BYTE *)v29 + 15) & 0x40) != 0 )
        goto LABEL_36;
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + (unsigned __int16)v22) = 0LL;
      *((_BYTE *)v29 + 15) |= 0x40u;
      _m_prefetchw(v29 + 2);
      v118 = v29[2] & 0xFFFFFFFE;
      _InterlockedExchange(v29 + 2, v118);
      v33 = v118;
    }
    ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v22, 0LL);
    if ( *((_BYTE *)v29 + 14) == 5 && *((_WORD *)v29 + 6) == WORD1(v22) )
    {
      v38 = *(_QWORD **)v29;
      if ( *(_WORD *)(*(_QWORD *)v29 + 12LL) || *(_DWORD *)(*(_QWORD *)v29 + 8LL) != 1 )
      {
        v124 = *(_DWORD *)(*(_QWORD *)v29 + 8LL);
      }
      else if ( v25 || (*((_BYTE *)v29 + 15) & 1) == 0 )
      {
        *v38 = 0LL;
        v39 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + v28;
        v40 = *(_DWORD *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + v28 + 8);
        v41 = v40 & 0xFFFFFFFE;
        if ( (v40 & 0xFFFFFFFE) != 0 && v41 != -2147483630 )
        {
          v42 = ghsemHmgr;
          if ( ghsemHmgr )
          {
            PsEnterPriorityRegion(v36, v35);
            ExEnterCriticalRegionAndAcquireResourceExclusive(v42);
            LODWORD(v42) = (_DWORD)ghsemHmgr;
          }
          if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            Template_pqz(v36, v35, v37, (_DWORD)v42, 16, (__int64)L"ghsemHmgr");
          if ( v41 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v43);
            if ( CurrentProcessWin32Process )
              --*(_DWORD *)(CurrentProcessWin32Process + 60);
          }
          else if ( PsLookupProcessByProcessId((HANDLE)v41, &Process) >= 0 )
          {
            ProcessWin32Process = PsGetProcessWin32Process(Process);
            if ( ProcessWin32Process )
              --*(_DWORD *)(ProcessWin32Process + 60);
            ObfDereferenceObject(Process);
          }
          if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            Template_pz(v45, &LockRelease, v46, ghsemHmgr, L"ghsemHmgr");
          if ( ghsemHmgr )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
            PsLeavePriorityRegion(v48);
          }
          v27 = v116;
        }
        *(_QWORD *)v39 = ghFreeHmgr;
        *((_WORD *)v29 + 6) += 256;
        --gcCurHmgr;
        *((_BYTE *)v29 + 14) = 0;
        *((_QWORD *)v29 + 2) = 0LL;
        ghFreeHmgr = v27;
        *((_DWORD *)v39 + 2) = v40 & 1;
        goto LABEL_76;
      }
    }
    v38 = 0LL;
LABEL_76:
    if ( (*((_BYTE *)v29 + 15) & 0x40) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v27);
    }
    else
    {
      _m_prefetchw(v29 + 2);
      v118 = v29[2] & 0xFFFFFFFE;
      _InterlockedExchange(v29 + 2, v118);
    }
    KeLeaveCriticalRegion();
    goto LABEL_81;
  }
  KeLeaveCriticalRegion();
  v38 = 0LL;
LABEL_81:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v49, &LockRelease, v50, ghsemHmgr, L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v51);
  }
  v11 = v90;
  v4 = v125;
  if ( v38 )
  {
LABEL_107:
    LOWORD(v13) = v89;
    goto LABEL_108;
  }
  v6 = 1;
LABEL_88:
  if ( v4 == 1 )
  {
    v52 = 0;
  }
  else
  {
    if ( v4 != 2 )
      goto LABEL_93;
    v52 = 1;
  }
  if ( HmgRemoveObject(*(_QWORD *)a1, 0, 0, v52, 5, (__int64)&v124) )
    goto LABEL_107;
LABEL_93:
  if ( v124 == 1 )
  {
    if ( (*((_DWORD *)a1 + 28) & 0x800) == 0 )
    {
      EngSetLastError(0xAAu);
      v6 = 0;
      goto LABEL_184;
    }
    goto LABEL_105;
  }
  if ( *((_QWORD *)a1 + 19)
    || (*(_DWORD *)a1 & 0x800000) != 0 && (*((_WORD *)a1 + 51) & 0x200) != 0
    || (*((_DWORD *)a1 + 28) & 0x800) != 0 )
  {
    v53 = *((_DWORD *)a1 + 28);
    if ( (v53 & 0x800) == 0 )
    {
      *((_DWORD *)a1 + 28) = v53 | 0x1000000;
      HmgDecrementShareReferenceCount(a1);
      goto LABEL_184;
    }
    if ( !*((_DWORD *)a1 + 78) )
    {
      *((_DWORD *)a1 + 78) = 1;
      _InterlockedIncrement(&glRenderEndDelete);
    }
LABEL_105:
    HmgDecrementShareReferenceCount(a1);
    goto LABEL_184;
  }
  v6 = 0;
LABEL_184:
  if ( (int)IsDEVLOCKOBJ_bDisposeTrgDcoSupported_0() >= 0 )
    DEVLOCKOBJ_bDisposeTrgDcoWrap_0();
  if ( (v97 & 0x1000) != 0 )
  {
    GreDecLockCount(v78, v77, v79, v80, BugCheckParameter4);
    v97 &= ~0x1000u;
    v83 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v81, v82);
    if ( v83 )
    {
      *(_QWORD *)(v83 + 320) = 0LL;
      *(_QWORD *)(v83 + 312) = 0LL;
    }
  }
  if ( (_QWORD)v95 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
    GreReleaseSemaphoreInternal(v95);
  }
  if ( (v97 & 8) != 0 )
    v97 &= ~8u;
  if ( *((_QWORD *)&v95 + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
    GreReleaseSemaphoreInternal(*((_QWORD *)&v95 + 1));
  }
  if ( (int)IsUntrapAppContainerRenderingSupported_0() >= 0 )
    UntrapAppContainerRenderingWrap_0();
  v84 = v103;
  if ( v103 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v84);
  }
  if ( v91 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return v6;
}
