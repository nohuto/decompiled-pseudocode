/*
 * XREFs of VidSchiCleanupQueuedCommand @ 0x1C008CD18
 * Callers:
 *     VidSchFlushAdapter @ 0x1C008B2F0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiProcessPrimariesTerminationList @ 0x1C000EA40 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0020D60 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiSelectContext @ 0x1C0021C64 (VidSchiSelectContext.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C0061A5C (VidSchiWaitForEmptyHwQueue.c)
 */

void __fastcall VidSchiCleanupQueuedCommand(struct _VIDSCH_GLOBAL *a1, int a2)
{
  struct _ERESOURCE *v2; // rdi
  __int64 v5; // rax
  char v6; // al

  v2 = (struct _ERESOURCE *)((char *)a1 + 992);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 992), 1u);
  *((_BYTE *)a1 + 2468) ^= ((a2 != 0) ^ *((_BYTE *)a1 + 2468)) & 1;
  VidSchiProcessPrimariesTerminationList((__int64)a1);
  while ( 1 )
  {
    v5 = VidSchiSelectContext((KSPIN_LOCK *)a1, 0);
    if ( !v5 )
      break;
    VidSchiDrainContextFromWorkerThread(v5);
  }
  v6 = *((_BYTE *)a1 + 2468);
  if ( (v6 & 2) == 0 )
    *((_BYTE *)a1 + 2468) = v6 & 0xFE;
  if ( !a2 )
    VidSchiWaitForEmptyHwQueue((__int64)a1);
  ExReleaseResourceLite(v2);
}
