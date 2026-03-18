/*
 * XREFs of VidSchiCleanupQueuedCommand @ 0x1C00A2734
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00A0BE0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0023E58 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C0024940 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiSelectContext @ 0x1C00255D4 (VidSchiSelectContext.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C0068B54 (VidSchiWaitForEmptyHwQueue.c)
 */

void __fastcall VidSchiCleanupQueuedCommand(struct _VIDSCH_GLOBAL *a1, int a2)
{
  struct _ERESOURCE *v2; // rdi
  __int64 v5; // rax
  char v6; // al

  v2 = (struct _ERESOURCE *)((char *)a1 + 1024);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1024), 1u);
  *((_BYTE *)a1 + 2828) ^= ((a2 != 0) ^ *((_BYTE *)a1 + 2828)) & 1;
  VidSchiProcessPrimariesTerminationList((__int64)a1);
  while ( 1 )
  {
    v5 = VidSchiSelectContext((KSPIN_LOCK *)a1, 0);
    if ( !v5 )
      break;
    VidSchiDrainContextFromWorkerThread(v5);
  }
  v6 = *((_BYTE *)a1 + 2828);
  if ( (v6 & 2) == 0 )
    *((_BYTE *)a1 + 2828) = v6 & 0xFE;
  if ( !a2 )
    VidSchiWaitForEmptyHwQueue((__int64)a1);
  ExReleaseResourceLite(v2);
}
