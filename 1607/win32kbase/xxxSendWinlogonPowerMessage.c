/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x1C0086970
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0085BC8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0086628 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     WmsgpSendPSPMessage @ 0x1C01424D8 (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall xxxSendWinlogonPowerMessage(__int64 a1, __int64 a2, __int128 *a3)
{
  unsigned int v4; // edi
  int v5; // ebx
  __int64 v7; // rcx
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
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    v16 = *a3;
    v5 = WmsgpSendPSPMessage(v7, v4, &v16, &v18);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v12 = PsGetCurrentThreadWin32Thread(v11);
    if ( v12 )
    {
      v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v13) = byte_1C0118B28 - 1;
        Template_xqx(v13, (unsigned int)&AcquiredExclusiveUserCritEvent, v15, v14.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v14.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
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
    v5 = WmsgpSendPSPMessage(a1, a2, &v17, &v18);
  }
  if ( v5 >= 0 )
    return v18;
  return (unsigned int)v5;
}
