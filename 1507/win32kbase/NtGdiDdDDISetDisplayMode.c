/*
 * XREFs of NtGdiDdDDISetDisplayMode @ 0x1C0082220
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported_0 @ 0x1C0001430 (IsUserResetPointerSupported_0.c)
 *     UserResetPointer_0 @ 0x1C0001438 (UserResetPointer_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C008243C (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtGdiDdDDISetDisplayMode(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // ebp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID v8; // rcx
  __int64 v9; // rsi
  int v10; // ecx
  LARGE_INTEGER v11; // rdi
  int v12; // r8d
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF
  struct _LUID v15; // [rsp+60h] [rbp+18h] BYREF

  v2 = ((__int64 (__fastcall *)(__int64, struct _LUID *, unsigned int *))qword_1C01011A8)(a1, &v15, &v14);
  if ( v2 >= 0 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v4 = 0LL;
    while ( 1 )
    {
      v5 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v5 )
        v4 = *v5;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v7, v6) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v4 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v8 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v4 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v8 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v8, UserRequest, 0, 0, 0LL);
    }
    v9 = PsGetCurrentThreadWin32Thread(v7);
    if ( v9 )
    {
      v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v10) = byte_1C00FEA58 - 1;
        Template_xqx(v10, (unsigned int)&AcquiredExclusiveUserCritEvent, v12, v11.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v11.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v12,
          0,
          1000 * v11.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v9 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v4;
    gbValidateHandleForIL = 1;
    if ( (int)IsUserResetPointerSupported_0() >= 0 )
      UserResetPointer_0();
    DrvUpdatePDevForWDDMVidPnSource(&v15, v14);
    UserSessionSwitchLeaveCrit();
  }
  return (unsigned int)v2;
}
