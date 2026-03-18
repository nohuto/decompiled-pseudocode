/*
 * XREFs of KeAbProcessEffectiveIoPriorityChange @ 0x140062420
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400659A0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExpBoostIoAfterAcquire @ 0x14006B670 (ExpBoostIoAfterAcquire.c)
 *     KiAbThreadBoostIoPriority @ 0x14006C5A4 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x14006C668 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x1400ACCF0 (KiAbThreadInsertList.c)
 */

void __fastcall KeAbProcessEffectiveIoPriorityChange(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx

  if ( !a2 && *(_BYTE *)(a1 + 793) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb->AbPropagateBoostsList, a1 + 1376) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    __writecr8(CurrentIrql);
  }
}
