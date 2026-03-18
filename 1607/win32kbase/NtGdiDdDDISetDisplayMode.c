/*
 * XREFs of NtGdiDdDDISetDisplayMode @ 0x1C005D930
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported_0 @ 0x1C0001440 (IsUserResetPointerSupported_0.c)
 *     UserResetPointer_0 @ 0x1C0001448 (UserResetPointer_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C005DA28 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall NtGdiDdDDISetDisplayMode(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // ecx
  LARGE_INTEGER v8; // rbx
  int v9; // r8d
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF
  struct _LUID v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = ((__int64 (__fastcall *)(__int64, struct _LUID *, unsigned int *))qword_1C011B308)(a1, &v12, &v11);
  if ( v2 >= 0 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v6 = PsGetCurrentThreadWin32Thread(v5);
    if ( v6 )
    {
      v8 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v6 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v7) = byte_1C0118B28 - 1;
        Template_xqx(v7, (unsigned int)&AcquiredExclusiveUserCritEvent, v9, v8.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v8.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v9,
          0,
          1000 * v8.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v6 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v4;
    gbValidateHandleForIL = 1;
    if ( (int)IsUserResetPointerSupported_0() >= 0 )
      UserResetPointer_0();
    DrvUpdatePDevForWDDMVidPnSource(&v12, v11);
    UserSessionSwitchLeaveCrit();
  }
  return (unsigned int)v2;
}
