/*
 * XREFs of VidSchiSubmitQueueCommand @ 0x1C002E270
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C001640C (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiRun_PriorityTable @ 0x1C00448C4 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0001858 (VidSchiProcessCompletedQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C001A630 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x1C001AED0 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C002E320 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0076E90 (VidSchiSubmitPagingCommand.c)
 */

void __fastcall VidSchiSubmitQueueCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // eax

  v1 = *((_QWORD *)a1 + 10);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 104) + 32LL);
  v5 = *((_DWORD *)a1 + 12);
  if ( v5 )
  {
    switch ( v5 )
    {
      case 8:
        VidSchiSubmitPagingCommand(a1);
        break;
      case 3:
        VidSchiSubmitMmIoFlipCommand((__int64)a1);
        break;
      case 4:
        VidSchiSubmitWaitCommand(a1);
        break;
      case 5:
        VidSchiSubmitSignalCommand((__int64)a1);
        break;
      case 6:
        (*((void (__fastcall **)(_QWORD, __int64))a1 + 35))(*((_QWORD *)a1 + 36), v4);
        VidSchiProcessCompletedQueuePacket(a1);
        break;
      case 7:
        VidSchiSubmitSoftwareCommand((__int64)a1);
        break;
    }
  }
  else
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 2832));
      *(_QWORD *)(v4 + 352) |= 1LL << *(_WORD *)(v3 + 4);
    }
    if ( (*((_DWORD *)a1 + 64) & 0x10000000) != 0 )
      VidSchiSubmitRenderVirtualCommand(a1);
    else
      VidSchiSubmitRenderCommand(a1);
  }
}
