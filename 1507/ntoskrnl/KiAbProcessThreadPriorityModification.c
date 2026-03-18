/*
 * XREFs of KiAbProcessThreadPriorityModification @ 0x14009C0D0
 * Callers:
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D3438 (KiPrepareReadyThreadForRescheduling.c)
 *     KiCompleteKernelInit @ 0x1403F98E4 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAbProcessThreadPriorityModification(__int64 a1, char a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // r9
  struct _SINGLE_LIST_ENTRY *v4; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  __int64 result; // rax

  if ( KiAbEnabled )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( a3 )
    {
      if ( a3 == 1 && a2 > *(char *)(a1 + 195) )
      {
        if ( *(_BYTE *)(a1 + 793) )
        {
          v4 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
          if ( *(_QWORD *)(a1 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
LABEL_12:
            if ( p_AbPropagateBoostsList )
            {
              v4->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v4;
              _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1416));
              return KiAbQueueAutoBoostDpc(CurrentPrcb);
            }
          }
        }
      }
    }
    else if ( a2 < *(char *)(a1 + 563) )
    {
      if ( *(_BYTE *)(a1 + 1419) )
      {
        v4 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1384);
        if ( *(_QWORD *)(a1 + 1384) == 1LL )
        {
          p_AbPropagateBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
          goto LABEL_12;
        }
      }
    }
  }
  return result;
}
