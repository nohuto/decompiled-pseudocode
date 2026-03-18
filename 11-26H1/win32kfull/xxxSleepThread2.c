/*
 * XREFs of xxxSleepThread2 @ 0x140022590
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     xxxWaitMessageEx @ 0x14005C04C (xxxWaitMessageEx.c)
 *     NtUserWaitMessage @ 0x14005C0C0 (NtUserWaitMessage.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxIsDragging @ 0x14014A320 (xxxIsDragging.c)
 *     xxxSleepThread @ 0x14014A7D0 (xxxSleepThread.c)
 *     NtUserRealWaitMessageEx @ 0x1402B9560 (NtUserRealWaitMessageEx.c)
 * Callees:
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140023380 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1400237A0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, ULONG Count)
{
  int v5; // edi
  unsigned int v10; // ebx

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*((_QWORD *)PtiCurrent() + 58) + 112LL) )
  {
    v5 = 1;
    xxxUpdateInputHangInfo(0LL, 0LL);
  }
  v10 = xxxRealSleepThread(a1, a2, a3, a4, Count);
  if ( v5 )
    xxxUpdateInputHangInfo(0LL, 1LL);
  return v10;
}
