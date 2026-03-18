/*
 * XREFs of NtUserInitializePointerDeviceInjection @ 0x1C00AC1B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00C4D1C (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C00C7A04 (RIMIDE_InitializePointerDeviceInjection.c)
 */

__int64 __fastcall NtUserInitializePointerDeviceInjection(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        _QWORD *a5)
{
  unsigned int v8; // r12d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  int v11; // edi
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID v17; // rcx
  __int64 v18; // r14
  LARGE_INTEGER v19; // rcx
  LARGE_INTEGER v20; // rdi
  LARGE_INTEGER v21; // r8
  bool v22; // al
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int64 v29; // rsi
  _QWORD *v30; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  _QWORD v33[3]; // [rsp+48h] [rbp-30h] BYREF

  v8 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v10 = 0LL;
  do
  {
    v11 = 0;
    v12 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v10 = *v12;
    if ( IsCurrentProcessDwm(v14, v13)
      || (PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v10 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v17 = gpsemDITHitTestWaiters;
      goto LABEL_15;
    }
    if ( v10 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v17 = gpsemRITBlockedOnDITWaiters;
LABEL_15:
      KeWaitForSingleObject(v17, UserRequest, 0, 0, 0LL);
      v11 = 1;
    }
  }
  while ( v11 == 1 );
  v18 = PsGetCurrentThreadWin32Thread(v16);
  if ( v18 )
  {
    v20 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v18 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      v22 = (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
         && (qword_1C00FEA40 & 0x200000010000000LL) != 0
         && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48;
      if ( v22 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LODWORD(Timeout) = 0;
        LOBYTE(v19.LowPart) = byte_1C00FEA58 - 1;
        Template_xqx(
          v19.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v21.QuadPart,
          v20.QuadPart,
          Timeout,
          gullUserCritAcquireToken,
          0);
      }
    }
    if ( v20.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(Timeout) = 1000 * v20.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v21.QuadPart,
        0LL,
        Timeout,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v18 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  v23 = 0LL;
  v33[0] = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v26 = 5LL;
    goto LABEL_52;
  }
  if ( a2 - 1 > 0xFF || a4 - 1 > 2 )
  {
    v26 = 87LL;
LABEL_52:
    UserSetLastError(v26, v24);
  }
  else
  {
    if ( !a3 )
      goto LABEL_46;
    v27 = (unsigned __int16)a3;
    if ( (unsigned __int64)(unsigned __int16)a3 < *((_QWORD *)gpsi + 1) )
    {
      v28 = qword_1C01003E8 + (unsigned int)(unsigned __int16)a3 * dword_1C01003F0;
      v29 = a3 >> 16;
      if ( ((_WORD)v29 == *(_WORD *)(v28 + 18)
         || (_WORD)v29 == 0xFFFF
         || !(_WORD)v29 && PsGetCurrentProcessWow64Process(v25))
        && (*(_BYTE *)(v28 + 17) & 1) == 0
        && *(_BYTE *)(v28 + 16) == 12 )
      {
        v23 = *(_QWORD *)v28;
      }
    }
    if ( v23 )
    {
LABEL_46:
      LODWORD(v23) = RIMIDE_InitializePointerDeviceInjection(v8, a2, v23, a4, v33);
      if ( (_DWORD)v23 )
      {
        v30 = a5;
        if ( a5 >= W32UserProbeAddress )
          v30 = W32UserProbeAddress;
        *v30 = *v30;
        *a5 = v33[0];
      }
    }
    else
    {
      UserSetLastError(1461LL, v27);
      LODWORD(v23) = 0;
    }
  }
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v23;
}
