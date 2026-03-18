/*
 * XREFs of PopDripsWatchdogTimerCallbackRoutine @ 0x140241CCC
 * Callers:
 *     <none>
 * Callees:
 *     PopCalculateIdleInformation @ 0x14023D4A8 (PopCalculateIdleInformation.c)
 */

char __fastcall PopDripsWatchdogTimerCallbackRoutine(__int64 a1, __int64 a2)
{
  PopCalculateIdleInformation(a2 + 64);
  *(_QWORD *)(a2 + 40) = MEMORY[0xFFFFF78000000008];
  return PopQueueWorkItem(a2 + 328);
}
