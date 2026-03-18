/*
 * XREFs of xxxSleepThread2 @ 0x1C006B230
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     xxxWaitMessageEx @ 0x1C007C75C (xxxWaitMessageEx.c)
 *     xxxDCETrackCaptionButton @ 0x1C01082B0 (xxxDCETrackCaptionButton.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     xxxIsDragging @ 0x1C01239CC (xxxIsDragging.c)
 *     xxxRemoteDisconnect @ 0x1C012D870 (xxxRemoteDisconnect.c)
 *     xxxSleepThread @ 0x1C01D1818 (xxxSleepThread.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01EFC4C (xxxRequestOutOfFullScreenMode.c)
 *     xxxbFullscreenSwitch @ 0x1C01EFDB8 (xxxbFullscreenSwitch.c)
 *     NtUserRealWaitMessageEx @ 0x1C021EF50 (NtUserRealWaitMessageEx.c)
 *     NtUserWaitAvailableMessageEx @ 0x1C0221CB0 (NtUserWaitAvailableMessageEx.c)
 *     xxxTrackCaptionButton @ 0x1C02387C8 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023C89C (xxxDragObject.c)
 * Callees:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006B340 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxHandleHealthyThread @ 0x1C0117490 (xxxHandleHealthyThread.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // edi
  __int64 result; // rax
  unsigned int v11; // esi
  unsigned __int64 v12; // rdi

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 64LL) )
  {
    v5 = 1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1024LL) = 0;
    if ( *(int *)(gptiCurrent + 448LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1080LL) &= ~0x80000000;
  }
  result = xxxRealSleepThread(a1, a2, a3, a4, a5);
  v11 = result;
  if ( v5 )
  {
    v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !(_DWORD)v12 )
      LODWORD(v12) = -1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1024LL) = v12;
    if ( *(int *)(gptiCurrent + 448LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1080LL) &= ~0x80000000;
    return v11;
  }
  return result;
}
