/*
 * XREFs of VidSchiProcessCompletedQueuePacket @ 0x1C0001858
 * Callers:
 *     VidSchiSubmitSoftwareCommand @ 0x1C00011E4 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0003470 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C001A630 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x1C001AED0 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitQueueCommand @ 0x1C002E270 (VidSchiSubmitQueueCommand.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00765D0 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0002690 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacket(struct _VIDSCH_QUEUE_PACKET *a1)
{
  struct _VIDSCH_QUEUE_PACKET *result; // rax

  result = a1;
  do
    result = VidSchiProcessCompletedQueuePacketInternal(result);
  while ( result );
  return result;
}
