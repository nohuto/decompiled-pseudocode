/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C003A070
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C005D870 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00B0E60 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
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
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C000B5B0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     GreDecLockCount @ 0x1C000B7B0 (GreDecLockCount.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C002422C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0027848 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0033B40 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0045720 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     EngFreeUserMem @ 0x1C0069890 (EngFreeUserMem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C00B02A0 (--0DCOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B1940 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C00B1DD0 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00B2798 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00B2F54 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveGarbageCollectible @ 0x1C00B366C (HmgRemoveGarbageCollectible.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(SURFACE *a1, int a2, int a3)
{
  unsigned int v6; // esi
  void *v7; // r14
  __int64 v8; // r14
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int16 v13; // r12
  int v14; // eax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // r8
  PERESOURCE v19; // rdx
  bool v20; // zf
  struct HOBJ__ *v21; // r10
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  void (__fastcall *v28)(_QWORD *); // rax
  _QWORD *v29; // rcx
  HANDLE v30; // rbx
  HANDLE v31; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  ULONG_PTR v35; // r15
  __int64 v36; // r14
  int v37; // r12d
  PVOID v38; // rbx
  __int64 CurrentProcess; // rax
  __int64 v40; // rax
  int v41; // ecx
  ULONG_PTR v42; // rdx
  _QWORD *v43; // r8
  _QWORD *v44; // rax
  __int64 v45; // rdx
  _QWORD *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  PEPROCESS Process; // [rsp+58h] [rbp-A8h] BYREF
  int v56; // [rsp+60h] [rbp-A0h]
  unsigned int v57; // [rsp+64h] [rbp-9Ch]
  __int64 v58; // [rsp+68h] [rbp-98h] BYREF
  __int64 v59; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-80h]
  HANDLE v62; // [rsp+88h] [rbp-78h]
  HANDLE SecureHandle; // [rsp+90h] [rbp-70h]
  __int128 v64; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-50h]
  int v66; // [rsp+B8h] [rbp-48h]
  _BYTE v67[48]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  __int64 v70; // [rsp+100h] [rbp+0h]
  HSEMAPHORE v71; // [rsp+110h] [rbp+10h] BYREF
  __int64 v72; // [rsp+118h] [rbp+18h]
  __int64 v73; // [rsp+120h] [rbp+20h] BYREF
  struct HOBJ__ *v74; // [rsp+128h] [rbp+28h]
  __int64 v75; // [rsp+130h] [rbp+30h]
  ULONG_PTR RegionSize; // [rsp+138h] [rbp+38h] BYREF
  _QWORD *v77; // [rsp+140h] [rbp+40h]
  ULONG_PTR v78[2]; // [rsp+148h] [rbp+48h]
  __int128 v79; // [rsp+158h] [rbp+58h]
  __int64 v80; // [rsp+168h] [rbp+68h]
  _OWORD v81[6]; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v82; // [rsp+1E0h] [rbp+E0h] BYREF
  int v83; // [rsp+1F8h] [rbp+F8h]

  v6 = 1;
  if ( a1 == SURFACE::pdibDefault || !a1 )
    return v6;
  v7 = 0LL;
  v62 = 0LL;
  v61 = 0LL;
  SecureHandle = 0LL;
  v83 = 0;
  if ( !*((_WORD *)a1 + 50) )
  {
    v8 = *((_QWORD *)a1 + 9);
    v62 = (HANDLE)*((_QWORD *)a1 + 23);
    v61 = *((_QWORD *)a1 + 22);
    v83 = *((_DWORD *)a1 + 53);
    v7 = (void *)(v8 - (unsigned __int16)*((_DWORD *)a1 + 48));
    SecureHandle = (HANDLE)*((_QWORD *)a1 + 27);
  }
  v9 = *(_OWORD *)((char *)a1 + 264);
  v10 = *(_OWORD *)((char *)a1 + 280);
  v11 = *((_QWORD *)a1 + 6);
  v12 = *((_QWORD *)a1 + 15);
  v13 = *((_WORD *)a1 + 51);
  v77 = (_QWORD *)*((_QWORD *)a1 + 3);
  v75 = *((_QWORD *)a1 + 16);
  BaseAddress = (PVOID)*((_QWORD *)a1 + 9);
  Object = (PVOID)*((_QWORD *)a1 + 30);
  v14 = *((_DWORD *)a1 + 78);
  v58 = v11;
  v72 = v12;
  LODWORD(Process) = v14;
  v81[0] = v9;
  v15 = *(_OWORD *)((char *)a1 + 296);
  v81[1] = v10;
  v16 = *(_OWORD *)((char *)a1 + 536);
  v81[2] = v15;
  v17 = *(_OWORD *)((char *)a1 + 520);
  v79 = v16;
  *(_OWORD *)v78 = v17;
  v80 = *((_QWORD *)a1 + 69);
  if ( v11
    && (*((_DWORD *)a1 + 28) & 0x400000) != 0
    && (*(_DWORD *)(v11 + 56) & 1) != 0
    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange) )
  {
    v19 = ghsemDynamicModeChange;
    v56 = 1;
    if ( ghsemDynamicModeChange )
    {
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
      v19 = ghsemDynamicModeChange;
    }
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (__int64)v19, v18);
  }
  else
  {
    v56 = 0;
  }
  v59 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v67);
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0;
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() >= 0 )
    DEVLOCKOBJ_bPrepareTrgDcoWrap_0();
  v20 = (*((_DWORD *)a1 + 28) & 0x400000) == 0;
  v70 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  if ( v20 || !v11 )
  {
    v65 = 0LL;
    v64 = 0LL;
    v66 = 0;
    if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() >= 0 )
      DEVLOCKOBJ_bPrepareTrgDcoWrap_0();
    v70 = 0LL;
    v69 = 0LL;
    v68 = 0LL;
  }
  else
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v59, (struct PDEVOBJ *)&v58);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)&v64, (struct PDEVOBJ *)&v58);
  }
  v21 = *(struct HOBJ__ **)a1;
  v22 = (unsigned __int16)*(_QWORD *)a1;
  v74 = *(struct HOBJ__ **)a1;
  v57 = -2147483614;
  if ( (unsigned int)v22 < gcMaxHmgr )
  {
    v23 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v22;
    if ( *(_BYTE *)(v23 + 14) == 5 && *(_WORD *)(v23 + 12) == WORD1(v21) )
      v57 = *(_DWORD *)(v23 + 8) & 0xFFFFFFFE;
  }
  v82 = 0;
  if ( a3 || HmgRemoveObjectImpl(v21, 0, 1, a2 == 2, 5, &v82) )
  {
LABEL_48:
    if ( (_DWORD)Process )
    {
      _InterlockedDecrement(&glRenderEndDelete);
      v11 = v58;
    }
    if ( (int)IsvAccNotifyDeleteSurfaceSupported_0() >= 0 )
      vAccNotifyDeleteSurfaceWrap_0();
    v27 = *((_DWORD *)a1 + 28);
    if ( (v27 & 0x400000) == 0 || !v77 || !v11 )
    {
LABEL_66:
      v30 = SecureHandle;
      if ( SecureHandle )
      {
        if ( *((_DWORD *)a1 + 52) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          MmUnsecureVirtualMemory(v30);
        goto LABEL_112;
      }
      if ( v83 )
      {
        if ( BaseAddress )
          MmUnmapViewInSessionSpace(v7);
        goto LABEL_112;
      }
      v31 = v62;
      if ( v62 )
      {
        if ( *((_DWORD *)a1 + 52) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          MmUnsecureVirtualMemory(v31);
          if ( BaseAddress )
          {
            if ( v61 )
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
            }
            else
            {
              RegionSize = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
            }
          }
        }
        goto LABEL_112;
      }
      if ( (v13 & 8) == 0 )
      {
        if ( (v13 & 0x800) != 0 )
        {
          v71 = ghsemMapRot;
          EngAcquireSemaphore(ghsemMapRot);
          v43 = (_QWORD *)*((_QWORD *)a1 + 32);
          if ( v43 )
          {
            v44 = (_QWORD *)((char *)a1 + 440);
            if ( (_QWORD *)*v44 != v44 )
            {
              v45 = *v44;
              v46 = (_QWORD *)*((_QWORD *)a1 + 56);
              if ( *(_QWORD **)(*v44 + 8LL) != v44 || (_QWORD *)*v46 != v44 )
                __fastfail(3u);
              *v46 = v45;
              *(_QWORD *)(v45 + 8) = v46;
            }
            if ( BaseAddress && Object )
              MmUnmapViewOfSection(*v43, BaseAddress);
          }
          W32PIDLOCK::vCleanUp((W32PIDLOCK *)v81);
          if ( Object )
            ObfDereferenceObject(Object);
          SEMOBJ::vUnlock((SEMOBJ *)&v71, v47, v48);
        }
        else if ( (v13 & 0x10) != 0 )
        {
          vFreeKernelSection(BaseAddress);
        }
        goto LABEL_112;
      }
      if ( (v13 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
LABEL_112:
        if ( (*((_DWORD *)a1 + 29) & 0x800) != 0 )
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL, v74, v82, v57, 0LL, 0LL, 0);
        SURFACE::Free(a1);
        if ( v75 && (int)IsGreDeleteWndSupported_0() >= 0 )
          GreDeleteWnd_0();
        if ( v72 )
        {
          v73 = v72;
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v73);
        }
        goto LABEL_119;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v35 = v78[1];
      v36 = ThreadWin32Thread;
      v37 = DWORD2(v79);
      v38 = (PVOID)v78[1];
      if ( DWORD2(v79) )
        v38 = BaseAddress;
      CurrentProcess = PsGetCurrentProcess(v34, v33);
      MmUnmapViewOfSection(CurrentProcess, v38);
      if ( v36 && (v40 = *(_QWORD *)(v36 + 72)) != 0 )
      {
        v41 = *(_DWORD *)(v40 + 8);
      }
      else
      {
        if ( !(_DWORD)v80 )
        {
          if ( (int)IsUMPDEngFreeUserMemSupported_0() >= 0 )
            UMPDEngFreeUserMem_0();
          goto LABEL_93;
        }
        v41 = HIDWORD(v79);
      }
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)v41, &Process) >= 0 )
      {
        v42 = (ULONG_PTR)BaseAddress;
        if ( v37 )
          v42 = v35;
        MmUnmapViewOfSection(Process, v42);
        ObfDereferenceObject(Process);
      }
LABEL_93:
      if ( !v78[0] )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      ObfDereferenceObject((PVOID)v78[0]);
      goto LABEL_112;
    }
    if ( (*((_DWORD *)a1 + 29) & 9) != 0 )
    {
      v28 = *(void (__fastcall **)(_QWORD *))(v11 + 2688);
      if ( v28 )
      {
        v29 = (_QWORD *)((char *)a1 + 24);
LABEL_65:
        v28(v29);
        goto LABEL_66;
      }
      v28 = *(void (__fastcall **)(_QWORD *))(v11 + 3480);
      if ( !v28 )
        goto LABEL_66;
    }
    else
    {
      v28 = *(void (__fastcall **)(_QWORD *))(v11 + 2808);
      if ( !v28 )
        goto LABEL_66;
      if ( (v27 & 0x40000) != 0 )
      {
        if ( !a2 && (int)IsUMPDDrvDeleteDeviceBitmapSupported_0() >= 0 )
          UMPDDrvDeleteDeviceBitmap_0();
        goto LABEL_66;
      }
    }
    v29 = v77;
    goto LABEL_65;
  }
  if ( a2 == 1 )
  {
    v25 = 0;
  }
  else
  {
    if ( a2 != 2 )
      goto LABEL_32;
    v25 = 1;
  }
  if ( HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 0, v25 != 0, 5, &v82) )
    goto LABEL_48;
LABEL_32:
  if ( a2 == 3 )
  {
    LOBYTE(v24) = 5;
    if ( HmgRemoveGarbageCollectible(*(_QWORD *)a1, v24, &v82) )
      goto LABEL_48;
  }
  if ( v82 == 1 )
  {
    if ( (*((_DWORD *)a1 + 28) & 0x800) == 0 )
    {
      EngSetLastError(0xAAu);
      v6 = 0;
      goto LABEL_119;
    }
    goto LABEL_46;
  }
  if ( *((_QWORD *)a1 + 19)
    || (*(_DWORD *)a1 & 0x800000) != 0 && (*((_WORD *)a1 + 51) & 0x200) != 0
    || (*((_DWORD *)a1 + 28) & 0x800) != 0 )
  {
    v26 = *((_DWORD *)a1 + 28);
    if ( (v26 & 0x800) == 0 )
    {
      *((_DWORD *)a1 + 28) = v26 | 0x1000000;
      HmgDecrementShareReferenceCount(a1);
      goto LABEL_119;
    }
    if ( !*((_DWORD *)a1 + 78) )
    {
      *((_DWORD *)a1 + 78) = 1;
      _InterlockedIncrement(&glRenderEndDelete);
    }
LABEL_46:
    HmgDecrementShareReferenceCount(a1);
    goto LABEL_119;
  }
  v6 = 0;
LABEL_119:
  if ( (int)IsDEVLOCKOBJ_bDisposeTrgDcoSupported_0() >= 0 )
    DEVLOCKOBJ_bDisposeTrgDcoWrap_0();
  if ( (v66 & 0x1000) != 0 )
  {
    GreDecLockCount();
    v66 &= ~0x1000u;
    v50 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v50 )
    {
      *(_QWORD *)(v50 + 320) = 0LL;
      *(_QWORD *)(v50 + 312) = 0LL;
    }
  }
  if ( (_QWORD)v64 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsemTrg", v64, v49);
    GreReleaseSemaphoreInternal(v64);
  }
  if ( (v66 & 8) != 0 )
    v66 &= ~8u;
  if ( *((_QWORD *)&v64 + 1) )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsemDMC", *((__int64 *)&v64 + 1), v49);
    GreReleaseSemaphoreInternal(*((_QWORD *)&v64 + 1));
  }
  if ( (int)IsUntrapAppContainerRenderingSupported_0() >= 0 )
    UntrapAppContainerRenderingWrap_0();
  DCOBJ::~DCOBJ((DCOBJ *)v67);
  v52 = v59;
  if ( v59 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", v59, v51);
    GreReleaseSemaphoreInternal(v52);
  }
  if ( v56 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v51);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return v6;
}
