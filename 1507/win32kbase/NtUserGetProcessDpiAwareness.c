/*
 * XREFs of NtUserGetProcessDpiAwareness @ 0x1C0044F50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserGetProcessDpiAwareness(char *Handle, int *a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v5; // rsi
  int v6; // edi
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID v10; // rcx
  LONGLONG v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  LARGE_INTEGER v16; // r14
  int v17; // edi
  bool v18; // al
  unsigned int v19; // esi
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  PVOID v22; // r14
  __int64 v23; // rdx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v25; // ecx
  int *v26; // rcx
  PVOID *Object; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+28h] [rbp-50h]
  PVOID v30; // [rsp+80h] [rbp+8h]
  PVOID v31; // [rsp+90h] [rbp+18h] BYREF

  v30 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 0LL;
  do
  {
    v6 = 0;
    v7 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v5 = *v7;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v5 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v10 = gpsemDITHitTestWaiters;
      goto LABEL_15;
    }
    if ( v5 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v10 = gpsemRITBlockedOnDITWaiters;
LABEL_15:
      KeWaitForSingleObject(v10, UserRequest, 0, 0, 0LL);
      v6 = 1;
    }
  }
  while ( v6 == 1 );
  v15 = PsGetCurrentThreadWin32Thread(v9);
  if ( v15 )
  {
    v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
    v11 = 0x200000010000000LL;
    v17 = 2;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v12) = byte_1C00FEA58 - 1;
      v18 = (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
         && (qword_1C00FEA40 & 0x200000010000000LL) != 0
         && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48;
      if ( v18 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v12, (unsigned int)&AcquiredExclusiveUserCritEvent, v13, v16.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v16.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      v11 = 1000 * v16.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v13,
          0,
          1000 * v16.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
    }
    *(_QWORD *)(v15 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  else
  {
    v17 = 2;
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  v19 = 0;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12, v11, v13, v14, Object, v29);
LABEL_39:
    if ( CurrentProcessWin32Process )
    {
      v25 = *(_DWORD *)(CurrentProcessWin32Process + 776);
      if ( (v25 & 0x4000) == 0 )
        v17 = (v25 >> 13) & 1;
      v19 = 1;
      v26 = a2;
      if ( a2 >= W32UserProbeAddress )
        v26 = (int *)W32UserProbeAddress;
      *v26 = *v26;
      *a2 = v17;
    }
    goto LABEL_45;
  }
  v20 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &v31, 0LL);
  v22 = v31;
  v30 = v31;
  if ( v20 < 0 )
  {
    UserSetLastError(87LL, v21);
    goto LABEL_47;
  }
  if ( (unsigned int)PsGetProcessSessionId(v31) == gSessionId )
  {
    CurrentProcessWin32Process = PsGetProcessWin32Process(v22);
    goto LABEL_39;
  }
  UserSetLastError(87LL, v23);
LABEL_45:
  if ( v30 )
    ObfDereferenceObject(v30);
LABEL_47:
  UserSessionSwitchLeaveCrit();
  return v19;
}
