/*
 * XREFs of LeaveCrit @ 0x1C0078CD0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C001F2D0 (EtwTraceReleaseUserCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall LeaveCrit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v3);
  return ExReleaseResourceAndLeavePriorityRegion(gpresUser);
}
