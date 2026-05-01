/*
 * XREFs of ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180003A50
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180003B2C (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

void __fastcall RmpTelemetryTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_SERVICE_GLOBALS *a2,
        struct _TP_TIMER *a3)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpTelemetryLogGlobalState(a2);
  *((_DWORD *)a2 + 474) = GetTickCount();
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
