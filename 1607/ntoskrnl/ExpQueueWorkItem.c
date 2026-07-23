/*
 * XREFs of ExpQueueWorkItem @ 0x14005F840
 * Callers:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x1400A6F80 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemFromIo @ 0x1400CF014 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140124FD8 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x14022E688 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeInsertPriQueue @ 0x14005F280 (KeInsertPriQueue.c)
 *     ExpIsPoolReadyForWork @ 0x14005F980 (ExpIsPoolReadyForWork.c)
 *     MmGetNextNode @ 0x1400BEE04 (MmGetNextNode.c)
 *     ExpQueueWorkItemNode @ 0x14022E8B8 (ExpQueueWorkItemNode.c)
 */

__int64 __fastcall ExpQueueWorkItem(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int8 v4; // r11
  unsigned int v5; // r10d
  unsigned __int8 CurrentIrql; // di
  _KNODE *ParentNode; // rbx
  unsigned int NextNode; // ecx
  __int64 v11; // rsi
  __int64 v12; // r9
  unsigned int v13; // r10d
  __int64 v14; // rbx
  int v15; // ecx
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = a3;
  v17 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ParentNode = KeGetCurrentPrcb()->ParentNode;
  if ( a3 >= (unsigned __int16)KeNumberNodes )
    v5 = ParentNode->Affinity.Reserved[0];
  LOWORD(NextNode) = v5;
  if ( v5 < (unsigned __int16)KeNumberNodes )
  {
    while ( 1 )
    {
      v11 = KeNodeBlock[(unsigned __int16)NextNode];
      if ( (_UNKNOWN *)v11 == (_UNKNOWN *)((char *)&KiNodeInit + 320 * (unsigned __int16)NextNode) )
        v11 = 0LL;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(v11, a4) )
        break;
      NextNode = MmGetNextNode(v13, &v17);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_18;
    }
    v14 = *(_QWORD *)(v11 + 8LL * (int)v12 + 320);
    if ( (v14 & 1) != 0 )
      v14 = 0LL;
    KeInsertPriQueue((_DISPATCHER_HEADER *)v14, a1, (_QWORD *)a2, v12, 0);
    v15 = *(_DWORD *)(v14 + 704);
    if ( v15 < (2 * *(_DWORD *)(v14 + 708)) >> 1
      || v15 < *(_DWORD *)(v14 + 712)
      && *(_QWORD *)(v14 + 8) == v14 + 8
      && (*(_DWORD *)(v14 + 4) || *(int *)(v14 + 708) < 0) )
    {
      KeSetEvent((PRKEVENT)(v11 + 1824), 0, 0);
    }
    goto LABEL_12;
  }
LABEL_18:
  if ( (_UNKNOWN *)KeNodeBlock[ParentNode->Affinity.Reserved[0]] != (_UNKNOWN *)((char *)&KiNodeInit
                                                                               + 320 * ParentNode->Affinity.Reserved[0])
    && (*(_DWORD *)&ParentNode[6].MaximumProcessors & 2) != 0 )
  {
    ExpQueueWorkItemNode(a1, a2, ParentNode);
LABEL_12:
    v4 = 1;
  }
  __writecr8(CurrentIrql);
  return v4;
}
