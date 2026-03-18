/*
 * XREFs of ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00465E4
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C00679D0 (xxxDesktopThreadWaiter.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006B340 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C006B9D0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxGetInputEvent @ 0x1C00C3140 (xxxGetInputEvent.c)
 * Callees:
 *     UpdateProcessPriorityForSpinning @ 0x1C0046FF4 (UpdateProcessPriorityForSpinning.c)
 */

__int64 __fastcall CheckProcessForeground(struct tagTHREADINFO *a1)
{
  *(_QWORD *)(*((_QWORD *)a1 + 55) + 8LL) = 0LL;
  *(_DWORD *)(*((_QWORD *)a1 + 55) + 28LL) = *((_DWORD *)a1 + 112) & 0xFFFFFBFF;
  *((_DWORD *)a1 + 112) &= ~0x400u;
  UpdateProcessPriorityForSpinning();
  return 0LL;
}
