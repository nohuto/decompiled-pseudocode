/*
 * XREFs of IopQueueIrpToFileObject @ 0x14008F8D0
 * Callers:
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 */

char __fastcall IopQueueIrpToFileObject(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v4; // rbp
  KIRQL CurrentIrql; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  _KPROCESS *Process; // r14
  signed __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 BugCheckParameter4; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (volatile signed __int32 *)(a2 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a2 + 184);
  }
  else if ( _interlockedbittestandset64(v4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a2 + 184), a2, a3);
  }
  if ( (*(_DWORD *)(a2 + 80) & 0x400) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v4, CurrentIrql);
    return 0;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 192);
    v8 = a1 + 32;
    *(_QWORD *)(a1 + 32) = v7;
    *(_QWORD *)(a1 + 40) = a2 + 192;
    if ( *(_QWORD *)(v7 + 8) != a2 + 192 )
      __fastfail(3u);
    *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)(a2 + 192) = v8;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    v10 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].Spare2[39]);
    if ( v10 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, v10);
    CurrentThread = KeGetCurrentThread();
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)CurrentThread - 48);
    BugCheckParameter4 = _InterlockedIncrement64(&CurrentThread[-1].WriteOperationCount);
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, BugCheckParameter4);
    *(_DWORD *)(a1 + 16) |= 0x2000u;
    *(_QWORD *)(a1 + 88) = Process;
    v13 = *(_QWORD *)(a1 + 88);
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 88),
              v13 & 0xFFFFFFFFFFFFFFF9uLL | (2 * (((v13 >> 1) & 3) + 1)),
              v13);
    }
    while ( v14 != v13 );
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v4, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    __writecr8(CurrentIrql);
    return 1;
  }
}
