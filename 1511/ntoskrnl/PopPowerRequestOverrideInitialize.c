/*
 * XREFs of PopPowerRequestOverrideInitialize @ 0x14054B2B0
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1404496B8 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400981B4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopAcquirePowerRequestPushLock @ 0x140455DB0 (PopAcquirePowerRequestPushLock.c)
 */

void PopPowerRequestOverrideInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 *i; // rbx

  PopAcquirePowerRequestPushLock(0);
  for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
    PopUmpoSendPowerRequestOverrideQuery((__int64)i, v0, v1, v2);
  PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
}
