/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x1C00855A0
 * Callers:
 *     xxxUserPowerStateCalloutWorker @ 0x1C00846A4 (xxxUserPowerStateCalloutWorker.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C0085264 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     WmsgpSendPSPMessage @ 0x1C01284D8 (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall xxxSendWinlogonPowerMessage(__int64 a1, __int64 a2, __int128 *a3)
{
  unsigned int v4; // edi
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // ecx
  LARGE_INTEGER v14; // rdi
  int v15; // r8d
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int128 v17; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  if ( (_BYTE)a1 )
  {
    UserSessionSwitchLeaveCrit(a1, a2);
    v16 = *a3;
    v7 = WmsgpSendPSPMessage(v6, v4, &v16, &v18);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v12 = PsGetCurrentThreadWin32Thread(v11);
    if ( v12 )
    {
      v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v13) = byte_1C01020C8 - 1;
        Template_xqx(v13, (unsigned int)&AcquiredExclusiveUserCritEvent, v15, v14.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v14.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v15,
          0,
          1000 * v14.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v10;
    gbValidateHandleForIL = 1;
  }
  else
  {
    v17 = *a3;
    v7 = WmsgpSendPSPMessage(a1, a2, &v17, &v18);
  }
  if ( v7 >= 0 )
    return v18;
  return (unsigned int)v7;
}
