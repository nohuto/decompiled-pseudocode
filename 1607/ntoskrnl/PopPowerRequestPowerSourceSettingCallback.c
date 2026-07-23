/*
 * XREFs of PopPowerRequestPowerSourceSettingCallback @ 0x1405817AC
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1405037B8 (PopAcquirePowerRequestPushLock.c)
 *     PopEnableSystemToExecutionRequiredPowerRequests @ 0x14066AAD8 (PopEnableSystemToExecutionRequiredPowerRequests.c)
 */

__int64 __fastcall PopPowerRequestPowerSourceSettingCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx

  v5 = -1073741811;
  PopAcquirePowerRequestPushLock(1);
  if ( a3 == 4 && a2 && byte_140303EB4 )
  {
    PopPowerRequestSyncedPowerSource = *a2;
    if ( PopPowerRequestSyncedPowerSource )
      v6 = 0LL;
    else
      LOBYTE(v6) = 1;
    PopEnableSystemToExecutionRequiredPowerRequests(v6);
    v5 = 0;
  }
  PopReleaseRwLock(&PopPowerRequestLock);
  return v5;
}
