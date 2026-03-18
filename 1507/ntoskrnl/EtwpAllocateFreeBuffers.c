/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x140075268
 * Callers:
 *     EtwpSwitchBuffer @ 0x140063148 (EtwpSwitchBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x1404A2138 (EtwpAdjustFreeBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x1404ACCCC (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     EtwpEnqueueFreeBuffer @ 0x14006367C (EtwpEnqueueFreeBuffer.c)
 *     EtwpInitializeBufferHeader @ 0x140075504 (EtwpInitializeBufferHeader.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r15d
  unsigned int v3; // r14d
  unsigned int v4; // ebp
  int v6; // r13d
  unsigned __int32 v7; // edi
  PVOID PoolWithTag; // r12
  _QWORD *v9; // rsi
  unsigned __int32 v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbp
  _QWORD *v16; // rcx
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  signed __int64 v19; // rtt
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+60h] [rbp+8h]

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = a2;
  if ( (*(_DWORD *)(a1 + 832) & 0x1000) != 0 )
    v3 = (v3 + 4095) & 0xFFFFF000;
  v6 = 0;
  if ( a2 )
  {
    CurrentIrql = a2;
    while ( 1 )
    {
      v7 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 248));
      if ( v7 > *(_DWORD *)(a1 + 252) )
        break;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 316), v3, 0x42777445u);
      if ( !PoolWithTag )
        goto LABEL_9;
      v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6E777445u);
      *v9 = 0LL;
      v9[1] = 0LL;
      v9[2] = 0LL;
      if ( !v9 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
LABEL_9:
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
        return v2;
      }
      while ( 1 )
      {
        v10 = *(_DWORD *)(a1 + 260);
        if ( v10 >= v7 )
          break;
        _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 260), v7, v10);
      }
      EtwpInitializeBufferHeader(a1, PoolWithTag);
      v9[2] = PoolWithTag;
      v13 = (volatile signed __int32 *)(a1 + 712);
      if ( *(_DWORD *)(a1 + 316) == 1 )
      {
        v14 = KeAbPreAcquire(a1 + 712, 0LL, 0LL, v12);
        v15 = v14;
        if ( _interlockedbittestandset64(v13, 0LL) )
          ExfAcquirePushLockExclusiveEx(a1 + 712, v14, a1 + 712);
        if ( v15 )
          *(_BYTE *)(v15 + 26) |= 1u;
        v4 = a2;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(a1 + 712);
        }
        else if ( _interlockedbittestandset64(v13, 0LL) )
        {
          KxWaitForSpinLockAndAcquire(a1 + 712);
        }
      }
      v16 = *(_QWORD **)(a1 + 120);
      *v9 = a1 + 112;
      v9[1] = v16;
      if ( *v16 != a1 + 112 )
        __fastfail(3u);
      *v16 = v9;
      *(_QWORD *)(a1 + 120) = v9;
      if ( *(_DWORD *)(a1 + 316) == 1 )
      {
        _m_prefetchw((const void *)v13);
        v17 = *(_QWORD *)v13;
        if ( (*(_QWORD *)v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v18 = 0LL;
        else
          v18 = v17 - 16;
        if ( (v17 & 2) != 0
          || (v19 = *(_QWORD *)v13, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v13, v18, v17)) )
        {
          ExfReleasePushLock(a1 + 712);
        }
        KeAbPostRelease(a1 + 712);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(a1 + 712, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
        __writecr8(CurrentIrql);
      }
      EtwpEnqueueFreeBuffer(a1, (unsigned int *)PoolWithTag, v11, v12);
      ++v2;
      if ( ++v6 >= v4 )
        goto LABEL_39;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
  }
LABEL_39:
  _InterlockedExchangeAdd(&dword_140327804[*(_DWORD *)(a1 + 316) & 1], *(_DWORD *)(a1 + 4) * v2);
  return v2;
}
