/*
 * XREFs of RmpMemoryMonitorOnSystemStateChanged @ 0x18001F030
 * Callers:
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18001F120 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x18001F104 (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@@Z @ 0x18001F3C0 (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

char __fastcall RmpMemoryMonitorOnSystemStateChanged(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r8d
  int IdealTimerState; // edi
  unsigned int v5; // eax
  unsigned int v6; // ebx
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned int v11; // [rsp+30h] [rbp-19h] BYREF
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
  if ( (unsigned int)dword_180071060 > 4 )
  {
    LOBYTE(v5) = TlgKeywordOn((TraceLoggingHProvider)4, 1uLL);
    if ( (_BYTE)v5 )
    {
      v16 = 0;
      v19 = 0;
      v14 = &v12;
      v17 = (int *)&v11;
      v12 = IdealTimerState;
      v15 = (int)cData;
      v11 = v6;
      v18 = (int)cData;
      LOBYTE(v5) = TlgWrite(cData, &unk_180063782, v8, v9, (UINT32)cData, &pData);
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
