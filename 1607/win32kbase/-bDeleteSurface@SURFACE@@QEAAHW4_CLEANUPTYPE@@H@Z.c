/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006B240 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BEDC0 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap_0 @ 0x1C0001100 (DEVLOCKOBJ_bPrepareTrgDcoWrap_0.c)
 *     IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0 @ 0x1C0001108 (IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0.c)
 *     IsvAccNotifyDeleteSurfaceSupported_0 @ 0x1C0001258 (IsvAccNotifyDeleteSurfaceSupported_0.c)
 *     vAccNotifyDeleteSurfaceWrap_0 @ 0x1C0001260 (vAccNotifyDeleteSurfaceWrap_0.c)
 *     IsUMPDDrvDeleteDeviceBitmapSupported_0 @ 0x1C0001268 (IsUMPDDrvDeleteDeviceBitmapSupported_0.c)
 *     UMPDDrvDeleteDeviceBitmap_0 @ 0x1C0001270 (UMPDDrvDeleteDeviceBitmap_0.c)
 *     IsUMPDEngFreeUserMemSupported_0 @ 0x1C0001278 (IsUMPDEngFreeUserMemSupported_0.c)
 *     UMPDEngFreeUserMem_0 @ 0x1C0001280 (UMPDEngFreeUserMem_0.c)
 *     IsGreDeleteWndSupported_0 @ 0x1C0001288 (IsGreDeleteWndSupported_0.c)
 *     GreDeleteWnd_0 @ 0x1C0001290 (GreDeleteWnd_0.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C000D728 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C001D850 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C00254D8 (--0DCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002F9BC (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002FA5C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00750D0 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     EngFreeUserMem @ 0x1C0085980 (EngFreeUserMem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00BF6C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00BFB48 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C00BFB6C (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00BFBD4 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x1C00BFC1C (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00C04FC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveGarbageCollectible @ 0x1C00C0C48 (HmgRemoveGarbageCollectible.c)
 *     GrepUnsecureVirtualMemory @ 0x1C00CB060 (GrepUnsecureVirtualMemory.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(SURFACE *a1, int a2, int a3)
{
  unsigned int v5; // r14d
  void *v6; // r15
  void *v7; // r13
  __int64 v8; // r15
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rcx
  void *v12; // rax
  __int128 v13; // xmm0
  void *v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  bool v17; // al
  __int64 v18; // rdx
  __int64 v19; // rbx
  bool v20; // zf
  _QWORD *DeferredContext; // rdi
  unsigned int v22; // edx
  unsigned int v23; // eax
  __int64 v24; // r10
  unsigned __int64 v25; // rdx
  unsigned int v26; // r8d
  signed int v27; // ecx
  __int64 v28; // r10
  __int64 v29; // r8
  struct HOBJ__ *v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  int v33; // eax
  _QWORD *v34; // rdi
  int v35; // r8d
  void (__fastcall *v36)(_QWORD *); // rax
  _QWORD *v37; // rcx
  HANDLE v38; // rbx
  __int64 ThreadWin32Thread; // rdi
  __int64 v40; // rcx
  __int64 CurrentProcess; // rax
  __int64 v42; // rax
  int v43; // ecx
  _QWORD *v44; // r8
  _QWORD *v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  __int64 v48; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+58h] [rbp-A8h] BYREF
  struct HOBJ__ *v52; // [rsp+60h] [rbp-A0h]
  unsigned int v53; // [rsp+68h] [rbp-98h]
  BOOL v54; // [rsp+6Ch] [rbp-94h] BYREF
  PEPROCESS Process; // [rsp+70h] [rbp-90h] BYREF
  int v56; // [rsp+78h] [rbp-88h]
  HANDLE SecureHandle; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+98h] [rbp-68h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v62; // [rsp+A8h] [rbp-58h]
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-50h] BYREF
  HSEMAPHORE v64; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  __int64 v67; // [rsp+D0h] [rbp-30h] BYREF
  ULONG_PTR v68[2]; // [rsp+D8h] [rbp-28h]
  __int128 v69; // [rsp+E8h] [rbp-18h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  __int128 v71; // [rsp+100h] [rbp+0h] BYREF
  __int64 v72; // [rsp+110h] [rbp+10h]
  int v73; // [rsp+118h] [rbp+18h]
  _BYTE v74[48]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  __int64 v77; // [rsp+160h] [rbp+60h]
  _OWORD v78[6]; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v79; // [rsp+1E0h] [rbp+E0h] BYREF
  int v80; // [rsp+1F0h] [rbp+F0h]
  int v81; // [rsp+1F8h] [rbp+F8h]

  v80 = a3;
  v5 = 1;
  if ( a1 == SURFACE::pdibDefault || !a1 )
    return v5;
  v6 = 0LL;
  SecureHandle = 0LL;
  v7 = 0LL;
  v58 = 0LL;
  v81 = 0;
  if ( !*((_WORD *)a1 + 50) )
  {
    v8 = *((_QWORD *)a1 + 9);
    v7 = (void *)*((_QWORD *)a1 + 28);
    SecureHandle = (HANDLE)*((_QWORD *)a1 + 24);
    v58 = *((_QWORD *)a1 + 23);
    v81 = *((_DWORD *)a1 + 54);
    v6 = (void *)(v8 - (unsigned __int16)*((_DWORD *)a1 + 50));
  }
  v9 = *((_OWORD *)a1 + 17);
  v10 = *((_OWORD *)a1 + 18);
  v11 = *((_QWORD *)a1 + 15);
  v62 = (_QWORD *)*((_QWORD *)a1 + 3);
  v65 = *((_QWORD *)a1 + 16);
  v12 = (void *)*((_QWORD *)a1 + 9);
  v78[0] = v9;
  BaseAddress = v12;
  v13 = *((_OWORD *)a1 + 19);
  v56 = *((unsigned __int16 *)a1 + 51);
  v14 = (void *)*((_QWORD *)a1 + 31);
  v78[2] = v13;
  v66 = v11;
  v15 = *((_OWORD *)a1 + 33);
  Object = v14;
  LODWORD(v14) = *((_DWORD *)a1 + 80);
  v78[1] = v10;
  LODWORD(Process) = (_DWORD)v14;
  v16 = *((_OWORD *)a1 + 34);
  *(_OWORD *)v68 = v15;
  v70 = *((_QWORD *)a1 + 70);
  v69 = v16;
  if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_Servicing_DynamicModeChange_31627929_31627929_FeatureDescriptorDetails) )
  {
    v17 = (unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDynamicModeChange) == 0;
  }
  else
  {
    v61 = *((_QWORD *)a1 + 6);
    v17 = (unsigned int)HmgLockResultBase<DRVOBJ>::operator bool(&v61)
       && (*((_DWORD *)a1 + 28) & 0x400000) != 0
       && (*(_DWORD *)(v18 + 56) & 1) != 0
       && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDynamicModeChange);
  }
  v54 = v17;
  if ( v17 )
  {
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange");
  }
  v19 = *((_QWORD *)a1 + 6);
  v51 = v19;
  if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_Servicing_DynamicModeChange_31627929_31627929_FeatureDescriptorDetails)
    && (!(unsigned int)HmgLockResultBase<DRVOBJ>::operator bool(&v51)
     || (*((_DWORD *)a1 + 28) & 0x400000) == 0
     || (*(_DWORD *)(v19 + 56) & 1) == 0) )
  {
    NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded((NEEDDYNAMICMODECHANGESHARELOCK *)&v54);
  }
  v60 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v74);
  v72 = 0LL;
  v71 = 0LL;
  v73 = 0;
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() >= 0 )
    DEVLOCKOBJ_bPrepareTrgDcoWrap_0();
  v20 = (*((_DWORD *)a1 + 28) & 0x400000) == 0;
  v77 = 0LL;
  v76 = 0LL;
  v75 = 0LL;
  if ( v20 || !(unsigned int)HmgLockResultBase<DRVOBJ>::operator bool(&v51) )
  {
    v72 = 0LL;
    v71 = 0LL;
    v73 = 0;
    if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() >= 0 )
      DEVLOCKOBJ_bPrepareTrgDcoWrap_0();
    v77 = 0LL;
    v76 = 0LL;
    v75 = 0LL;
  }
  else
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v60, (struct PDEVOBJ *)&v51);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)&v71, (struct PDEVOBJ *)&v51);
  }
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v22 = (unsigned int)*(_QWORD *)a1 >> 8;
  v52 = *(struct HOBJ__ **)a1;
  v53 = -2147483614;
  v23 = GdiHandleManager::DecodeIndex(
          (GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext,
          (unsigned __int16)v52 | v22 & 0xFF0000);
  v24 = DeferredContext[2];
  v25 = v23;
  v26 = *(_DWORD *)(v24 + 2056);
  if ( v23 >= v26 + ((*(unsigned __int16 *)(v24 + 2) - 1) << 16) )
    goto LABEL_43;
  if ( v23 >= v26 )
  {
    v27 = ((v23 - v26) >> 16) + 1;
    if ( (v23 - v26) >> 16 != -2 )
      goto LABEL_34;
LABEL_43:
    v30 = v52;
    goto LABEL_44;
  }
  v27 = 0;
LABEL_34:
  v28 = *(_QWORD *)(v24 + 8LL * v27 + 8);
  if ( v27 )
    v25 = v23 - ((v27 - 1) << 16) - v26;
  v29 = 0LL;
  if ( (unsigned int)v25 < *(_DWORD *)(v28 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * (v25 >> 8)) + 16LL * (unsigned __int8)v25 + 8) )
  {
    v29 = *(_QWORD *)v28 + 24LL * (unsigned int)v25;
  }
  v30 = v52;
  if ( v29 && *(_BYTE *)(v29 + 14) == 5 && *(_WORD *)(v29 + 12) == WORD1(v52) )
    v53 = *(_DWORD *)(v29 + 8) & 0xFFFFFFFE;
LABEL_44:
  v79 = 0;
  if ( v80 || HmgRemoveObjectImpl(v30, 0, 1, a2 == 2, 5, &v79) )
  {
LABEL_67:
    if ( (_DWORD)Process )
    {
      _InterlockedDecrement(&glRenderEndDelete);
      v19 = v51;
    }
    if ( (int)IsvAccNotifyDeleteSurfaceSupported_0() >= 0 )
      vAccNotifyDeleteSurfaceWrap_0();
    if ( (*((_DWORD *)a1 + 28) & 0x400000) == 0
      || (v34 = v62) == 0LL
      || !(unsigned int)HmgLockResultBase<DRVOBJ>::operator bool(&v51) )
    {
LABEL_85:
      if ( v7 )
      {
        if ( *((_DWORD *)a1 + 44) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
            GrepUnsecureVirtualMemory(v7);
          else
            MmUnsecureVirtualMemory(v7);
        }
        goto LABEL_132;
      }
      if ( v81 )
      {
        if ( BaseAddress )
          MmUnmapViewInSessionSpace(v6);
        goto LABEL_132;
      }
      v38 = SecureHandle;
      if ( SecureHandle )
      {
        if ( *((_DWORD *)a1 + 44) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
            GrepUnsecureVirtualMemory(v38);
          else
            MmUnsecureVirtualMemory(v38);
          if ( BaseAddress )
          {
            if ( v58 )
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6);
            }
            else
            {
              RegionSize = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
            }
          }
        }
        goto LABEL_132;
      }
      if ( (v56 & 8) == 0 )
      {
        if ( (v56 & 0x800) != 0 )
        {
          v64 = ghsemMapRot;
          EngAcquireSemaphore(ghsemMapRot);
          v44 = (_QWORD *)*((_QWORD *)a1 + 33);
          if ( v44 )
          {
            v45 = (_QWORD *)((char *)a1 + 448);
            if ( (_QWORD *)*v45 != v45 )
            {
              v46 = *v45;
              v47 = (_QWORD *)*((_QWORD *)a1 + 57);
              if ( *(_QWORD **)(*v45 + 8LL) != v45 || (_QWORD *)*v47 != v45 )
                __fastfail(3u);
              *v47 = v46;
              *(_QWORD *)(v46 + 8) = v47;
            }
            if ( BaseAddress && Object )
              MmUnmapViewOfSection(*v44);
          }
          W32PIDLOCK::vCleanUp((W32PIDLOCK *)v78);
          if ( Object )
            ObfDereferenceObject(Object);
          SEMOBJ::vUnlock((SEMOBJ *)&v64);
        }
        else if ( (v56 & 0x10) != 0 )
        {
          vFreeKernelSection(BaseAddress);
        }
        goto LABEL_132;
      }
      if ( (v56 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
LABEL_132:
        if ( (*((_DWORD *)a1 + 29) & 0x800) != 0 )
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL, v52, v79, v53, 0LL, 0LL, 0);
        SURFACE::Free(a1);
        if ( v65 && (int)IsGreDeleteWndSupported_0() >= 0 )
          GreDeleteWnd_0();
        if ( v66 )
        {
          v67 = v66;
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v67);
        }
        goto LABEL_139;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      CurrentProcess = PsGetCurrentProcess(v40);
      MmUnmapViewOfSection(CurrentProcess);
      if ( ThreadWin32Thread && (v42 = *(_QWORD *)(ThreadWin32Thread + 72)) != 0 )
      {
        v43 = *(_DWORD *)(v42 + 8);
      }
      else
      {
        if ( !(_DWORD)v70 )
        {
          if ( (int)IsUMPDEngFreeUserMemSupported_0() >= 0 )
            UMPDEngFreeUserMem_0();
          goto LABEL_113;
        }
        v43 = HIDWORD(v69);
      }
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)v43, &Process) >= 0 )
      {
        MmUnmapViewOfSection(Process);
        ObfDereferenceObject(Process);
      }
LABEL_113:
      if ( !v68[0] )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      ObfDereferenceObject((PVOID)v68[0]);
      goto LABEL_132;
    }
    if ( (*((_DWORD *)a1 + 29) & 9) != 0 )
    {
      v36 = *(void (__fastcall **)(_QWORD *))(v19 + 2688);
      if ( v36 )
      {
        v37 = (_QWORD *)((char *)a1 + 24);
LABEL_84:
        v36(v37);
        goto LABEL_85;
      }
      v36 = *(void (__fastcall **)(_QWORD *))(v19 + 3472);
      if ( !v36 )
        goto LABEL_85;
    }
    else
    {
      v36 = *(void (__fastcall **)(_QWORD *))(v19 + 2800);
      if ( !v36 )
        goto LABEL_85;
      if ( (v35 & 0x40000) != 0 )
      {
        if ( !a2 && (int)IsUMPDDrvDeleteDeviceBitmapSupported_0() >= 0 )
          UMPDDrvDeleteDeviceBitmap_0();
        goto LABEL_85;
      }
    }
    v37 = v34;
    goto LABEL_84;
  }
  if ( a2 == 1 )
  {
    v32 = 0;
  }
  else
  {
    if ( a2 != 2 )
      goto LABEL_51;
    v32 = 1;
  }
  if ( HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 0, v32 != 0, 5, &v79) )
    goto LABEL_67;
LABEL_51:
  if ( a2 == 3 )
  {
    LOBYTE(v31) = 5;
    if ( HmgRemoveGarbageCollectible(*(_QWORD *)a1, v31, &v79) )
      goto LABEL_67;
  }
  if ( v79 == 1 )
  {
    if ( (*((_DWORD *)a1 + 28) & 0x800) == 0 )
    {
      EngSetLastError(0xAAu);
      v5 = 0;
      goto LABEL_139;
    }
    goto LABEL_65;
  }
  if ( *((_QWORD *)a1 + 19)
    || (*(_DWORD *)a1 & 0x800000) != 0 && (*((_WORD *)a1 + 51) & 0x200) != 0
    || (*((_DWORD *)a1 + 28) & 0x800) != 0 )
  {
    v33 = *((_DWORD *)a1 + 28);
    if ( (v33 & 0x800) == 0 )
    {
      *((_DWORD *)a1 + 28) = v33 | 0x1000000;
      HmgDecrementShareReferenceCount(a1);
      goto LABEL_139;
    }
    if ( !*((_DWORD *)a1 + 80) )
    {
      *((_DWORD *)a1 + 80) = 1;
      _InterlockedIncrement(&glRenderEndDelete);
    }
LABEL_65:
    HmgDecrementShareReferenceCount(a1);
    goto LABEL_139;
  }
  v5 = 0;
LABEL_139:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v71);
  DCOBJ::~DCOBJ((DCOBJ *)v74);
  v48 = v60;
  if ( v60 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v48);
  }
  if ( v54 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return v5;
}
