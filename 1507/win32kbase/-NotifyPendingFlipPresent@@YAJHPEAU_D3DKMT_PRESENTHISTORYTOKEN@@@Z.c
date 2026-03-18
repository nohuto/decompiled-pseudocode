/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045288
 * Callers:
 *     GreSfmDxQuerySwapChainBindingStatus @ 0x1C0020890 (GreSfmDxQuerySwapChainBindingStatus.c)
 * Callees:
 *     UserIsWindowDesktopComposed_0 @ 0x1C0002F30 (UserIsWindowDesktopComposed_0.c)
 *     UserIsCurrentThreadDesktopComposed_0 @ 0x1C0002F38 (UserIsCurrentThreadDesktopComposed_0.c)
 *     GreUnlockDwmState @ 0x1C000B340 (GreUnlockDwmState.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C0021BA0 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ReferenceDwmProcess @ 0x1C0045670 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C00456A8 (CheckOrAcquireDwmStateLock.c)
 *     ?EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z @ 0x1C004579C (-EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C004852C (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C004872C (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@@Z @ 0x1C0048F1C (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@@Z.c)
 *     ?DestParametersChanged@CCompositionSurface@@QEAA_N_KIIIUtagRECT@@@Z @ 0x1C0048F88 (-DestParametersChanged@CCompositionSurface@@QEAA_N_KIIIUtagRECT@@@Z.c)
 *     ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_K0_N@Z @ 0x1C004901C (-NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_K0_N@Z.c)
 *     ?SourceParametersChanged@CCompositionSurface@@QEAA_N_KW4D3DDDI_COLOR_SPACE_TYPE@@UtagRECT@@@Z @ 0x1C0049094 (-SourceParametersChanged@CCompositionSurface@@QEAA_N_KW4D3DDDI_COLOR_SPACE_TYPE@@UtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     Template_ppqxxx @ 0x1C00A98CC (Template_ppqxxx.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00DED0C (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, __int64 a3)
{
  NTSTATUS v5; // ebx
  struct CompositionSurfaceObject *v6; // r15
  CCompositionSurface *v7; // rsi
  bool v8; // r14
  UINT DestWidth; // r9d
  D3DDDI_ROTATION Rotation; // r8d
  UINT64 CompositionBindingId; // rdx
  UINT DestHeight; // eax
  enum D3DDDI_COLOR_SPACE_TYPE ColorSpace; // r8d
  UINT64 v14; // rdx
  __int64 v15; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v17; // rsi
  struct tagTHREADINFO **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID CurrentProcess; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  int v25; // ecx
  LARGE_INTEGER v26; // rsi
  int v27; // r8d
  __int64 v28; // rcx
  char v29; // al
  char v30; // r14
  __int64 v31; // rcx
  struct _KPROCESS *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct _KPROCESS *v36; // rsi
  UINT64 CompositionSyncKey; // rcx
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // eax
  PVOID v40; // rcx
  HWND v41; // [rsp+50h] [rbp-59h] BYREF
  void *Handle; // [rsp+58h] [rbp-51h] BYREF
  int v43; // [rsp+60h] [rbp-49h] BYREF
  CCompositionSurface *v44; // [rsp+68h] [rbp-41h] BYREF
  PVOID Object; // [rsp+70h] [rbp-39h]
  struct tagRECT v46; // [rsp+80h] [rbp-29h] BYREF
  struct tagRECT v47; // [rsp+90h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-9h] BYREF

  Object = 0LL;
  LOBYTE(a3) = 1;
  v5 = CompositionObject::ResolveHandle(a2->Token.Flip.hLogicalSurface, 2LL, a3);
  if ( v5 >= 0 )
  {
    v6 = (struct CompositionSurfaceObject *)Object;
    v44 = 0LL;
    v41 = 0LL;
    v5 = CompositionSurfaceObject::LockForWrite(Object, &v44);
    if ( v5 >= 0 )
    {
      v7 = v44;
      v8 = a2->Token.Flip.PresentLimitSemaphoreId != 0;
      if ( !CCompositionSurface::CheckBinding(v44, a2->CompositionBindingId, (enum CompositionBufferType *)&v43, &v41)
        || v43 != 2 )
      {
        v5 = -1073741811;
      }
      if ( v5 >= 0 )
      {
        v5 = CCompositionSurface::NotifyPendingFlipPresent(v7, a2->CompositionBindingId, a2->Token.Flip.FenceValue, v8);
        if ( v5 >= 0 && (a2->Token.Flip.Flags.Value & 0x40) == 0 )
        {
          DestWidth = a2->Token.Flip.DestWidth;
          Rotation = a2->Token.Flip.Rotation;
          CompositionBindingId = a2->CompositionBindingId;
          DestHeight = a2->Token.Flip.DestHeight;
          v46 = *(struct tagRECT *)((char *)&a2->Token.SurfaceComplete + 748);
          if ( !CCompositionSurface::DestParametersChanged(
                  v7,
                  CompositionBindingId,
                  Rotation,
                  DestWidth,
                  DestHeight,
                  &v46) )
            a2->Token.Flip.Flags.Value |= 0x200000u;
          ColorSpace = a2->Token.Flip.ColorSpace;
          v14 = a2->CompositionBindingId;
          v47 = *(struct tagRECT *)((char *)&a2->Token.SurfaceComplete + 724);
          if ( CCompositionSurface::SourceParametersChanged(v7, v14, ColorSpace, &v47) )
          {
            Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a2->Token.Flip.Flags.Value;
            if ( (*(_DWORD *)&Value & 0x200000) != 0 )
              a2->Token.Flip.Flags.Value = *(_DWORD *)&Value | 0x400000;
          }
        }
      }
      CPushLock::ReleaseLock((CCompositionSurface *)((char *)v7 + 8));
      ObfDereferenceObject((char *)v7 - 24);
      if ( v5 >= 0 )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v17 = 0LL;
        while ( 1 )
        {
          v18 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceShared(gpresUser);
          if ( v18 )
            v17 = *v18;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v20, v19);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v23, v22) == gpepCSRSS && v17 != (struct tagTHREADINFO *)gptiTSRequest )
            break;
          if ( gbRITBlockedOnDIT )
          {
            if ( v17 == gptiRit )
              break;
            _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
            ExReleaseResourceAndLeavePriorityRegion(gpresUser);
            v40 = gpsemRITBlockedOnDITWaiters;
          }
          else
          {
            if ( gbDITInHitTest != 1 || v17 == gptiRit )
              break;
            _InterlockedIncrement(&gcDITHitTestWaiters);
            ExReleaseResourceAndLeavePriorityRegion(gpresUser);
            v40 = gpsemDITHitTestWaiters;
          }
          KeWaitForSingleObject(v40, UserRequest, 0, 0, 0LL);
        }
        v24 = PsGetCurrentThreadWin32Thread(v23);
        if ( v24 )
        {
          v26 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v24 + 8));
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
            && (qword_1C00FEA40 & 0x200000010000000LL) != 0
            && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
            && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v25) = byte_1C00FEA58 - 1;
            Template_xqx(v25, (unsigned int)&AcquiredSharedUserCritEvent, v27, v26.LowPart, 0, gullUserCritAcquireToken);
          }
          if ( v26.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
            && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          {
            Template_xqx(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
              v27,
              0,
              1000 * v26.QuadPart / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v24 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
        if ( v41 )
        {
          if ( !a1 || gProtocolType == -1 || !(unsigned int)UserIsWindowDesktopComposed_0() )
            v5 = -1071775733;
        }
        else if ( !a1 || gProtocolType == -1 || !(unsigned int)UserIsCurrentThreadDesktopComposed_0() )
        {
          v5 = -1071775730;
        }
        UserSessionSwitchLeaveCrit();
        if ( v5 >= 0 )
        {
          KeEnterCriticalRegion();
          v5 = CTokenManager::EnsureTokenQueueForPresent(v6);
          KeLeaveCriticalRegion();
          if ( v5 >= 0 )
          {
            Handle = 0LL;
            v29 = CheckOrAcquireDwmStateLock(v28);
            Handle = (void *)-1LL;
            v30 = v29;
            v32 = (struct _KPROCESS *)ReferenceDwmProcess(v31);
            v36 = v32;
            if ( v32 )
            {
              KeStackAttachProcess(v32, &ApcState);
              v5 = ObOpenObjectByPointer(v6, 0x40u, 0LL, 3u, ExCompositionObjectType, 0, &Handle);
              KeUnstackDetachProcess(&ApcState);
              ObfDereferenceObject(v36);
            }
            else
            {
              v5 = -1073741823;
            }
            if ( v30 )
              GreUnlockDwmState(v34, v33, v35);
            if ( v5 >= 0 )
            {
              a2->Token.Flip.hCompSurf = (LONG64)Handle;
              *((_QWORD *)&a2->Token.SurfaceComplete + 7) = *((_QWORD *)v6 + 2);
              CompositionSyncKey = a2->Token.Flip.CompositionSyncKey;
              if ( CompositionSyncKey && !a2->Token.Flip.RemainingTokens )
                DirectComposition::CSynchronizationManager::NotifyPresent(CompositionSyncKey, 0);
              v41 = (HWND)*((_QWORD *)&a2->Token.SurfaceComplete + 7);
              if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                Template_ppqxxx(
                  CompositionSyncKey,
                  a2->Token.Flip.PresentCount,
                  v35,
                  (_DWORD)a2,
                  (char)v6,
                  a2->Token.Flip.SwapChainIndex,
                  a2->Token.Flip.PresentCount,
                  (char)v41,
                  a2->CompositionBindingId);
            }
          }
        }
      }
    }
    ObfDereferenceObject(v6);
  }
  if ( v5 == -1071775730 )
  {
    v5 = NotifySurfaceOfSkippedToken(a2);
    if ( v5 >= 0 )
      return (unsigned int)-1071775730;
  }
  return (unsigned int)v5;
}
