/*
 * XREFs of EtwpDequeueBufferPendingCompression @ 0x14022A510
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x14022A2B4 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpLockBufferList @ 0x1400E9530 (EtwpLockBufferList.c)
 *     EtwpUnlockBufferList @ 0x1400EB1E0 (EtwpUnlockBufferList.c)
 *     EtwpDequeueBufferPendingCompressionFromQueue @ 0x14022A5FC (EtwpDequeueBufferPendingCompressionFromQueue.c)
 *     EtwpDisableCompression @ 0x14022A660 (EtwpDisableCompression.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpDequeueBufferPendingCompression(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rax
  __int64 *v4; // rdi
  __int64 *PoolWithTag; // rax
  __int64 v6; // rsi
  __int64 v7; // r8
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(__int64 **)(a1 + 992);
  v9 = 0;
  if ( v1 )
  {
    v3 = *v1;
    v4 = v1 - 4;
    *(_QWORD *)(a1 + 992) = v3;
  }
  else
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 300), 0x48uLL, 0x42777445u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_11:
      EtwpDisableCompression(a1);
      return 0LL;
    }
    PoolWithTag[4] = 0LL;
    *((_DWORD *)PoolWithTag + 11) = 6;
  }
  if ( !v4 )
    goto LABEL_11;
  EtwpLockBufferList(a1, &v9);
  v6 = EtwpDequeueBufferPendingCompressionFromQueue(a1 + 80, a1 + 228, v4);
  if ( !v6 )
    v6 = EtwpDequeueBufferPendingCompressionFromQueue(a1 + 64, a1 + 228, v7);
  EtwpUnlockBufferList(a1, &v9);
  if ( !v6 )
  {
    v4[4] = *(_QWORD *)(a1 + 992);
    *(_QWORD *)(a1 + 992) = v4 + 4;
  }
  return v6;
}
