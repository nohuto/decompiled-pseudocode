/*
 * XREFs of xxxSleepThread2 @ 0x1C005B500
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxRemoteDisconnect @ 0x1C009DC30 (xxxRemoteDisconnect.c)
 *     xxxDCETrackCaptionButton @ 0x1C00CDE6C (xxxDCETrackCaptionButton.c)
 *     xxxWaitMessageEx @ 0x1C00CFAA4 (xxxWaitMessageEx.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxIsDragging @ 0x1C014C940 (xxxIsDragging.c)
 *     xxxSleepThread @ 0x1C01D3448 (xxxSleepThread.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01EFC4C (xxxRequestOutOfFullScreenMode.c)
 *     xxxbFullscreenSwitch @ 0x1C01EFD14 (xxxbFullscreenSwitch.c)
 *     NtUserRealWaitMessageEx @ 0x1C021ED50 (NtUserRealWaitMessageEx.c)
 *     NtUserWaitAvailableMessageEx @ 0x1C0221E80 (NtUserWaitAvailableMessageEx.c)
 *     xxxTrackCaptionButton @ 0x1C0238BDC (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023CA6C (xxxDragObject.c)
 * Callees:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005B640 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxHandleHealthyThread @ 0x1C01423E0 (xxxHandleHealthyThread.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // edi
  __int64 result; // rax
  unsigned int v11; // esi
  unsigned __int64 v12; // rdi

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 64LL) )
  {
    v5 = 1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1016LL) = 0;
    if ( *(int *)(gptiCurrent + 440LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1072LL) &= ~0x80000000;
  }
  result = xxxRealSleepThread(a1, a2, a3, a4, a5);
  v11 = result;
  if ( v5 )
  {
    v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !(_DWORD)v12 )
      LODWORD(v12) = -1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1016LL) = v12;
    if ( *(int *)(gptiCurrent + 440LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1072LL) &= ~0x80000000;
    return v11;
  }
  return result;
}
