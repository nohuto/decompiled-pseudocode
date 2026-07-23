/*
 * XREFs of PopDripsWatchdogTimerCallbackRoutine @ 0x14020D500
 * Callers:
 *     <none>
 * Callees:
 *     PopCalculateIdleInformation @ 0x140207780 (PopCalculateIdleInformation.c)
 */

char __fastcall PopDripsWatchdogTimerCallbackRoutine(__int64 a1, __int64 a2)
{
  PopCalculateIdleInformation(a2 + 80);
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000008];
  return PopQueueWorkItem(a2 + 344);
}
