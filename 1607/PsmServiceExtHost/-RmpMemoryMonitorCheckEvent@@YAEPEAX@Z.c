/*
 * XREFs of ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x1800326C0
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001ED60 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpMemoryMonitorCheckEvent(void *a1)
{
  return WaitForSingleObjectEx(a1, 0, 0) == 0;
}
