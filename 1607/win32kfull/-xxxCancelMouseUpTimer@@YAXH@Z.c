/*
 * XREFs of ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01E9B60
 * Callers:
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01EBE78 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxResolvePendingUp@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01ED670 (-xxxResolvePendingUp@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     ?xxxSendMouseUpIfPending@@YAXPEAI_K@Z @ 0x1C01EDAAC (-xxxSendMouseUpIfPending@@YAXPEAI_K@Z.c)
 */

void __fastcall xxxCancelMouseUpTimer(int a1)
{
  if ( guMouseUpPending )
  {
    if ( gidTapTimer )
    {
      FindTimer(0LL, gidTapTimer, 4u, 1, 0LL);
      gidTapTimer = 0LL;
    }
    if ( a1 )
      xxxSendMouseUpIfPending(&guMouseUpPending, gqwTimeLastTap);
  }
}
