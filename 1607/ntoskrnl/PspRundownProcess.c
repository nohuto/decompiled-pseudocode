/*
 * XREFs of PspRundownProcess @ 0x1404F1108
 * Callers:
 *     PspProcessClose @ 0x1404A3328 (PspProcessClose.c)
 * Callees:
 *     ExAcquireRundownProtectionEx @ 0x140006BD0 (ExAcquireRundownProtectionEx.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 */

void __fastcall PspRundownProcess(signed __int64 Object)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(Object + 736), 0) )
  {
    ObfReferenceObjectWithTag((PVOID)Object, 0x77537350u);
    if ( !_InterlockedCompareExchange64(&PspRundownProcessCache, Object, 0LL) )
    {
      if ( _InterlockedIncrement(&PspRundownNeededCountCache) != 1 )
        return;
      v2 = &PspProcessRundownCacheWorkItem;
      goto LABEL_5;
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 768), 8u) )
    {
      ObfDereferenceObjectWithTag((PVOID)Object, 0x77537350u);
      return;
    }
    if ( _InterlockedIncrement(&PspRundownNeededCount) == 1 )
    {
      v2 = (struct _WORK_QUEUE_ITEM *)&PspProcessRundownWorkItem;
LABEL_5:
      ExQueueWorkItem(v2, NormalWorkQueue);
    }
  }
}
