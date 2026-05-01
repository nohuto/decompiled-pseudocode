/*
 * XREFs of RmpTelemetryContextStart @ 0x18001AF74
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001AE98 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x18001ADA0 (-RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z.c)
 */

__int64 __fastcall RmpTelemetryContextStart(struct _RM_SERVICE_GLOBALS *a1)
{
  int v2; // ebx
  DWORD TickCount; // eax

  RtlEnterCriticalSection(&RmpGlobalLock);
  v2 = (*((_BYTE *)a1 + 1920) & 1) != 0 ? 0x2932E0 : 0;
  *((_DWORD *)a1 + 474) = GetTickCount();
  TickCount = GetTickCount();
  RmpTelemetrySetTimer(a1, v2 + 900000, TickCount);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return 0LL;
}
