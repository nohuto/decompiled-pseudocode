/*
 * XREFs of PopEsWnfSubscriptionOverrideCallback @ 0x140673A18
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     ExQueryWnfStateData @ 0x1404C4924 (ExQueryWnfStateData.c)
 *     PopEsWorkItemSchedule @ 0x140544660 (PopEsWorkItemSchedule.c)
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
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
      PopEsMode = v1;
      PopReleaseRwLock(&PopEsLock);
      PopEsWorkItemSchedule(2);
    }
  }
  return 0LL;
}
