/*
 * XREFs of RmpMemoryMonitorOnSystemStateChanged @ 0x180005934
 * Callers:
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x1800057C0 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@@Z @ 0x18000577C (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x1800059D0 (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

char __fastcall RmpMemoryMonitorOnSystemStateChanged(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r8d
  int IdealTimerState; // edi
  int v5; // eax
  int v6; // ebx
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v11; // [rsp+30h] [rbp-19h] BYREF
  int v12; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v14; // [rsp+60h] [rbp+17h]
  int v15; // [rsp+68h] [rbp+1Fh]
  int v16; // [rsp+6Ch] [rbp+23h]
  int *v17; // [rsp+70h] [rbp+27h]
  int v18; // [rsp+78h] [rbp+2Fh]
  int v19; // [rsp+7Ch] [rbp+33h]

  IdealTimerState = RmpMemoryMonitorGetIdealTimerState(a2);
  v5 = RmpMemoryMonitorGetIdealTimerState(v3);
  v6 = v5;
  if ( (unsigned int)dword_1800690A0 > 4 )
  {
    LOBYTE(v5) = TlgKeywordOn((TraceLoggingHProvider)4, 1uLL);
    if ( (_BYTE)v5 )
    {
      v16 = 0;
      v19 = 0;
      v14 = &v12;
      v17 = &v11;
      v12 = IdealTimerState;
      v15 = (int)cData;
      v11 = v6;
      v18 = (int)cData;
      LOBYTE(v5) = TlgWrite(cData, &unk_18005BD22, v8, v9, (UINT32)cData, &pData);
    }
  }
  if ( IdealTimerState )
  {
    if ( !v6 )
    {
      TpSetTimer(*(_QWORD *)(a1 + 56), 0LL, 0LL, 0LL);
      LOBYTE(v5) = TpWaitForTimer(*(_QWORD *)(a1 + 56), 1LL);
      return v5;
    }
  }
  else if ( !v6 )
  {
    return v5;
  }
  if ( v6 != IdealTimerState )
    LOBYTE(v5) = RmpMemoryMonitorSetTimer(a1, v6);
  return v5;
}
