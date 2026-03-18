/*
 * XREFs of VidSchiProcessCompletedQueuePacket @ 0x1C0001AB0
 * Callers:
 *     VidSchiSubmitSoftwareCommand @ 0x1C0001A3C (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002180 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitDeviceCommand @ 0x1C0041070 (VidSchiSubmitDeviceCommand.c)
 *     VidSchiDiscardQueuePacket @ 0x1C009FC70 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
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
