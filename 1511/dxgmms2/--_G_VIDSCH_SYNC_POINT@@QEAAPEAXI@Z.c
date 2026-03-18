/*
 * XREFs of ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0014708
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C00046F0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00056C0 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E980 (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0012654 (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_D.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 */

_VIDSCH_SYNC_POINT *__fastcall _VIDSCH_SYNC_POINT::`scalar deleting destructor'(_VIDSCH_SYNC_POINT *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 3);
  if ( v2 != (char *)this + 32 && v2 )
    ExFreePoolWithTag(v2, 0);
  operator delete(this);
  return this;
}
