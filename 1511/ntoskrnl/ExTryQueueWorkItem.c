/*
 * XREFs of ExTryQueueWorkItem @ 0x140100504
 * Callers:
 *     PopFxQueueWorkOrder @ 0x1400DC96C (PopFxQueueWorkOrder.c)
 *     IoTryQueueWorkItem @ 0x14010372C (IoTryQueueWorkItem.c)
 * Callees:
 *     MmGetNextNode @ 0x140033000 (MmGetNextNode.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExpNewThreadNecessary @ 0x1401007CC (ExpNewThreadNecessary.c)
 *     ExpValidateWorkItem @ 0x140101574 (ExpValidateWorkItem.c)
 *     KeInsertPriQueue @ 0x1401015B0 (KeInsertPriQueue.c)
 *     ExpIsPoolReadyForWork @ 0x140101A20 (ExpIsPoolReadyForWork.c)
 *     ExpTypeToPriority @ 0x140101B8C (ExpTypeToPriority.c)
 */

char __fastcall ExTryQueueWorkItem(ULONG_PTR a1, unsigned int a2)
{
  char inserted; // si
  int v4; // r15d
  int v5; // r12d
  __int64 CurrentIrql; // r14
  unsigned __int16 v7; // bp
  unsigned __int16 NextNode; // ax
  __int64 v9; // rdi
  int v10; // r9d
  __int64 v11; // rbx
  int v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h]

  inserted = 0;
  v13 = 0;
  v4 = a1;
  ExpValidateWorkItem(a1);
  v5 = ExpTypeToPriority(a2);
  CurrentIrql = KeGetCurrentIrql();
  v14 = CurrentIrql;
  __writecr8(2uLL);
  v7 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  NextNode = v7;
  if ( v7 < (unsigned __int16)KeNumberNodes )
  {
    while ( 1 )
    {
      v9 = KeNodeBlock[NextNode];
      if ( (_UNKNOWN *)v9 == (_UNKNOWN *)((char *)&KiNodeInit + 256 * (unsigned __int64)NextNode) )
        v9 = 0LL;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(v9, 0LL) )
      {
        v11 = *(_QWORD *)(v9 + 256);
        if ( (v11 & 1) != 0 )
          v11 = 0LL;
        inserted = KeInsertPriQueue(v11, v4, v5, v10, 2);
        if ( inserted )
        {
LABEL_8:
          LOBYTE(CurrentIrql) = v14;
          break;
        }
        *(_DWORD *)(v11 + 708) |= 0x80000000;
        if ( (unsigned __int8)ExpNewThreadNecessary(v11, *(unsigned int *)(v11 + 712)) )
          KeSetEvent((PRKEVENT)(v9 + 1040), 0, 0);
      }
      NextNode = MmGetNextNode(v7, &v13);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_8;
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return inserted;
}
