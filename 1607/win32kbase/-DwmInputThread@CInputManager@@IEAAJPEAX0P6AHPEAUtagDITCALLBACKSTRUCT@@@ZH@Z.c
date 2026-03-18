/*
 * XREFs of ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C004E6E4
 * Callers:
 *     NtCompositionInputThread @ 0x1C004E5E0 (NtCompositionInputThread.c)
 * Callees:
 *     UserActivateDwmInputProcessing_0 @ 0x1C0002F10 (UserActivateDwmInputProcessing_0.c)
 *     UserProcessDwmInput_0 @ 0x1C0002F18 (UserProcessDwmInput_0.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0010834 (rimConvertUserToKernelEventHandle.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C004E658 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
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
  struct tagTHREADINFO *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rbp
  int v17; // ecx
  LARGE_INTEGER v18; // rsi
  int v19; // r8d
  HANDLE v21; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v5 = g_pInputManager;
  Handle = 0LL;
  v21 = 0LL;
  v8 = rimConvertUserToKernelEventHandle(a2, &Handle);
  if ( v8 >= 0 )
  {
    v8 = rimConvertUserToKernelEventHandle(a3, &v21);
    if ( v8 >= 0 )
    {
      v9 = (struct _KTHREAD *)_InterlockedCompareExchange64(
                                (volatile signed __int64 *)v5 + 1,
                                (signed __int64)KeGetCurrentThread(),
                                0LL);
      if ( v9 && v9 != KeGetCurrentThread() )
      {
        v8 = -2147483631;
      }
      else
      {
        v10 = Handle;
        Handle = 0LL;
        *((_QWORD *)v5 + 2) = v10;
        v11 = v21;
        v21 = 0LL;
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
        v14 = EnterCritAvoidingDitHitTestHazard(0, 1);
        v16 = PsGetCurrentThreadWin32Thread(v15);
        if ( v16 )
        {
          v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
            && (qword_1C0118B10 & 0x200000010000000LL) != 0
            && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
            && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            LOBYTE(v17) = byte_1C0118B28 - 1;
            Template_xqx(
              v17,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v19,
              v18.LowPart,
              0,
              gullUserCritAcquireToken);
          }
          if ( v18.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
            && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          {
            Template_xqx(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v19,
              0,
              1000 * v18.QuadPart / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
        gptiCurrent = v14;
        gbValidateHandleForIL = 1;
        CInputManager::CleanupDwmInputThread(v5);
        UserSessionSwitchLeaveCrit();
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v21 )
        ZwClose(v21);
    }
  }
  return (unsigned int)v8;
}
