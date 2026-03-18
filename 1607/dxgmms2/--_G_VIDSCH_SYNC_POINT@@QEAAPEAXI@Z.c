/*
 * XREFs of ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0011ED8
 * Callers:
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C00017DC (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_D.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003BA0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0004730 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0005A50 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000DF5C (VidSchiCheckPendingDeviceCommand.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
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
