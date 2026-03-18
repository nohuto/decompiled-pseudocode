/*
 * XREFs of EtwpEnqueueFreeBuffer @ 0x14006367C
 * Callers:
 *     EtwpSwitchBuffer @ 0x140063148 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14006364C (EtwpPrepareDirtyBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x140075268 (EtwpAllocateFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1404A1BD0 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall EtwpEnqueueFreeBuffer(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rbx
  ULONG_PTR v7; // rcx
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbp
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  v7 = *(unsigned int *)(a1 + 4);
  CurrentIrql = 0;
  if ( (_DWORD)v7 != *a2 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)a2, v7, *a2);
  a2[11] = 0;
  v9 = (volatile signed __int32 *)(a1 + 712);
  *((_QWORD *)a2 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 824));
  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    v10 = KeAbPreAcquire(a1 + 712, 0LL, 0LL, a4);
    v11 = v10;
    if ( _interlockedbittestandset64(v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 712, v10, a1 + 712);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(a1 + 712);
    }
    else if ( _interlockedbittestandset64(v9, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(a1 + 712);
    }
  }
  **(_QWORD **)(a1 + 72) = a2 + 8;
  *(_QWORD *)(a1 + 72) = a2 + 8;
  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    _m_prefetchw((const void *)v9);
    v12 = *(_QWORD *)v9;
    if ( (*(_QWORD *)v9 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v4 = v12 - 16;
    if ( (v12 & 2) != 0
      || (v13 = *(_QWORD *)v9, v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v4, v12)) )
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
      _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
    __writecr8(CurrentIrql);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 244));
}
