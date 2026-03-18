/*
 * XREFs of PopExecutionRequiredCallback @ 0x140520920
 * Callers:
 *     <none>
 * Callees:
 *     PopSystemRequiredPowerRequest @ 0x140009BA8 (PopSystemRequiredPowerRequest.c)
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x140520750 (PopAcquirePowerRequestPushLock.c)
 *     PopExecutionRequiredPowerRequest @ 0x140520970 (PopExecutionRequiredPowerRequest.c)
 */

__int64 __fastcall PopExecutionRequiredCallback(char a1, unsigned int a2)
{
  __int64 v4; // rcx

  PopAcquirePowerRequestPushLock(1);
  LOBYTE(v4) = a1;
  PopExecutionRequiredPowerRequest(v4, a2);
  PopReleaseRwLock(&PopPowerRequestLock);
  if ( !byte_140303F74 )
    PopSystemRequiredPowerRequest(a1, 2);
  return 0LL;
}
