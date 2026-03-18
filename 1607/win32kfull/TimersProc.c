/*
 * XREFs of TimersProc @ 0x1C007CAC0
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 * Callees:
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C007F3E4 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOLEAN TimersProc()
{
  BOOLEAN result; // al

  gbTimersProcActive = 1;
  gbRITAlerted = 0;
  gbRITRescan = 0;
  gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  gdmsNextTimer = 0x7FFFFFFF;
  guNextCoalescableTimerDue = 0x7FFFFFFF;
  result = KeSetTimer(gptmrMaster, (LARGE_INTEGER)-21474836470000LL, 0LL);
  gbTimersProcActive = 0;
  return result;
}
