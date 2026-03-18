/*
 * XREFs of KeAbProcessBaseIoPriorityChange @ 0x1400FB898
 * Callers:
 *     PspNotifyProcessBackgroundTransition @ 0x1400EAFBC (PspNotifyProcessBackgroundTransition.c)
 *     PsSetIoPriorityThread @ 0x1400FB824 (PsSetIoPriorityThread.c)
 * Callees:
 *     KiAbThreadInsertList @ 0x1400EC5C8 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 */

void __fastcall KeAbProcessBaseIoPriorityChange(__int64 a1, int a2, int a3)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD *v5; // r8
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // rdx

  if ( KiAbEnabled )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(_BYTE *)(a1 + 1419) && a3 < 2 && a2 >= 2 )
    {
      v5 = (_QWORD *)(a1 + 1384);
      p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 793) || a3 < 2 || a2 >= 2 )
        goto LABEL_4;
      v5 = (_QWORD *)(a1 + 1376);
      p_AbSelfIoBoostsList = &CurrentPrcb->AbPropagateBoostsList;
    }
    if ( (unsigned int)KiAbThreadInsertList(a1, p_AbSelfIoBoostsList, v5) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
LABEL_4:
    __writecr8(CurrentIrql);
  }
}
