/*
 * XREFs of KeAbProcessBaseIoPriorityChangeInternal @ 0x1400721B0
 * Callers:
 *     KeAbProcessBaseIoPriorityChange @ 0x140072184 (KeAbProcessBaseIoPriorityChange.c)
 *     IoUpdateThreadIoRateThrottle @ 0x1401CC134 (IoUpdateThreadIoRateThrottle.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x14006C668 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x1400ACCF0 (KiAbThreadInsertList.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChangeInternal(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  __int64 v5; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !*(_BYTE *)(a1 + 1423) || a2 )
  {
    if ( !*(_BYTE *)(a1 + 793) || !a2 )
      goto LABEL_3;
    v5 = a1 + 1376;
    p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
  }
  else
  {
    v5 = a1 + 1384;
    p_AbPropagateBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  }
  if ( (unsigned int)KiAbThreadInsertList(a1, p_AbPropagateBoostsList, v5) )
    KiAbQueueAutoBoostDpc((__int64)CurrentPrcb);
LABEL_3:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
