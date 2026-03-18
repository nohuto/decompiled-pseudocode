/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1C00ABD50
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
 *     RIMIDE_InitializeDeviceInjection @ 0x1C00C790C (RIMIDE_InitializeDeviceInjection.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        __int64 a1,
        unsigned __int16 a2,
        size_t a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // r13
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v9; // rdi
  int v10; // esi
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID v16; // rcx
  __int64 v17; // r14
  LARGE_INTEGER v18; // rcx
  LARGE_INTEGER v19; // rsi
  LARGE_INTEGER v20; // r8
  char v21; // al
  void *v22; // rsi
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  size_t v27; // rdi
  unsigned __int64 v28; // rdx
  __int64 v29; // r14
  unsigned int v30; // edi
  const void *v31; // r14
  void *v32; // rax
  _QWORD *v33; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-88h]
  void *v36; // [rsp+58h] [rbp-50h]
  _QWORD v37[9]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int16 v38; // [rsp+B0h] [rbp+8h]

  v38 = a1;
  v7 = a4;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = 0LL;
  do
  {
    v10 = 0;
    v11 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v11 )
      v9 = *v11;
    if ( IsCurrentProcessDwm(v13, v12)
      || (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v9 == gptiRit )
        continue;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v16 = gpsemDITHitTestWaiters;
      goto LABEL_15;
    }
    if ( v9 != gptiRit )
    {
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v16 = gpsemRITBlockedOnDITWaiters;
LABEL_15:
      KeWaitForSingleObject(v16, UserRequest, 0, 0, 0LL);
      v10 = 1;
    }
  }
  while ( v10 == 1 );
  v17 = PsGetCurrentThreadWin32Thread(v15);
  if ( v17 )
  {
    v19 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v17 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C00FEA58 - 1) <= 2u
        || (qword_1C00FEA40 & 0x200000010000000LL) == 0
        || (v21 = 1, (qword_1C00FEA48 & 0x200000010000000LL) != qword_1C00FEA48) )
      {
        v21 = 0;
      }
      if ( v21 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LODWORD(Timeout) = 0;
        LOBYTE(v18.LowPart) = byte_1C00FEA58 - 1;
        Template_xqx(
          v18.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v20.QuadPart,
          v19.QuadPart,
          Timeout,
          gullUserCritAcquireToken);
      }
    }
    if ( v19.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(Timeout) = 1000 * v19.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v20.QuadPart,
        0LL,
        Timeout,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v17 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  v22 = 0LL;
  v23 = 0LL;
  v37[0] = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v26 = 5LL;
    goto LABEL_62;
  }
  v27 = 32 * v7;
  if ( (unsigned __int64)(32 * v7) <= 0xFFFFFFFF && (_DWORD)v7 && (unsigned int)(a6 - 1) <= 2 )
  {
    v28 = a5;
    if ( !a5 )
      goto LABEL_46;
    if ( (unsigned __int64)(unsigned __int16)a5 < *((_QWORD *)gpsi + 1) )
    {
      v29 = qword_1C01003E8 + (unsigned int)(unsigned __int16)a5 * dword_1C01003F0;
      v28 = a5 >> 16;
      if ( (WORD1(a5) == *(_WORD *)(v29 + 18)
         || WORD1(a5) == 0xFFFF
         || !WORD1(a5) && PsGetCurrentProcessWow64Process(v25))
        && (*(_BYTE *)(v29 + 17) & 1) == 0
        && *(_BYTE *)(v29 + 16) == 12 )
      {
        v23 = *(_QWORD *)v29;
      }
    }
    if ( v23 )
    {
LABEL_46:
      if ( v27 )
      {
        v31 = (const void *)a3;
        if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v25) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v27 + a3 > (unsigned __int64)W32UserProbeAddress || v27 + a3 < a3 )
          *(_BYTE *)W32UserProbeAddress = 0;
      }
      else
      {
        v31 = (const void *)a3;
      }
      v32 = (void *)Win32AllocPoolWithQuota();
      v22 = v32;
      v36 = v32;
      if ( !v32 )
        ExRaiseStatus(-1073741801);
      memmove(v32, v31, v27);
      v30 = RIMIDE_InitializeDeviceInjection(v38, a2, (_DWORD)v22, a4, v23, a6, (__int64)v37);
      if ( v30 )
      {
        v33 = a7;
        if ( a7 >= W32UserProbeAddress )
          v33 = W32UserProbeAddress;
        *v33 = *v33;
        *a7 = v37[0];
        v22 = v36;
      }
    }
    else
    {
      UserSetLastError(1461LL, v28);
      v30 = 0;
    }
    if ( v22 )
      Win32FreePool();
  }
  else
  {
    v26 = 87LL;
LABEL_62:
    v30 = 0;
    UserSetLastError(v26, v24);
  }
  UserSessionSwitchLeaveCrit();
  return v30;
}
