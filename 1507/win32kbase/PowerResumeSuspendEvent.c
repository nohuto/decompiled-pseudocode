/*
 * XREFs of PowerResumeSuspendEvent @ 0x1C006E920
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0009738 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall PowerResumeSuspendEvent(char a1, char a2, char a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID v10; // rcx
  __int64 v11; // rsi
  int v12; // ecx
  LARGE_INTEGER v13; // rdi
  int v14; // r8d
  __int64 result; // rax
  int InputBuffer; // [rsp+58h] [rbp+20h] BYREF
  char v17; // [rsp+5Ch] [rbp+24h]
  char v18; // [rsp+5Dh] [rbp+25h]
  char v19; // [rsp+5Eh] [rbp+26h]

  InputBuffer = gSessionId;
  v17 = a1;
  v18 = a2;
  v19 = a3;
  UserSessionSwitchLeaveCrit();
  v3 = ZwPowerInformation(ProcessorStateHandler|0x40, &InputBuffer, 8u, 0LL, 0);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( gbRITBlockedOnDIT )
    {
      if ( v6 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v10 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v6 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v10 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v10, UserRequest, 0, 0, 0LL);
  }
  v11 = PsGetCurrentThreadWin32Thread(v9);
  if ( v11 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v12) = byte_1C00FEA58 - 1;
      Template_xqx(v12, (unsigned int)&AcquiredExclusiveUserCritEvent, v14, v13.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v13.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v14,
        0,
        1000 * v13.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  result = v3;
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  return result;
}
