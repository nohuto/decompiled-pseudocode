/*
 * XREFs of VidSchiCleanupQueuedCommand @ 0x1C007AA48
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00780D0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C001640C (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C0019488 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiSelectContext @ 0x1C001A140 (VidSchiSelectContext.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00779E4 (VidSchiWaitForEmptyHwQueue.c)
 */

void __fastcall VidSchiCleanupQueuedCommand(struct _VIDSCH_GLOBAL *a1, int a2)
{
  struct _ERESOURCE *v2; // rdi
  __int64 v5; // rax
  char v6; // al

  v2 = (struct _ERESOURCE *)((char *)a1 + 984);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 984), 1u);
  *((_BYTE *)a1 + 2508) ^= ((a2 != 0) ^ *((_BYTE *)a1 + 2508)) & 1;
  VidSchiProcessPrimariesTerminationList((__int64)a1);
  while ( 1 )
  {
    v5 = VidSchiSelectContext((KSPIN_LOCK *)a1, 0);
    if ( !v5 )
      break;
    VidSchiDrainContextFromWorkerThread(v5);
  }
  v6 = *((_BYTE *)a1 + 2508);
  if ( (v6 & 2) == 0 )
    *((_BYTE *)a1 + 2508) = v6 & 0xFE;
  if ( !a2 )
    VidSchiWaitForEmptyHwQueue(a1);
  ExReleaseResourceLite(v2);
}
