/*
 * XREFs of VidSchiDrainContextFromWorkerThread @ 0x1C001640C
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C007AA48 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiProcessPrimariesTerminationList @ 0x1C0019488 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C001958C (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiSubmitQueueCommand @ 0x1C002E270 (VidSchiSubmitQueueCommand.c)
 */

void __fastcall VidSchiDrainContextFromWorkerThread(__int64 a1)
{
  __int64 i; // rdi
  struct _VIDSCH_QUEUE_PACKET *v3; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL); ; VidSchiProcessPrimariesTerminationList(i) )
  {
    v3 = (struct _VIDSCH_QUEUE_PACKET *)VidSchiReadCommandFromContextQueue(a1, 0LL, &v4);
    if ( !v3 )
      break;
    VidSchiSubmitQueueCommand(v3);
  }
  VidSchiSetTransferContextRunningTime(a1, 0LL, 0);
}
