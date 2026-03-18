/*
 * XREFs of xxxUnlockMenuState @ 0x1C00FEB60
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 *     xxxMNStartMenuState @ 0x1C01FCFB8 (xxxMNStartMenuState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxUnlockMenuState(struct tagMENUSTATE *a1)
{
  return xxxUnlockMenuStateInternal(a1, 0);
}
