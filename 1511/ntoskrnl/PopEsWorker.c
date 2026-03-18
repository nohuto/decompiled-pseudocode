/*
 * XREFs of PopEsWorker @ 0x14050B87C
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     ExSubscribeWnfStateChange @ 0x1404C45E0 (ExSubscribeWnfStateChange.c)
 *     PopEsUpdateState @ 0x14050B97C (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x14050BA04 (PopEsStartTelemetry.c)
 *     PopEsUpdateSetting @ 0x14054A80C (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x14054ACE4 (PopEsPublishState.c)
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
        PopAcquireRwLockExclusive((__int64)&PopEsLock);
      }
      else
      {
        PopAcquireRwLockExclusive((__int64)&PopEsLock);
        PopEsUpdateSetting();
      }
      LOBYTE(v8) = v0;
      PopEsUpdateState(v8);
      PopReleaseRwLock((signed __int64 *)&PopEsLock);
    }
    else
    {
      PopEsPublishState();
      PopAcquireRwLockExclusive((__int64)&PopEsLock);
      PopEsStartTelemetry();
      PopReleaseRwLock((signed __int64 *)&PopEsLock);
      ExSubscribeWnfStateChange(
        (__int64)&PopEsWnfSubscriptionOverride,
        (__int64)&WNF_PO_ENERGY_SAVER_OVERRIDE,
        1,
        0,
        (__int64)PopEsWnfSubscriptionOverrideCallback,
        0LL);
    }
  }
  while ( v5 );
}
