/*
 * XREFs of LeaveCrit @ 0x1C001E020
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 LeaveCrit()
{
  __int64 v0; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  DWORD LowPart; // eax
  int v3; // r8d

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
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v0);
    if ( CurrentThreadWin32Thread )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          *(_QWORD *)(CurrentThreadWin32Thread + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v3,
          LowPart - *(_DWORD *)(CurrentThreadWin32Thread + 8),
          0,
          *(_QWORD *)(CurrentThreadWin32Thread + 16));
    }
  }
  return ExReleaseResourceAndLeavePriorityRegion(gpresUser);
}
