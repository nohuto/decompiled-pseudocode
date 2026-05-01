/*
 * XREFs of ?RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18001AD40
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x18001AE34 (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001AE48 (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorInstanceOnSystemStateChanged(struct _RM_PARTITION *a1, unsigned int *a2)
{
  char *v2; // rsi
  __int64 v3; // rdx
  int IdealTimerState; // edi
  const struct _TlgProvider_t *v5; // rcx
  unsigned int v6; // ebx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v11; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v14; // [rsp+60h] [rbp-48h]
  int v15; // [rsp+68h] [rbp-40h]
  int v16; // [rsp+6Ch] [rbp-3Ch]
  int *v17; // [rsp+70h] [rbp-38h]
  int v18; // [rsp+78h] [rbp-30h]
  int v19; // [rsp+7Ch] [rbp-2Ch]

  v2 = (char *)a1 + 40;
  IdealTimerState = RmpMemoryMonitorGetIdealTimerState(*a2);
  v6 = RmpMemoryMonitorGetIdealTimerState(*(unsigned int *)(v3 + 4));
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v5, 1uLL) )
  {
    v16 = 0;
    v19 = 0;
    v14 = &v11;
    v17 = (int *)&v12;
    v11 = IdealTimerState;
    v15 = 4;
    v12 = v6;
    v18 = 4;
    TlgWrite(v7, &unk_180043D33, v8, v9, 4u, &pData);
  }
  if ( IdealTimerState )
  {
    if ( !v6 )
    {
      TpSetTimer(*((_QWORD *)v2 + 8), 0LL, 0LL, 0LL);
      TpWaitForTimer(*((_QWORD *)v2 + 8), 1LL);
      return 0LL;
    }
  }
  else if ( !v6 )
  {
    return 0LL;
  }
  if ( v6 != IdealTimerState )
    RmpMemoryMonitorSetTimer(v2, v6, 4LL);
  return 0LL;
}
