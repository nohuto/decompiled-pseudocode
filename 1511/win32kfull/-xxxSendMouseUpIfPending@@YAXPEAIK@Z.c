/*
 * XREFs of ?xxxSendMouseUpIfPending@@YAXPEAIK@Z @ 0x1C01F69E0
 * Callers:
 *     ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01F3510 (-xxxCancelMouseUpTimer@@YAXH@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4898 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?QueuePTPMouseEvent@@YAXUtagPOINT@@KK@Z @ 0x1C01F2154 (-QueuePTPMouseEvent@@YAXUtagPOINT@@KK@Z.c)
 */

void __fastcall xxxSendMouseUpIfPending(unsigned int *a1, __int64 a2)
{
  int v2; // ebx
  int v3; // edi

  v2 = *a1;
  v3 = a2;
  if ( *a1 )
  {
    *a1 = 0;
    UserSessionSwitchLeaveCrit(a1, a2);
    QueuePTPMouseEvent(gptCursorAsync, v2, v3);
    EnterCrit(0LL, 1LL);
  }
}
