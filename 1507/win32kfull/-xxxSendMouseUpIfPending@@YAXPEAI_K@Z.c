/*
 * XREFs of ?xxxSendMouseUpIfPending@@YAXPEAI_K@Z @ 0x1C01F6500
 * Callers:
 *     ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01F31E0 (-xxxCancelMouseUpTimer@@YAXH@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4538 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?QueuePTPMouseEvent@@YAXUtagPOINT@@K_K@Z @ 0x1C01F1EA0 (-QueuePTPMouseEvent@@YAXUtagPOINT@@K_K@Z.c)
 */

void __fastcall xxxSendMouseUpIfPending(unsigned int *a1, __int64 a2)
{
  int v2; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0;
    UserSessionSwitchLeaveCrit(a1, a2);
    QueuePTPMouseEvent(gptCursorAsync, v2, a2);
    EnterCrit(1LL);
  }
}
