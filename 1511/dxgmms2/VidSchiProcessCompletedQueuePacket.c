/*
 * XREFs of VidSchiProcessCompletedQueuePacket @ 0x1C0012EAC
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C00025A0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C0012E38 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiRun_PriorityTable @ 0x1C006A810 (VidSchiRun_PriorityTable.c)
 *     VidSchiDiscardQueuePacket @ 0x1C008A4A8 (VidSchiDiscardQueuePacket.c)
 *     VidSchiSubmitQueueCommand @ 0x1C008AAD0 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacket(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  struct _VIDSCH_QUEUE_PACKET *result; // rax

  result = a1;
  do
    result = VidSchiProcessCompletedQueuePacketInternal(result, a2, a3);
  while ( result );
  return result;
}
