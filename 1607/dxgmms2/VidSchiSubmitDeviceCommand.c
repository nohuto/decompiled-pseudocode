/*
 * XREFs of VidSchiSubmitDeviceCommand @ 0x1C0041070
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00A0314 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiSubmitDeviceCommand(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 304);
  if ( v1 == 5 || v1 == 6 )
    (*(void (__fastcall **)(__int64))(a1 + 288))(a1 + 312);
  else
    (*(void (__fastcall **)(_QWORD))(a1 + 288))(*(_QWORD *)(a1 + 312));
  return VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
}
