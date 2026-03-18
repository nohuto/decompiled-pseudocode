/*
 * XREFs of TimersProc @ 0x1C00C3710
 * Callers:
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
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
