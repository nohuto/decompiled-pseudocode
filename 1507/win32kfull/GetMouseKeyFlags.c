/*
 * XREFs of GetMouseKeyFlags @ 0x1C00779CC
 * Callers:
 *     ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C0006664 (-GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSystemTimerProc @ 0x1C00775B0 (xxxSystemTimerProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMouseKeyFlags(_BYTE *a1)
{
  unsigned int v1; // r8d
  char v2; // al
  char v3; // al

  v1 = (a1[184] & 4) != 0;
  if ( (a1[184] & 0x10) != 0 )
    v1 |= 2u;
  v2 = a1[185];
  if ( (v2 & 1) != 0 )
    v1 |= 0x10u;
  if ( (v2 & 4) != 0 )
    v1 |= 0x20u;
  if ( (v2 & 0x10) != 0 )
    v1 |= 0x40u;
  v3 = a1[188];
  if ( (v3 & 1) != 0 )
    v1 |= 4u;
  if ( (v3 & 4) != 0 )
    v1 |= 8u;
  return v1;
}
