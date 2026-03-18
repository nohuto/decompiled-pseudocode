/*
 * XREFs of xxxSleepThread2 @ 0x1C0082990
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BB630 (xxxDCETrackCaptionButton.c)
 *     xxxWaitMessageEx @ 0x1C00DF5E4 (xxxWaitMessageEx.c)
 *     xxxRemoteDisconnect @ 0x1C00EBC70 (xxxRemoteDisconnect.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxIsDragging @ 0x1C0150E5C (xxxIsDragging.c)
 *     xxxSleepThread @ 0x1C01CB4C8 (xxxSleepThread.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01E598C (xxxRequestOutOfFullScreenMode.c)
 *     xxxbFullscreenSwitch @ 0x1C01E5A54 (xxxbFullscreenSwitch.c)
 *     NtUserRealWaitMessageEx @ 0x1C0218980 (NtUserRealWaitMessageEx.c)
 *     NtUserWaitAvailableMessageEx @ 0x1C021C010 (NtUserWaitAvailableMessageEx.c)
 *     xxxTrackCaptionButton @ 0x1C0230C3C (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023446C (xxxDragObject.c)
 * Callees:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0082AD0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxHandleHealthyThread @ 0x1C0147F90 (xxxHandleHealthyThread.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // edi
  __int64 result; // rax
  unsigned int v11; // esi
  unsigned __int64 v12; // rdi

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) )
  {
    v5 = 1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1040LL) = 0;
    if ( *(int *)(gptiCurrent + 440LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1096LL) &= ~0x80000000;
  }
  result = xxxRealSleepThread(a1, a2, a3, a4, a5);
  v11 = result;
  if ( v5 )
  {
    v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !(_DWORD)v12 )
      LODWORD(v12) = -1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1040LL) = v12;
    if ( *(int *)(gptiCurrent + 440LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1096LL) &= ~0x80000000;
    return v11;
  }
  return result;
}
