/*
 * XREFs of RmpMemoryMonitorOnSystemStateChanged @ 0x18001AB20
 * Callers:
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18001AC20 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x18001AC04 (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001ADF8 (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

char __fastcall RmpMemoryMonitorOnSystemStateChanged(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r8d
  int IdealTimerState; // edi
  unsigned int v5; // eax
  const struct _TlgProvider_t *v6; // rcx
  unsigned int v7; // ebx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v12; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v15; // [rsp+60h] [rbp+17h]
  int v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+6Ch] [rbp+23h]
  int *v18; // [rsp+70h] [rbp+27h]
  int v19; // [rsp+78h] [rbp+2Fh]
  int v20; // [rsp+7Ch] [rbp+33h]

  IdealTimerState = RmpMemoryMonitorGetIdealTimerState(a2);
  v5 = RmpMemoryMonitorGetIdealTimerState(v3);
  v7 = v5;
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    LOBYTE(v5) = TlgKeywordOn(v6, 1uLL);
    if ( (_BYTE)v5 )
    {
      v17 = 0;
      v20 = 0;
      v15 = &v12;
      v18 = (int *)&v13;
      v12 = IdealTimerState;
      v16 = 4;
      v13 = v7;
      v19 = 4;
      LOBYTE(v5) = TlgWrite(v8, &unk_180041DED, v9, v10, 4u, &pData);
    }
  }
  if ( IdealTimerState )
  {
    if ( !v7 )
    {
      TpSetTimer(*(_QWORD *)(a1 + 384), 0LL, 0LL, 0LL);
      LOBYTE(v5) = TpWaitForTimer(*(_QWORD *)(a1 + 384), 1LL);
      return v5;
    }
  }
  else if ( !v7 )
  {
    return v5;
  }
  if ( v7 != IdealTimerState )
    LOBYTE(v5) = RmpMemoryMonitorSetTimer(a1, v7, 4LL);
  return v5;
}
