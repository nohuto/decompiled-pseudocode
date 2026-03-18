/*
 * XREFs of ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C0224AA4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?PassedHoldTime@@YAHK_K0@Z @ 0x1C01FCA4C (-PassedHoldTime@@YAHK_K0@Z.c)
 * Callees:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0113358 (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 */

__int64 __fastcall GetTouchTimeFromCPLValue(unsigned int a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v5; // rsi
  unsigned int v8; // ecx

  v5 = a3;
  if ( !gTouchMonitor && !(unsigned int)LoadPointerDeviceTouchSettings() )
    return a1;
  v8 = *((_DWORD *)off_1C031B1C8 + 4 * v5 + 3);
  if ( v8 == -1 )
    v8 = *((_DWORD *)off_1C031B1C8 + 4 * v5 + 2);
  if ( v8 > 0x64 || v8 == 50 )
    return a1;
  if ( a4 )
    v8 = 100 - v8;
  return a1 + a2 * v8 / 0x64 - (a2 >> 1);
}
