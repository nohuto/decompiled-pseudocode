/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C0004BA0
 * Callers:
 *     VidSchiWaitForSchedulerEvents @ 0x1C0032900 (VidSchiWaitForSchedulerEvents.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C003B4F8 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0040E18 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00780D0 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C0079880 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 216);
}
