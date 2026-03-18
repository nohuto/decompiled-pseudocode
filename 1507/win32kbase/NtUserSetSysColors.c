/*
 * XREFs of NtUserSetSysColors @ 0x1C0017420
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C70 (PushW32ThreadLock_0.c)
 *     PopW32ThreadLock_0 @ 0x1C00021E0 (PopW32ThreadLock_0.c)
 *     FreeProfileUserName @ 0x1C0017880 (FreeProfileUserName.c)
 *     CreateProfileUserName @ 0x1C00178A0 (CreateProfileUserName.c)
 *     xxxSetSysColors @ 0x1C0025244 (xxxSetSysColors.c)
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserSetSysColors(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  void *v6; // rsi
  void *v7; // r14
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v9; // rbx
  int v10; // r15d
  __int64 *v11; // rax
  __int64 v12; // rcx
  PVOID v13; // rcx
  __int64 v14; // r15
  int v15; // ecx
  LARGE_INTEGER v16; // rsi
  int v17; // r8d
  bool v18; // al
  int v19; // eax
  size_t v20; // rbx
  void *v21; // rax
  void *v22; // rax
  __int64 ProfileUserName; // rbx
  unsigned int v24; // r15d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _BYTE v30[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+D0h] [rbp+8h]

  v31 = a1;
  v6 = 0LL;
  v7 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = 0LL;
  do
  {
    v10 = 0;
    v11 = (__int64 *)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v11 )
      v9 = *v11;
    if ( (unsigned int)IsCurrentProcessDwm() || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v9 != gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || (struct tagTHREADINFO *)v9 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v13 = gpsemDITHitTestWaiters;
      goto LABEL_15;
    }
    if ( (struct tagTHREADINFO *)v9 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v13 = gpsemRITBlockedOnDITWaiters;
LABEL_15:
      KeWaitForSingleObject(v13, UserRequest, 0, 0, 0LL);
      v10 = 1;
    }
  }
  while ( v10 == 1 );
  v14 = PsGetCurrentThreadWin32Thread(v12);
  if ( v14 )
  {
    v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      v18 = (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
         && (qword_1C00FEA40 & 0x200000010000000LL) != 0
         && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48;
      if ( v18 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v15, (unsigned int)&AcquiredExclusiveUserCritEvent, v17, v16.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v16.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        1000 * v16.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v17,
        0,
        1000 * v16.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v6 = 0LL;
    v7 = 0LL;
  }
  gptiCurrent = (struct tagTHREADINFO *)v9;
  gbValidateHandleForIL = 1;
  if ( (*(_DWORD *)(v9 + 448) & 0x20000000) != 0 )
    v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 384) + 728LL) + 24LL) & 8;
  else
    v19 = 0;
  if ( v19 || gbEnforceUIPI && (unsigned int)*(_QWORD *)(*(_QWORD *)(v9 + 384) + 832LL) < 0x2000 )
  {
    v24 = 0;
    UserSetLastError(5LL);
  }
  else
  {
    if ( v31 )
    {
      v20 = 4LL * v31;
      if ( v20 )
      {
        if ( (((-(__int64)(PsGetCurrentProcessWow64Process() != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a2) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v20 + a2 > (unsigned __int64)W32UserProbeAddress || v20 + a2 < a2 )
          *(_BYTE *)W32UserProbeAddress = 0;
        if ( (((-(__int64)(PsGetCurrentProcessWow64Process() != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v20 + a3 > (unsigned __int64)W32UserProbeAddress || v20 + a3 < a3 )
          *(_BYTE *)W32UserProbeAddress = 0;
      }
      v21 = (void *)Win32AllocPoolWithQuota(v20, 1919120213LL);
      v6 = v21;
      if ( !v21 )
        ExRaiseStatus(-1073741801);
      memmove(v21, (const void *)a2, v20);
      v22 = (void *)Win32AllocPoolWithQuota(v20, 1986229077LL);
      v7 = v22;
      if ( !v22 )
        ExRaiseStatus(-1073741801);
      memmove(v22, (const void *)a3, v20);
    }
    PushW32ThreadLock_0();
    PushW32ThreadLock_0();
    ProfileUserName = CreateProfileUserName(v30);
    v24 = xxxSetSysColors(ProfileUserName, v31, (_DWORD)v6, (_DWORD)v7, a4);
    FreeProfileUserName(ProfileUserName, v30);
    PopW32ThreadLock_0();
    PopW32ThreadLock_0();
    if ( v6 )
      Win32FreePool(v6);
    if ( v7 )
      Win32FreePool(v7);
  }
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  return v24;
}
