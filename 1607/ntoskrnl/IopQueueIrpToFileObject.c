/*
 * XREFs of IopQueueIrpToFileObject @ 0x1400304E0
 * Callers:
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400D6100 (KxWaitForSpinLockAndAcquire.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3B08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 */

char __fastcall IopQueueIrpToFileObject(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbp
  KIRQL CurrentIrql; // r15
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _KPROCESS *Process; // r14
  signed __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 BugCheckParameter4; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (volatile signed __int32 *)(a2 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a2 + 184);
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(a2 + 184);
  }
  if ( (*(_DWORD *)(a2 + 80) & 0x400) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v3, CurrentIrql);
    return 0;
  }
  else
  {
    v6 = (_QWORD *)(a2 + 192);
    v7 = *(_QWORD *)(a2 + 192);
    v8 = (_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v7 + 8) != a2 + 192 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(a1 + 40) = v6;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = v8;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    v10 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].Spare2[52]);
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
      KiReleaseSpinLockInstrumented(v3, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    __writecr8(CurrentIrql);
    return 1;
  }
}
