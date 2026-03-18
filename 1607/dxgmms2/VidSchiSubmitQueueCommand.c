/*
 * XREFs of VidSchiSubmitQueueCommand @ 0x1C00A0314
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0023E58 (VidSchiDrainContextFromWorkerThread.c)
 * Callees:
 *     VidSchiSubmitSoftwareCommand @ 0x1C0001A3C (VidSchiSubmitSoftwareCommand.c)
 */

void __fastcall VidSchiSubmitQueueCommand(LARGE_INTEGER *this)
{
  LARGE_INTEGER v1; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  DWORD LowPart; // eax
  __int64 v6; // r9
  __int64 v7; // rcx

  v1 = this[11];
  v3 = *(_QWORD *)(v1.QuadPart + 104);
  v4 = *(_QWORD *)(v1.QuadPart + 96);
  LowPart = this[6].LowPart;
  v6 = *(_QWORD *)(v3 + 32);
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
        VidSchiSubmitDeviceCommand((__int64)this);
        break;
      case 7u:
        VidSchiSubmitSoftwareCommand((__int64)this);
        break;
    }
  }
  else
  {
    if ( *(_BYTE *)(v3 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 160), 0, 0) )
      this[8].LowPart &= ~4u;
    if ( (this[8].LowPart & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2744));
      v7 = *(_QWORD *)(v6 + 392);
      _bittestandset64(&v7, *(unsigned __int16 *)(v4 + 4));
      *(_QWORD *)(v6 + 392) = v7;
    }
    if ( (this[33].LowPart & 0x8000000) != 0 )
      VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)this);
    else
      VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)this);
  }
}
