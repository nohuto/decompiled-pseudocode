/*
 * XREFs of ?xxxSendMouseUpIfPending@@YAXPEAI_K@Z @ 0x1C01EDAAC
 * Callers:
 *     ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01E9B60 (-xxxCancelMouseUpTimer@@YAXH@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01EB354 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?QueuePTPMouseEvent@@YAXUtagPOINT@@K_K@Z @ 0x1C01E836C (-QueuePTPMouseEvent@@YAXUtagPOINT@@K_K@Z.c)
 */

void __fastcall xxxSendMouseUpIfPending(unsigned int *a1, __int64 a2)
{
  int v2; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0;
    if ( gdwInAtomicOperation )
    {
      a1 = (unsigned int *)gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(a1, a2);
    QueuePTPMouseEvent(gptCursorAsync, v2, a2);
    EnterCrit(0LL, 1LL);
  }
}
