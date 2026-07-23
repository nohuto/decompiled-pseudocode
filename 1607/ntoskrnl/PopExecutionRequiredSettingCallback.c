/*
 * XREFs of PopExecutionRequiredSettingCallback @ 0x14057F74C
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1405037B8 (PopAcquirePowerRequestPushLock.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x14057F7D8 (PopEnableExecutionRequiredPowerRequests.c)
 */

__int64 __fastcall PopExecutionRequiredSettingCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r9

  v6 = -1073741811;
  PopAcquirePowerRequestPushLock(1);
  v8 = *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 == *a1 )
    v8 = *(_QWORD *)GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data4 - a1[1];
  if ( !v8 && a3 == 4 && a2 )
  {
    PopExecutionRequiredTimeout = *a2;
    if ( PopExecutionRequiredTimeout )
      LOBYTE(v7) = 1;
    else
      v7 = 0LL;
    PopEnableExecutionRequiredPowerRequests(v7);
    v6 = 0;
  }
  PopReleaseRwLock(&PopPowerRequestLock);
  return v6;
}
