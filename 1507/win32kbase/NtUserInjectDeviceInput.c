/*
 * XREFs of NtUserInjectDeviceInput @ 0x1C00AC530
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00C4D1C (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00C5D18 (RIMIDEInjectDeviceInput.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v5; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v7; // rdi
  int v8; // r14d
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID v14; // rcx
  LONGLONG v15; // rdx
  __int64 v16; // r15
  LARGE_INTEGER v17; // rcx
  LARGE_INTEGER v18; // r8
  LARGE_INTEGER v19; // r14
  bool v20; // al
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdi
  size_t v24; // r14
  void *v25; // rax
  void *v26; // rdi
  __int64 v28; // [rsp+20h] [rbp-58h]

  v3 = a3;
  v5 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  do
  {
    v8 = 0;
    v9 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v9 )
      v7 = *v9;
    if ( IsCurrentProcessDwm(v11, v10)
      || (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v7 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v14 = gpsemDITHitTestWaiters;
      goto LABEL_15;
    }
    if ( v7 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v14 = gpsemRITBlockedOnDITWaiters;
LABEL_15:
      KeWaitForSingleObject(v14, UserRequest, 0, 0, 0LL);
      v8 = 1;
    }
  }
  while ( v8 == 1 );
  v16 = PsGetCurrentThreadWin32Thread(v13);
  if ( v16 )
  {
    v19 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
    v15 = 0x200000010000000LL;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      v20 = (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
         && (qword_1C00FEA40 & 0x200000010000000LL) != 0
         && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48;
      if ( v20 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LODWORD(v28) = 0;
        Template_xqx(
          v17.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v18.QuadPart,
          v19.QuadPart,
          v28,
          gullUserCritAcquireToken);
      }
    }
    if ( v19.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      v15 = 1000 * v19.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        LODWORD(v28) = 1000 * v19.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          1000 * v19.QuadPart / gliQpcFreq.QuadPart,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v18.QuadPart,
          0LL,
          v28,
          gullUserCritAcquireToken);
      }
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !(_DWORD)v3 )
    goto LABEL_47;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v22 = 5LL;
    goto LABEL_48;
  }
  v23 = 12 * v3;
  if ( (unsigned __int64)(12 * v3) <= 0xFFFFFFFF )
  {
    if ( v23 )
    {
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v21) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v23 + a2 > (unsigned __int64)W32UserProbeAddress || v23 + a2 < a2 )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
    v24 = (unsigned int)v23;
    v25 = (void *)Win32AllocPoolWithQuota();
    v26 = v25;
    if ( !v25 )
      ExRaiseStatus(-1073741801);
    memmove(v25, (const void *)a2, v24);
    if ( (int)RIMIDEInjectDeviceInput(a1, v26, (unsigned int)v3) >= 0 )
      v5 = 1;
    if ( v26 )
      Win32FreePool();
  }
  else
  {
LABEL_47:
    v22 = 87LL;
LABEL_48:
    UserSetLastError(v22, v15);
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
