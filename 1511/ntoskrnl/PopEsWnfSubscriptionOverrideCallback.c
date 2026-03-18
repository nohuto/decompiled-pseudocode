/*
 * XREFs of PopEsWnfSubscriptionOverrideCallback @ 0x14063C334
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     ExQueryWnfStateData @ 0x1404BB5FC (ExQueryWnfStateData.c)
 *     PopEsWorkItemSchedule @ 0x14050CF68 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsWnfSubscriptionOverrideCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v3 = 4;
  if ( (int)ExQueryWnfStateData(a1, &v5, v4, &v3) >= 0 )
  {
    v1 = v4[0];
    if ( v4[0] <= 2 )
    {
      PopAcquireRwLockExclusive((__int64)&PopEsLock);
      PopEsMode = v1;
      PopReleaseRwLock((signed __int64 *)&PopEsLock);
      PopEsWorkItemSchedule(2);
    }
  }
  return 0LL;
}
