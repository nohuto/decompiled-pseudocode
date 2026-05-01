/*
 * XREFs of RmpActivityHostQueryCategory @ 0x180005F24
 * Callers:
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180005B4C (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForTaskSwitchExemption@@YAHPEBX0@Z @ 0x18003CB10 (-RmpMemoryMonitorCompareActivityHostsForTaskSwitchExemption@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x18003D794 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     RmpActivityHostStateDigestIsRunnable @ 0x180005FB0 (RmpActivityHostStateDigestIsRunnable.c)
 *     RmpActivityHostGetStateDigest @ 0x18000CD68 (RmpActivityHostGetStateDigest.c)
 */

__int64 __fastcall RmpActivityHostQueryCategory(__int64 a1)
{
  unsigned int StateDigest; // eax
  int IsRunnable; // eax
  int v4; // ecx
  unsigned int v5; // edx
  bool v6; // zf
  int v8; // ecx

  StateDigest = RmpActivityHostGetStateDigest();
  IsRunnable = RmpActivityHostStateDigestIsRunnable(StateDigest);
  v4 = *(_DWORD *)(a1 + 40);
  v5 = 0;
  if ( IsRunnable )
    v5 = 2;
  if ( v4 )
  {
    if ( v4 != 1 )
      return v5;
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 600) + 1408LL);
    if ( v8 <= 36 )
    {
      if ( v8 >= 34 || !v8 || v8 > 3 && (v8 <= 7 || v8 > 10 && v8 <= 13) )
        goto LABEL_6;
      return v5;
    }
    if ( v8 < 39 )
      return v5;
    if ( v8 <= 41 )
      goto LABEL_6;
    v6 = v8 == 52;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 584) == 2;
  }
  if ( v6 )
LABEL_6:
    v5 |= 1u;
  return v5;
}
