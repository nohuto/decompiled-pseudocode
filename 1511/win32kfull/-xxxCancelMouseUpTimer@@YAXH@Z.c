/*
 * XREFs of ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01F3510
 * Callers:
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxResolvePendingUp@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01F66D0 (-xxxResolvePendingUp@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     ?xxxSendMouseUpIfPending@@YAXPEAIK@Z @ 0x1C01F69E0 (-xxxSendMouseUpIfPending@@YAXPEAIK@Z.c)
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
      xxxSendMouseUpIfPending(&guMouseUpPending, gdwTimeLastTap);
  }
}
