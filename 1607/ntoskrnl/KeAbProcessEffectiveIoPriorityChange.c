/*
 * XREFs of KeAbProcessEffectiveIoPriorityChange @ 0x140061FA0
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140065520 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExpBoostIoAfterAcquire @ 0x14006B1F0 (ExpBoostIoAfterAcquire.c)
 *     KiAbThreadBoostIoPriority @ 0x14006C124 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x1400AB258 (KiAbThreadInsertList.c)
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
