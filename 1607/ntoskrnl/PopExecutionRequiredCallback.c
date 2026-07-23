/*
 * XREFs of PopExecutionRequiredCallback @ 0x140503988
 * Callers:
 *     <none>
 * Callees:
 *     PopSystemRequiredPowerRequest @ 0x140009728 (PopSystemRequiredPowerRequest.c)
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1405037B8 (PopAcquirePowerRequestPushLock.c)
 *     PopExecutionRequiredPowerRequest @ 0x1405039D8 (PopExecutionRequiredPowerRequest.c)
 */

__int64 __fastcall PopExecutionRequiredCallback(char a1, unsigned int a2)
{
  __int64 v4; // rcx

  PopAcquirePowerRequestPushLock(1);
  LOBYTE(v4) = a1;
  PopExecutionRequiredPowerRequest(v4, a2);
  PopReleaseRwLock(&PopPowerRequestLock);
  if ( !byte_140303EB4 )
    PopSystemRequiredPowerRequest(a1, 2);
  return 0LL;
}
