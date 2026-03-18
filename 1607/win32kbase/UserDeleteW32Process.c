/*
 * XREFs of UserDeleteW32Process @ 0x1C0077130
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingDesktopAllocFailureEvent_0 @ 0x1C00020F0 (TraceLoggingDesktopAllocFailureEvent_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001CD88 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall UserDeleteW32Process(__int64 a1)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v2);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 980) )
      TraceLoggingDesktopAllocFailureEvent_0();
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
    if ( *(_QWORD *)(a1 + 688) )
    {
      Win32FreePool();
      RtlInitializeBitMap((PRTL_BITMAP)(a1 + 680), 0LL, 0);
    }
    PsSetProcessWin32Process(*(_QWORD *)a1, 0LL, a1);
    Win32FreePool();
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  }
  if ( !v2 )
    UserSessionSwitchLeaveCrit();
}
