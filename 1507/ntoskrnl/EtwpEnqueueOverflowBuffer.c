/*
 * XREFs of EtwpEnqueueOverflowBuffer @ 0x14012DD94
 * Callers:
 *     EtwpSwitchBuffer @ 0x140063148 (EtwpSwitchBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x140063388 (EtwpDequeueFreeBuffer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall EtwpEnqueueOverflowBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbp
  signed __int64 v12; // rax
  unsigned __int64 v13; // rtt
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  CurrentIrql = 0;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 44), 0, 1);
  v8 = (unsigned __int64 *)(a1 + 712);
  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    v9 = KeAbPreAcquire(a1 + 712, 0LL, 0LL, a4);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8, v10);
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
    else if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 712));
    }
  }
  **(_QWORD **)(a1 + 96) = a2 + 32;
  *(_QWORD *)(a1 + 96) = a2 + 32;
  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    _m_prefetchw(v8);
    v12 = *v8;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v4 = v12 - 16;
    if ( (v12 & 2) != 0 || (v13 = *v8, v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v4, v12)) )
      ExfReleasePushLock(v8, a2);
    KeAbPostRelease((ULONG_PTR)v8);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v8, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    __writecr8(CurrentIrql);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 244));
}
