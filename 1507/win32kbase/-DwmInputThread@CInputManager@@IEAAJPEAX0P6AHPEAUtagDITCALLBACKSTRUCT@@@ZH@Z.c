/*
 * XREFs of ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C00136B4
 * Callers:
 *     NtCompositionInputThread @ 0x1C00135B0 (NtCompositionInputThread.c)
 * Callees:
 *     UserActivateDwmInputProcessing_0 @ 0x1C0002EF0 (UserActivateDwmInputProcessing_0.c)
 *     UserProcessDwmInput_0 @ 0x1C0002EF8 (UserProcessDwmInput_0.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C0013628 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0013988 (rimConvertUserToKernelEventHandle.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall CInputManager::DwmInputThread(
        CInputManager *this,
        void *a2,
        void *a3,
        int (*a4)(struct tagDITCALLBACKSTRUCT *),
        int a5)
{
  CInputManager *v5; // rdi
  int v8; // ebx
  struct _KTHREAD *v9; // rax
  HANDLE v10; // rax
  HANDLE v11; // rax
  __int64 v12; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v14; // rsi
  struct tagTHREADINFO **v15; // rax
  __int64 v16; // rcx
  PVOID v17; // rcx
  __int64 v18; // r14
  int v19; // ecx
  LARGE_INTEGER v20; // rbp
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  HANDLE v27[5]; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v5 = g_pInputManager;
  Handle = 0LL;
  v27[0] = 0LL;
  v8 = rimConvertUserToKernelEventHandle(a2, &Handle);
  if ( v8 >= 0 )
  {
    v8 = rimConvertUserToKernelEventHandle(a3, v27);
    if ( v8 >= 0 )
    {
      v9 = (struct _KTHREAD *)_InterlockedCompareExchange64(
                                (volatile signed __int64 *)v5 + 1,
                                (signed __int64)KeGetCurrentThread(),
                                0LL);
      if ( !v9 || v9 == KeGetCurrentThread() )
      {
        v10 = Handle;
        Handle = 0LL;
        *((_QWORD *)v5 + 2) = v10;
        v11 = v27[0];
        v27[0] = 0LL;
        *((_QWORD *)v5 + 3) = v11;
        *((_QWORD *)v5 + 4) = *(_QWORD *)v5;
        *((_DWORD *)v5 + 17) = a5;
        *((_QWORD *)v5 + 5) = a4;
        v8 = UserActivateDwmInputProcessing_0();
        if ( v8 >= 0 )
          v8 = UserProcessDwmInput_0();
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v14 = 0LL;
        while ( 1 )
        {
          v15 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
          if ( v15 )
            v14 = *v15;
          if ( (unsigned int)IsCurrentProcessDwm()
            || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v14 != (struct tagTHREADINFO *)gptiTSRequest )
          {
            break;
          }
          if ( gbRITBlockedOnDIT )
          {
            if ( v14 == gptiRit )
              break;
            ++gcRITBlockedOnDITWaiters;
            ExReleaseResourceAndLeavePriorityRegion(gpresUser);
            v17 = gpsemRITBlockedOnDITWaiters;
          }
          else
          {
            if ( gbDITInHitTest != 1 || v14 == gptiRit )
              break;
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeavePriorityRegion(gpresUser);
            v17 = gpsemDITHitTestWaiters;
          }
          KeWaitForSingleObject(v17, UserRequest, 0, 0, 0LL);
        }
        v18 = PsGetCurrentThreadWin32Thread(v16);
        if ( v18 )
        {
          v20 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v18 + 8));
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
            && (qword_1C00FEA40 & 0x200000010000000LL) != 0
            && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
            && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v19) = byte_1C00FEA58 - 1;
            Template_xqx(
              v19,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v21,
              v20.LowPart,
              0,
              gullUserCritAcquireToken);
          }
          if ( v20.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
            && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          {
            Template_xqx(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v21,
              0,
              1000 * v20.QuadPart / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v18 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
        gptiCurrent = v14;
        gbValidateHandleForIL = 1;
        CInputManager::CleanupDwmInputThread(v5);
        UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
      }
      else
      {
        v8 = -2147483631;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v27[0] )
        ZwClose(v27[0]);
    }
  }
  return (unsigned int)v8;
}
