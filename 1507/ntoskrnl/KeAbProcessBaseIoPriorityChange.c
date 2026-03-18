/*
 * XREFs of KeAbProcessBaseIoPriorityChange @ 0x14000A100
 * Callers:
 *     IoSetIoPriorityHintIntoThread @ 0x140009A64 (IoSetIoPriorityHintIntoThread.c)
 *     IoApplyPriorityInfoThread @ 0x140009AEC (IoApplyPriorityInfoThread.c)
 *     CcApplyLowIoPriorityToThread @ 0x140041E40 (CcApplyLowIoPriorityToThread.c)
 *     PspNotifyProcessBackgroundTransition @ 0x140129860 (PspNotifyProcessBackgroundTransition.c)
 *     CmpSetIoPriorityThread @ 0x14012CB1C (CmpSetIoPriorityThread.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x14012B960 (KiAbThreadInsertList.c)
 */

void __fastcall KeAbProcessBaseIoPriorityChange(__int64 a1, int a2, int a3)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // r8
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // rdx

  if ( KiAbEnabled )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(_BYTE *)(a1 + 1419) && a3 < 2 && a2 >= 2 )
    {
      v5 = a1 + 1384;
      p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 793) || a3 < 2 || a2 >= 2 )
        goto LABEL_12;
      v5 = a1 + 1376;
      p_AbSelfIoBoostsList = &CurrentPrcb->AbPropagateBoostsList;
    }
    if ( (unsigned int)KiAbThreadInsertList(a1, p_AbSelfIoBoostsList, v5) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
LABEL_12:
    __writecr8(CurrentIrql);
  }
}
