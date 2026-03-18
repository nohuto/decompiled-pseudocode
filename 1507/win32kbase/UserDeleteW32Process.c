/*
 * XREFs of UserDeleteW32Process @ 0x1C0010590
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0044C44 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

ReEnterLeaveCrit *__fastcall UserDeleteW32Process(__int64 a1)
{
  ReEnterLeaveCrit *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  result = ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
    v7 = *(_QWORD *)(a1 + 696);
    if ( v7 )
    {
      Win32FreePool(v7);
      RtlInitializeBitMap((PRTL_BITMAP)(a1 + 688), 0LL, 0);
    }
    PsSetProcessWin32Process(*(_QWORD *)a1, 0LL, a1);
    Win32FreePool(a1);
    result = (ReEnterLeaveCrit *)ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  }
  if ( !v8 )
    return (ReEnterLeaveCrit *)UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return result;
}
