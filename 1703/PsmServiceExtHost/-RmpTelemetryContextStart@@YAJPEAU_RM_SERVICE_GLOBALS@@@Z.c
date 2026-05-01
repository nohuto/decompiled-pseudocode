/*
 * XREFs of ?RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001D260
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001D198 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x18001BF38 (-RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z.c)
 */

__int64 __fastcall RmpTelemetryContextStart(struct _RM_SERVICE_GLOBALS *a1)
{
  int v2; // ebx
  DWORD TickCount; // eax

  RtlEnterCriticalSection(&RmpGlobalLock);
  v2 = *((_DWORD *)a1 + 156);
  *((_DWORD *)a1 + 142) = GetTickCount();
  TickCount = GetTickCount();
  RmpTelemetrySetTimer(a1, (v2 & 1) != 0 ? 3600000 : 900000, TickCount);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return 0LL;
}
