/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x1C006A900
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C006A508 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     WmsgpSendPSPMessage @ 0x1C0125148 (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall xxxSendWinlogonPowerMessage(__int64 a1, __int64 a2, __int128 *a3)
{
  unsigned int v4; // edi
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID v14; // rcx
  __int64 v15; // rbp
  int v16; // ecx
  LARGE_INTEGER v17; // rsi
  int v18; // r8d
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  __int128 v20; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  if ( (_BYTE)a1 )
  {
    UserSessionSwitchLeaveCrit();
    v19 = *a3;
    v7 = WmsgpSendPSPMessage(v6, v4, &v19, &v21);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v10 = 0LL;
    while ( 1 )
    {
      v11 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v11 )
        v10 = *v11;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v10 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v14 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v10 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v14 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v14, UserRequest, 0, 0, 0LL);
    }
    v15 = PsGetCurrentThreadWin32Thread(v13);
    if ( v15 )
    {
      v17 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v16) = byte_1C00FEA58 - 1;
        Template_xqx(v16, (unsigned int)&AcquiredExclusiveUserCritEvent, v18, v17.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v17.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v18,
          0,
          1000 * v17.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v15 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v10;
    gbValidateHandleForIL = 1;
  }
  else
  {
    v20 = *a3;
    v7 = WmsgpSendPSPMessage(a1, a2, &v20, &v21);
  }
  if ( v7 >= 0 )
    return v21;
  return (unsigned int)v7;
}
