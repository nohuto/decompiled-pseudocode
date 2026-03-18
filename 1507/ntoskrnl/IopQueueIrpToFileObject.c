/*
 * XREFs of IopQueueIrpToFileObject @ 0x140107B00
 * Callers:
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall IopQueueIrpToFileObject(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbp
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  _KPROCESS *Process; // r14
  signed __int64 v9; // rax
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 BugCheckParameter4; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
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
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a2 + 184));
  }
  if ( (*(_DWORD *)(a2 + 80) & 0x400) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v3, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 192);
    v7 = a1 + 32;
    *(_QWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 40) = a2 + 192;
    if ( *(_QWORD *)(v6 + 8) != a2 + 192 )
      __fastfail(3u);
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)(a2 + 192) = v7;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    v9 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].Spare2[39]);
    if ( v9 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, v9);
    CurrentThread = KeGetCurrentThread();
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)CurrentThread - 48);
    BugCheckParameter4 = _InterlockedIncrement64(&CurrentThread[-1].WriteOperationCount);
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, BugCheckParameter4);
    *(_DWORD *)(a1 + 16) |= 0x2000u;
    *(_QWORD *)(a1 + 88) = Process;
    v12 = *(_QWORD *)(a1 + 88);
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 88),
              v12 & 0xFFFFFFFFFFFFFFF9uLL | (2 * (((v12 >> 1) & 3) + 1)),
              v12);
    }
    while ( v13 != v12 );
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v3, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    __writecr8(CurrentIrql);
    return 1;
  }
}
