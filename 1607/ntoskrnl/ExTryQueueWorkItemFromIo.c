/*
 * XREFs of ExTryQueueWorkItemFromIo @ 0x14010DC50
 * Callers:
 *     IoTryQueueWorkItem @ 0x14010DC14 (IoTryQueueWorkItem.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeInsertPriQueue @ 0x14005F280 (KeInsertPriQueue.c)
 *     ExpIsPoolReadyForWork @ 0x14005F980 (ExpIsPoolReadyForWork.c)
 *     ExpValidateWorkItem @ 0x14005FA2C (ExpValidateWorkItem.c)
 *     ExpNewThreadNecessary @ 0x1400BED20 (ExpNewThreadNecessary.c)
 *     MmGetNextNode @ 0x1400BEE04 (MmGetNextNode.c)
 *     ExpTypeToPriority @ 0x1400CF05C (ExpTypeToPriority.c)
 */

char __fastcall ExTryQueueWorkItemFromIo(_QWORD *a1, unsigned int a2)
{
  char inserted; // si
  unsigned int v5; // r12d
  __int64 CurrentIrql; // r14
  unsigned __int16 v7; // bp
  unsigned __int16 NextNode; // ax
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rbx
  int v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h]

  inserted = 0;
  v13 = 0;
  ExpValidateWorkItem(a1, a2);
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
      if ( (_UNKNOWN *)v9 == (_UNKNOWN *)((char *)&KiNodeInit + 320 * NextNode) )
        v9 = 0LL;
      if ( ExpIsPoolReadyForWork(v9, 1) )
      {
        v11 = *(_QWORD *)(v9 + 328);
        if ( (v11 & 1) != 0 )
          v11 = 0LL;
        inserted = KeInsertPriQueue((_DISPATCHER_HEADER *)v11, (__int64)a1, (_QWORD *)v5, v10, 2);
        if ( inserted )
        {
LABEL_8:
          LOBYTE(CurrentIrql) = v14;
          break;
        }
        *(_DWORD *)(v11 + 708) |= 0x80000000;
        if ( ExpNewThreadNecessary(v11, *(_DWORD *)(v11 + 712)) )
          KeSetEvent((PRKEVENT)(v9 + 1824), 0, 0);
      }
      NextNode = MmGetNextNode(v7, &v13);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_8;
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return inserted;
}
