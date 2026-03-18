/*
 * XREFs of GetMouseKeyFlags @ 0x1C00948F4
 * Callers:
 *     ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C000B2E4 (-GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSystemTimerProc @ 0x1C0096EA0 (xxxSystemTimerProc.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMouseKeyFlags(_BYTE *a1)
{
  char v1; // al
  unsigned int v2; // edx
  char v3; // al
  char v4; // al

  v1 = a1[192];
  v2 = (v1 & 4) != 0;
  if ( (v1 & 0x10) != 0 )
    v2 |= 2u;
  v3 = a1[193];
  if ( (v3 & 1) != 0 )
    v2 |= 0x10u;
  if ( (v3 & 4) != 0 )
    v2 |= 0x20u;
  if ( (v3 & 0x10) != 0 )
    v2 |= 0x40u;
  v4 = a1[196];
  if ( (v4 & 1) != 0 )
    v2 |= 4u;
  if ( (v4 & 4) != 0 )
    v2 |= 8u;
  return v2;
}
