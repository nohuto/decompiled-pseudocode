/*
 * XREFs of EtwpQueueReply @ 0x140555B84
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1404CDFEC (EtwpDeleteRegistrationObject.c)
 *     EtwpSendReplyDataBlock @ 0x140555A80 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     KiInsertQueue @ 0x14017E344 (KiInsertQueue.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwpUnreferenceDataBlock @ 0x1404D5C00 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1404D5CB4 (EtwpAllocDataBlock.c)
 */

__int64 __fastcall EtwpQueueReply(__int64 a1, unsigned int *a2)
{
  int v3; // edi
  __int64 *PoolWithTag; // rax
  __int64 *v5; // rsi
  volatile signed __int32 *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v3 = EtwpAllocDataBlock(a2[1], a2, &v7);
  if ( v3 < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 64));
  }
  else
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72777445u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x38uLL);
      v5[2] = (__int64)v7;
      KiInsertQueue(a1, v5, 0LL, 0);
    }
    else
    {
      v3 = -1073741801;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 64));
      EtwpUnreferenceDataBlock(v7);
    }
  }
  return (unsigned int)v3;
}
