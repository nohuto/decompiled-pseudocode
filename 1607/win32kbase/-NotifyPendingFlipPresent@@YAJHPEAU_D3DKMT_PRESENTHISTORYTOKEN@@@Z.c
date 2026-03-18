/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0017058
 * Callers:
 *     GreSfmDxQuerySwapChainBindingStatus @ 0x1C0016FF0 (GreSfmDxQuerySwapChainBindingStatus.c)
 * Callees:
 *     UserIsWindowDesktopComposed_0 @ 0x1C0002F50 (UserIsWindowDesktopComposed_0.c)
 *     UserIsCurrentThreadDesktopComposed_0 @ 0x1C0002F58 (UserIsCurrentThreadDesktopComposed_0.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C000E0E0 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     ?EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z @ 0x1C0017330 (-EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z.c)
 *     ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEA_N3@Z @ 0x1C001B8DC (-NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@@Z @ 0x1C001B968 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C001B9E0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C001C300 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C001D660 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C004862C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     Template_ppqxxx @ 0x1C00B7518 (Template_ppqxxx.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00F2AFC (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, char a3)
{
  int v5; // ebx
  CompositionObject *v6; // rsi
  CCompositionSurface *v7; // r14
  bool v8; // r15
  UINT64 CompositionBindingId; // rdx
  __int64 v10; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v12; // rsi
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  int v18; // ecx
  LARGE_INTEGER v19; // rsi
  int v20; // r8d
  HWND v21; // rcx
  int v22; // edx
  int v23; // r8d
  UINT64 CompositionSyncKey; // rcx
  UINT v26; // eax
  PRKSEMAPHORE v27; // rcx
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  CInputSink *v29; // [rsp+58h] [rbp-18h] BYREF
  HWND v30; // [rsp+60h] [rbp-10h] BYREF
  void *v31; // [rsp+68h] [rbp-8h] BYREF
  DWORD LowPart; // [rsp+B8h] [rbp+48h] BYREF
  LONG HighPart; // [rsp+BCh] [rbp+4Ch]
  bool v34; // [rsp+C0h] [rbp+50h] BYREF
  int v35; // [rsp+C8h] [rbp+58h] BYREF

  Object = 0LL;
  v5 = CompositionSurfaceObject::ResolveHandle(
         (void *)a2->Token.Flip.hLogicalSurface,
         2u,
         a3,
         (struct CompositionSurfaceObject **)&Object);
  if ( v5 >= 0 )
  {
    v6 = (CompositionObject *)Object;
    v29 = 0LL;
    v30 = 0LL;
    v5 = CompositionSurfaceObject::LockForWrite(Object, &v29);
    if ( v5 >= 0 )
    {
      v7 = v29;
      v8 = a2->Token.Flip.PresentLimitSemaphoreId != 0;
      if ( !CCompositionSurface::CheckBinding(v29, a2->CompositionBindingId, (enum CompositionBufferType *)&v35, &v30)
        || v35 != 2 )
      {
        v5 = -1073741811;
      }
      if ( v5 >= 0 )
      {
        CompositionBindingId = a2->CompositionBindingId;
        LOBYTE(LowPart) = 0;
        v34 = 0;
        v5 = CCompositionSurface::NotifyPendingFlipPresent(
               v7,
               CompositionBindingId,
               &a2->Token.Flip,
               v8,
               (bool *)&LowPart,
               &v34);
        if ( v5 >= 0 )
        {
          if ( (_BYTE)LowPart )
          {
            v26 = a2->Token.Flip.Flags.Value | 0x200000;
            a2->Token.Flip.Flags.Value = v26;
            if ( v34 )
              a2->Token.Flip.Flags.Value = v26 | 0x400000;
          }
        }
      }
      CInputSink::UnlockAndRelease(v7);
      if ( v5 >= 0 )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v12 = 0LL;
        while ( 1 )
        {
          v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
          if ( v13 )
            v12 = *v13;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v14);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v16) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest )
            break;
          if ( gbRITBlockedOnDIT )
          {
            if ( v12 == gptiRit )
              break;
            _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            v27 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
          }
          else
          {
            if ( gbDITInHitTest != 1 || v12 == gptiRit )
              break;
            _InterlockedAdd(&gcDITHitTestWaiters, 1u);
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            v27 = gpsemDITHitTestWaiters;
          }
          KeWaitForSingleObject(v27, UserRequest, 0, 0, 0LL);
        }
        v17 = PsGetCurrentThreadWin32Thread(v16);
        if ( v17 )
        {
          v19 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v17 + 8));
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
            && (qword_1C0118B10 & 0x200000010000000LL) != 0
            && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
            && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v18) = byte_1C0118B28 - 1;
            Template_xqx(v18, (unsigned int)&AcquiredSharedUserCritEvent, v20, v19.LowPart, 0, gullUserCritAcquireToken);
          }
          if ( v19.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
            && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          {
            Template_xqx(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
              v20,
              0,
              1000 * v19.QuadPart / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v17 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
        v21 = v30;
        if ( v30 )
        {
          if ( !a1 || gProtocolType == -1 || !(unsigned int)UserIsWindowDesktopComposed_0() )
            v5 = -1071775733;
        }
        else if ( !a1 || gProtocolType == -1 || !(unsigned int)UserIsCurrentThreadDesktopComposed_0() )
        {
          v5 = -1071775730;
        }
        UserSessionSwitchLeaveCrit(v21);
        if ( v5 < 0 )
        {
          v6 = (CompositionObject *)Object;
        }
        else
        {
          KeEnterCriticalRegion();
          v6 = (CompositionObject *)Object;
          v5 = CTokenManager::EnsureTokenQueueForPresent((struct CompositionSurfaceObject *)Object);
          KeLeaveCriticalRegion();
          if ( v5 >= 0 )
          {
            v31 = 0LL;
            v5 = CompositionObject::OpenDwmHandle(v6, &v31);
            if ( v5 >= 0 )
            {
              a2->Token.Flip.hCompSurf = (LONG64)v31;
              *((_QWORD *)&a2->Token.SurfaceComplete + 7) = *((_QWORD *)v6 + 2);
              CompositionSyncKey = a2->Token.Flip.CompositionSyncKey;
              if ( CompositionSyncKey && !a2->Token.Flip.RemainingTokens )
                DirectComposition::CSynchronizationManager::NotifyPresent(CompositionSyncKey, 0);
              LowPart = a2->Token.Flip.compSurfLuid.LowPart;
              HighPart = a2->Token.Flip.compSurfLuid.HighPart;
              if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                Template_ppqxxx(
                  a2->Token.Flip.PresentCount,
                  v22,
                  v23,
                  (_DWORD)a2,
                  (char)v6,
                  a2->Token.Flip.SwapChainIndex,
                  a2->Token.Flip.PresentCount,
                  LowPart,
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
