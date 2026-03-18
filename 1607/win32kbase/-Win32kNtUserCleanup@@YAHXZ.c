/*
 * XREFs of ?Win32kNtUserCleanup@@YAHXZ @ 0x1C006CFF4
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006EFD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     IsCheckupHidLeakSupported_0 @ 0x1C00024B8 (IsCheckupHidLeakSupported_0.c)
 *     CheckupHidLeak_0 @ 0x1C00024C0 (CheckupHidLeak_0.c)
 *     IsPlaySoundDisconnectSupported_0 @ 0x1C00024C8 (IsPlaySoundDisconnectSupported_0.c)
 *     PlaySoundDisconnectWrap_0 @ 0x1C00024D0 (PlaySoundDisconnectWrap_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     CleanupLogonProcess @ 0x1C006D120 (CleanupLogonProcess.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C006D158 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall Win32kNtUserCleanup(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // ecx
  LARGE_INTEGER v6; // rbx
  int v7; // r8d

  if ( gpresUser )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v2 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v4 = PsGetCurrentThreadWin32Thread(v3);
    if ( v4 )
    {
      v6 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v4 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v5, (unsigned int)&AcquiredExclusiveUserCritEvent, v7, v6.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v6.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          1000 * v6.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v7,
          0,
          1000 * v6.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v4 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v2;
    gbValidateHandleForIL = 1;
    Win32kNtUserCleanupInternal();
    UserSessionSwitchLeaveCrit();
    ExDeleteResourceLite(gpresUser);
    ExFreePoolWithTag(gpresUser, 0);
    gpresUser = 0LL;
  }
  else
  {
    Win32kNtUserCleanupInternal();
  }
  if ( (int)IsCheckupHidLeakSupported_0() >= 0 )
    CheckupHidLeak_0();
  if ( ghWinstaDirectory )
    ZwClose(ghWinstaDirectory);
  CleanupLogonProcess();
  if ( gPlaySoundRpcHandle )
  {
    if ( (int)IsPlaySoundDisconnectSupported_0() >= 0 )
      PlaySoundDisconnectWrap_0();
    gPlaySoundRpcHandle = 0LL;
  }
  return 1LL;
}
