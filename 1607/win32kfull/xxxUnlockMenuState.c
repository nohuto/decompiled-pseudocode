/*
 * XREFs of xxxUnlockMenuState @ 0x1C012CFD0
 * Callers:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     xxxMNStartMenuState @ 0x1C01F4A64 (xxxMNStartMenuState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxUnlockMenuState(struct tagMENUSTATE *a1)
{
  return xxxUnlockMenuStateInternal(a1, 0);
}
