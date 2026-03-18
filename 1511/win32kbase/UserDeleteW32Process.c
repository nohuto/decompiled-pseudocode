/*
 * XREFs of UserDeleteW32Process @ 0x1C0072930
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0022594 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

ReEnterLeaveCrit *__fastcall UserDeleteW32Process(__int64 a1)
{
  ReEnterLeaveCrit *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  result = ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v5);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
    if ( *(_QWORD *)(a1 + 696) )
    {
      Win32FreePool();
      RtlInitializeBitMap((PRTL_BITMAP)(a1 + 688), 0LL, 0);
    }
    PsSetProcessWin32Process(*(_QWORD *)a1, 0LL, a1);
    Win32FreePool();
    result = (ReEnterLeaveCrit *)ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  }
  if ( !v5 )
    return (ReEnterLeaveCrit *)UserSessionSwitchLeaveCrit(v4, v3);
  return result;
}
