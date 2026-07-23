/*
 * XREFs of PopEsWorker @ 0x140545E34
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     ExSubscribeWnfStateChange @ 0x1404D1B24 (ExSubscribeWnfStateChange.c)
 *     PopEsUpdateState @ 0x140545F60 (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x140545FEC (PopEsStartTelemetry.c)
 *     PopEsUpdateSetting @ 0x140580B4C (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x140580D4C (PopEsPublishState.c)
 */

void PopEsWorker()
{
  char v0; // di
  signed __int32 v1; // eax
  signed __int32 v2; // ett
  unsigned int v3; // ecx
  int v4; // edx
  signed __int32 v5; // ebx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rcx

  do
  {
    v0 = 0;
    _m_prefetchw(&PopEsWorkItemDue);
    v1 = PopEsWorkItemDue;
    do
    {
      v2 = v1;
      v1 = _InterlockedCompareExchange(&PopEsWorkItemDue, v1, v1);
    }
    while ( v2 != v1 );
    _BitScanForward(&v3, v1);
    v4 = 1 << v3;
    v5 = v1 & ~(1 << v3);
    if ( ((unsigned __int8)v1 & (unsigned __int8)~(1 << v3) & 8) != 0 )
    {
      if ( ((v4 - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_6;
      v0 = 1;
      v5 &= ~8u;
    }
    if ( v4 == 2 )
      v5 &= ~4u;
LABEL_6:
    if ( v1 != _InterlockedCompareExchange(&PopEsWorkItemDue, v5, v1) )
      continue;
    v6 = v4 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 2 )
          continue;
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
      }
      else
      {
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
        PopEsUpdateSetting();
      }
      LOBYTE(v8) = v0;
      PopEsUpdateState(v8);
      PopReleaseRwLock(&PopEsLock);
    }
    else
    {
      PopEsPublishState();
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
      PopEsStartTelemetry();
      PopReleaseRwLock(&PopEsLock);
      ExSubscribeWnfStateChange(
        (__int64)&PopEsWnfSubscriptionOverride,
        (__int64)&WNF_PO_ENERGY_SAVER_OVERRIDE,
        1,
        0,
        (__int64)PopEsWnfSubscriptionOverrideCallback,
        0LL);
      ExSubscribeWnfStateChange(
        (__int64)&PopEsWnfSubscriptionBgActivityPolicy,
        (__int64)&WNF_PO_BACKGROUND_ACTIVITY_POLICY,
        1,
        0,
        (__int64)PopEsWnfSubscriptionBgActivityPolicyCallback,
        0LL);
    }
  }
  while ( v5 );
}
