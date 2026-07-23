/*
 * XREFs of EtwpQueueReply @ 0x1404CFE80
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140435A20 (EtwpDeleteRegistrationObject.c)
 *     EtwpSendReplyDataBlock @ 0x1404CFF08 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     KeInsertQueue @ 0x1400F4C4C (KeInsertQueue.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     EtwpUnreferenceDataBlock @ 0x1404CE650 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1404CE704 (EtwpAllocDataBlock.c)
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
