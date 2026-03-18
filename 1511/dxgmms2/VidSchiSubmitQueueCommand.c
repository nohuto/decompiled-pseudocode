/*
 * XREFs of VidSchiSubmitQueueCommand @ 0x1C008AAD0
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0020D60 (VidSchiDrainContextFromWorkerThread.c)
 * Callees:
 *     VidSchiSubmitSoftwareCommand @ 0x1C0012E38 (VidSchiSubmitSoftwareCommand.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiSubmitQueueCommand(LARGE_INTEGER *this)
{
  LARGE_INTEGER v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  DWORD LowPart; // eax
  __int64 v6; // rdx
  __int64 v7; // r8

  v1 = this[10];
  v3 = *(_QWORD *)(v1.QuadPart + 96);
  v4 = *(_QWORD *)(*(_QWORD *)(v1.QuadPart + 104) + 32LL);
  LowPart = this[6].LowPart;
  if ( LowPart )
  {
    switch ( LowPart )
    {
      case 8u:
        VidSchiSubmitPagingCommand(this);
        break;
      case 3u:
        VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_QUEUE_PACKET *)this);
        break;
      case 4u:
        VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)this);
        break;
      case 5u:
        VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)this);
        break;
      case 6u:
        ((void (__fastcall *)(_QWORD, _QWORD))this[35].QuadPart)((LARGE_INTEGER)this[36].QuadPart, v4);
        VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)this, v6, v7);
        break;
      case 7u:
        VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)this);
        break;
    }
  }
  else
  {
    if ( (this[8].LowPart & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 2704));
      *(_QWORD *)(v4 + 360) |= 1LL << *(_WORD *)(v3 + 4);
    }
    if ( (this[32].LowPart & 0x8000000) != 0 )
      VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)this);
    else
      VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)this);
  }
}
