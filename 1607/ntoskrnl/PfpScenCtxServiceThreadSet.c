/*
 * XREFs of PfpScenCtxServiceThreadSet @ 0x1403D6A10
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1403EBF18 (PfSetSuperfetchInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetThreadId @ 0x14009D964 (PsGetThreadId.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfpScenCtxServiceThreadSet(unsigned __int64 *BugCheckParameter2, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  HANDLE ThreadId; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  struct _KTHREAD *v7; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

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
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v8, (ULONG_PTR)BugCheckParameter2);
  if ( v9 )
    v9[26] |= 1u;
  BugCheckParameter2[9] = v6;
  BugCheckParameter2[10] = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
}
