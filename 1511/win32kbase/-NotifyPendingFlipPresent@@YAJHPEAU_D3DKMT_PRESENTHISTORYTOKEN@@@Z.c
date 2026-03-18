/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0039070
 * Callers:
 *     GreSfmDxQuerySwapChainBindingStatus @ 0x1C00460D0 (GreSfmDxQuerySwapChainBindingStatus.c)
 * Callees:
 *     UserIsWindowDesktopComposed_0 @ 0x1C0002F70 (UserIsWindowDesktopComposed_0.c)
 *     UserIsCurrentThreadDesktopComposed_0 @ 0x1C0002F78 (UserIsCurrentThreadDesktopComposed_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     OpenDwmHandle @ 0x1C0037370 (OpenDwmHandle.c)
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0039408 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z @ 0x1C0039614 (-EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0039D48 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@@Z @ 0x1C003A4FC (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEA_N3@Z @ 0x1C003A598 (-NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C0043380 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C0045E58 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     Template_ppqxxx @ 0x1C00ADD78 (Template_ppqxxx.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00E0B1C (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, __int64 a3)
{
  int v5; // ebx
  struct CompositionSurfaceObject *v6; // rsi
  CCompositionSurface *v7; // r14
  bool v8; // r15
  UINT64 CompositionBindingId; // rdx
  __int64 v10; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  int v16; // ecx
  int v17; // r8d
  LONGLONG v18; // r14
  HWND v19; // rcx
  __int64 v20; // r9
  int v21; // r8d
  UINT64 CompositionSyncKey; // rcx
  UINT v24; // eax
  bool v25; // zf
  bool *p_Object; // [rsp+20h] [rbp-50h]
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  CCompositionSurface *v28; // [rsp+58h] [rbp-18h] BYREF
  HWND v29; // [rsp+60h] [rbp-10h] BYREF
  void *v30; // [rsp+68h] [rbp-8h] BYREF
  DWORD LowPart; // [rsp+B8h] [rbp+48h] BYREF
  LONG HighPart; // [rsp+BCh] [rbp+4Ch]
  bool v33; // [rsp+C0h] [rbp+50h] BYREF
  int v34; // [rsp+C8h] [rbp+58h] BYREF

  Object = 0LL;
  p_Object = (bool *)&Object;
  LOBYTE(a3) = 1;
  v5 = CompositionObject::ResolveHandle(a2->Token.Flip.hLogicalSurface, 2LL, a3);
  if ( v5 >= 0 )
  {
    v6 = (struct CompositionSurfaceObject *)Object;
    v28 = 0LL;
    v29 = 0LL;
    v5 = CompositionSurfaceObject::LockForWrite(Object, &v28);
    if ( v5 >= 0 )
    {
      v7 = v28;
      v8 = a2->Token.Flip.PresentLimitSemaphoreId != 0;
      if ( !CCompositionSurface::CheckBinding(v28, a2->CompositionBindingId, (enum CompositionBufferType *)&v34, &v29)
        || v34 != 2 )
      {
        v5 = -1073741811;
      }
      if ( v5 >= 0 )
      {
        CompositionBindingId = a2->CompositionBindingId;
        LOBYTE(LowPart) = 0;
        v33 = 0;
        v5 = CCompositionSurface::NotifyPendingFlipPresent(
               v7,
               CompositionBindingId,
               &a2->Token.Flip,
               v8,
               (bool *)&LowPart,
               &v33);
        if ( v5 >= 0 )
        {
          if ( (_BYTE)LowPart )
          {
            v24 = a2->Token.Flip.Flags.Value | 0x200000;
            v25 = !v33;
            a2->Token.Flip.Flags.Value = v24;
            if ( !v25 )
              a2->Token.Flip.Flags.Value = v24 | 0x400000;
          }
        }
      }
      CInputSink::UnlockAndRelease(v7);
      if ( v5 >= 0 )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        EnterSharedCritAvoidingDitHitTestHazard(0LL, 1LL);
        v14 = PsGetCurrentThreadWin32Thread(v12);
        if ( v14 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v13 = 0x200000010000000LL;
          v18 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 8);
          if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
            && (qword_1C01020B0 & 0x200000010000000LL) != 0
            && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
            && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v16) = byte_1C01020C8 - 1;
            Template_xqx(v16, (unsigned int)&AcquiredSharedUserCritEvent, v17, v18, 0, gullUserCritAcquireToken);
          }
          if ( v18 >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
            Template_xqx(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
              v17,
              0,
              1000 * v18 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          *(_QWORD *)(v14 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
        v19 = v29;
        if ( v29 )
        {
          if ( !a1 || gProtocolType == -1 || !(unsigned int)UserIsWindowDesktopComposed_0() )
            v5 = -1071775733;
        }
        else if ( !a1 || gProtocolType == -1 || !(unsigned int)UserIsCurrentThreadDesktopComposed_0() )
        {
          v5 = -1071775730;
        }
        UserSessionSwitchLeaveCrit((__int64)v19, v13);
        if ( v5 >= 0 )
        {
          KeEnterCriticalRegion();
          v5 = CTokenManager::EnsureTokenQueueForPresent(v6);
          KeLeaveCriticalRegion();
          if ( v5 >= 0 )
          {
            v30 = 0LL;
            v5 = OpenDwmHandle(v6, ExCompositionObjectType, 3u, v20, (int)p_Object, &v30);
            if ( v5 >= 0 )
            {
              a2->Token.Flip.hCompSurf = (LONG64)v30;
              *((_QWORD *)&a2->Token.SurfaceComplete + 7) = *((_QWORD *)v6 + 2);
              CompositionSyncKey = a2->Token.Flip.CompositionSyncKey;
              if ( CompositionSyncKey && !a2->Token.Flip.RemainingTokens )
                DirectComposition::CSynchronizationManager::NotifyPresent(CompositionSyncKey, 0);
              LowPart = a2->Token.Flip.compSurfLuid.LowPart;
              HighPart = a2->Token.Flip.compSurfLuid.HighPart;
              if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                Template_ppqxxx(
                  CompositionSyncKey,
                  a2->Token.Flip.PresentCount,
                  v21,
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
