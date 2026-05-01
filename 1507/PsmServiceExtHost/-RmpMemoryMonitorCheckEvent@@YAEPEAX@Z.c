/*
 * XREFs of ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x18003C970
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180022DE0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18003DB08 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpMemoryMonitorCheckEvent(void *a1)
{
  return WaitForSingleObjectEx(a1, 0, 0) == 0;
}
