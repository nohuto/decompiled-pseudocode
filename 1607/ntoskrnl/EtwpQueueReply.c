/*
 * XREFs of EtwpQueueReply @ 0x140495948
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x14040D8A0 (EtwpDeleteRegistrationObject.c)
 *     EtwpSendReplyDataBlock @ 0x1404959D0 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     KeInsertQueue @ 0x140087860 (KeInsertQueue.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpUnreferenceDataBlock @ 0x14048EE4C (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x140492958 (EtwpAllocDataBlock.c)
 */

__int64 __fastcall EtwpQueueReply(PRKQUEUE Queue, unsigned int *a2)
{
  int v3; // edi
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v5; // rsi
  struct _LIST_ENTRY *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v3 = EtwpAllocDataBlock(a2[1], a2, &v7);
  if ( v3 < 0 )
  {
    _InterlockedIncrement(&Queue[1].Header.Lock);
  }
  else
  {
    PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72777445u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x38uLL);
      v5[1].Flink = v7;
      KeInsertQueue(Queue, v5);
    }
    else
    {
      v3 = -1073741801;
      _InterlockedIncrement(&Queue[1].Header.Lock);
      EtwpUnreferenceDataBlock((volatile signed __int32 *)v7);
    }
  }
  return (unsigned int)v3;
}
