/*
 * XREFs of ?QueuePTPMouseEvent@@YAXUtagPOINT@@KK@Z @ 0x1C01F2154
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01F3568 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01F4054 (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4898 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01F6240 (-xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z.c)
 *     ?xxxSendMouseDown@@YAXIKK@Z @ 0x1C01F6968 (-xxxSendMouseDown@@YAXIKK@Z.c)
 *     ?xxxSendMouseUpIfPending@@YAXPEAIK@Z @ 0x1C01F69E0 (-xxxSendMouseUpIfPending@@YAXPEAIK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall QueuePTPMouseEvent(struct tagPOINT a1, int a2, int a3)
{
  __int64 v5; // rcx

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
  if ( (unsigned int)gdwPTPMouseEvents < 0x40 )
  {
    ++gdwPTPMouseEvents;
    v5 = 2LL * (((_BYTE)gdwPTPQueueHead + 1) & 0x3F);
    gdwPTPQueueHead = ((_BYTE)gdwPTPQueueHead + 1) & 0x3F;
    *((_DWORD *)&gPTPMouseEventQueue + 2 * v5 + 2) = a2;
    *((struct tagPOINT *)&gPTPMouseEventQueue + v5) = a1;
    *((_DWORD *)&gPTPMouseEventQueue + 2 * v5 + 3) = a3;
    ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
    KeSetEvent(gpevtPTPOperation, 1, 0);
  }
  else
  {
    ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
    ++dword_1C0321C74;
  }
}
