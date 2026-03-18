/*
 * XREFs of ExpQueueWorkItem @ 0x140100684
 * Callers:
 *     ExQueueWorkItemEx @ 0x140100640 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140116144 (ExQueueWorkItemToPrivatePool.c)
 * Callees:
 *     MmGetNextNode @ 0x140033000 (MmGetNextNode.c)
 *     ExpQueueWorkItemNode @ 0x14010075C (ExpQueueWorkItemNode.c)
 *     ExpIsPoolReadyForWork @ 0x140101A20 (ExpIsPoolReadyForWork.c)
 */

char __fastcall ExpQueueWorkItem(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  _KNODE *v4; // r11
  unsigned int v5; // r10d
  unsigned __int8 CurrentIrql; // r14
  _KNODE *ParentNode; // rbx
  unsigned int NextNode; // eax
  _KNODE *v11; // rdi
  int v12; // r10d
  _KNODE *v13; // r8
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = a3;
  v15 = 0;
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
      v11 = (_KNODE *)KeNodeBlock[(unsigned __int16)NextNode];
      if ( v11 == (_KNODE *)((char *)&KiNodeInit + 256 * (unsigned __int64)(unsigned __int16)NextNode) )
        v11 = v4;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(v11, a4) )
        break;
      NextNode = MmGetNextNode(v12, &v15);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_11;
    }
    v13 = v11;
    goto LABEL_8;
  }
LABEL_11:
  if ( (_UNKNOWN *)KeNodeBlock[ParentNode->Affinity.Reserved[0]] != (_UNKNOWN *)((char *)&KiNodeInit
                                                                               + 256
                                                                               * (unsigned __int64)ParentNode->Affinity.Reserved[0])
    && (*((_DWORD *)&ParentNode[5].IdleCpuSet + 3) & 2) != 0 )
  {
    v13 = ParentNode;
LABEL_8:
    ExpQueueWorkItemNode(a1, a2, v13);
    LOBYTE(v4) = 1;
  }
  __writecr8(CurrentIrql);
  return (char)v4;
}
