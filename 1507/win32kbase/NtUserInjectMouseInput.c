/*
 * XREFs of NtUserInjectMouseInput @ 0x1C00ACC30
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
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00C57E8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00C652C (RIMIDEInjectMouseFromMouseInputStruct.c)
 */

__int64 __fastcall NtUserInjectMouseInput(unsigned __int64 Src, unsigned int a2)
{
  __int64 v2; // r13
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  int v6; // esi
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID v12; // rcx
  LONGLONG v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  LARGE_INTEGER v18; // rsi
  bool v19; // al
  __int64 v20; // rdx
  __int64 CurrentProcessWin32Process; // r14
  __int64 v22; // rcx
  __int64 v23; // rcx
  size_t v24; // rbx
  void *v25; // rax
  void *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // ebx
  __int64 v40; // [rsp+20h] [rbp-48h]
  __int64 v41; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+20h] [rbp-48h]
  __int64 v43; // [rsp+28h] [rbp-40h]
  __int64 v44; // [rsp+28h] [rbp-40h]
  __int64 v45; // [rsp+28h] [rbp-40h]

  v2 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Src);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 0LL;
  do
  {
    v6 = 0;
    v7 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v5 = *v7;
    if ( IsCurrentProcessDwm(v9, v8)
      || (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v5 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v12 = gpsemDITHitTestWaiters;
      goto LABEL_15;
    }
    if ( v5 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v12 = gpsemRITBlockedOnDITWaiters;
LABEL_15:
      KeWaitForSingleObject(v12, UserRequest, 0, 0, 0LL);
      v6 = 1;
    }
  }
  while ( v6 == 1 );
  v17 = PsGetCurrentThreadWin32Thread(v11);
  if ( v17 )
  {
    v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v17 + 8));
    v13 = 0x200000010000000LL;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v14) = byte_1C00FEA58 - 1;
      v19 = (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
         && (qword_1C00FEA40 & 0x200000010000000LL) != 0
         && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48;
      if ( v19 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        v43 = gullUserCritAcquireToken;
        LODWORD(v40) = 0;
        Template_xqx(v14, &AcquiredExclusiveUserCritEvent, v15, v18.QuadPart);
      }
    }
    if ( v18.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      v13 = 1000 * v18.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        v43 = gullUserCritAcquireToken;
        LODWORD(v40) = 1000 * v18.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(gullUserCritAcquireToken, &AcquiredExclusiveUserCritTelemetryEvent, v15, 0LL);
      }
    }
    *(_QWORD *)(v17 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13, v15, v16, v40, v43);
  if ( (unsigned int)(v2 - 1) > 9 )
  {
    v23 = 87LL;
LABEL_49:
    v38 = 0;
    UserSetLastError(v23, v20);
  }
  else
  {
    if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
    {
      v23 = 5LL;
      goto LABEL_49;
    }
    v24 = 32 * v2;
    if ( 32 * v2 )
    {
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v22) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v24 + Src > (unsigned __int64)W32UserProbeAddress || v24 + Src < Src )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
    v25 = (void *)Win32AllocPoolWithQuota();
    v26 = v25;
    if ( !v25 )
      ExRaiseStatus(-1073741801);
    memmove(v25, (const void *)Src, v24);
    if ( *(_QWORD *)(CurrentProcessWin32Process + 864) == -1LL
      && (v31 = PsGetCurrentProcessWin32Process(v28, v27, v29, v30, v41, v44) + 864,
          v36 = PsGetCurrentProcessWin32Process(v33, v32, v34, v35, v42, v45),
          (int)RIMIDECreatePseudoMouseOrKeyboardDevice(0LL, v36 + 856, v31) < 0) )
    {
      v38 = 0;
      UserSetLastError(1359LL, v37);
    }
    else
    {
      v38 = RIMIDEInjectMouseFromMouseInputStruct(*(_QWORD *)(CurrentProcessWin32Process + 864), v26, (unsigned int)v2);
    }
    if ( v26 )
      Win32FreePool();
  }
  UserSessionSwitchLeaveCrit();
  return v38;
}
