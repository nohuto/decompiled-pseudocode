/*
 * XREFs of ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00815B4
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C0057424 (xxxDesktopThreadWaiter.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C005AF00 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005B640 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxGetInputEvent @ 0x1C00C3610 (xxxGetInputEvent.c)
 * Callees:
 *     UpdateProcessPriorityForSpinning @ 0x1C00815F4 (UpdateProcessPriorityForSpinning.c)
 */

__int64 __fastcall CheckProcessForeground(struct tagTHREADINFO *a1)
{
  *(_QWORD *)(*((_QWORD *)a1 + 54) + 8LL) = 0LL;
  *(_DWORD *)(*((_QWORD *)a1 + 54) + 28LL) = *((_DWORD *)a1 + 110) & 0xFFFFFBFF;
  *((_DWORD *)a1 + 110) &= ~0x400u;
  UpdateProcessPriorityForSpinning();
  return 0LL;
}
