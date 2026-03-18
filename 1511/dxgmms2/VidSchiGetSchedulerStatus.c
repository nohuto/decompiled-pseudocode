/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C000AD90
 * Callers:
 *     VidSchiWaitForSchedulerEvents @ 0x1C003A290 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0061F4C (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C008B2F0 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C008C0D0 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 224);
}
