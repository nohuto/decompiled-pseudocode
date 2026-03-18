/*
 * XREFs of PspRundownProcess @ 0x1404A3FD8
 * Callers:
 *     PspProcessClose @ 0x1404A3F14 (PspProcessClose.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtectionEx @ 0x1400FB130 (ExAcquireRundownProtectionEx.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
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
