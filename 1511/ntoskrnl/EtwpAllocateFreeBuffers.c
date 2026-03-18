/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x1400F485C
 * Callers:
 *     EtwpSwitchBuffer @ 0x14009D01C (EtwpSwitchBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x14046E540 (EtwpAdjustFreeBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x1404CABF0 (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     EtwpEnqueueFreeBuffer @ 0x14009D39C (EtwpEnqueueFreeBuffer.c)
 *     EtwpUnlockBufferList @ 0x14009D414 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x14009D480 (EtwpLockBufferList.c)
 *     EtwpInitializeBufferHeader @ 0x1400F49B0 (EtwpInitializeBufferHeader.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  int v6; // r12d
  unsigned __int32 v7; // edi
  _QWORD *PoolWithTag; // r14
  unsigned __int32 v9; // eax
  _QWORD *v10; // rdx
  char *v11; // rax
  unsigned __int8 v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  if ( (*(_DWORD *)(a1 + 832) & 0x1000) != 0 )
    v2 = (v2 + 4095) & 0xFFFFF000;
  v6 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v7 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 248));
      if ( v7 > *(_DWORD *)(a1 + 252) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
        goto LABEL_11;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 316), v2, 0x42777445u);
      if ( !PoolWithTag )
        break;
      while ( 1 )
      {
        v9 = *(_DWORD *)(a1 + 260);
        if ( v9 >= v7 )
          break;
        _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 260), v7, v9);
      }
      EtwpInitializeBufferHeader(a1, PoolWithTag);
      EtwpLockBufferList(a1, &v13);
      v10 = *(_QWORD **)(a1 + 120);
      v11 = (char *)(PoolWithTag + 7);
      PoolWithTag[7] = a1 + 112;
      PoolWithTag[8] = v10;
      if ( *v10 != a1 + 112 )
        __fastfail(3u);
      *v10 = v11;
      *(_QWORD *)(a1 + 120) = v11;
      EtwpUnlockBufferList(a1, &v13);
      EtwpEnqueueFreeBuffer(a1, (unsigned int *)PoolWithTag);
      ++v3;
      if ( ++v6 >= a2 )
        goto LABEL_11;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
  }
  else
  {
LABEL_11:
    _InterlockedExchangeAdd(&dword_1402D84D4[*(_DWORD *)(a1 + 316) & 1], *(_DWORD *)(a1 + 4) * v3);
  }
  return v3;
}
