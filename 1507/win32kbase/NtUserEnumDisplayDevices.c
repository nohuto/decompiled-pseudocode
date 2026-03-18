/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1C0020A80
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C0010820 (UserSessionSwitchEnterCrit.c)
 *     UpdateGraphicsDeviceList @ 0x1C0020CC0 (UpdateGraphicsDeviceList.c)
 *     DrvEnumDisplayDevices @ 0x1C0031990 (DrvEnumDisplayDevices.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(__int64 a1, int a2, int a3, int a4)
{
  int v7; // r14d
  __int64 v8; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  DWORD LowPart; // eax
  int v11; // r8d
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rbx
  DWORD v16; // eax
  int v17; // r8d
  _DWORD v19[10]; // [rsp+30h] [rbp-28h] BYREF

  v7 = a1;
  UserSessionSwitchEnterCrit(a1);
  UpdateGraphicsDeviceList(v19);
  if ( v19[0] )
  {
    if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread()) == gptiRit
      && !gbRITBlockedOnDIT
      && gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48 )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v8);
      if ( CurrentThreadWin32Thread )
      {
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          Template_xqx(
            *(_QWORD *)(CurrentThreadWin32Thread + 16),
            (unsigned int)&ReleaseUserCritEvent,
            v11,
            LowPart - *(_DWORD *)(CurrentThreadWin32Thread + 8),
            0,
            *(_QWORD *)(CurrentThreadWin32Thread + 16));
      }
    }
    ExReleaseResourceAndLeavePriorityRegion(gpresUser);
    UserSessionSwitchEnterCrit(v12);
  }
  v13 = DrvEnumDisplayDevices(v7, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 160LL), a2, a3, a4, 1);
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread()) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x200000010000000LL) != 0
    && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48 )
  {
    v15 = PsGetCurrentThreadWin32Thread(v14);
    if ( v15 )
    {
      v16 = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          *(_QWORD *)(v15 + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v17,
          v16 - *(_DWORD *)(v15 + 8),
          0,
          *(_QWORD *)(v15 + 16));
    }
  }
  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
  return v13;
}
