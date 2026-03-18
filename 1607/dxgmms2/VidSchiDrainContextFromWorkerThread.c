/*
 * XREFs of VidSchiDrainContextFromWorkerThread @ 0x1C0023E58
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C00A2734 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiProcessPrimariesTerminationList @ 0x1C0024940 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C0024A48 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00A0314 (VidSchiSubmitQueueCommand.c)
 */

void __fastcall VidSchiDrainContextFromWorkerThread(__int64 a1)
{
  __int64 i; // rdi
  _VIDSCH_QUEUE_PACKET *v3; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL); ; VidSchiProcessPrimariesTerminationList(i) )
  {
    v3 = (_VIDSCH_QUEUE_PACKET *)VidSchiReadCommandFromContextQueue(a1, 0LL, &v4);
    if ( !v3 )
      break;
    VidSchiSubmitQueueCommand(v3);
  }
  VidSchiSetTransferContextRunningTime(a1, 0LL, 0);
}
