/*
 * XREFs of PfpScenCtxServiceThreadSet @ 0x1403AA9DC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1404D4FE8 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsGetThreadId @ 0x1400E3450 (PsGetThreadId.c)
 */

__int64 __fastcall PfpScenCtxServiceThreadSet(unsigned __int64 *BugCheckParameter2, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  HANDLE ThreadId; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  struct _KTHREAD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbp

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadId = PsGetThreadId(CurrentThread);
    v5 = *(_QWORD *)&CurrentThread[1].Header.Lock;
    v6 = (unsigned __int64)ThreadId;
  }
  else
  {
    v6 = 0LL;
    v5 = 0LL;
  }
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v8, (ULONG_PTR)BugCheckParameter2);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  BugCheckParameter2[9] = v6;
  BugCheckParameter2[10] = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
