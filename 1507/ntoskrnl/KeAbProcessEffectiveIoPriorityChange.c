/*
 * XREFs of KeAbProcessEffectiveIoPriorityChange @ 0x1400CA5E0
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400C7FC0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1400C88C0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x14012B960 (KiAbThreadInsertList.c)
 */

void __fastcall KeAbProcessEffectiveIoPriorityChange(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx

  if ( KiAbEnabled && !a2 && *(_BYTE *)(a1 + 793) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb->AbPropagateBoostsList, a1 + 1376) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    __writecr8(CurrentIrql);
  }
}
