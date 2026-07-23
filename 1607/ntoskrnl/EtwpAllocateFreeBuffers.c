/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x140086F48
 * Callers:
 *     EtwpSwitchBuffer @ 0x1400EB250 (EtwpSwitchBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x140490C50 (EtwpAdjustFreeBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x140493B04 (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     EtwpInitializeBufferHeader @ 0x140087134 (EtwpInitializeBufferHeader.c)
 *     EtwpLockBufferList @ 0x1400E9530 (EtwpLockBufferList.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400EB050 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpUnlockBufferList @ 0x1400EB1E0 (EtwpUnlockBufferList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  int v6; // r13d
  unsigned __int32 v7; // edi
  PVOID PoolWithTag; // r14
  _QWORD *v9; // r15
  unsigned __int32 v10; // eax
  _QWORD *v11; // rcx
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  if ( (*(_DWORD *)(a1 + 816) & 0x1000) != 0 )
    v2 = (v2 + 4095) & 0xFFFFF000;
  v6 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v7 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 232));
      if ( v7 > *(_DWORD *)(a1 + 236) )
        break;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 300), v2, 0x42777445u);
      if ( !PoolWithTag )
        goto LABEL_8;
      v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6E777445u);
      *v9 = 0LL;
      v9[1] = 0LL;
      v9[2] = 0LL;
      if ( !v9 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
LABEL_8:
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 232));
        return v3;
      }
      while ( 1 )
      {
        v10 = *(_DWORD *)(a1 + 244);
        if ( v10 >= v7 )
          break;
        _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 244), v7, v10);
      }
      EtwpInitializeBufferHeader(a1, PoolWithTag);
      v9[2] = PoolWithTag;
      EtwpLockBufferList(a1, &v13);
      v11 = *(_QWORD **)(a1 + 104);
      if ( *v11 != a1 + 96 )
        __fastfail(3u);
      v9[1] = v11;
      *v9 = a1 + 96;
      *v11 = v9;
      *(_QWORD *)(a1 + 104) = v9;
      EtwpUnlockBufferList(a1, &v13);
      EtwpEnqueueAvailableBuffer(a1, PoolWithTag, 0LL);
      ++v3;
      if ( ++v6 >= a2 )
        goto LABEL_16;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 232));
  }
LABEL_16:
  _InterlockedExchangeAdd(&dword_1402FD814[*(_DWORD *)(a1 + 300) & 1], *(_DWORD *)(a1 + 4) * v3);
  return v3;
}
