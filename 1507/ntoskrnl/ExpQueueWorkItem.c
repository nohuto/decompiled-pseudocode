/*
 * XREFs of ExpQueueWorkItem @ 0x14000CDF0
 * Callers:
 *     ExQueueWorkItemEx @ 0x14000CD94 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x14014B99C (ExQueueWorkItemToPrivatePool.c)
 * Callees:
 *     ExpQueueWorkItemNode @ 0x14000D530 (ExpQueueWorkItemNode.c)
 *     MmGetNextNode @ 0x1400E70A8 (MmGetNextNode.c)
 */

char __fastcall ExpQueueWorkItem(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  char v4; // r10
  __int64 v5; // rdi
  unsigned int v6; // ebx
  unsigned __int8 CurrentIrql; // r14
  _KNODE *ParentNode; // r11
  unsigned int NextNode; // ecx
  bool i; // cf
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  unsigned __int16 v16; // r9
  int v18; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = a4;
  v18 = 0;
  v6 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ParentNode = KeGetCurrentPrcb()->ParentNode;
  if ( a3 >= (unsigned __int16)KeNumberNodes )
    v6 = ParentNode->Affinity.Reserved[0];
  LOWORD(NextNode) = v6;
  for ( i = v6 < (unsigned __int16)KeNumberNodes; i; i = NextNode < v16 )
  {
    v13 = KeNodeBlock[(unsigned __int16)NextNode];
    if ( (_UNKNOWN *)v13 != (_UNKNOWN *)((char *)&KiNodeInit + 256 * (unsigned __int64)(unsigned __int16)NextNode) )
    {
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 1308) & 1) != 0 )
        {
          v14 = *(_QWORD *)(v13 + 8 * v5 + 256);
          if ( (v14 & 1) == 0 )
          {
            if ( v14 )
            {
              v15 = *(_DWORD *)(v14 + 704) & 0x3FFF;
              if ( (*(_DWORD *)(v14 + 704) & 0x4000) != 0 )
                --v15;
              if ( v15 >= (2 * *(_DWORD *)(v14 + 708)) >> 1 )
                goto LABEL_17;
            }
          }
        }
      }
    }
    NextNode = MmGetNextNode(v6, &v18);
  }
  if ( (_UNKNOWN *)KeNodeBlock[ParentNode->Affinity.Reserved[0]] != (_UNKNOWN *)((char *)&KiNodeInit
                                                                               + 256
                                                                               * (unsigned __int64)ParentNode->Affinity.Reserved[0])
    && (*((_DWORD *)&ParentNode[5].IdleCpuSet + 3) & 2) != 0 )
  {
    v13 = (__int64)ParentNode;
LABEL_17:
    ExpQueueWorkItemNode(a1, a2, v13, (unsigned int)v5);
    v4 = 1;
  }
  __writecr8(CurrentIrql);
  return v4;
}
